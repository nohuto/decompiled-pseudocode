/*
 * XREFs of ?GripStatusForPanelReceived@BamoHeatGripServiceStubImpl@BamoImpl@@QEAAJAEBUHeatGripReport@@@Z @ 0x180038E14
 * Callers:
 *     ?BroadcastGripStatusForPanelReceived@BamoHeatGripServicePrincipal@@UEAAJAEBUHeatGripReport@@@Z @ 0x1800388E0 (-BroadcastGripStatusForPanelReceived@BamoHeatGripServicePrincipal@@UEAAJAEBUHeatGripReport@@@Z.c)
 *     ?GripStatusForPanelReceived@BamoHeatGripServiceStub@@UEAAJAEBUHeatGripReport@@@Z @ 0x180038B10 (-GripStatusForPanelReceived@BamoHeatGripServiceStub@@UEAAJAEBUHeatGripReport@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoHeatGripServiceStubImpl::GripStatusForPanelReceived(
        BamoImpl::BamoHeatGripServiceStubImpl *this,
        const struct HeatGripReport *a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int16 v9; // [rsp+20h] [rbp-58h]
  _QWORD v10[2]; // [rsp+40h] [rbp-38h] BYREF
  _OWORD v11[2]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = *((_QWORD *)this + 5);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 24LL);
  if ( *(_QWORD *)(v3 + 40) )
  {
    if ( *((_BYTE *)this + 32) )
    {
      v5 = *(_OWORD *)a2;
      v6 = *((_OWORD *)a2 + 1);
      v7 = *(unsigned int *)(*((_QWORD *)this + 3) + 24LL);
      v10[0] = *(unsigned int *)(v2 + 36);
      v10[1] = v7;
      v8 = *(_QWORD *)(v3 + 48);
      v9 = 0;
      v11[0] = v5;
      v11[1] = v6;
      return CoreUICallSend(v8, v10, 2LL, 16LL, v9, &unk_1800F96C3, (unsigned int)v11);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x122,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamostub.inl",
        (const char *)0x87B20805LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16FE,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
        (const char *)0x87B20805LL);
      return 2276591621LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16F7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
