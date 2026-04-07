/*
 * XREFs of ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@1AEBUtagRECT@@@Z @ 0x18009B388
 * Callers:
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E32C (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x18009BDDC (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000CFFC (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x18009C568 (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 */

__int64 __fastcall CDesktopThumbnailCVI::CreateBrush(
        CDesktopThumbnailCVI *this,
        struct CCachedVisualImageBrushResource **a2,
        struct CResource **a3,
        struct CResource **a4,
        const struct tagRECT *a5)
{
  CBaseObject *v5; // rbx
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // r10d
  int v16; // r11d
  int v17; // r8d
  float v18; // xmm2_4
  int v19; // r9d
  float v20; // xmm3_4
  int v21; // eax
  int v22; // eax
  volatile signed __int32 *v23; // rsi
  int v24; // eax
  __int64 v25; // rax
  CBaseObject *v27; // [rsp+90h] [rbp-31h] BYREF
  CBaseObject *v28; // [rsp+98h] [rbp-29h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-11h] BYREF

  v27 = 0LL;
  v5 = 0LL;
  v28 = 0LL;
  if ( a4 )
  {
    v10 = CResource::Create(0x1Bu, *((_QWORD *)this + 2), &v28);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x26Du);
      v5 = v28;
      goto LABEL_39;
    }
    v5 = v28;
  }
  v12 = CDesktopThumbnailCVI::_EnsureResources(this);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x270u);
    goto LABEL_39;
  }
  v14 = CCachedVisualImageBrushResource::Create(v13, *((_QWORD *)this + 2), &v27);
  v11 = v14;
  if ( v14 >= 0 )
  {
    v15 = 0;
    v30 = _xmm;
    if ( a4 )
    {
      v15 = *((_DWORD *)v5 + 6);
      v29 = 0LL;
      v16 = 0;
    }
    else
    {
      v17 = *((_DWORD *)this + 12) - *((_DWORD *)this + 10);
      v16 = 1;
      if ( (float)v17 == 0.0 )
        v18 = 0.0;
      else
        v18 = (float)((a5->left - *((_DWORD *)this + 10)) / v17);
      v19 = *((_DWORD *)this + 13) - *((_DWORD *)this + 11);
      *(float *)&v29 = v18;
      if ( (float)v19 == 0.0 )
        v20 = 0.0;
      else
        v20 = (float)((a5->top - *((_DWORD *)this + 11)) / v19);
      *((float *)&v29 + 1) = v20;
      if ( (float)v17 == 0.0 )
      {
        DWORD2(v29) = 0;
      }
      else
      {
        v21 = 0;
        if ( a5->right - a5->left >= 0 )
          v21 = a5->right - a5->left;
        *((float *)&v29 + 2) = (float)(v21 / v17) + v18;
      }
      if ( (float)v19 == 0.0 )
      {
        HIDWORD(v29) = 0;
      }
      else
      {
        v22 = 0;
        if ( a5->bottom - a5->top >= 0 )
          v22 = a5->bottom - a5->top;
        *((float *)&v29 + 3) = (float)(v22 / v19) + v20;
      }
    }
    v23 = (volatile signed __int32 *)v27;
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(**((_QWORD **)v27 + 2) + 1192LL))(
            *((_QWORD *)v27 + 2),
            *((unsigned int *)v27 + 6),
            *((_QWORD *)v27 + 2),
            &v30,
            &v29,
            0,
            0,
            0,
            1,
            v16,
            0,
            v15,
            1,
            0,
            0,
            0,
            *(_DWORD *)(*((_QWORD *)this + 4) + 24LL));
    v11 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x2A1u);
      goto LABEL_37;
    }
    if ( a4 )
    {
      *a4 = v5;
      if ( v5 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
        v23 = (volatile signed __int32 *)v27;
      }
    }
    *a2 = (struct CCachedVisualImageBrushResource *)v23;
    _InterlockedIncrement(v23 + 2);
    if ( a3 )
    {
      *a3 = (struct CResource *)*((_QWORD *)this + 4);
      v25 = *((_QWORD *)this + 4);
      if ( v25 )
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
    }
    v5 = v28;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x273u);
  }
  v23 = (volatile signed __int32 *)v27;
LABEL_37:
  if ( v23 )
    CBaseObject::Release((CBaseObject *)v23);
LABEL_39:
  if ( v5 )
    CBaseObject::Release(v5);
  return v11;
}
