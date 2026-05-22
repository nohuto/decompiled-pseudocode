/*
 * XREFs of ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800187C0
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z @ 0x180018F60 (-DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z @ 0x180018FC0 (-DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetAttachedObject@VLegacyInputSinkData@@@InputSite@@QEAAPEAVLegacyInputSinkData@@XZ @ 0x18000C810 (--$GetAttachedObject@VLegacyInputSinkData@@@InputSite@@QEAAPEAVLegacyInputSinkData@@XZ.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18000D388 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyInverseTransformToPoint@@YAJAEAUtagINPUT_TRANSFORM@@UtagPOINT@@PEAU2@@Z @ 0x180017AFC (-ApplyInverseTransformToPoint@@YAJAEAUtagINPUT_TRANSFORM@@UtagPOINT@@PEAU2@@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x180017EB8 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x180018BC8 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x1800623CC (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputTarget::DeliverInput(DWMInputTarget *this, struct InputInfo *a2)
{
  int v4; // edi
  int v5; // eax
  __int64 v7; // rcx
  _QWORD *Attached; // rax
  const char *v9; // r9
  _QWORD *v10; // rdi
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+38h] [rbp-59h] BYREF
  int v14; // [rsp+40h] [rbp-51h] BYREF
  void *Block; // [rsp+48h] [rbp-49h]
  __int64 v16; // [rsp+50h] [rbp-41h]
  _BYTE v17[64]; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v18[56]; // [rsp+98h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v16 = -2LL;
  if ( a2 )
  {
    (*(void (__fastcall **)(char *, int *))(*((_QWORD *)this + 5) + 40LL))((char *)this + 40, &v13);
    v5 = *(_DWORD *)a2;
    if ( (*(_DWORD *)a2 & v13) == 0 && v13 )
      return 2147549443LL;
    if ( (v5 & 0x3B) != 0 )
    {
      if ( *((_QWORD *)this + 15) )
      {
        v4 = DWMInputTarget::AddDwmInputRoutingData(this, a2);
        if ( v4 < 0 )
          return (unsigned int)v4;
        v5 = *(_DWORD *)a2;
      }
      else
      {
        *((_QWORD *)a2 + 49) = 1065353216LL;
        *((_QWORD *)a2 + 50) = 0LL;
        *((_DWORD *)a2 + 102) = 0;
        *(_QWORD *)((char *)a2 + 412) = 1065353216LL;
        *(_QWORD *)((char *)a2 + 420) = 0LL;
        *((_DWORD *)a2 + 107) = 0;
        *((_QWORD *)a2 + 54) = 1065353216LL;
        *((_QWORD *)a2 + 55) = 0LL;
        *((_DWORD *)a2 + 112) = 0;
        *((_DWORD *)a2 + 113) = 1065353216;
      }
    }
    if ( v5 == 0x4000 )
    {
      v7 = *((_QWORD *)this + 15);
      if ( v7 )
      {
        Attached = (_QWORD *)InputSite::GetAttachedObject<LegacyInputSinkData>(v7);
        v10 = Attached;
        if ( !Attached )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x156,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
            v9);
          JUMPOUT(0x1800189FDLL);
        }
        *((_QWORD *)a2 + 4) = LegacyInputSinkData::GetCompositionInputQueue(Attached, 1LL)[1];
        NtQueryCompositionInputQueueAndTransform(*v10, 1LL, v18, v17);
        if ( *((_BYTE *)a2 + 60) )
        {
          v11 = ApplyInverseTransformToPoint(
                  (struct tagINPUT_TRANSFORM *)v17,
                  *(struct tagPOINT *)((char *)a2 + 44),
                  (struct tagPOINT *)((char *)a2 + 52));
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x165,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
              (const char *)(unsigned int)v11);
        }
        if ( *((_BYTE *)a2 + 80) )
        {
          v12 = ApplyInverseTransformToPoint(
                  (struct tagINPUT_TRANSFORM *)v17,
                  *(struct tagPOINT *)((char *)a2 + 64),
                  (struct tagPOINT *)a2 + 9);
          if ( v12 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x16C,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
              (const char *)(unsigned int)v12);
        }
      }
    }
    InputEventPayloadBuffer::InputEventPayloadBuffer(&v14, 4LL, a2);
    v4 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, void *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                          + 24LL))(
           NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
           (char *)this + 80,
           Block,
           v14);
    InputETW::InputTarget::DeliverInputReport(a2);
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
        (const char *)(unsigned int)v4);
    if ( Block )
      operator delete(Block);
    return (unsigned int)v4;
  }
  return (unsigned int)-2147024809;
}
