/*
 * XREFs of RaidAdapterCompleteInitialization @ 0x1C0019510
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0012174 (RaidAdapterStartDeviceIrp.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0002B58 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0002BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0002C68 (_TlgKeywordOn.c)
 *     StorCreateScsiSymbolicLink @ 0x1C0018360 (StorCreateScsiSymbolicLink.c)
 *     RaInitializePower @ 0x1C0019718 (RaInitializePower.c)
 *     RaInitializeRaidResources @ 0x1C0019758 (RaInitializeRaidResources.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     RaFreeRaidResources @ 0x1C0040238 (RaFreeRaidResources.c)
 *     RaidIsDmaInitialized @ 0x1C00605BC (RaidIsDmaInitialized.c)
 *     RaidInitializeDma @ 0x1C006064C (RaidInitializeDma.c)
 */

__int64 __fastcall RaidAdapterCompleteInitialization(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rdx
  const struct _TlgProvider_t *v9; // rcx
  int ScsiSymbolicLink; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  const WCHAR *v14; // rdx
  LPCWSTR v15; // r10
  TraceLoggingHProvider v16; // rcx
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  char v19; // [rsp+30h] [rbp-49h] BYREF
  int v20; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  __int64 v22; // [rsp+60h] [rbp-19h]
  int v23; // [rsp+68h] [rbp-11h]
  int v24; // [rsp+6Ch] [rbp-Dh]
  int *v25; // [rsp+70h] [rbp-9h]
  int v26; // [rsp+78h] [rbp-1h]
  int v27; // [rsp+7Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+7h] BYREF
  char *v29; // [rsp+90h] [rbp+17h]
  int v30; // [rsp+98h] [rbp+1Fh]
  int v31; // [rsp+9Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+A0h] [rbp+27h] BYREF

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
          goto LABEL_15;
      }
    }
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_DWORD *)(a1 + 352);
    if ( v7 > *(_DWORD *)(v6 + 152) )
      *(_DWORD *)(v6 + 152) = v7;
    ScsiSymbolicLink = StorCreateScsiSymbolicLink((PUNICODE_STRING)(a1 + 40), (unsigned int *)(a1 + 56));
    if ( ScsiSymbolicLink < 0 )
    {
LABEL_15:
      RaFreeRaidResources((PSLIST_HEADER)(a1 + 832));
      return (unsigned int)ScsiSymbolicLink;
    }
    else
    {
      if ( (unsigned int)dword_1C0055010 > 5 )
      {
        if ( TlgKeywordOn(v9, 0x400000000000uLL) )
        {
          v13 = *(_DWORD *)(a1 + 56);
          v14 = *(const WCHAR **)(a1 + 4800);
          v24 = 0;
          v27 = 0;
          v20 = v13;
          v19 = *(_BYTE *)(a1 + 4356);
          v22 = a1 + 5192;
          v25 = &v20;
          v23 = 16;
          v26 = 4;
          TlgCreateWsz(&pDesc, v14);
          v31 = 0;
          v29 = &v19;
          v30 = 1;
          TlgCreateWsz(&v32, v15);
          TlgWrite(v16, &unk_1C004B249, v17, v18, 7u, &pData);
        }
      }
      RaInitializePower(a1, v8, v11, v12);
      *(_DWORD *)(a1 + 272) = 0;
      *(_BYTE *)(a1 + 276) = 0;
      result = 0LL;
      *(_DWORD *)(a1 + 264) = 1;
      *(_DWORD *)(a1 + 268) = 1;
    }
  }
  return result;
}
