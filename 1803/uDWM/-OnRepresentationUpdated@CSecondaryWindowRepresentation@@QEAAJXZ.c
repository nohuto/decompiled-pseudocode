/*
 * XREFs of ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002E97C
 * Callers:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800154F4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029BD0 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x18002F1D4 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 * Callees:
 *     ?OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180013550 (-OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800135E0 (-OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x18001571C (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180015824 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x1800158C0 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015990 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180021160 (-OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180025994 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002E830 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18002ED14 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x1800784F0 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnRepresentationUpdated(
        CSecondaryWindowRepresentation *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ebp
  CWindowData *v6; // rcx
  CWindowData **v7; // rsi
  char v8; // r14
  char v9; // r12
  char *v11; // rdi
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  int v17; // eax
  int v18; // eax
  CWindowData *v19; // rcx
  char v20; // r15
  CWindowData *v21; // rdi
  __int64 v22; // rcx
  CWindowData *v23; // rcx
  CWindowData *v24; // rdi
  __int64 v25; // rcx
  int v26; // eax
  CTopLevelWindow3D *v27; // rcx
  void (__fastcall *v28)(CThumbnailVisual *, const struct CSecondaryWindowRepresentation *); // rax
  CWindowData *v29; // rcx
  CWindowData *v30; // rdi
  __int64 v31; // rcx
  CVisual *v32; // rcx
  CBaseObject *v34; // rcx
  CThumbnailVisual *v35; // rcx
  void (__fastcall *v36)(CThumbnailVisual *, const struct CSecondaryWindowRepresentation *); // rax
  CBaseObject *v37; // rcx
  int v38; // eax
  __int128 v39; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v6 = (CWindowData *)*((_QWORD *)this + 4);
  if ( !v6 || *((_BYTE *)this + 160) )
    return v5;
  v7 = (CWindowData **)((char *)this + 64);
  v8 = 1;
  v39 = *((_OWORD *)this + 4);
  if ( (*((_DWORD *)this + 10) & 0x800) != 0 )
  {
    *((_DWORD *)this + 18) = 3;
    *v7 = v6;
  }
  else
  {
    CWindowData::GetIdealWindowRepresentation(
      v6,
      (*((_DWORD *)this + 10) & 0x20) != 0,
      (CSecondaryWindowRepresentation *)((char *)this + 64));
  }
  v9 = 0;
  if ( (CWindowData *)v39 != *v7 || DWORD2(v39) != *((_DWORD *)this + 18) )
  {
    v11 = (char *)this + 208;
    do
    {
      v12 = (CBaseObject *)*((_QWORD *)v11 - 4);
      if ( v12 )
      {
        CBaseObject::Release(v12);
        *((_QWORD *)v11 - 4) = 0LL;
      }
      if ( *(_QWORD *)v11 )
      {
        CBaseObject::Release(*(CBaseObject **)v11);
        *(_QWORD *)v11 = 0LL;
      }
      v13 = (CBaseObject *)*((_QWORD *)v11 - 3);
      if ( v13 )
      {
        CBaseObject::Release(v13);
        *((_QWORD *)v11 - 3) = 0LL;
      }
      v14 = (CBaseObject *)*((_QWORD *)v11 - 2);
      if ( v14 )
      {
        CBaseObject::Release(v14);
        *((_QWORD *)v11 - 2) = 0LL;
      }
      v15 = (CBaseObject *)*((_QWORD *)v11 - 1);
      if ( v15 )
      {
        CBaseObject::Release(v15);
        *((_QWORD *)v11 - 1) = 0LL;
      }
      v16 = (CBaseObject *)*((_QWORD *)v11 + 1);
      if ( v16 )
      {
        CBaseObject::Release(v16);
        *((_QWORD *)v11 + 1) = 0LL;
      }
      v11[16] = 0;
      ++v5;
      v11 += 56;
    }
    while ( v5 < 5 );
    v9 = 1;
    if ( *((_DWORD *)this + 18) == 3 && CWindowData::IsImmersiveWindow(*((CWindowData **)this + 4)) )
    {
      v37 = (CBaseObject *)*((_QWORD *)this + 64);
      if ( v37 )
      {
        CBaseObject::Release(v37);
        *((_QWORD *)this + 64) = 0LL;
      }
      v38 = CImmersiveWindowIconic::Create(
              *((struct CWindowData **)this + 4),
              *((_DWORD *)this + 41),
              (enum DEVICE_SCALE_FACTOR)*((_DWORD *)this + 30),
              (*((_DWORD *)this + 10) & 0x1000) != 0,
              (struct CImmersiveWindowIconic **)this + 64);
      v5 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x1CAu);
        return v5;
      }
    }
    v17 = CWindowData::ChangeSecondaryWindowRepresentation(*((CWindowData **)this + 4), this, (CWindowData **)&v39, a4);
    v5 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x1CDu);
      return v5;
    }
    v18 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(this);
    v5 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x1CEu);
      return v5;
    }
  }
  v19 = 0LL;
  v20 = *((_BYTE *)this + 472);
  v21 = *v7;
  if ( *((_DWORD *)this + 18) == 1 )
    goto LABEL_51;
  if ( *((_DWORD *)this + 18) != 2 )
  {
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_29;
    if ( !CWindowData::IsImmersiveWindow(*v7) )
    {
      v19 = *(CWindowData **)(*((_QWORD *)v21 + 54) + 80LL);
      goto LABEL_29;
    }
    goto LABEL_51;
  }
  v22 = *((_QWORD *)v21 + 53);
  if ( !v22 )
  {
LABEL_51:
    v19 = v21;
    goto LABEL_29;
  }
  v19 = *(CWindowData **)(v22 + 32);
LABEL_29:
  if ( !CWindowData::IsSimpleClientArea(v19) || *((_QWORD *)this + 6) )
    goto LABEL_57;
  v23 = 0LL;
  v24 = *v7;
  switch ( *((_DWORD *)this + 18) )
  {
    case 1:
      goto LABEL_56;
    case 2:
      v25 = *((_QWORD *)v24 + 53);
      if ( v25 )
      {
        v23 = *(CWindowData **)(v25 + 32);
        break;
      }
      goto LABEL_56;
    case 3:
      if ( !CWindowData::IsImmersiveWindow(*v7) )
      {
        v23 = *(CWindowData **)(*((_QWORD *)v24 + 54) + 80LL);
        break;
      }
LABEL_56:
      v23 = v24;
      break;
  }
  if ( CWindowData::IsImmersiveWindow(v23) )
LABEL_57:
    v8 = 0;
  *((_BYTE *)this + 472) = v8;
  if ( !v9 )
  {
    if ( !v20 && !v8 )
      return v5;
    v34 = (CBaseObject *)*((_QWORD *)this + 50);
    if ( v34 )
    {
      CBaseObject::Release(v34);
      *((_QWORD *)this + 50) = 0LL;
    }
  }
  if ( (*((_BYTE *)this + 40) & 2) != 0 )
  {
    v35 = (CThumbnailVisual *)*((_QWORD *)this + 21);
    v36 = *(void (__fastcall **)(CThumbnailVisual *, const struct CSecondaryWindowRepresentation *))(*(_QWORD *)v35 + 16LL);
    if ( v36 == CThumbnailVisual::OnRootVisualChanged )
      CThumbnailVisual::OnRootVisualChanged(v35, this);
    else
      v36(v35, this);
  }
  v26 = *((_DWORD *)this + 6);
  if ( (v26 & 4) == 0 )
  {
    v27 = (CTopLevelWindow3D *)*((_QWORD *)this + 21);
    *((_DWORD *)this + 6) = v26 | 4;
    v28 = **(void (__fastcall ***)(CThumbnailVisual *, const struct CSecondaryWindowRepresentation *))v27;
    if ( v28 == CTopLevelWindow3D::OnSWRInvalidated )
    {
      CTopLevelWindow3D::OnSWRInvalidated(v27, this);
    }
    else if ( v28 == CThumbnailVisual::OnSWRInvalidated )
    {
      CThumbnailVisual::OnSWRInvalidated(v27, this);
    }
    else
    {
      v28(v27, this);
    }
  }
  v29 = 0LL;
  v30 = *v7;
  if ( *((_DWORD *)this + 18) == 1 )
    goto LABEL_52;
  if ( *((_DWORD *)this + 18) != 2 )
  {
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_45;
    if ( !CWindowData::IsImmersiveWindow(*v7) )
    {
      v29 = *(CWindowData **)(*((_QWORD *)v30 + 54) + 80LL);
      goto LABEL_45;
    }
    goto LABEL_52;
  }
  v31 = *((_QWORD *)v30 + 53);
  if ( !v31 )
  {
LABEL_52:
    v29 = v30;
    goto LABEL_45;
  }
  v29 = *(CWindowData **)(v31 + 32);
LABEL_45:
  v32 = (CVisual *)*((_QWORD *)v29 + 49);
  if ( v32 )
    CVisual::PropagateDirtyChildren(v32);
  CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(this);
  return v5;
}
