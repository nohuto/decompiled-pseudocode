/*
 * XREFs of ?NdisTraceLoggingQosHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C0079A38
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00C2BB0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     _TlgWrite @ 0x1C0012C84 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C001EF44 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingQosHardwareOffloads(
        struct _NDIS_MINIPORT_BLOCK *a1,
        union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES *a2)
{
  const GUID *v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  _DWORD *v5; // rdx
  int v6; // [rsp+30h] [rbp-39h] BYREF
  int v7; // [rsp+34h] [rbp-35h] BYREF
  int v8; // [rsp+38h] [rbp-31h] BYREF
  int v9; // [rsp+3Ch] [rbp-2Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  __int64 v11; // [rsp+60h] [rbp-9h]
  __int64 v12; // [rsp+68h] [rbp-1h]
  int *v13; // [rsp+70h] [rbp+7h]
  __int64 v14; // [rsp+78h] [rbp+Fh]
  int *v15; // [rsp+80h] [rbp+17h]
  __int64 v16; // [rsp+88h] [rbp+1Fh]
  int *v17; // [rsp+90h] [rbp+27h]
  __int64 v18; // [rsp+98h] [rbp+2Fh]
  int *v19; // [rsp+A0h] [rbp+37h]
  __int64 v20; // [rsp+A8h] [rbp+3Fh]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x200000000000uLL) )
    {
      v5 = *(_DWORD **)(v3 + 64);
      v11 = v4 + 4032;
      v12 = 16LL;
      v6 = v5[1];
      v13 = &v6;
      v14 = 4LL;
      v7 = v5[2];
      v15 = &v7;
      v16 = 4LL;
      v8 = v5[3];
      v17 = &v8;
      v18 = 4LL;
      v9 = v5[4];
      v19 = &v9;
      v20 = 4LL;
      TlgWrite(&hProvider, &unk_1C0086817, v2, (LPCGUID)v3, 7u, &pData);
    }
  }
}
