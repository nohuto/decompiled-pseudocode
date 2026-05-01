/*
 * XREFs of ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x1800677F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x180067658 (-_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VI.c)
 *     ?_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA?AUtagRECT@@U2@@Z @ 0x180069358 (-_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA-AUtagRECT@@U2@@Z.c)
 *     ??$Start@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@ReconcileApplicationViewState@CFramePresentationTelemetry@@SA?AV01@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18006A700 (--$Start@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Reconcile.c)
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x18017F598 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::ReconcileApplicationViewState(HWND *this, struct tagRECT *a2)
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
  _QWORD v24[40]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v18 = -2LL;
  memset(a2, 0, 0x28uLL);
  CFramePresentationTelemetry::ReconcileApplicationViewState::Start<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &>((CFramePresentationTelemetry::ReconcileApplicationViewState *)v24);
  SetRectEmpty(&rc);
  if ( *((_DWORD *)this + 12) == 2 )
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x361,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else if ( GetClientRect(this[15], &v21) )
  {
    if ( *((_BYTE *)this + 45) )
    {
      v19 = v21;
      v21 = *CFrameApplicationPresentation::_ComputePillarBoxedApplicationRect(
               (CFrameApplicationPresentation *)this,
               &v20,
               &v19);
    }
    (*(void (__fastcall **)(HWND, _DWORD *))(*(_QWORD *)this[14] + 120LL))(this[14], v23);
    v21.left += v23[0];
    v21.top += v23[1];
    v21.right -= v23[2];
    v21.bottom -= v23[3];
    rc = v21;
    v4 = CFrameApplicationPresentation::_ComputeApplicationViewData(this, &rc, &v15);
    if ( v4 >= 0 )
    {
      if ( !ImmersiveApplicationLayout::AreAppViewDataEqual(
              (ImmersiveApplicationLayout *)(this + 20),
              (const struct APPLICATION_VIEW_DATA *)&v15,
              (const struct APPLICATION_VIEW_DATA *)(unsigned int)(*((_DWORD *)this + 35) - *((_DWORD *)this + 33)))
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
      *((struct tagRECT *)this + 8) = rc;
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
