/*
 * XREFs of RaidAdapterCompleteInitialization @ 0x1C00255D4
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0028C7C (RaidAdapterStartDeviceIrp.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001610 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00016B0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C00016F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     RaInitializePower @ 0x1C0024D7C (RaInitializePower.c)
 *     StorCreateScsiSymbolicLink @ 0x1C0039B24 (StorCreateScsiSymbolicLink.c)
 *     RaFreeRaidResources @ 0x1C003F8D8 (RaFreeRaidResources.c)
 *     RaInitializeRaidResources @ 0x1C003F9FC (RaInitializeRaidResources.c)
 *     RaidInitializeDma @ 0x1C00654C0 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x1C0065614 (RaidIsDmaInitialized.c)
 */

__int64 __fastcall RaidAdapterCompleteInitialization(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rcx
  int ScsiSymbolicLink; // edi
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // edx
  const struct _TlgProvider_t *v10; // rcx
  int v11; // eax
  const WCHAR *v12; // rdx
  LPCWSTR v13; // r10
  TraceLoggingHProvider v14; // rcx
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  char v17; // [rsp+30h] [rbp-49h] BYREF
  int v18; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  __int64 v20; // [rsp+60h] [rbp-19h]
  int v21; // [rsp+68h] [rbp-11h]
  int v22; // [rsp+6Ch] [rbp-Dh]
  int *v23; // [rsp+70h] [rbp-9h]
  int v24; // [rsp+78h] [rbp-1h]
  int v25; // [rsp+7Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+7h] BYREF
  char *v27; // [rsp+90h] [rbp+17h]
  int v28; // [rsp+98h] [rbp+1Fh]
  int v29; // [rsp+9Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+A0h] [rbp+27h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 402) == 1 )
    v1 = (*(_DWORD *)(*(_QWORD *)(a1 + 528) + 184LL) & 0x80u) != 0 ? 224 : 184;
  result = RaInitializeRaidResources((PSLIST_HEADER)(a1 + 832), *(_BYTE *)(a1 + 4450), v1);
  if ( (int)result >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 904);
    *(_DWORD *)(a1 + 800) = v4;
    *(_DWORD *)(a1 + 796) = v4;
    if ( *(_BYTE *)(a1 + 4450) )
    {
      if ( !(unsigned __int8)RaidIsDmaInitialized(a1 + 696) )
      {
        ScsiSymbolicLink = RaidInitializeDma(v5, *(_QWORD *)(a1 + 32), a1 + 304);
        if ( ScsiSymbolicLink < 0 )
          goto LABEL_10;
      }
    }
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_DWORD *)(a1 + 352);
    if ( v8 > *(_DWORD *)(v7 + 152) )
      *(_DWORD *)(v7 + 152) = v8;
    ScsiSymbolicLink = StorCreateScsiSymbolicLink((PUNICODE_STRING)(a1 + 40));
    if ( ScsiSymbolicLink >= 0 )
    {
      if ( (unsigned int)dword_1C0056060 > 5 )
      {
        if ( TlgKeywordOn(v10, 0x400000000000uLL) )
        {
          v11 = *(_DWORD *)(a1 + 56);
          v12 = *(const WCHAR **)(a1 + 4800);
          v22 = 0;
          v25 = 0;
          v18 = v11;
          v17 = *(_BYTE *)(a1 + 4356);
          v20 = a1 + 5192;
          v23 = &v18;
          v21 = 16;
          v24 = 4;
          TlgCreateWsz(&pDesc, v12);
          v29 = 0;
          v27 = &v17;
          v28 = 1;
          TlgCreateWsz(&v30, v13);
          TlgWrite(v14, &unk_1C004BCE1, v15, v16, 7u, &pData);
        }
      }
      RaInitializePower(a1, v9);
      *(_DWORD *)(a1 + 272) = 0;
      *(_BYTE *)(a1 + 276) = 0;
      result = 0LL;
      *(_DWORD *)(a1 + 264) = 1;
      *(_DWORD *)(a1 + 268) = 1;
    }
    else
    {
LABEL_10:
      RaFreeRaidResources((PSLIST_HEADER)(a1 + 832));
      return (unsigned int)ScsiSymbolicLink;
    }
  }
  return result;
}
