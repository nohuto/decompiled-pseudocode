/*
 * XREFs of ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCResource@@4PEAUMilPoint3F@@@Z @ 0x180005718
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800063A4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000CFFC (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x180077F04 (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z @ 0x18007D534 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetSurfaceFromThumbnail(
        __int64 a1,
        __int64 a2,
        int a3,
        const struct tagRECT *a4,
        char a5,
        CBaseObject **a6,
        CBaseObject **a7,
        float *a8)
{
  CBaseObject *v8; // rsi
  const struct tagRECT *v9; // r10
  float v10; // r15d
  unsigned int CVI; // edi
  CWindowSnapshot *v13; // rcx
  __int64 v14; // r15
  __int64 v16; // rcx
  float v17; // xmm0_4
  __int64 v18; // rax
  int v19; // eax
  struct CResource *v20; // rbx
  int v21; // eax
  int v22; // eax
  CBaseObject *v23; // rax
  float v24; // [rsp+98h] [rbp-69h] BYREF
  CBaseObject *v25; // [rsp+A0h] [rbp-61h] BYREF
  struct CResource *v26; // [rsp+A8h] [rbp-59h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-51h] BYREF
  int v28; // [rsp+B8h] [rbp-49h]
  __int128 v29; // [rsp+C0h] [rbp-41h] BYREF
  __int128 v30; // [rsp+D0h] [rbp-31h] BYREF

  v26 = 0LL;
  v8 = 0LL;
  v9 = a4;
  v10 = *(float *)&a3;
  *a8 = 1.0;
  a8[1] = 1.0;
  CVI = -2147467259;
  a8[2] = 1.0;
  *(_QWORD *)&v29 = a4;
  v24 = *(float *)&a3;
  v25 = 0LL;
  if ( !a2 )
    return CVI;
  v13 = *(CWindowSnapshot **)(a2 + 424);
  if ( v13 )
  {
    CVI = CWindowSnapshot::GetCVI(v13, a4, &v26, &v24);
    v17 = 1.0 / v24;
    a8[1] = 1.0 / v24;
    *a8 = v17;
  }
  else
  {
    v14 = 0LL;
    if ( !*(_DWORD *)(a2 + 536) )
      return CVI;
    while ( 1 )
    {
      v18 = *(_QWORD *)(a2 + 512);
      v27 = 0x3F8000003F800000LL;
      v28 = 1065353216;
      if ( CThumbnailVisual::GetCVI(
             *(CThumbnailVisual **)(*(_QWORD *)(v18 + 8 * v14) + 88LL),
             v9,
             &v26,
             (struct MilPoint3F *)&v27) >= 0
        && (!a5
         || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v27 - 1.0)) & _xmm) <= 0.0000011920929
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v27 + 1) - 1.0)) & _xmm) <= 0.0000011920929) )
      {
        break;
      }
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *(_DWORD *)(a2 + 536) )
        goto LABEL_25;
      v9 = (const struct tagRECT *)v29;
    }
    v19 = v28;
    CVI = 0;
    v10 = v24;
    *(_QWORD *)a8 = v27;
    *((_DWORD *)a8 + 2) = v19;
  }
  if ( (CVI & 0x80000000) != 0 )
    goto LABEL_25;
  v20 = v26;
  if ( (LODWORD(v10) & 0x4000000) != 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v26 + 2) + 1000LL))(
      *((_QWORD *)v26 + 2),
      *((unsigned int *)v26 + 6));
  v21 = CCachedVisualImageBrushResource::Create(v16, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v25);
  CVI = v21;
  if ( v21 >= 0 )
  {
    v8 = v25;
    v30 = _xmm;
    v29 = _xmm;
    v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(**((_QWORD **)v25 + 2) + 1192LL))(
            *((_QWORD *)v25 + 2),
            *((unsigned int *)v25 + 6),
            *((_QWORD *)v25 + 2),
            &v30,
            &v29,
            0,
            0,
            0,
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            *((_DWORD *)v20 + 6));
    CVI = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v22,
        0x9A4u);
      goto LABEL_26;
    }
    if ( *a7 )
      CBaseObject::Release(*a7);
    *a7 = v20;
    _InterlockedAdd((volatile signed __int32 *)v20 + 2, 1u);
    if ( *a6 )
      CBaseObject::Release(*a6);
    v23 = v25;
    *a6 = v25;
    _InterlockedAdd((volatile signed __int32 *)v23 + 2, 1u);
    v8 = v25;
LABEL_25:
    v20 = v26;
    goto LABEL_26;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    v21,
    0x986u);
  v8 = v25;
LABEL_26:
  if ( v20 )
    CBaseObject::Release(v20);
  if ( v8 )
    CBaseObject::Release(v8);
  return CVI;
}
