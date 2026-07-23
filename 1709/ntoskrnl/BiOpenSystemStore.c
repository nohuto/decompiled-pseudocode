/*
 * XREFs of BiOpenSystemStore @ 0x1405AECB4
 * Callers:
 *     BcdOpenStore @ 0x1405AE300 (BcdOpenStore.c)
 *     SepSecureBootCorrectBcd @ 0x14072FA34 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x1401349DC (BiSetFirmwareModified.c)
 *     BiWasFirmwareModified @ 0x140134A10 (BiWasFirmwareModified.c)
 *     _wcsnicmp @ 0x14015EC50 (_wcsnicmp.c)
 *     wcstoul @ 0x140160A10 (wcstoul.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     BiCleanupLoadedStores @ 0x1405ADCF8 (BiCleanupLoadedStores.c)
 *     BiLoadSystemStore @ 0x1405ADDCC (BiLoadSystemStore.c)
 *     BiCloseStore @ 0x1405ADEEC (BiCloseStore.c)
 *     BiIsSystemStore @ 0x1405AE8A0 (BiIsSystemStore.c)
 *     BiEnumerateSubKeys @ 0x1405AE9F8 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x1405AFAF8 (BiOpenKey.c)
 *     BiCloseKey @ 0x1405AFC68 (BiCloseKey.c)
 *     BiGetFirmwareType @ 0x1405B0290 (BiGetFirmwareType.c)
 *     BiLogMessage @ 0x1405B05D0 (BiLogMessage.c)
 *     BiOpenKeyNonBcd @ 0x1405B18F4 (BiOpenKeyNonBcd.c)
 *     BiBindEfiNamespaceObjects @ 0x14077A9B8 (BiBindEfiNamespaceObjects.c)
 */

__int64 __fastcall BiOpenSystemStore(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 *v4; // r13
  char v5; // cl
  int v6; // ebx
  int v7; // eax
  const wchar_t **v8; // r14
  __int64 v9; // rsi
  bool v10; // zf
  int v11; // eax
  bool v12; // si
  int v13; // eax
  int v15; // eax
  int v16; // eax
  HANDLE Handle; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+28h] [rbp-8h] BYREF
  ULONG v20; // [rsp+78h] [rbp+48h] BYREF
  int v21; // [rsp+80h] [rbp+50h]
  __int64 v22; // [rsp+88h] [rbp+58h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  Handle = 0LL;
  P = 0LL;
  v21 = 0;
  v4 = a1;
  v22 = 0LL;
  BiLogMessage(2LL, L"Opening system store. Flags: 0x%x", a2);
  if ( (a2 & 1) != 0 )
    v5 = 16;
  else
    v5 = 0;
  BiCleanupLoadedStores(v5);
  v6 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle);
  if ( v6 < 0 )
    goto LABEL_23;
  v7 = BiEnumerateSubKeys(Handle, &P, &v20);
  v8 = (const wchar_t **)P;
  v6 = v7;
  if ( v7 < 0 )
    goto LABEL_21;
  v9 = 0LL;
  v6 = -1073741275;
  v10 = v20 == 0;
  if ( !v20 )
    goto LABEL_9;
  while ( 1 )
  {
    if ( wcsnicmp(v8[v9], L"BCD", 3uLL) )
      goto LABEL_7;
    if ( wcstoul(v8[v9] + 3, 0LL, 10) == -1 )
      goto LABEL_7;
    BiLogMessage(2LL, L"Found loaded store at key %s", v8[v9]);
    v15 = BiOpenKey(Handle, v8[v9], 131097LL, &v22);
    v2 = v22;
    v6 = v15;
    if ( v15 < 0 )
      goto LABEL_7;
    if ( BiIsSystemStore(v22) )
      break;
    BiCloseKey(v2);
LABEL_7:
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= v20 )
      goto LABEL_8;
  }
  BiLogMessage(2LL, L"Store %s is the system store", v8[v9]);
  v6 = 0;
LABEL_8:
  v4 = a1;
  v10 = (_DWORD)v9 == v20;
LABEL_9:
  if ( !v10 )
  {
LABEL_13:
    if ( (a2 & 2) != 0 )
    {
      v2 |= 2uLL;
LABEL_19:
      *v4 = v2;
      goto LABEL_20;
    }
    BiLogMessage(2LL, L"Synchronizing store with firmware");
    v12 = BiWasFirmwareModified(v2);
    v13 = BiGetFirmwareType() - 1;
    if ( v13 )
    {
      v16 = v13 - 1;
      if ( v16 )
      {
        if ( v16 == 1 )
        {
          v6 = 0;
LABEL_17:
          if ( !v12 )
            BiSetFirmwareModified(v2, 0);
          goto LABEL_19;
        }
        v6 = -1073741637;
      }
      else
      {
        v6 = BiBindEfiNamespaceObjects((HANDLE)v2);
      }
    }
    else
    {
      v6 = 0;
    }
    if ( v6 < 0 )
    {
      BiLogMessage(4LL, L"Failed to bind with firmware. Flags: 0x%x Status: %x", a2, (unsigned int)v6);
LABEL_20:
      if ( v6 < 0 )
        goto LABEL_40;
      goto LABEL_21;
    }
    goto LABEL_17;
  }
  BiLogMessage(2LL, L"The system store is not already loaded");
  v22 = 0LL;
  if ( (a2 & 4) != 0 )
  {
    BiLogMessage(4LL, L"Specified flags prevent opening unloaded system store");
    v6 = -1073741275;
  }
  else
  {
    v11 = BiLoadSystemStore(&v22);
    v2 = v22;
    v6 = v11;
    if ( v11 >= 0 )
    {
      v21 = 1;
      goto LABEL_13;
    }
LABEL_40:
    if ( v2 )
      BiCloseStore(v2, 2 * v21);
  }
LABEL_21:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x4B444342u);
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
