/*
 * XREFs of ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180069C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x180069A7C (-_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VI.c)
 *     ?_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA?AUtagRECT@@U2@@Z @ 0x18006B884 (-_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA-AUtagRECT@@U2@@Z.c)
 *     ?StartActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x18006F300 (-StartActivity@ReconcileApplicationViewState@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x1801CCF40 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::ReconcileApplicationViewState(
        CFrameApplicationPresentation *this,
        struct tagRECT *a2)
{
  int v4; // ebx
  signed int LastError; // eax
  struct tagRECT *v6; // rcx
  int v7; // r8d
  int v8; // r9d
  int v9; // r10d
  int v10; // r11d
  struct tagRECT v11; // xmm3
  struct tagRECT v12; // xmm2
  LONG v13; // eax
  struct tagRECT v15; // [rsp+28h] [rbp-E0h] BYREF
  struct tagRECT v16; // [rsp+38h] [rbp-D0h]
  __int64 v17; // [rsp+48h] [rbp-C0h]
  __int64 v18; // [rsp+50h] [rbp-B8h]
  struct tagRECT v19; // [rsp+58h] [rbp-B0h] BYREF
  struct tagRECT v20; // [rsp+68h] [rbp-A0h] BYREF
  struct tagRECT v21; // [rsp+78h] [rbp-90h] BYREF
  struct tagRECT rc; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v23[4]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v24[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v25; // [rsp+C8h] [rbp-40h]
  int *v26; // [rsp+D0h] [rbp-38h]
  int *v27; // [rsp+D8h] [rbp-30h]
  int v28; // [rsp+E0h] [rbp-28h] BYREF
  char v29; // [rsp+E4h] [rbp-24h]
  int v30; // [rsp+108h] [rbp+0h] BYREF
  const char *v31; // [rsp+110h] [rbp+8h]
  __int64 v32; // [rsp+118h] [rbp+10h]
  char v33; // [rsp+120h] [rbp+18h]
  __int64 v34; // [rsp+128h] [rbp+20h]
  _BYTE v35[144]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v36; // [rsp+1C0h] [rbp+B8h]
  __int64 v37; // [rsp+1C8h] [rbp+C0h]
  __int64 v38; // [rsp+1D0h] [rbp+C8h]
  __int64 v39; // [rsp+1D8h] [rbp+D0h]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v18 = -2LL;
  memset(a2, 0, 0x28uLL);
  v24[1] = 0LL;
  v24[2] = v24;
  v24[3] = 0LL;
  v25 = 0;
  v26 = &v30;
  v27 = &v28;
  v28 = 0;
  v29 = 0;
  v33 = 0;
  v30 = 0;
  v31 = "ReconcileApplicationViewState";
  v32 = 0LL;
  v34 = 1LL;
  v36 = 0LL;
  v37 = 0LL;
  memset(v35, 0, sizeof(v35));
  v38 = 0LL;
  v39 = 0LL;
  v24[0] = &CFramePresentationTelemetry::ReconcileApplicationViewState::`vftable';
  CFramePresentationTelemetry::ReconcileApplicationViewState::StartActivity(
    (CFramePresentationTelemetry::ReconcileApplicationViewState *)v24,
    *((const unsigned __int16 **)this + 69));
  SetRectEmpty(&rc);
  if ( *((_DWORD *)this + 16) == 2 )
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3EF,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else if ( GetClientRect(*((HWND *)this + 17), &v21) )
  {
    if ( *((_BYTE *)this + 61) )
    {
      v19 = v21;
      v21 = *CFrameApplicationPresentation::_ComputePillarBoxedApplicationRect(this, &v20, &v19);
    }
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 16) + 120LL))(*((_QWORD *)this + 16), v23);
    v21.left += v23[0];
    v21.top += v23[1];
    v21.right -= v23[2];
    v21.bottom -= v23[3];
    rc = v21;
    v4 = CFrameApplicationPresentation::_ComputeApplicationViewData((HWND *)this, &rc, &v15);
    if ( v4 >= 0 )
    {
      if ( !ImmersiveApplicationLayout::AreAppViewDataEqual(
              (CFrameApplicationPresentation *)((char *)this + 176),
              (const struct APPLICATION_VIEW_DATA *)&v15,
              (const struct APPLICATION_VIEW_DATA *)(unsigned int)(*((_DWORD *)this + 39) - *((_DWORD *)this + 37)))
        && v10 == v9
        && v8 == v7 )
      {
        a2[2].top |= 1u;
      }
      v11 = v15;
      *v6 = v15;
      v12 = v16;
      v6[1] = v16;
      v13 = v17;
      v6[2].left = v17;
      *((struct tagRECT *)this + 9) = rc;
      *a2 = v11;
      a2[1] = v12;
      a2[2].left = v13;
    }
  }
  else
  {
    LastError = GetLastError();
    v4 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v4 = LastError;
    if ( v4 >= 0 )
      v4 = -2147467259;
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v24, v4);
  v24[0] = &CFramePresentationTelemetry::ReconcileApplicationViewState::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v24);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v24);
  return (unsigned int)v4;
}
