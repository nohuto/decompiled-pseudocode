/*
 * XREFs of ?NdisTraceLoggingMiniportWakeBufferTooLarge@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0078570
 * Callers:
 *     ndisMValidatePMWakeReason @ 0x1C0049338 (ndisMValidatePMWakeReason.c)
 * Callees:
 *     _TlgWrite @ 0x1C0011DA8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0012B70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingMiniportWakeBufferTooLarge(struct _NDIS_MINIPORT_BLOCK *a1)
{
  const GUID *v1; // r8
  const GUID *v2; // r9
  __int64 v3; // r10
  int v4; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x200000000000uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = v3 + 4032;
      v9 = &v4;
      v7 = 16;
      v4 = (int)v2;
      v10 = 4;
      TlgWrite(&hProvider, &unk_1C0085036, v1, v2, 4u, &pData);
    }
  }
}
