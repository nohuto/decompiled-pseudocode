/*
 * XREFs of BiCleanupLoadedStores @ 0x1405ADCF8
 * Callers:
 *     BiOpenSystemStore @ 0x1405AECB4 (BiOpenSystemStore.c)
 * Callees:
 *     _wcsnicmp @ 0x14015EC50 (_wcsnicmp.c)
 *     wcstoul @ 0x140160A10 (wcstoul.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     BiIsWinPEBoot @ 0x1405AE824 (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x1405AE8A0 (BiIsSystemStore.c)
 *     BiEnumerateSubKeys @ 0x1405AE9F8 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x1405AFAF8 (BiOpenKey.c)
 *     BiCloseKey @ 0x1405AFC68 (BiCloseKey.c)
 *     BiOpenKeyNonBcd @ 0x1405B18F4 (BiOpenKeyNonBcd.c)
 *     BcdForciblyUnloadStore @ 0x140778AAC (BcdForciblyUnloadStore.c)
 *     BiUnloadHiveByHandle @ 0x1407798B0 (BiUnloadHiveByHandle.c)
 */

void __fastcall BiCleanupLoadedStores(char a1)
{
  char IsWinPEBoot; // r12
  const wchar_t **v3; // rdi
  __int64 v4; // r14
  char IsSystemStore; // al
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  Handle = 0LL;
  IsWinPEBoot = BiIsWinPEBoot();
  if ( (int)BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle) >= 0 )
  {
    if ( (int)BiEnumerateSubKeys(Handle, &P, &v6) >= 0 && (_DWORD)v6 )
    {
      v3 = (const wchar_t **)P;
      v4 = (unsigned int)v6;
      do
      {
        if ( !wcsnicmp(*v3, L"BCD", 3uLL)
          && wcstoul(*v3 + 3, 0LL, 10) != -1
          && (int)BiOpenKey(Handle, *v3, 131097LL, &v6) >= 0 )
        {
          IsSystemStore = BiIsSystemStore(v6);
          if ( (a1 & 0x10) != 0 && IsSystemStore )
          {
            BcdForciblyUnloadStore(v6);
          }
          else if ( (a1 & 8) != 0 || IsWinPEBoot || !IsSystemStore )
          {
            BiUnloadHiveByHandle(v6, 0LL);
          }
          else
          {
            BiCloseKey(v6);
          }
        }
        ++v3;
        --v4;
      }
      while ( v4 );
    }
    if ( P )
      ExFreePoolWithTag(P, 0x4B444342u);
  }
  if ( Handle )
    ZwClose(Handle);
}
