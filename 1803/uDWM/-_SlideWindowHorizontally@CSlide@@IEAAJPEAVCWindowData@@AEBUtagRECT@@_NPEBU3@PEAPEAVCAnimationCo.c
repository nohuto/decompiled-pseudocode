/*
 * XREFs of ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x18009EA04
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A1930 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A1F20 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180009A0C (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000A04C (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180011D0C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18009E648 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CSlide::_SlideWindowHorizontally(
        CSlide *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        char a4,
        __m128i *a5,
        struct CAnimationComponent **a6)
{
  __int64 v7; // rdx
  __m128i *v8; // rdi
  __int64 (__fastcall *v11)(CSlide *, __int64); // rax
  int v12; // eax
  int v13; // eax
  int v14; // r14d
  struct CAnimationComponent *v15; // rbx
  int v16; // r8d
  LONG right; // edi
  __int64 v18; // kr00_8
  int v19; // r9d
  int v20; // edi
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // r8d
  __int64 v26; // r9
  __int64 v27; // rcx
  struct tagRECT *p_rc; // rcx
  __int64 v29; // rcx
  struct CAnimationComponent *v31; // [rsp+50h] [rbp-29h] BYREF
  const struct tagRECT *v32; // [rsp+58h] [rbp-21h]
  struct tagRECT v33; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+70h] [rbp-9h] BYREF

  v7 = *((unsigned int *)a2 + 150);
  v8 = a5;
  v11 = *(__int64 (__fastcall **)(CSlide *, __int64))(*(_QWORD *)this + 88LL);
  v32 = a3;
  v31 = 0LL;
  v12 = v11(this, v7);
  v13 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v12, 0LL, 0LL, 0xFFFFFFFF, 1, &v31);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v15 = v31;
    if ( !a5 )
      v8 = (__m128i *)((char *)v31 + 88);
    v16 = _mm_cvtsi128_si32(*v8);
    v33 = (struct tagRECT)*v8;
    right = v32->right;
    v18 = v32->left - v16;
    rc = v33;
    v19 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v33, 8));
    if ( (int)abs32(right - v19) >= (int)((HIDWORD(v18) ^ v18) - HIDWORD(v18)) )
      v20 = v32->left - v19;
    else
      v20 = right - v16;
    v21 = *((_DWORD *)a2 + 150);
    v22 = v21 & 0xFFF;
    if ( a4 )
    {
      if ( v22 == 42 )
      {
        v23 = 0LL;
        v24 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
        v25 = *(_DWORD *)(v24 + 40);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v24 + 16);
          while ( 1 )
          {
            v27 = *(_QWORD *)(v26 + 8 * v23);
            if ( *(_DWORD *)(v27 + 72) == 16 && *(_DWORD *)(v27 + 24) != 4 )
              break;
            v23 = (unsigned int)(v23 + 1);
            if ( (unsigned int)v23 >= v25 )
              goto LABEL_17;
          }
          _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
          v20 -= *(_DWORD *)(v27 + 120);
          CStoryboard::Release((CStoryboard *)v27);
          v15 = v31;
        }
      }
LABEL_17:
      if ( (*((_DWORD *)a2 + 150) & 0x1000000) != 0 )
      {
        v33 = *(struct tagRECT *)((char *)a2 + 620);
LABEL_26:
        CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v15 + 5), &v33);
        v29 = *((_QWORD *)v15 + 5);
        *(struct tagRECT *)(v29 + 872) = rc;
        CVisual::SetDirtyFlags((CVisual *)(v29 + 8), 4096);
        goto LABEL_27;
      }
      p_rc = &v33;
    }
    else
    {
      if ( v22 == 24 )
      {
        *((_DWORD *)this + 30) = v20;
        v21 = *((_DWORD *)a2 + 150);
      }
      if ( (v21 & 0x800000) != 0 )
      {
        rc = *(struct tagRECT *)((char *)a2 + 652);
        goto LABEL_26;
      }
      p_rc = &rc;
    }
    OffsetRect(p_rc, v20, 0);
    goto LABEL_26;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x11Cu);
  v15 = v31;
LABEL_27:
  if ( v14 < 0 && v15 )
    CStoryboard::_RemoveAnimationComponent(this, (struct CVisual **)v15);
  if ( a6 )
  {
    if ( v14 < 0 )
    {
      *a6 = 0LL;
    }
    else
    {
      *a6 = v15;
      if ( !v15 )
        return (unsigned int)v14;
      _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
      v15 = v31;
    }
  }
  if ( v15 )
    CBaseObject::Release(v15);
  return (unsigned int)v14;
}
