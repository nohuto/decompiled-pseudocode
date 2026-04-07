/*
 * XREFs of ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18001CB3C
 * Callers:
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18001D6B0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002780C (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x18006ED38 (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x180091F6C (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 * Callees:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18000681C (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180017108 (-Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180019770 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18001D01C (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x18001D180 (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ?_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x18001D1B0 (-_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x18001D1DC (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z @ 0x18001D308 (-SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18001D35C (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x18001E2BC (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024790 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x18003E884 (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x18009CBB8 (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CAccent::UpdateAccentPolicy(
        CAccent *this,
        const struct tagRECT *a2,
        __m128i *a3,
        struct CResource *a4)
{
  CDesktopManager *v8; // r10
  int v9; // r8d
  int v10; // r9d
  int v11; // edx
  int v12; // r9d
  __m128i v13; // xmm6
  int v14; // ebx
  CAccentTransition *v15; // rcx
  int started; // eax
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // edx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // eax
  int v29; // edx
  int v30; // ecx
  __m128i v31; // xmm0
  int v32; // eax
  float v33; // xmm0_4
  float SolidFillOpacity; // xmm0_4
  __int64 v35; // rcx
  int updated; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+38h] [rbp-48h] BYREF
  struct _MARGINS v42; // [rsp+40h] [rbp-40h] BYREF
  __m128i v43; // [rsp+50h] [rbp-30h] BYREF

  v41 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *(_QWORD *)&v42.cxLeftWidth = 0LL;
  *(_QWORD *)&v42.cyTopHeight = 0LL;
  CVisual::SetInsetFromParent(this, &v42);
  *(struct tagRECT *)((char *)this + 584) = *a2;
  if ( (a3->m128i_i8[4] & 4) != 0 )
  {
    v8 = CDesktopManager::s_pDesktopManagerInstance;
    v9 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 90);
    v10 = v9 + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 92);
    v11 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 91);
    if ( v11 < 0 )
      v11 = 0;
    *((_DWORD *)this + 148) = v11 + *((_DWORD *)this + 146);
    v12 = v10 - v9;
    if ( v12 < 0 )
      v12 = 0;
    *((_DWORD *)this + 149) = v12 + *((_DWORD *)this + 147);
    *((_QWORD *)v8 + 24) = this;
  }
  v13 = *a3;
  *((_BYTE *)this + 365) = 0;
  v14 = _mm_cvtsi128_si32(v13);
  v43 = v13;
  if ( (unsigned int)(v14 - 2) <= 1 )
  {
    if ( (*((_BYTE *)this + 284) & 2) != 0 )
    {
      VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
      v21 = *((_QWORD *)this + 40);
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v21)(v21, 1LL);
        *((_QWORD *)this + 40) = 0LL;
      }
      v22 = *((_QWORD *)this + 41);
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v22)(v22, 1LL);
        *((_QWORD *)this + 41) = 0LL;
      }
      v23 = *((_QWORD *)this + 42);
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v23)(v23, 1LL);
        *((_QWORD *)this + 42) = 0LL;
      }
    }
    *(__m128i *)((char *)this + 280) = v13;
    v24 = *((_DWORD *)this + 72);
    *((_DWORD *)this + 86) = v24;
    if ( (*((_BYTE *)this + 284) & 1) != 0 )
      CAccent::_UpdateAccentBackground(this, v24);
    if ( *((_DWORD *)this + 70) == 3 )
    {
      if ( !*((_QWORD *)this + 42) )
      {
        v25 = CAccentBlurBehind::Create(
                *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                (struct CAccentBlurBehind **)this + 42);
        v17 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x496u);
          goto LABEL_74;
        }
      }
      CAccent::_UpdateAccentBlurBehind(this);
    }
    else
    {
      v27 = *((_QWORD *)this + 42);
      if ( v27 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v27)(v27, 1LL);
        *((_QWORD *)this + 42) = 0LL;
      }
      VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
      v28 = 0;
      v29 = *((_DWORD *)this + 149) - *((_DWORD *)this + 147);
      v30 = *((_DWORD *)this + 148) - *((_DWORD *)this + 146);
      v43.m128i_i64[0] = 0LL;
      if ( v30 >= 0 )
        v28 = v30;
      v31 = _mm_cvtsi32_si128(v28);
      v32 = 0;
      LODWORD(v33) = _mm_cvtepi32_ps(v31).m128_u32[0];
      if ( v29 >= 0 )
        v32 = v29;
      *(float *)&v43.m128i_i32[2] = v33 + 0.0;
      *(float *)&v43.m128i_i32[3] = (float)v32 + 0.0;
      SolidFillOpacity = CAccent::_GetSolidFillOpacity(this);
      updated = CAccent::_UpdateSolidFill(v35, this, *((unsigned int *)this + 86), &v43, LODWORD(SolidFillOpacity));
      v17 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x4A5u);
        goto LABEL_74;
      }
    }
    v26 = CAccent::_AddOcclusionInstruction(this);
    v17 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x4A9u);
      goto LABEL_74;
    }
    CVisual::SetDirtyFlags(this, 0x4000u);
  }
  else
  {
    if ( *((_BYTE *)this + 312) )
    {
      v15 = (CAccentTransition *)*((_QWORD *)this + 44);
      if ( v15 )
        CAccentTransition::StopAnimation(v15);
      v43.m128i_i32[3] = 0;
      v13 = v43;
    }
    if ( v14 != *((_DWORD *)this + 70)
      || _mm_cvtsi128_si32(_mm_srli_si128(v13, 4)) != *((_DWORD *)this + 71)
      || _mm_cvtsi128_si32(_mm_srli_si128(v13, 8)) != *((_DWORD *)this + 72) )
    {
      *((_BYTE *)this + 312) = 1;
      *(__m128i *)((char *)this + 296) = v13;
      started = CAccent::StartTransition(this);
      v17 = started;
      if ( started < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0x471u);
        goto LABEL_74;
      }
    }
    CVisual::SetDirtyFlags(this, 0x1000u);
    if ( (*((_BYTE *)this + 284) & 2) != 0 )
    {
      VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
      v18 = *((_QWORD *)this + 40);
      if ( v18 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v18)(v18, 1LL);
        *((_QWORD *)this + 40) = 0LL;
      }
      v19 = *((_QWORD *)this + 41);
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(__int64, __int64))v19)(v19, 1LL);
        *((_QWORD *)this + 41) = 0LL;
      }
    }
    v20 = *((_QWORD *)this + 42);
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 8), 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64, __int64))v20)(v20, 1LL);
      *((_QWORD *)this + 42) = 0LL;
    }
  }
  if ( (*((_BYTE *)this + 284) & 0xE0) != 0 )
  {
    v37 = CAccent::_EnsureBorderShadowAtlas(this);
    v17 = v37;
    if ( v37 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x4AFu);
      goto LABEL_74;
    }
    CVisual::SetDirtyFlags(this, 2u);
  }
  else
  {
    v39 = CAccent::_RemoveBorderShadowAtlas(this);
    v17 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x4B4u);
      goto LABEL_74;
    }
  }
  v38 = *((_DWORD *)this + 71);
  if ( (v38 & 0x10) != 0 )
  {
    CAccent::SetClipRegion(this, a4);
  }
  else if ( (v38 & 0x200) != 0 && *((_QWORD *)this + 48) )
  {
    CVisual::SetDirtyFlags(this, 0x8000u);
  }
LABEL_74:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v41);
  return v17;
}
