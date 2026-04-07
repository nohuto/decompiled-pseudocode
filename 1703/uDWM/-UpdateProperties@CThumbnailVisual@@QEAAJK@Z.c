/*
 * XREFs of ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180038EF0
 * Callers:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000ACF4 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x18003C440 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18003C4CC (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 * Callees:
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x18000DE54 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x180015EAC (-Remove@-$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180023260 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x1800233E0 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023604 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180024460 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180035840 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035C98 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x18003692C (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180038390 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x180038430 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180038590 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x1800385FC (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180038AF0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAPEAV4@@Z @ 0x180039820 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAP.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z @ 0x18007F584 (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x18007FD18 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateProperties(CThumbnailVisual *this, int a2)
{
  int v2; // esi
  int v3; // edi
  int updated; // r14d
  _DWORD *v6; // rax
  int v7; // edx
  int v8; // ecx
  LONG v9; // eax
  LONG v10; // eax
  __int64 (__fastcall *v11)(struct tagSIZE *, const struct tagSIZE *); // rax
  int v12; // eax
  __int64 v13; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rcx
  struct tagSIZE **v18; // r14
  struct tagSIZE v19; // rcx
  struct IDwmWindow *v20; // rax
  int BrushForCVI; // eax
  __m128i *v22; // rbp
  unsigned int v23; // edx
  __int64 v24; // r10
  __int64 v25; // rcx
  unsigned int v26; // eax
  CBaseObject *v27; // rcx
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  char v32; // al
  double v33; // xmm1_8
  int v34; // r9d
  __int64 v35; // rax
  double v36; // xmm1_8
  CBaseObject *v37; // rcx
  CBaseObject *v38; // rcx
  __int64 v39; // r8
  bool v40; // r10
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // r8d
  CBaseObject *v48; // rcx
  CBaseObject *v49; // rcx
  CBaseObject *v50; // rcx
  CBaseObject *v51; // rcx
  CBaseObject *v52; // rcx
  unsigned int v53; // [rsp+20h] [rbp-38h]
  unsigned int v54; // [rsp+68h] [rbp+10h]
  struct tagSIZE v55; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  v3 = 0;
  updated = CThumbnailVisual::_UpdateAnimatedProperties(this, a2);
  if ( (v2 & 4) != 0 )
  {
    v31 = *((_QWORD *)this + 46);
    if ( v31 )
    {
      v32 = *(_BYTE *)(v31 + 35);
      if ( *((_BYTE *)this + 356) != v32 )
      {
        *((_BYTE *)this + 356) = v32;
        if ( v32 )
        {
          v33 = 0.0;
          *((_QWORD *)this + 42) = *((_QWORD *)this + 23);
        }
        else
        {
          v33 = *((double *)this + 42);
        }
        CVisual::SetOpacity(this, v33);
      }
    }
  }
  if ( updated < 0 && (v2 & 1) != 0 && *((_QWORD *)this + 46) )
  {
    if ( CThumbnailVisual::_IsThumbnailCVIStatic(this) )
    {
      CThumbnailVisual::SetDirtyFlags(this, 0x4000);
    }
    else
    {
      v55 = *(struct tagSIZE *)(*((_QWORD *)this + 46) + 40LL);
      CVisual::SetOffset((struct tagPOINT *)this, (const struct tagPOINT *)&v55);
    }
    v6 = (_DWORD *)*((_QWORD *)this + 46);
    v7 = v6[13] - v6[11];
    v8 = v6[12] - v6[10];
    v9 = 0;
    if ( v8 >= 0 )
      v9 = v8;
    v55.cx = v9;
    v10 = 0;
    if ( v7 >= 0 )
      v10 = v7;
    v55.cy = v10;
    v11 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)this + 80LL);
    if ( v11 == CVisual::SetSize )
      v12 = CVisual::SetSize((struct tagSIZE *)this, &v55);
    else
      v12 = v11((struct tagSIZE *)this, &v55);
    v3 = v12;
    if ( v12 < 0 )
    {
      v53 = 320;
      goto LABEL_80;
    }
    CThumbnailVisual::SetDirtyFlags(this, 4096);
    if ( CThumbnailVisual::_IsImmersiveIconic(this) )
      CThumbnailVisual::SetDirtyFlags(this, 0x10000);
  }
  if ( !*((_BYTE *)this + 356) && updated < 0 && (v2 & 4) != 0 )
  {
    v35 = *((_QWORD *)this + 46);
    if ( v35 )
    {
      if ( (*(_BYTE *)(v35 + 36) & 4) != 0 )
      {
        v36 = (double)*(unsigned __int8 *)(v35 + 72) / 255.0;
        *((double *)this + 42) = v36;
        CVisual::SetOpacity(this, v36);
      }
    }
  }
  if ( (v2 & 2) != 0 )
    CThumbnailVisual::SetDirtyFlags(this, 0x4000);
  if ( (v2 & 0x10) != 0
    && (!CWindowData::IsImmersiveWindow(*(CWindowData **)(*((_QWORD *)this + 46) + 24LL))
     || !AreAllMarginsZero((const struct _MARGINS *)(*(_QWORD *)(*((_QWORD *)this + 46) + 24LL) + 64LL))) )
  {
    v15 = (CBaseObject *)*((_QWORD *)this + 48);
    if ( v15 )
    {
      CBaseObject::Release(v15);
      *((_QWORD *)this + 48) = 0LL;
    }
    v16 = (CBaseObject *)*((_QWORD *)this + 54);
    if ( v16 )
    {
      CBaseObject::Release(v16);
      *((_QWORD *)this + 54) = 0LL;
    }
    v17 = (CBaseObject *)*((_QWORD *)this + 47);
    if ( v17 )
    {
      CBaseObject::Release(v17);
      *((_QWORD *)this + 47) = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x2000);
  }
  if ( (v2 & 8) != 0 )
  {
    v13 = *((_QWORD *)this + 46);
    if ( v13 )
    {
      *((_BYTE *)this + 472) = *(_DWORD *)(v13 + 73) != 0;
      CThumbnailVisual::SetDirtyFlags(this, 0x2000);
    }
  }
  if ( (v2 & 0x80000) != 0 )
  {
    BrushForCVI = CVisual::MoveToFront(this, 0);
    v3 = BrushForCVI;
    if ( BrushForCVI < 0 )
    {
      v53 = 365;
LABEL_81:
      v34 = BrushForCVI;
      goto LABEL_82;
    }
  }
  if ( (v2 & 0x400000) != 0 )
    CThumbnailVisual::SetDirtyFlags(this, 0x2000);
  if ( (v2 & 0xC000000) == 0xC000000 )
    CThumbnailVisual::SetDirtyFlags(this, 0x8000);
  if ( (v2 & 0x30000000) == 0x30000000 )
    CThumbnailVisual::SetDirtyFlags(this, 0x20000);
  if ( (v2 & 0xC0000000) == 0xC0000000 )
  {
    CThumbnailVisual::SetDirtyFlags(this, 0x8000);
    if ( (v2 & 0x40000000) != 0 )
    {
      BrushForCVI = CThumbnailVisual::EnsureVisualBrush(this);
      v3 = BrushForCVI;
      if ( BrushForCVI < 0 )
      {
        v53 = 388;
        goto LABEL_81;
      }
    }
    else
    {
      v37 = (CBaseObject *)*((_QWORD *)this + 48);
      if ( v37 )
      {
        CBaseObject::Release(v37);
        *((_QWORD *)this + 48) = 0LL;
      }
      v38 = (CBaseObject *)*((_QWORD *)this + 54);
      if ( v38 )
      {
        CBaseObject::Release(v38);
        *((_QWORD *)this + 54) = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags(this, 0x2000);
    }
  }
  if ( (v2 & 0x100000) != 0 )
  {
    if ( *((_QWORD *)this + 47) && *((_QWORD *)this + 54) )
    {
      v39 = *((_QWORD *)this + 46);
      v40 = 0;
      if ( (*(_BYTE *)(v39 + 36) & 3) == 3 && *((_BYTE *)this + 474) )
      {
        v41 = 0;
        if ( *(_DWORD *)(v39 + 64) - *(_DWORD *)(v39 + 56) >= 0 )
          v41 = *(_DWORD *)(v39 + 64) - *(_DWORD *)(v39 + 56);
        v42 = 0;
        if ( *(_DWORD *)(v39 + 48) - *(_DWORD *)(v39 + 40) >= 0 )
          v42 = *(_DWORD *)(v39 + 48) - *(_DWORD *)(v39 + 40);
        if ( v42 == v41 )
        {
          v43 = 0;
          if ( *(_DWORD *)(v39 + 68) - *(_DWORD *)(v39 + 60) >= 0 )
            v43 = *(_DWORD *)(v39 + 68) - *(_DWORD *)(v39 + 60);
          v44 = 0;
          if ( *(_DWORD *)(v39 + 52) - *(_DWORD *)(v39 + 44) >= 0 )
            v44 = *(_DWORD *)(v39 + 52) - *(_DWORD *)(v39 + 44);
          if ( v44 == v43 )
          {
            v45 = 0;
            if ( *(_DWORD *)(v39 + 48) - *(_DWORD *)(v39 + 40) >= 0 )
              v45 = *(_DWORD *)(v39 + 48) - *(_DWORD *)(v39 + 40);
            if ( v45 == *((_DWORD *)this + 127) )
            {
              v46 = *(_DWORD *)(v39 + 52) - *(_DWORD *)(v39 + 44);
              v47 = 0;
              v40 = 0;
              if ( v46 >= 0 )
                v47 = v46;
              if ( v47 == *((_DWORD *)this + 128) )
                v40 = 1;
            }
          }
        }
      }
      CSecondaryWindowRepresentation::MakeStatic(
        *((CSecondaryWindowRepresentation **)this + 47),
        v40,
        (CThumbnailVisual *)((char *)this + 532),
        (struct CResource **)this + 54);
      v48 = (CBaseObject *)*((_QWORD *)this + 48);
      if ( v48 )
      {
        CBaseObject::Release(v48);
        *((_QWORD *)this + 48) = 0LL;
      }
      BrushForCVI = CSecondaryWindowRepresentation::CreateBrushForCVI(
                      v48,
                      2LL,
                      *((_QWORD *)this + 54),
                      *((_QWORD *)this + 50),
                      0LL,
                      (char *)this + 384);
      v3 = BrushForCVI;
      if ( BrushForCVI < 0 )
      {
        v53 = 425;
        goto LABEL_81;
      }
      if ( !*(_BYTE *)(*((_QWORD *)this + 47) + 160LL) )
      {
        if ( CThumbnailVisual::_IsImmersiveIconic(this) )
        {
          *(_DWORD *)(*((_QWORD *)this + 46) + 36LL) |= 0x800000u;
          v2 |= 0x800000u;
        }
        else
        {
          CThumbnailVisual::SetDirtyFlags(this, 0x8000);
          CThumbnailVisual::SetDirtyFlags(this, 0x40000);
          CThumbnailVisual::SetDirtyFlags(this, 4096);
          *((_BYTE *)this + 474) = 0;
          CVisual::RenderRecursive(this);
        }
      }
      goto LABEL_34;
    }
    v18 = (struct tagSIZE **)((char *)this + 368);
    if ( !CWindowData::IsShellManaged(*(CWindowData **)(*((_QWORD *)this + 46) + 24LL))
      || (v19 = (*v18)[3], *(_QWORD *)(*(_QWORD *)&v19 + 424LL))
      || (v20 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&v19 + 24LL) + 376LL))(*(_QWORD *)(*(_QWORD *)&v19 + 24LL))) == 0LL )
    {
LABEL_61:
      v27 = (CBaseObject *)*((_QWORD *)this + 48);
      if ( v27 )
      {
        CBaseObject::Release(v27);
        *((_QWORD *)this + 48) = 0LL;
      }
      v28 = (CBaseObject *)*((_QWORD *)this + 54);
      if ( v28 )
      {
        CBaseObject::Release(v28);
        *((_QWORD *)this + 54) = 0LL;
      }
      v29 = (CBaseObject *)*((_QWORD *)this + 47);
      if ( v29 )
      {
        CBaseObject::Release(v29);
        *((_QWORD *)this + 47) = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags(this, 0x2000);
      goto LABEL_34;
    }
    v55 = 0LL;
    BrushForCVI = CWindowList::GetSyncedWindowData(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                    v20,
                    0,
                    (struct CWindowData **)&v55);
    v3 = BrushForCVI;
    if ( BrushForCVI < 0 )
    {
      v53 = 455;
      goto LABEL_81;
    }
    DynArray<CThumbnailData *,0>::Remove((__int64 *)(*(_QWORD *)&(*v18)[3] + 512LL), (__int64 *)this + 46);
    v22 = (__m128i *)v55;
    v23 = v54;
    v24 = *(_QWORD *)&v55 + 512LL;
    (*v18)[3] = v55;
    v25 = *(unsigned int *)(v24 + 24);
    v26 = v25 + 1;
    if ( (int)v25 + 1 >= (unsigned int)v25 )
      v23 = v25 + 1;
    v3 = v26 < (unsigned int)v25 ? 0x80070216 : 0;
    if ( v26 < (unsigned int)v25 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v23 > *(_DWORD *)(v24 + 20) )
    {
      v30 = DynArrayImpl<0>::AddMultipleAndSet(v24, 8u, 1, (char *)this + 368);
      v3 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v24 + 8 * v25) = *v18;
      *(_DWORD *)(v24 + 24) = v23;
    }
    if ( v3 >= 0 )
    {
      OffsetRect((LPRECT)&(*v18)[7], _mm_cvtsi128_si32(v22[5]), _mm_cvtsi128_si32(_mm_srli_si128(v22[5], 8)));
      goto LABEL_61;
    }
    v53 = 458;
LABEL_80:
    v34 = v3;
LABEL_82:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, v53);
    goto LABEL_38;
  }
LABEL_34:
  if ( (v2 & 0x800000) != 0 )
  {
    v49 = (CBaseObject *)*((_QWORD *)this + 48);
    if ( v49 )
    {
      CBaseObject::Release(v49);
      *((_QWORD *)this + 48) = 0LL;
    }
    v50 = (CBaseObject *)*((_QWORD *)this + 54);
    if ( v50 )
    {
      CBaseObject::Release(v50);
      *((_QWORD *)this + 54) = 0LL;
    }
    v51 = (CBaseObject *)*((_QWORD *)this + 47);
    if ( v51 )
    {
      CBaseObject::Release(v51);
      *((_QWORD *)this + 47) = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x2000);
    CThumbnailVisual::OnRepresentationTypeUpdated(this);
  }
  if ( *((_BYTE *)this + 472) && !*((_DWORD *)this + 68) )
    CThumbnailVisual::SetDirtyFlags(this, 0x2000);
LABEL_38:
  if ( v3 < 0 )
  {
    v52 = (CBaseObject *)*((_QWORD *)this + 58);
    if ( v52 )
    {
      CBaseObject::Release(v52);
      *((_QWORD *)this + 58) = 0LL;
    }
    *((_QWORD *)this + 58) = 0LL;
  }
  return (unsigned int)v3;
}
