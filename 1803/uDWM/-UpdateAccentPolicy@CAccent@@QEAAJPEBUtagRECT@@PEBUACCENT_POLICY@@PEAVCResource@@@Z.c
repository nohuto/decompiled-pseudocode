/*
 * XREFs of ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180010178
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001C234 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18003B370 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x180070C04 (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x180096CB4 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 * Callees:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180002CD0 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180002E10 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180003044 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180005FA4 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000F9A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x1800104E0 (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z @ 0x180010510 (-SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z.c)
 *     ?_AddOcclusionInstruction@CAccent@@IEAAJXZ @ 0x180010824 (-_AddOcclusionInstruction@CAccent@@IEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x1800259D8 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Create@CAccentAcrylicBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003B45C (-Create@CAccentAcrylicBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180080000 (-Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x180080EF8 (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180080F44 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x1800A3144 (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
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
  int v12; // ebx
  void (__fastcall *v13)(CVisual *__hidden, unsigned int); // rax
  CBaseObject *v14; // rdx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rdx
  CBaseObject *v17; // rcx
  int v18; // eax
  void (__fastcall *v19)(CVisual *__hidden, unsigned int); // rax
  int v20; // eax
  void (__fastcall *v22)(CVisual *__hidden, unsigned int); // rax
  struct CVisual *v23; // rdx
  char v24; // al
  bool v25; // zf
  unsigned int v26; // edx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // eax
  int v32; // eax
  CAccentTransition *v33; // rcx
  CBaseObject *v34; // rcx
  CBaseObject *v35; // rcx
  int v36; // eax
  int v37; // eax
  CBaseObject *v38; // rcx
  CBaseObject *v39; // rcx
  CBaseObject *v40; // rcx
  CBaseObject *v41; // rcx
  int v42; // eax
  CBaseObject *v43; // rcx
  CBaseObject *v44; // rcx
  unsigned int v45; // eax
  int v46; // edx
  int v47; // ecx
  __m128i v48; // xmm0
  int v49; // eax
  float v50; // xmm0_4
  int v51; // xmm0_4
  _DWORD *v52; // rcx
  int updated; // eax
  int v54; // eax
  __int64 v55; // rdx
  CBaseObject *v56; // rcx
  CBaseObject *v57; // rcx
  unsigned __int64 v58; // r9
  __int64 v59; // rdx
  int v60; // [rsp+20h] [rbp-40h]
  struct _RTL_CRITICAL_SECTION *v61; // [rsp+30h] [rbp-30h] BYREF
  struct _MARGINS v62; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v61 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *(_QWORD *)&v62.cxLeftWidth = 0LL;
  *(_QWORD *)&v62.cyTopHeight = 0LL;
  CVisual::SetInsetFromParent(this, &v62);
  *((struct tagRECT *)this + 37) = *a2;
  if ( (a3->m128i_i8[4] & 4) != 0 )
  {
    v30 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 104);
    v31 = 0;
    if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 103) >= 0 )
      v31 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 103);
    *((_DWORD *)this + 150) = *((_DWORD *)this + 148) + v31;
    v32 = 0;
    if ( v30 >= 0 )
      v32 = v30;
    *((_DWORD *)this + 151) = *((_DWORD *)this + 149) + v32;
    CDesktopManager::SetBackStop(this);
  }
  v8 = *a3;
  *((_BYTE *)this + 373) = 0;
  v9 = _mm_cvtsi128_si32(v8);
  v62 = (struct _MARGINS)v8;
  if ( (unsigned int)(v9 - 2) <= 1 )
  {
    if ( v9 != 4 )
    {
LABEL_37:
      v24 = 1;
LABEL_38:
      if ( (*((_BYTE *)this + 284) & 2) != 0 && v24 )
      {
        VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
        v38 = (CBaseObject *)*((_QWORD *)this + 40);
        if ( v38 )
        {
          CBaseObject::Release(v38);
          *((_QWORD *)this + 40) = 0LL;
        }
        v39 = (CBaseObject *)*((_QWORD *)this + 41);
        if ( v39 )
        {
          CBaseObject::Release(v39);
          *((_QWORD *)this + 41) = 0LL;
        }
        v40 = (CBaseObject *)*((_QWORD *)this + 42);
        if ( v40 )
        {
          CBaseObject::Release(v40);
          *((_QWORD *)this + 42) = 0LL;
        }
        v41 = (CBaseObject *)*((_QWORD *)this + 43);
        if ( v41 )
        {
          CBaseObject::Release(v41);
          *((_QWORD *)this + 43) = 0LL;
        }
      }
      *(__m128i *)((char *)this + 280) = v8;
      v25 = (*((_BYTE *)this + 284) & 1) == 0;
      v26 = *((_DWORD *)this + 72);
      *((_DWORD *)this + 88) = v26;
      if ( !v25 )
        CAccent::_UpdateAccentBackground(this, v26);
      v27 = *((_DWORD *)this + 70);
      if ( v27 == 3 )
      {
        if ( !*((_QWORD *)this + 42) )
        {
          v42 = CAccentBlurBehind::Create(
                  *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                  (struct CAccentBlurBehind **)this + 42);
          v12 = v42;
          if ( v42 < 0 )
          {
            v58 = (unsigned int)v42;
            v59 = 1173LL;
            goto LABEL_110;
          }
        }
        CAccent::_UpdateAccentBlurBehind(this);
      }
      else if ( v27 == 4 )
      {
        if ( !*((_QWORD *)this + 43) )
        {
          v28 = CAccentAcrylicBlurBehind::Create(
                  *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                  (struct CAccentAcrylicBlurBehind **)this + 43);
          v12 = v28;
          if ( v28 < 0 )
          {
            v58 = (unsigned int)v28;
            v59 = 1181LL;
            goto LABEL_110;
          }
        }
        (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
      }
      else
      {
        v43 = (CBaseObject *)*((_QWORD *)this + 42);
        if ( v43 )
        {
          CBaseObject::Release(v43);
          *((_QWORD *)this + 42) = 0LL;
        }
        v44 = (CBaseObject *)*((_QWORD *)this + 43);
        if ( v44 )
        {
          CBaseObject::Release(v44);
          *((_QWORD *)this + 43) = 0LL;
        }
        VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
        v45 = 0;
        v46 = *((_DWORD *)this + 151) - *((_DWORD *)this + 149);
        v47 = *((_DWORD *)this + 150) - *((_DWORD *)this + 148);
        *(_QWORD *)&v62.cxLeftWidth = 0LL;
        if ( v47 >= 0 )
          v45 = v47;
        v48 = _mm_cvtsi32_si128(v45);
        v49 = 0;
        LODWORD(v50) = _mm_cvtepi32_ps(v48).m128_u32[0];
        if ( v46 >= 0 )
          v49 = v46;
        *(float *)&v62.cyTopHeight = v50 + 0.0;
        *(float *)&v62.cyBottomHeight = (float)v49 + 0.0;
        *(float *)&v51 = CAccent::_GetSolidFillOpacity(this);
        updated = CAccent::_UpdateSolidFill(v52, this, *((_DWORD *)this + 88), (const __m128i *)&v62, v51);
        v12 = updated;
        if ( updated < 0 )
        {
          v58 = (unsigned int)updated;
          v59 = 1197LL;
          goto LABEL_110;
        }
      }
      v29 = CAccent::_AddOcclusionInstruction(this);
      v12 = v29;
      if ( v29 < 0 )
      {
        v58 = (unsigned int)v29;
        v59 = 1201LL;
        goto LABEL_110;
      }
      (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 0x4000LL);
      goto LABEL_18;
    }
LABEL_36:
    v24 = 0;
    if ( *((_DWORD *)this + 70) == v9 )
      goto LABEL_38;
    goto LABEL_37;
  }
  if ( v9 == 4 )
    goto LABEL_36;
  if ( *((_BYTE *)this + 312) )
  {
    v33 = (CAccentTransition *)*((_QWORD *)this + 45);
    if ( v33 )
      CAccentTransition::StopAnimation(v33);
    v62.cyBottomHeight = 0;
    v8 = (__m128i)v62;
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
      v58 = (unsigned int)started;
      v59 = 1120LL;
      goto LABEL_110;
    }
  }
  v13 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
  if ( v13 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(this, 0x1000u);
  else
    v13(this, 4096u);
  if ( (*((_BYTE *)this + 284) & 2) != 0 )
  {
    VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
    v34 = (CBaseObject *)*((_QWORD *)this + 40);
    if ( v34 )
    {
      CBaseObject::Release(v34);
      *((_QWORD *)this + 40) = 0LL;
    }
    v35 = (CBaseObject *)*((_QWORD *)this + 41);
    if ( v35 )
    {
      CBaseObject::Release(v35);
      *((_QWORD *)this + 41) = 0LL;
    }
  }
  v14 = (CBaseObject *)*((_QWORD *)this + 42);
  v15 = v14;
  if ( v14 && *((_QWORD *)v14 + 3) )
  {
    v36 = VisualCollection::Remove((CAccent *)((char *)this + 32), v14);
    v12 = v36;
    if ( v36 < 0 )
    {
      v58 = (unsigned int)v36;
      v59 = 1135LL;
      goto LABEL_110;
    }
    v15 = (CBaseObject *)*((_QWORD *)this + 42);
  }
  if ( v15 )
  {
    CBaseObject::Release(v15);
    *((_QWORD *)this + 42) = 0LL;
  }
  v16 = (CBaseObject *)*((_QWORD *)this + 43);
  v17 = v16;
  if ( v16 && *((_QWORD *)v16 + 3) )
  {
    v37 = VisualCollection::Remove((CAccent *)((char *)this + 32), v16);
    v12 = v37;
    if ( v37 < 0 )
    {
      v58 = (unsigned int)v37;
      v59 = 1141LL;
      goto LABEL_110;
    }
    v17 = (CBaseObject *)*((_QWORD *)this + 43);
  }
  if ( v17 )
  {
    CBaseObject::Release(v17);
    *((_QWORD *)this + 43) = 0LL;
  }
LABEL_18:
  if ( (*((_BYTE *)this + 284) & 0xE0) == 0 )
  {
    v23 = (struct CVisual *)*((_QWORD *)this + 50);
    if ( !v23 )
    {
LABEL_33:
      v12 = 0;
LABEL_34:
      if ( v12 >= 0 )
        goto LABEL_22;
      v58 = (unsigned int)v12;
      v59 = 1212LL;
LABEL_110:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v59,
        (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
        (const char *)v58,
        v60);
      goto LABEL_26;
    }
    v54 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 51) + 32LL), v23);
    v12 = v54;
    if ( v54 >= 0 )
    {
      v54 = VisualCollection::Remove((CAccent *)((char *)this + 32), *((struct CVisual **)this + 51));
      v12 = v54;
      if ( v54 >= 0 )
      {
        v56 = (CBaseObject *)*((_QWORD *)this + 51);
        if ( v56 )
        {
          CBaseObject::Release(v56);
          *((_QWORD *)this + 51) = 0LL;
        }
        v57 = (CBaseObject *)*((_QWORD *)this + 50);
        if ( v57 )
        {
          CBaseObject::Release(v57);
          *((_QWORD *)this + 50) = 0LL;
        }
        goto LABEL_33;
      }
      v55 = 1061LL;
    }
    else
    {
      v55 = 1060LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v55,
      (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v54,
      v60);
    goto LABEL_34;
  }
  v18 = CAccent::_EnsureBorderShadowAtlas(this);
  v12 = v18;
  if ( v18 < 0 )
  {
    v58 = (unsigned int)v18;
    v59 = 1207LL;
    goto LABEL_110;
  }
  v19 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
  if ( v19 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(this, 2u);
  else
    v19(this, 2u);
LABEL_22:
  v20 = *((_DWORD *)this + 71);
  if ( (v20 & 0x10) != 0 )
  {
    CAccent::SetClipRegion(this, a4);
  }
  else if ( (v20 & 0x200) != 0 && *((_QWORD *)this + 49) )
  {
    v22 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v22 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x8000u);
    else
      v22(this, 0x8000u);
  }
  v12 = 0;
LABEL_26:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v61);
  return (unsigned int)v12;
}
