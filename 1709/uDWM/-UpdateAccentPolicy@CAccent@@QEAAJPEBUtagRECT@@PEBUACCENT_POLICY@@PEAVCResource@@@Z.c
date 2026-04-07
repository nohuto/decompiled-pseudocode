/*
 * XREFs of ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180012054
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001C3DC (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180038790 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x180069EE4 (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x18008E088 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 * Callees:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800081C8 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x1800082F4 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x180012424 (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ?_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180012454 (-_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z @ 0x180012480 (-SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800124D4 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x1800127C8 (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180012E90 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180019510 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x180038878 (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?Create@CAccentAcrylicBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180075978 (-Create@CAccentAcrylicBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180075A58 (-Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180077A68 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x18009AD38 (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CAccent::UpdateAccentPolicy(
        CAccent *this,
        const struct tagRECT *a2,
        __m128i *a3,
        struct CResource *a4)
{
  __m128i v8; // xmm6
  int v9; // ebx
  char v10; // al
  int started; // eax
  unsigned int v12; // ebx
  struct CVisual *v13; // rdx
  CBaseObject *v14; // rcx
  struct CVisual *v15; // rdx
  CBaseObject *v16; // rcx
  int v17; // eax
  int v18; // eax
  int v20; // eax
  char v21; // al
  bool v22; // zf
  unsigned int v23; // edx
  int v24; // eax
  CBaseObject *v25; // rcx
  CBaseObject *v26; // rcx
  unsigned int v27; // eax
  int v28; // edx
  int v29; // ecx
  __m128i v30; // xmm0
  int v31; // eax
  float v32; // xmm0_4
  float SolidFillOpacity; // xmm0_4
  __int64 v34; // rcx
  int updated; // eax
  int v36; // eax
  CBaseObject *v37; // rcx
  CBaseObject *v38; // rcx
  CBaseObject *v39; // rcx
  CBaseObject *v40; // rcx
  CDesktopManager *v41; // r8
  int v42; // ecx
  int v43; // edx
  CAccentTransition *v44; // rcx
  CBaseObject *v45; // rcx
  CBaseObject *v46; // rcx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  struct _RTL_CRITICAL_SECTION *v51; // [rsp+30h] [rbp-30h] BYREF
  struct _MARGINS v52; // [rsp+38h] [rbp-28h] BYREF

  v51 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *(_QWORD *)&v52.cxLeftWidth = 0LL;
  *(_QWORD *)&v52.cyTopHeight = 0LL;
  CVisual::SetInsetFromParent(this, &v52);
  *((struct tagRECT *)this + 37) = *a2;
  if ( (a3->m128i_i8[4] & 4) != 0 )
  {
    v41 = CDesktopManager::s_pDesktopManagerInstance;
    v42 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 103);
    v43 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 104);
    if ( v42 < 0 )
      v42 = 0;
    *((_DWORD *)this + 150) = *((_DWORD *)this + 148) + v42;
    if ( v43 < 0 )
      v43 = 0;
    *((_DWORD *)this + 151) = v43 + *((_DWORD *)this + 149);
    *((_QWORD *)v41 + 30) = this;
  }
  v8 = *a3;
  *((_BYTE *)this + 373) = 0;
  v9 = _mm_cvtsi128_si32(v8);
  v52 = (struct _MARGINS)v8;
  if ( (unsigned int)(v9 - 2) <= 1 )
  {
    if ( v9 != 4 )
      goto LABEL_30;
    goto LABEL_76;
  }
  if ( v9 == 4 )
  {
LABEL_76:
    v21 = 0;
    if ( *((_DWORD *)this + 70) == v9 )
    {
LABEL_31:
      if ( (*((_BYTE *)this + 284) & 2) != 0 && v21 )
      {
        VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
        v37 = (CBaseObject *)*((_QWORD *)this + 40);
        if ( v37 )
        {
          CBaseObject::Release(v37);
          *((_QWORD *)this + 40) = 0LL;
        }
        v38 = (CBaseObject *)*((_QWORD *)this + 41);
        if ( v38 )
        {
          CBaseObject::Release(v38);
          *((_QWORD *)this + 41) = 0LL;
        }
        v39 = (CBaseObject *)*((_QWORD *)this + 42);
        if ( v39 )
        {
          CBaseObject::Release(v39);
          *((_QWORD *)this + 42) = 0LL;
        }
        v40 = (CBaseObject *)*((_QWORD *)this + 43);
        if ( v40 )
        {
          CBaseObject::Release(v40);
          *((_QWORD *)this + 43) = 0LL;
        }
      }
      *(__m128i *)((char *)this + 280) = v8;
      v22 = (*((_BYTE *)this + 284) & 1) == 0;
      v23 = *((_DWORD *)this + 72);
      *((_DWORD *)this + 88) = v23;
      if ( !v22 )
        CAccent::_UpdateAccentBackground(this, v23);
      v24 = *((_DWORD *)this + 70);
      if ( v24 == 3 )
      {
        if ( !*((_QWORD *)this + 42) )
        {
          v49 = CAccentBlurBehind::Create(
                  *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                  (struct CAccentBlurBehind **)this + 42);
          v12 = v49;
          if ( v49 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x4B0u);
            goto LABEL_23;
          }
        }
        CAccent::_UpdateAccentBlurBehind(this);
      }
      else if ( v24 == 4 )
      {
        if ( !*((_QWORD *)this + 43) )
        {
          v50 = CAccentAcrylicBlurBehind::Create(
                  *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                  (struct CAccentAcrylicBlurBehind **)this + 43);
          v12 = v50;
          if ( v50 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x4B8u);
            goto LABEL_23;
          }
        }
        CVisual::SetDirtyFlags(this, 0x1000u);
      }
      else
      {
        v25 = (CBaseObject *)*((_QWORD *)this + 42);
        if ( v25 )
        {
          CBaseObject::Release(v25);
          *((_QWORD *)this + 42) = 0LL;
        }
        v26 = (CBaseObject *)*((_QWORD *)this + 43);
        if ( v26 )
        {
          CBaseObject::Release(v26);
          *((_QWORD *)this + 43) = 0LL;
        }
        VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
        v27 = 0;
        v28 = *((_DWORD *)this + 151) - *((_DWORD *)this + 149);
        v29 = *((_DWORD *)this + 150) - *((_DWORD *)this + 148);
        *(_QWORD *)&v52.cxLeftWidth = 0LL;
        if ( v29 >= 0 )
          v27 = v29;
        v30 = _mm_cvtsi32_si128(v27);
        v31 = 0;
        LODWORD(v32) = _mm_cvtepi32_ps(v30).m128_u32[0];
        if ( v28 >= 0 )
          v31 = v28;
        *(float *)&v52.cyTopHeight = v32 + 0.0;
        *(float *)&v52.cyBottomHeight = (float)v31 + 0.0;
        SolidFillOpacity = CAccent::_GetSolidFillOpacity(this);
        updated = CAccent::_UpdateSolidFill(v34, this, *((unsigned int *)this + 88), &v52, LODWORD(SolidFillOpacity));
        v12 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x4C8u);
          goto LABEL_23;
        }
      }
      v36 = CAccent::_AddOcclusionInstruction(this);
      v12 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x4CCu);
        goto LABEL_23;
      }
      CVisual::SetDirtyFlags(this, 0x4000u);
      goto LABEL_16;
    }
LABEL_30:
    v21 = 1;
    goto LABEL_31;
  }
  if ( *((_BYTE *)this + 312) )
  {
    v44 = (CAccentTransition *)*((_QWORD *)this + 45);
    if ( v44 )
      CAccentTransition::StopAnimation(v44);
    v52.cyBottomHeight = 0;
    v8 = (__m128i)v52;
  }
  if ( v9 != *((_DWORD *)this + 70)
    || _mm_cvtsi128_si32(_mm_srli_si128(v8, 4)) != *((_DWORD *)this + 71)
    || (v10 = 0, _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) != *((_DWORD *)this + 72)) )
  {
    v10 = 1;
  }
  if ( v10 )
  {
    *((_BYTE *)this + 312) = 1;
    *(__m128i *)((char *)this + 296) = v8;
    started = CAccent::StartTransition(this);
    v12 = started;
    if ( started < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x47Bu);
      goto LABEL_23;
    }
  }
  CVisual::SetDirtyFlags(this, 0x1000u);
  if ( (*((_BYTE *)this + 284) & 2) != 0 )
  {
    VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
    v45 = (CBaseObject *)*((_QWORD *)this + 40);
    if ( v45 )
    {
      CBaseObject::Release(v45);
      *((_QWORD *)this + 40) = 0LL;
    }
    v46 = (CBaseObject *)*((_QWORD *)this + 41);
    if ( v46 )
    {
      CBaseObject::Release(v46);
      *((_QWORD *)this + 41) = 0LL;
    }
  }
  v13 = (struct CVisual *)*((_QWORD *)this + 42);
  if ( v13 )
  {
    if ( *((_QWORD *)v13 + 3) )
    {
      v47 = VisualCollection::Remove((CAccent *)((char *)this + 32), v13);
      v12 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x48Au);
        goto LABEL_23;
      }
    }
  }
  v14 = (CBaseObject *)*((_QWORD *)this + 42);
  if ( v14 )
  {
    CBaseObject::Release(v14);
    *((_QWORD *)this + 42) = 0LL;
  }
  v15 = (struct CVisual *)*((_QWORD *)this + 43);
  if ( v15 )
  {
    if ( *((_QWORD *)v15 + 3) )
    {
      v48 = VisualCollection::Remove((CAccent *)((char *)this + 32), v15);
      v12 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x490u);
        goto LABEL_23;
      }
    }
  }
  v16 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v16 )
  {
    CBaseObject::Release(v16);
    *((_QWORD *)this + 43) = 0LL;
  }
LABEL_16:
  if ( (*((_BYTE *)this + 284) & 0xE0) != 0 )
  {
    v17 = CAccent::_EnsureBorderShadowAtlas(this);
    v12 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x4D2u);
      goto LABEL_23;
    }
    CVisual::SetDirtyFlags(this, 2u);
  }
  else
  {
    v20 = CAccent::_RemoveBorderShadowAtlas(this);
    v12 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x4D7u);
      goto LABEL_23;
    }
  }
  v18 = *((_DWORD *)this + 71);
  if ( (v18 & 0x10) != 0 )
  {
    CAccent::SetClipRegion(this, a4);
  }
  else if ( (v18 & 0x200) != 0 && *((_QWORD *)this + 49) )
  {
    CVisual::SetDirtyFlags(this, 0x8000u);
  }
LABEL_23:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v51);
  return v12;
}
