/*
 * XREFs of Endpoint_UcxEvtEndpointEnableForwardProgress @ 0x1C0014E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     TR_EnableForwardProgress_Internal @ 0x1C0020470 (TR_EnableForwardProgress_Internal.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointEnableForwardProgress(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // edi
  unsigned __int16 v6; // r8
  char v7; // al
  int v8; // edx

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B1D8);
  v4 = v3;
  if ( !*(_BYTE *)(v3 + 37) )
  {
    v5 = TR_EnableForwardProgress_Internal(*(_QWORD *)(v3 + 88), a2);
    if ( v5 < 0 )
    {
      v6 = 58;
      v7 = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 135LL);
      goto LABEL_6;
    }
LABEL_7:
    *(_BYTE *)(v4 + 36) = 1;
    return (unsigned int)v5;
  }
  v5 = TR_EnableForwardProgress_Internal(*(_QWORD *)(*(_QWORD *)(v3 + 136) + 48LL), a2);
  if ( v5 >= 0 )
    goto LABEL_7;
  v6 = 57;
  v7 = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 135LL);
LABEL_6:
  v8 = *(_DWORD *)(v4 + 144);
  LOBYTE(v8) = 3;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v4 + 80),
    v8,
    13,
    v6,
    (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
    v7,
    *(_DWORD *)(v4 + 144),
    v5);
  return (unsigned int)v5;
}
