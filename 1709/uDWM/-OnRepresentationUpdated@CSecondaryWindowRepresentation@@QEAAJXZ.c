/*
 * XREFs of ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E800
 * Callers:
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x18000EFF4 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180011B0C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A0B0 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E5F0 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18000EB30 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x18000F118 (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 *     ?OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180010600 (-OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180010690 (-OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180010B70 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x1800118F0 (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x1800119F0 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x180011A8C (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180019170 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180020E60 (-OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x180071C20 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnRepresentationUpdated(CSecondaryWindowRepresentation *this)
{
  unsigned int v2; // ebp
  CWindowData *v3; // rcx
  CWindowData **v4; // rsi
  char v5; // r14
  char v6; // r12
  int v8; // eax
  int v9; // eax
  CWindowData *v10; // rcx
  char v11; // r15
  CWindowData *v12; // rdi
  CWindowData *v13; // rcx
  CWindowData *v14; // rdi
  int v15; // eax
  CTopLevelWindow3D *v16; // rcx
  void (__fastcall *v17)(CThumbnailVisual *__hidden, const struct CSecondaryWindowRepresentation *); // rax
  CWindowData *v18; // rcx
  CWindowData *v19; // rdi
  CVisual *v20; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  CBaseObject *v24; // rcx
  __int64 v25; // rcx
  CThumbnailVisual *v26; // rcx
  void (__fastcall *v27)(CThumbnailVisual *__hidden, const struct CSecondaryWindowRepresentation *); // rax
  CBaseObject *v28; // rcx
  int v29; // eax
  __int128 v30; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (CWindowData *)*((_QWORD *)this + 4);
  if ( !v3 || *((_BYTE *)this + 160) )
    return v2;
  v4 = (CWindowData **)((char *)this + 64);
  v5 = 1;
  v30 = *((_OWORD *)this + 4);
  if ( (*((_DWORD *)this + 10) & 0x800) != 0 )
  {
    *((_DWORD *)this + 18) = 3;
    *v4 = v3;
  }
  else
  {
    CWindowData::GetIdealWindowRepresentation(
      v3,
      (*((_DWORD *)this + 10) & 0x20) != 0,
      (CSecondaryWindowRepresentation *)((char *)this + 64));
  }
  v6 = 0;
  if ( (CWindowData *)v30 != *v4 || DWORD2(v30) != *((_DWORD *)this + 18) )
  {
    CSecondaryWindowRepresentation::ReleaseAllResources(this);
    v6 = 1;
    if ( *((_DWORD *)this + 18) == 3 && CWindowData::IsImmersiveWindow(*((CWindowData **)this + 4)) )
    {
      v28 = (CBaseObject *)*((_QWORD *)this + 64);
      if ( v28 )
      {
        CBaseObject::Release(v28);
        *((_QWORD *)this + 64) = 0LL;
      }
      v29 = CImmersiveWindowIconic::Create(
              *((struct CWindowData **)this + 4),
              *((_DWORD *)this + 41),
              (enum DEVICE_SCALE_FACTOR)*((_DWORD *)this + 30),
              (*((_DWORD *)this + 10) & 0x1000) != 0,
              (struct CImmersiveWindowIconic **)this + 64);
      v2 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x1CBu);
        return v2;
      }
    }
    v8 = CWindowData::ChangeSecondaryWindowRepresentation(
           *((CWindowData **)this + 4),
           this,
           (struct CWindowRepresentation *)&v30);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1CEu);
      return v2;
    }
    v9 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(this);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1CFu);
      return v2;
    }
  }
  v10 = 0LL;
  v11 = *((_BYTE *)this + 472);
  v12 = *v4;
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v22 = *((_QWORD *)v12 + 53);
      if ( v22 )
      {
        v10 = *(CWindowData **)(v22 + 32);
        goto LABEL_15;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 18) != 3 )
        goto LABEL_15;
      if ( !CWindowData::IsImmersiveWindow(*v4) )
      {
        v10 = *(CWindowData **)(*((_QWORD *)v12 + 54) + 80LL);
        goto LABEL_15;
      }
    }
  }
  v10 = v12;
LABEL_15:
  if ( CWindowData::IsSimpleClientArea(v10) && !*((_QWORD *)this + 6) )
  {
    v13 = 0LL;
    v14 = *v4;
    switch ( *((_DWORD *)this + 18) )
    {
      case 1:
LABEL_18:
        v13 = v14;
        break;
      case 2:
        v25 = *((_QWORD *)v14 + 53);
        if ( !v25 )
          goto LABEL_18;
        v13 = *(CWindowData **)(v25 + 32);
        break;
      case 3:
        if ( CWindowData::IsImmersiveWindow(*v4) )
          goto LABEL_18;
        v13 = *(CWindowData **)(*((_QWORD *)v14 + 54) + 80LL);
        break;
    }
    if ( !CWindowData::IsImmersiveWindow(v13) )
      goto LABEL_20;
  }
  v5 = 0;
LABEL_20:
  *((_BYTE *)this + 472) = v5;
  if ( !v6 )
  {
    if ( !v11 && !v5 )
      return v2;
    v24 = (CBaseObject *)*((_QWORD *)this + 50);
    if ( v24 )
    {
      CBaseObject::Release(v24);
      *((_QWORD *)this + 50) = 0LL;
    }
  }
  if ( (*((_BYTE *)this + 40) & 2) != 0 )
  {
    v26 = (CThumbnailVisual *)*((_QWORD *)this + 21);
    v27 = *(void (__fastcall **)(CThumbnailVisual *__hidden, const struct CSecondaryWindowRepresentation *))(*(_QWORD *)v26 + 16LL);
    if ( v27 == CThumbnailVisual::OnRootVisualChanged )
      CThumbnailVisual::OnRootVisualChanged(v26, this);
    else
      v27(v26, this);
  }
  v15 = *((_DWORD *)this + 6);
  if ( (v15 & 4) == 0 )
  {
    v16 = (CTopLevelWindow3D *)*((_QWORD *)this + 21);
    *((_DWORD *)this + 6) = v15 | 4;
    v17 = **(void (__fastcall ***)(CThumbnailVisual *__hidden, const struct CSecondaryWindowRepresentation *))v16;
    if ( v17 == CTopLevelWindow3D::OnSWRInvalidated )
    {
      CTopLevelWindow3D::OnSWRInvalidated(v16, this);
    }
    else if ( v17 == CThumbnailVisual::OnSWRInvalidated )
    {
      CThumbnailVisual::OnSWRInvalidated(v16, this);
    }
    else
    {
      v17(v16, this);
    }
  }
  v18 = 0LL;
  v19 = *v4;
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v23 = *((_QWORD *)v19 + 53);
      if ( v23 )
      {
        v18 = *(CWindowData **)(v23 + 32);
        goto LABEL_27;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 18) != 3 )
        goto LABEL_27;
      if ( !CWindowData::IsImmersiveWindow(*v4) )
      {
        v18 = *(CWindowData **)(*((_QWORD *)v19 + 54) + 80LL);
        goto LABEL_27;
      }
    }
  }
  v18 = v19;
LABEL_27:
  v20 = (CVisual *)*((_QWORD *)v18 + 50);
  if ( v20 )
    CVisual::PropagateDirtyChildren(v20);
  CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(this);
  return v2;
}
