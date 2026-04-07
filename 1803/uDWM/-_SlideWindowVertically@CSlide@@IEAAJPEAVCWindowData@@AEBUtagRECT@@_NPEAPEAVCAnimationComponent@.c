/*
 * XREFs of ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x18009EC58
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A1930 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A1F20 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180009A0C (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180011D0C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18009E648 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CSlide::_SlideWindowVertically(
        CSlide *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        char a4,
        struct CAnimationComponent **a5)
{
  __int64 v5; // rax
  __int64 v7; // rdx
  int v11; // eax
  int v12; // eax
  struct CAnimationComponent *v13; // rbx
  int v14; // edi
  LONG top; // eax
  LONG bottom; // r8d
  unsigned __int64 v17; // xmm0_8
  int v18; // r8d
  struct tagRECT *p_rc; // rcx
  int v20; // eax
  __int64 v21; // rcx
  struct tagRECT *v22; // rax
  struct CAnimationComponent *v24; // [rsp+50h] [rbp-21h] BYREF
  struct tagRECT v25; // [rsp+60h] [rbp-11h] BYREF
  struct tagRECT rc; // [rsp+70h] [rbp-1h] BYREF

  v5 = *(_QWORD *)this;
  v7 = *((unsigned int *)a2 + 150);
  v24 = 0LL;
  v11 = (*(__int64 (__fastcall **)(CSlide *, __int64))(v5 + 88))(this, v7);
  v12 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v11, 0LL, 0LL, 0xFFFFFFFF, 1, &v24);
  v13 = v24;
  v14 = v12;
  if ( v12 >= 0 )
  {
    top = a3->top;
    bottom = a3->bottom;
    v25 = *(struct tagRECT *)((char *)v24 + 88);
    rc = v25;
    v17 = _mm_srli_si128((__m128i)v25, 8).m128i_u64[0];
    if ( (int)abs32(bottom - HIDWORD(v17)) >= (int)abs32(top - v25.top) )
      v18 = a3->top - HIDWORD(v17);
    else
      v18 = bottom - v25.top;
    p_rc = &v25;
    if ( !a4 )
      p_rc = &rc;
    OffsetRect(p_rc, 0, v18);
    v20 = *((_DWORD *)a2 + 150);
    if ( (v20 & 0x1000000) != 0 )
      v25 = *(struct tagRECT *)((char *)a2 + 620);
    if ( (v20 & 0x800000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 652);
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v13 + 5), &v25);
    v21 = *((_QWORD *)v13 + 5);
    *(struct tagRECT *)(v21 + 872) = rc;
    CVisual::SetDirtyFlags((CVisual *)(v21 + 8), 4096);
    v22 = &v25;
    if ( a4 )
      v22 = &rc;
    *(struct tagRECT *)((char *)v13 + 88) = *v22;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x17Du);
  }
  if ( v14 < 0 && v13 )
    CStoryboard::_RemoveAnimationComponent(this, (struct CVisual **)v13);
  if ( a5 )
  {
    if ( v14 < 0 )
    {
      *a5 = 0LL;
    }
    else
    {
      *a5 = v13;
      if ( !v13 )
        return (unsigned int)v14;
      _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
      v13 = v24;
    }
  }
  if ( v13 )
    CBaseObject::Release(v13);
  return (unsigned int)v14;
}
