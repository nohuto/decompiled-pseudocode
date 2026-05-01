/*
 * XREFs of _lambda_75ecb61212cbd325c11a4ad813499630_::operator() @ 0x18008B43C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c375c8f4cb799a2f5bee00a6619de85c___::Run @ 0x18008B3D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c375c8f4cb799a2f5bee00a6619de85c___--Run.c)
 * Callees:
 *     ?SetPosition@CApplicationFrameWrapper@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x180016EE0 (-SetPosition@CApplicationFrameWrapper@@UEAAJPEAUIApplicationViewPosition@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800287F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicati.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028870 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_75ecb61212cbd325c11a4ad813499630_::operator()(__int64 a1)
{
  char v2; // di
  char v3; // bl
  struct IApplicationViewPosition *v4; // rcx
  __int64 (__fastcall *v5)(__int64, GUID *, __int64 *); // rax
  __int64 result; // rax
  CApplicationFrameWrapper *v7; // rcx
  __int64 (__fastcall *v8)(CApplicationFrameWrapper *, struct IApplicationViewPosition *); // rax
  struct IApplicationViewPosition *v9; // rdx
  __int64 v10; // rcx
  __int64 (*v11)(void); // rax
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+38h] [rbp-38h] BYREF
  int v14; // [rsp+3Ch] [rbp-34h] BYREF
  int v15; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h]
  RECT rc; // [rsp+50h] [rbp-20h] BYREF

  v16 = -2LL;
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  v15 = 0;
  v13 = 0;
  v2 = 0;
  v3 = 0;
  v12 = 0LL;
  v4 = *(struct IApplicationViewPosition **)a1;
  v5 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v4;
  if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::QueryInterface )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::QueryInterface(
               (__int64)v4,
               &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
               &v12);
  else
    result = v5((__int64)v4, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v12);
  if ( (int)result >= 0 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 32LL))(v12, &v14);
    result = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 48LL))(v12, &v13);
    if ( v14 == 4 )
    {
      v2 = 1;
      v3 = 0;
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 40LL))(v12, &v15);
    }
    else
    {
      v2 = 0;
      if ( v14 != 3 || (v13 & 1) == 0 )
      {
        v3 = 0;
        goto LABEL_8;
      }
      v3 = 1;
    }
    result = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v12 + 24LL))(v12, &rc);
  }
LABEL_8:
  if ( (v13 & 1) == 0 )
  {
    v7 = *(CApplicationFrameWrapper **)(*(_QWORD *)(a1 + 8) + 120LL);
    v8 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *, struct IApplicationViewPosition *))(*(_QWORD *)v7 + 32LL);
    v9 = *(struct IApplicationViewPosition **)a1;
    if ( v8 == CApplicationFrameWrapper::SetPosition )
      result = CApplicationFrameWrapper::SetPosition(v7, v9);
    else
      result = v8(v7, v9);
  }
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(PVOID, _QWORD, RECT *, _QWORD, int))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr
                                                                           + 24LL))(
               CApplicationManagerUtility::g_pIAMGlobals[19].Ptr,
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL),
               &rc,
               0LL,
               v15);
  }
  else if ( v3 )
  {
    IsRectEmpty(&rc);
    result = (*(__int64 (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[20].Ptr
                                                               + 32LL))(
               CApplicationManagerUtility::g_pIAMGlobals[20].Ptr,
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL),
               5LL);
  }
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 16LL);
    if ( (char *)v11 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release(
               v10,
               (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::Release);
    else
      return v11();
  }
  return result;
}
