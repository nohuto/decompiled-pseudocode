/*
 * XREFs of ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800130F0
 * Callers:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180006A38 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x1800367A0 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18003689C (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012440 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x1800124E0 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180012638 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x1800126A4 (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180012CFC (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180015940 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015990 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800256C0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180025B30 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180025D68 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180026940 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180026E58 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAPEAV4@@Z @ 0x18002DF04 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAP.c)
 *     ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x18002FAB0 (-Remove@-$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x1800395B8 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z @ 0x18007FC84 (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x180081464 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateProperties(CSecondaryWindowRepresentation **this, int a2)
{
  int v2; // esi
  int v3; // edi
  int updated; // r14d
  CSecondaryWindowRepresentation *v6; // rax
  int v7; // edx
  int v8; // ecx
  LONG v9; // eax
  LONG v10; // eax
  __int64 (__fastcall *v11)(CVisual *__hidden, const struct tagSIZE *); // rax
  int v12; // eax
  CSecondaryWindowRepresentation *v13; // rax
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rcx
  struct tagSIZE **v18; // r14
  struct tagSIZE v19; // rcx
  struct IDwmWindow *v20; // rax
  int BrushForCVI; // eax
  __m128i *v22; // rbp
  __int64 v23; // r10
  unsigned int v24; // eax
  unsigned int v25; // edx
  CBaseObject *v26; // rcx
  CBaseObject *v27; // rcx
  CBaseObject *v28; // rcx
  CSecondaryWindowRepresentation *v29; // rax
  char v30; // al
  CSecondaryWindowRepresentation *v31; // rax
  double v32; // xmm1_8
  int v33; // eax
  double v34; // xmm1_8
  int v35; // r9d
  CBaseObject *v36; // rcx
  CBaseObject *v37; // rcx
  CSecondaryWindowRepresentation *v38; // r8
  bool v39; // dl
  int v40; // r9d
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  int v44; // r8d
  int v45; // eax
  CBaseObject *v46; // rcx
  CBaseObject *v47; // rcx
  CBaseObject *v48; // rcx
  CBaseObject *v49; // rcx
  CBaseObject *v50; // rcx
  unsigned int v51; // [rsp+20h] [rbp-38h]
  struct tagSIZE v52; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  v3 = 0;
  updated = CThumbnailVisual::_UpdateAnimatedProperties((CThumbnailVisual *)this, a2);
  if ( (v2 & 4) != 0 )
  {
    v29 = this[46];
    if ( v29 )
    {
      v30 = *((_BYTE *)v29 + 35);
      if ( *((_BYTE *)this + 356) != v30 )
      {
        *((_BYTE *)this + 356) = v30;
        if ( v30 )
        {
          v34 = 0.0;
          this[42] = this[23];
        }
        else
        {
          v34 = *((double *)this + 42);
        }
        CVisual::SetOpacity((CVisual *)this, v34);
      }
    }
  }
  if ( updated < 0 && (v2 & 1) != 0 && this[46] )
  {
    if ( CThumbnailVisual::_IsThumbnailCVIStatic((CThumbnailVisual *)this) )
    {
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x4000);
    }
    else
    {
      v52 = (struct tagSIZE)*((_QWORD *)this[46] + 5);
      CVisual::SetOffset((CVisual *)this, (const struct tagPOINT *)&v52);
    }
    v6 = this[46];
    v7 = *((_DWORD *)v6 + 13) - *((_DWORD *)v6 + 11);
    v8 = *((_DWORD *)v6 + 12) - *((_DWORD *)v6 + 10);
    v9 = 0;
    if ( v8 >= 0 )
      v9 = v8;
    v52.cx = v9;
    v10 = 0;
    if ( v7 >= 0 )
      v10 = v7;
    v52.cy = v10;
    v11 = (__int64 (__fastcall *)(CVisual *__hidden, const struct tagSIZE *))*((_QWORD *)*this + 10);
    if ( v11 == CVisual::SetSize )
      v12 = CVisual::SetSize((CVisual *)this, &v52);
    else
      v12 = v11((CVisual *)this, &v52);
    v3 = v12;
    if ( v12 < 0 )
    {
      v51 = 320;
      goto LABEL_82;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 4096);
    if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this) )
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x10000);
  }
  if ( !*((_BYTE *)this + 356) && updated < 0 && (v2 & 4) != 0 )
  {
    v31 = this[46];
    if ( v31 )
    {
      if ( (*((_BYTE *)v31 + 36) & 4) != 0 )
      {
        v32 = (double)*((unsigned __int8 *)v31 + 72) / 255.0;
        *((double *)this + 42) = v32;
        CVisual::SetOpacity((CVisual *)this, v32);
      }
    }
  }
  if ( (v2 & 2) != 0 )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x4000);
  if ( (v2 & 0x10) != 0
    && (!CWindowData::IsImmersiveWindow(*((CWindowData **)this[46] + 3))
     || !AreAllMarginsZero((const struct _MARGINS *)(*((_QWORD *)this[46] + 3) + 64LL))) )
  {
    v15 = this[48];
    if ( v15 )
    {
      CBaseObject::Release(v15);
      this[48] = 0LL;
    }
    v16 = this[54];
    if ( v16 )
    {
      CBaseObject::Release(v16);
      this[54] = 0LL;
    }
    v17 = this[47];
    if ( v17 )
    {
      CBaseObject::Release(v17);
      this[47] = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000);
  }
  if ( (v2 & 8) != 0 )
  {
    v13 = this[46];
    if ( v13 )
    {
      *((_BYTE *)this + 472) = *(_DWORD *)((char *)v13 + 73) != 0;
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000);
    }
  }
  if ( (v2 & 0x80000) != 0 )
  {
    BrushForCVI = CVisual::MoveToFront((CVisual *)this, 0);
    v3 = BrushForCVI;
    if ( BrushForCVI < 0 )
    {
      v51 = 365;
LABEL_83:
      v35 = BrushForCVI;
      goto LABEL_84;
    }
  }
  if ( (v2 & 0x400000) != 0 )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000);
  if ( (v2 & 0xC000000) == 0xC000000 )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000);
  if ( (v2 & 0x30000000) == 0x30000000 )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x20000);
  if ( (v2 & 0xC0000000) == 0xC0000000 )
  {
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000);
    if ( (v2 & 0x40000000) != 0 )
    {
      BrushForCVI = CThumbnailVisual::EnsureVisualBrush((CThumbnailVisual *)this);
      v3 = BrushForCVI;
      if ( BrushForCVI < 0 )
      {
        v51 = 388;
        goto LABEL_83;
      }
    }
    else
    {
      v36 = this[48];
      if ( v36 )
      {
        CBaseObject::Release(v36);
        this[48] = 0LL;
      }
      v37 = this[54];
      if ( v37 )
      {
        CBaseObject::Release(v37);
        this[54] = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000);
    }
  }
  if ( (v2 & 0x100000) != 0 )
  {
    if ( this[47] && this[54] )
    {
      v38 = this[46];
      v39 = 0;
      if ( (*((_BYTE *)v38 + 36) & 3) == 3 && *((_BYTE *)this + 474) )
      {
        v40 = 0;
        if ( *((_DWORD *)v38 + 12) - *((_DWORD *)v38 + 10) >= 0 )
          v40 = *((_DWORD *)v38 + 12) - *((_DWORD *)v38 + 10);
        v41 = 0;
        if ( *((_DWORD *)v38 + 16) - *((_DWORD *)v38 + 14) >= 0 )
          v41 = *((_DWORD *)v38 + 16) - *((_DWORD *)v38 + 14);
        if ( v40 == v41 )
        {
          v42 = *((_DWORD *)v38 + 13) - *((_DWORD *)v38 + 11);
          v43 = *((_DWORD *)v38 + 17) - *((_DWORD *)v38 + 15);
          v44 = 0;
          if ( v42 >= 0 )
            v44 = v42;
          v45 = 0;
          if ( v43 >= 0 )
            v45 = v43;
          if ( v44 == v45 && v40 == *((_DWORD *)this + 127) )
            v39 = v44 == *((_DWORD *)this + 128);
        }
      }
      CSecondaryWindowRepresentation::MakeStatic(
        this[47],
        v39,
        (const struct MilPointAndSizeL *)((char *)this + 532),
        this + 54);
      v46 = this[48];
      if ( v46 )
      {
        CBaseObject::Release(v46);
        this[48] = 0LL;
      }
      BrushForCVI = CSecondaryWindowRepresentation::CreateBrushForCVI(v46, 2LL, this[54], this[50], 0LL, this + 48);
      v3 = BrushForCVI;
      if ( BrushForCVI < 0 )
      {
        v51 = 425;
        goto LABEL_83;
      }
      if ( !*((_BYTE *)this[47] + 160) )
      {
        if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this) )
        {
          v2 = 0x800000;
          *((_DWORD *)this[46] + 9) |= 0x800000u;
        }
        else
        {
          CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000);
          CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x40000);
          CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 4096);
          *((_BYTE *)this + 474) = 0;
          CVisual::RenderRecursive((CVisual *)this);
        }
      }
      goto LABEL_34;
    }
    v18 = (struct tagSIZE **)(this + 46);
    if ( !CWindowData::IsShellManaged(*((CWindowData **)this[46] + 3))
      || (v19 = (*v18)[3], *(_QWORD *)(*(_QWORD *)&v19 + 424LL))
      || (v20 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&v19 + 24LL) + 376LL))(*(_QWORD *)(*(_QWORD *)&v19 + 24LL))) == 0LL )
    {
LABEL_59:
      v26 = this[48];
      if ( v26 )
      {
        CBaseObject::Release(v26);
        this[48] = 0LL;
      }
      v27 = this[54];
      if ( v27 )
      {
        CBaseObject::Release(v27);
        this[54] = 0LL;
      }
      v28 = this[47];
      if ( v28 )
      {
        CBaseObject::Release(v28);
        this[47] = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000);
      goto LABEL_34;
    }
    v52 = 0LL;
    BrushForCVI = CWindowList::GetSyncedWindowData(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                    v20,
                    0,
                    (struct CWindowData **)&v52);
    v3 = BrushForCVI;
    if ( BrushForCVI < 0 )
    {
      v51 = 455;
      goto LABEL_83;
    }
    DynArray<CThumbnailData *,0>::Remove(*(_QWORD *)&(*v18)[3] + 512LL, this + 46);
    v22 = (__m128i *)v52;
    v23 = *(_QWORD *)&v52 + 512LL;
    (*v18)[3] = v52;
    v24 = *(_DWORD *)(v23 + 24);
    v25 = v24 + 1;
    v3 = v24 + 1 < v24 ? 0x80070216 : 0;
    if ( v24 + 1 < v24 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v25 > *(_DWORD *)(v23 + 20) )
    {
      v33 = DynArrayImpl<0>::AddMultipleAndSet(v23, 8LL, 1LL, this + 46);
      v3 = v33;
      if ( v33 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v23 + 8LL * v24) = *v18;
      *(_DWORD *)(v23 + 24) = v25;
    }
    if ( v3 >= 0 )
    {
      OffsetRect((LPRECT)&(*v18)[7], _mm_cvtsi128_si32(v22[5]), _mm_cvtsi128_si32(_mm_srli_si128(v22[5], 8)));
      goto LABEL_59;
    }
    v51 = 458;
LABEL_82:
    v35 = v3;
LABEL_84:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, v51);
    goto LABEL_38;
  }
LABEL_34:
  if ( (v2 & 0x800000) != 0 )
  {
    v47 = this[48];
    if ( v47 )
    {
      CBaseObject::Release(v47);
      this[48] = 0LL;
    }
    v48 = this[54];
    if ( v48 )
    {
      CBaseObject::Release(v48);
      this[54] = 0LL;
    }
    v49 = this[47];
    if ( v49 )
    {
      CBaseObject::Release(v49);
      this[47] = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000);
    CThumbnailVisual::OnRepresentationTypeUpdated((CThumbnailVisual *)this);
  }
  if ( *((_BYTE *)this + 472) && !*((_DWORD *)this + 68) )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000);
LABEL_38:
  if ( v3 < 0 )
  {
    v50 = this[58];
    if ( v50 )
    {
      CBaseObject::Release(v50);
      this[58] = 0LL;
    }
    this[58] = 0LL;
  }
  return (unsigned int)v3;
}
