/*
 * XREFs of TR_EnableForwardProgress_Internal @ 0x1C0020470
 * Callers:
 *     Endpoint_UcxEvtEndpointEnableForwardProgress @ 0x1C0014E30 (Endpoint_UcxEvtEndpointEnableForwardProgress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 */

__int64 __fastcall TR_EnableForwardProgress_Internal(_QWORD *a1, ULONG a2)
{
  int v4; // edi
  struct _MDL *Mdl; // rbp
  __int64 v6; // rdx
  struct _MDL *v7; // rcx
  _QWORD v9[6]; // [rsp+40h] [rbp-38h] BYREF

  v4 = (*(__int64 (**)(void))(a1[4] + 48LL))();
  if ( v4 >= 0 )
  {
    Mdl = IoAllocateMdl(0LL, a2, 0, 0, 0LL);
    if ( Mdl )
    {
      memset(v9, 0, 0x28uLL);
      v6 = a1[9];
      v9[2] = TR_WdfEvtIoExamineIrpForForwardProgress;
      v9[0] = 0x100000028LL;
      LODWORD(v9[1]) = 2;
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 3120))(
             WdfDriverGlobals,
             v6,
             v9);
      if ( v4 >= 0 )
      {
        v7 = (struct _MDL *)a1[15];
        if ( v7 )
          IoFreeMdl(v7);
        a1[15] = Mdl;
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(a1[5] + 72LL),
          4u,
          0xEu,
          0x15u,
          (__int64)&WPP_a1a6325854bc39664f145b9860d7b9b4_Traceguids,
          *(unsigned __int8 *)(a1[6] + 135LL),
          *(_DWORD *)(a1[7] + 144LL),
          a2);
      }
      else
      {
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(a1[5] + 72LL),
          2u,
          0xEu,
          0x14u,
          (__int64)&WPP_a1a6325854bc39664f145b9860d7b9b4_Traceguids,
          *(unsigned __int8 *)(a1[6] + 135LL),
          *(_DWORD *)(a1[7] + 144LL),
          v4);
        IoFreeMdl(Mdl);
      }
    }
    else
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1[5] + 72LL),
        2u,
        0xEu,
        0x13u,
        (__int64)&WPP_a1a6325854bc39664f145b9860d7b9b4_Traceguids,
        *(unsigned __int8 *)(a1[6] + 135LL),
        *(_DWORD *)(a1[7] + 144LL));
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
