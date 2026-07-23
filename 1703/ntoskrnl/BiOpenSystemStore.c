/*
 * XREFs of BiOpenSystemStore @ 0x14058A528
 * Callers:
 *     BcdOpenStore @ 0x140589990 (BcdOpenStore.c)
 *     SepSecureBootCorrectBcd @ 0x1406F7E44 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     _wcsnicmp @ 0x14016A210 (_wcsnicmp.c)
 *     wcstoul @ 0x14016C130 (wcstoul.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     BiSetFirmwareModified @ 0x140265E08 (BiSetFirmwareModified.c)
 *     BiWasFirmwareModified @ 0x140265E9C (BiWasFirmwareModified.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiLoadSystemStore @ 0x1405893FC (BiLoadSystemStore.c)
 *     BiCloseStore @ 0x14058951C (BiCloseStore.c)
 *     BiCleanupLoadedStores @ 0x14058A710 (BiCleanupLoadedStores.c)
 *     BiIsSystemStore @ 0x14058A854 (BiIsSystemStore.c)
 *     BiEnumerateSubKeys @ 0x14058A920 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x14058B8B8 (BiOpenKey.c)
 *     BiCloseKey @ 0x14058BA28 (BiCloseKey.c)
 *     BiLogMessage @ 0x14058C1E4 (BiLogMessage.c)
 *     BiOpenKeyNonBcd @ 0x14058CEBC (BiOpenKeyNonBcd.c)
 *     BiBindFirmwareToSystemStore @ 0x140735468 (BiBindFirmwareToSystemStore.c)
 */

__int64 __fastcall BiOpenSystemStore(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  int v5; // edi
  int v6; // eax
  const wchar_t **v7; // r14
  unsigned int v8; // r13d
  __int64 v9; // rsi
  int v10; // eax
  int v12; // eax
  bool v13; // si
  int v14; // eax
  HANDLE Handle; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+28h] [rbp-8h] BYREF
  int v18; // [rsp+78h] [rbp+48h]
  unsigned int v19; // [rsp+80h] [rbp+50h] BYREF
  HANDLE v20; // [rsp+88h] [rbp+58h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  Handle = 0LL;
  P = 0LL;
  v20 = 0LL;
  v18 = 0;
  BiLogMessage(2LL, L"Opening system store. Flags: 0x%x", a2);
  if ( (a2 & 1) != 0 )
    v4 = 16LL;
  else
    v4 = 0LL;
  BiCleanupLoadedStores(v4);
  v5 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle);
  if ( v5 < 0 )
    goto LABEL_18;
  v6 = BiEnumerateSubKeys(Handle, &P, &v19);
  v7 = (const wchar_t **)P;
  v5 = v6;
  if ( v6 < 0 )
    goto LABEL_16;
  v8 = v19;
  v9 = 0LL;
  v5 = -1073741275;
  if ( !v19 )
    goto LABEL_8;
  while ( 1 )
  {
    if ( wcsnicmp(v7[v9], L"BCD", 3uLL) )
      goto LABEL_7;
    if ( wcstoul(v7[v9] + 3, 0LL, 10) == -1 )
      goto LABEL_7;
    BiLogMessage(2LL, L"Found loaded store at key %s", v7[v9]);
    v12 = BiOpenKey(Handle, v7[v9], 131097LL, &v20);
    v2 = (__int64)v20;
    v5 = v12;
    if ( v12 < 0 )
      goto LABEL_7;
    if ( (unsigned __int8)BiIsSystemStore(v20) )
      break;
    BiCloseKey((HANDLE)v2);
LABEL_7:
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= v8 )
      goto LABEL_8;
  }
  BiLogMessage(2LL, L"Store %s is the system store", v7[v9]);
  v5 = 0;
LABEL_8:
  if ( (_DWORD)v9 != v8 )
  {
LABEL_12:
    if ( (a2 & 2) != 0 )
    {
      v2 |= 2uLL;
    }
    else
    {
      BiLogMessage(2LL, L"Synchronizing store with firmware");
      v13 = BiWasFirmwareModified(v2);
      v14 = BiBindFirmwareToSystemStore((HANDLE)v2);
      v5 = v14;
      if ( v14 < 0 )
      {
        BiLogMessage(4LL, L"Failed to bind with firmware. Flags: 0x%x Status: %x", a2, (unsigned int)v14);
LABEL_15:
        if ( v5 < 0 )
          goto LABEL_32;
        goto LABEL_16;
      }
      if ( !v13 )
        BiSetFirmwareModified(v2, 0);
    }
    *a1 = v2;
    goto LABEL_15;
  }
  BiLogMessage(2LL, L"The system store is not already loaded");
  v20 = 0LL;
  if ( (a2 & 4) != 0 )
  {
    BiLogMessage(4LL, L"Specified flags prevent opening unloaded system store");
    v5 = -1073741275;
  }
  else
  {
    v10 = BiLoadSystemStore(&v20);
    v2 = (__int64)v20;
    v5 = v10;
    if ( v10 >= 0 )
    {
      v18 = 1;
      goto LABEL_12;
    }
LABEL_32:
    if ( v2 )
      BiCloseStore(v2, v18 != 0 ? 2 : 0);
  }
LABEL_16:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4B444342u);
LABEL_18:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
