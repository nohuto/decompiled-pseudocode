/*
 * XREFs of BiCleanupLoadedStores @ 0x140606C04
 * Callers:
 *     BiOpenSystemStore @ 0x140608164 (BiOpenSystemStore.c)
 * Callees:
 *     _wcsnicmp @ 0x1401889A0 (_wcsnicmp.c)
 *     wcstoul @ 0x14018ABB0 (wcstoul.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     BcdForciblyUnloadStore @ 0x1405EE29C (BcdForciblyUnloadStore.c)
 *     BiUnloadHiveByHandle @ 0x1405EE330 (BiUnloadHiveByHandle.c)
 *     BiIsWinPEBoot @ 0x140607744 (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x140607D00 (BiIsSystemStore.c)
 *     BiEnumerateSubKeys @ 0x140607E7C (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x140608CE0 (BiOpenKey.c)
 *     BiCloseKey @ 0x140608E50 (BiCloseKey.c)
 *     BiOpenKeyNonBcd @ 0x14060A130 (BiOpenKeyNonBcd.c)
 */

void __fastcall BiCleanupLoadedStores(char a1)
{
  char IsWinPEBoot; // r12
  const wchar_t **v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  char IsSystemStore; // al
  HANDLE BcdStoreHandle; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  Handle = 0LL;
  IsWinPEBoot = BiIsWinPEBoot();
  if ( (int)BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle) >= 0 )
  {
    if ( (int)BiEnumerateSubKeys(Handle, &P, &BcdStoreHandle) >= 0 && (_DWORD)BcdStoreHandle )
    {
      v3 = (const wchar_t **)P;
      v4 = (unsigned int)BcdStoreHandle;
      do
      {
        if ( !wcsnicmp(*v3, L"BCD", 3uLL)
          && wcstoul(*v3 + 3, 0LL, 10) != -1
          && (int)BiOpenKey(Handle, *v3, 131097LL, &BcdStoreHandle) >= 0 )
        {
          IsSystemStore = BiIsSystemStore(BcdStoreHandle, v5, v6);
          if ( (a1 & 0x10) != 0 && IsSystemStore )
          {
            BcdForciblyUnloadStore(BcdStoreHandle);
          }
          else if ( (a1 & 8) != 0 || IsWinPEBoot || !IsSystemStore )
          {
            BiUnloadHiveByHandle((__int64)BcdStoreHandle, 0);
          }
          else
          {
            BiCloseKey(BcdStoreHandle);
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
