/*
 * XREFs of ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800993C4
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180001210 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800016D0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800059B0 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180037B7C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x180099008 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
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
  LONG bottom; // r8d
  unsigned __int64 v16; // xmm0_8
  int v17; // r8d
  struct tagRECT *p_rc; // rcx
  int v19; // eax
  __int64 v20; // rcx
  struct tagRECT *v21; // rax
  struct CAnimationComponent *v23; // [rsp+50h] [rbp-21h] BYREF
  struct tagRECT v24; // [rsp+60h] [rbp-11h] BYREF
  struct tagRECT rc; // [rsp+70h] [rbp-1h] BYREF

  v5 = *(_QWORD *)this;
  v7 = *((unsigned int *)a2 + 150);
  v23 = 0LL;
  v11 = (*(__int64 (__fastcall **)(CSlide *, __int64))(v5 + 88))(this, v7);
  v12 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v11, 0LL, 0LL, -1, 1, &v23);
  v13 = v23;
  v14 = v12;
  if ( v12 >= 0 )
  {
    bottom = a3->bottom;
    v24 = *(struct tagRECT *)((char *)v23 + 88);
    rc = v24;
    v16 = _mm_srli_si128((__m128i)v24, 8).m128i_u64[0];
    if ( (int)abs32(bottom - HIDWORD(v16)) >= (int)abs32(a3->top - v24.top) )
      v17 = a3->top - HIDWORD(v16);
    else
      v17 = bottom - v24.top;
    p_rc = &v24;
    if ( !a4 )
      p_rc = &rc;
    OffsetRect(p_rc, 0, v17);
    v19 = *((_DWORD *)a2 + 150);
    if ( (v19 & 0x1000000) != 0 )
      v24 = *(struct tagRECT *)((char *)a2 + 620);
    if ( (v19 & 0x800000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 652);
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v13 + 5), &v24);
    v20 = *((_QWORD *)v13 + 5);
    *(struct tagRECT *)(v20 + 872) = rc;
    CVisual::SetDirtyFlags((CVisual *)(v20 + 8), 4096);
    v21 = &v24;
    if ( a4 )
      v21 = &rc;
    *(struct tagRECT *)((char *)v13 + 88) = *v21;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x17Du);
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
      v13 = v23;
    }
  }
  if ( v13 )
    CBaseObject::Release(v13);
  return (unsigned int)v14;
}
