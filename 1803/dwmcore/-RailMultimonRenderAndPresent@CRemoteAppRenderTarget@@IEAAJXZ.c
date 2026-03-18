/*
 * XREFs of ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015CBE8
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z @ 0x18015CE70 (-Render@CRemoteAppRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z @ 0x180061C44 (-InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetIntersectingMonitorTargets@CDesktopRenderTarget@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@PEAV?$DynArray@PEAVCHwndRenderTarget@@$0A@@@@Z @ 0x180157A94 (-GetIntersectingMonitorTargets@CDesktopRenderTarget@@QEAAJAEBV-$TMilRect_@HUtagRECT@@UMilPointAn.c)
 *     ?GetPresentParameters@CRemoteAppRenderTarget@@IEBAXPEAURenderTargetPresentParameters@@@Z @ 0x18015C6F0 (-GetPresentParameters@CRemoteAppRenderTarget@@IEBAXPEAURenderTargetPresentParameters@@@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015CF20 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::RailMultimonRenderAndPresent(CRemoteAppRenderTarget *this)
{
  _DWORD *v1; // rdx
  __int64 v3; // rcx
  int IntersectingMonitorTargets; // eax
  _QWORD *v5; // r13
  unsigned int v6; // edi
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rbx
  __int128 v17; // [rsp+30h] [rbp-50h] BYREF
  int v18; // [rsp+40h] [rbp-40h]
  int v19; // [rsp+44h] [rbp-3Ch]
  unsigned int v20; // [rsp+48h] [rbp-38h]
  _BYTE v21[40]; // [rsp+50h] [rbp-30h] BYREF

  v18 = 0;
  v1 = (_DWORD *)((char *)this + 288);
  v19 = 0;
  v20 = 0;
  v3 = *((_QWORD *)this + 21);
  v17 = 0LL;
  IntersectingMonitorTargets = CDesktopRenderTarget::GetIntersectingMonitorTargets(v3, v1, (__int64)&v17);
  v5 = (_QWORD *)v17;
  v6 = IntersectingMonitorTargets;
  if ( IntersectingMonitorTargets >= 0 )
  {
    v7 = 0LL;
    if ( !v20 )
      goto LABEL_14;
    while ( 1 )
    {
      v8 = v5[v7];
      v9 = *((_QWORD *)this + 22);
      v10 = *(_QWORD *)(v8 + 176);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      *((_QWORD *)this + 22) = v10;
      if ( v10 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        if ( *((_QWORD *)this + 22) )
        {
          *((_OWORD *)this + 13) = *(_OWORD *)(v8 + 220);
          *((_OWORD *)this + 14) = *(_OWORD *)(v8 + 236);
          *((_OWORD *)this + 15) = *(_OWORD *)(v8 + 252);
          *((_OWORD *)this + 16) = *(_OWORD *)(v8 + 268);
          *((_DWORD *)this + 68) = *(_DWORD *)(v8 + 284);
          v11 = CRemoteAppRenderTarget::RenderDirtyRegion(this);
          v6 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1D1u);
            goto LABEL_14;
          }
          CRemoteAppRenderTarget::GetPresentParameters(this, (struct RenderTargetPresentParameters *)v21);
          LOBYTE(v12) = 1;
          v13 = CHwndRenderTarget::InternalPresent(
                  (CHwndRenderTarget *)v8,
                  v12,
                  (const struct RenderTargetPresentParameters *)v21);
          v6 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1D6u);
            goto LABEL_14;
          }
        }
      }
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v20 )
        goto LABEL_14;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IntersectingMonitorTargets, 0x1C1u);
LABEL_14:
  ReleaseInterface<IBitmapLock>((__int64 *)this + 22);
  v14 = v20 == 0;
  *((_WORD *)this + 136) = 32085;
  *((_OWORD *)this + 13) = _xmm;
  *((_OWORD *)this + 14) = _xmm;
  *((_OWORD *)this + 15) = _xmm;
  *((_OWORD *)this + 16) = _xmm;
  if ( !v14 )
  {
    v15 = v20;
    do
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
      ++v5;
      --v15;
    }
    while ( v15 );
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v17);
  return v6;
}
