/*
 * XREFs of ?NdisTraceLoggingPacketDirectConfigChanged@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0079698
 * Callers:
 *     ndisMIndicatePDConfigChange @ 0x1C007840C (ndisMIndicatePDConfigChange.c)
 * Callees:
 *     _TlgWrite @ 0x1C0012C84 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C001EF44 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingPacketDirectConfigChanged(struct _NDIS_MINIPORT_BLOCK *a1)
{
  const GUID *v1; // r8
  const GUID *v2; // r9
  unsigned __int8 v3; // r10
  __int64 v4; // r11
  int v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  int *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x200000000000uLL) )
    {
      v9 = 16LL;
      v8 = v4 + 4032;
      v5 = v3;
      v10 = &v5;
      v6 = (unsigned __int8)v2;
      v12 = &v6;
      v11 = 4LL;
      v13 = 4LL;
      TlgWrite(&hProvider, &unk_1C008699F, v1, v2, 5u, &pData);
    }
  }
}
