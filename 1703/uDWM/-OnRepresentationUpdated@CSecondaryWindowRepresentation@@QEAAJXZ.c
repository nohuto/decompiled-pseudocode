/*
 * XREFs of ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003A354
 * Callers:
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031220 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180036750 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x18003AB08 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x1800247FC (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18002C940 (-OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035C98 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x1800369B4 (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180036AB4 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x180036B50 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800392F0 (-OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180039370 (-OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003A138 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18003A67C (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x18003AC2C (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x18007C5F0 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnRepresentationUpdated(CSecondaryWindowRepresentation *this)
{
  unsigned int v2; // ebp
  CWindowData *v3; // rcx
  CWindowData **v4; // rsi
  char v5; // r14
  char v6; // r12
  int v7; // eax
  int v8; // eax
  CWindowData *v9; // rcx
  char v10; // r15
  CWindowData *v11; // rdi
  CWindowData *v12; // rcx
  CWindowData *v13; // rdi
  int v14; // eax
  CTopLevelWindow3D *v15; // rcx
  void (__fastcall *v16)(CTopLevelWindow3D *, const struct CSecondaryWindowRepresentation *); // rax
  CWindowData *v17; // rcx
  CWindowData *v18; // rdi
  CVisual *v19; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  CBaseObject *v23; // rcx
  __int64 v24; // rcx
  CThumbnailVisual *v25; // rcx
  void (__fastcall *v26)(CThumbnailVisual *, const struct CSecondaryWindowRepresentation *); // rax
  CBaseObject *v27; // rcx
  int v28; // eax
  __int128 v29; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (CWindowData *)*((_QWORD *)this + 4);
  if ( !v3 || *((_BYTE *)this + 160) )
    return v2;
  v4 = (CWindowData **)((char *)this + 64);
  v5 = 1;
  v29 = *((_OWORD *)this + 4);
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
  if ( (CWindowData *)v29 != *v4 || DWORD2(v29) != *((_DWORD *)this + 18) )
  {
    CSecondaryWindowRepresentation::ReleaseAllResources(this);
    v6 = 1;
    if ( *((_DWORD *)this + 18) == 3 && CWindowData::IsImmersiveWindow(*((CWindowData **)this + 4)) )
    {
      v27 = (CBaseObject *)*((_QWORD *)this + 64);
      if ( v27 )
      {
        CBaseObject::Release(v27);
        *((_QWORD *)this + 64) = 0LL;
      }
      v28 = CImmersiveWindowIconic::Create(
              *((struct CWindowData **)this + 4),
              *((_DWORD *)this + 41),
              (enum DEVICE_SCALE_FACTOR)*((_DWORD *)this + 30),
              (*((_DWORD *)this + 10) & 0x1000) != 0,
              (struct CImmersiveWindowIconic **)this + 64);
      v2 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x1CBu);
        return v2;
      }
    }
    v7 = CWindowData::ChangeSecondaryWindowRepresentation(
           *((CWindowData **)this + 4),
           this,
           (struct CWindowRepresentation *)&v29);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1CEu);
      return v2;
    }
    v8 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(this);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1CFu);
      return v2;
    }
  }
  v9 = 0LL;
  v10 = *((_BYTE *)this + 472);
  v11 = *v4;
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v21 = *((_QWORD *)v11 + 53);
      if ( v21 )
      {
        v9 = *(CWindowData **)(v21 + 32);
        goto LABEL_12;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 18) != 3 )
        goto LABEL_12;
      if ( !CWindowData::IsImmersiveWindow(*v4) )
      {
        v9 = *(CWindowData **)(*((_QWORD *)v11 + 54) + 80LL);
        goto LABEL_12;
      }
    }
  }
  v9 = v11;
LABEL_12:
  if ( CWindowData::IsSimpleClientArea(v9) && !*((_QWORD *)this + 6) )
  {
    v12 = 0LL;
    v13 = *v4;
    switch ( *((_DWORD *)this + 18) )
    {
      case 1:
LABEL_15:
        v12 = v13;
        break;
      case 2:
        v24 = *((_QWORD *)v13 + 53);
        if ( !v24 )
          goto LABEL_15;
        v12 = *(CWindowData **)(v24 + 32);
        break;
      case 3:
        if ( CWindowData::IsImmersiveWindow(*v4) )
          goto LABEL_15;
        v12 = *(CWindowData **)(*((_QWORD *)v13 + 54) + 80LL);
        break;
    }
    if ( !CWindowData::IsImmersiveWindow(v12) )
      goto LABEL_17;
  }
  v5 = 0;
LABEL_17:
  *((_BYTE *)this + 472) = v5;
  if ( !v6 )
  {
    if ( !v10 && !v5 )
      return v2;
    v23 = (CBaseObject *)*((_QWORD *)this + 50);
    if ( v23 )
    {
      CBaseObject::Release(v23);
      *((_QWORD *)this + 50) = 0LL;
    }
  }
  if ( (*((_BYTE *)this + 40) & 2) != 0 )
  {
    v25 = (CThumbnailVisual *)*((_QWORD *)this + 21);
    v26 = *(void (__fastcall **)(CThumbnailVisual *, const struct CSecondaryWindowRepresentation *))(*(_QWORD *)v25 + 16LL);
    if ( v26 == CThumbnailVisual::OnRootVisualChanged )
      CThumbnailVisual::OnRootVisualChanged(v25, this);
    else
      v26(v25, this);
  }
  v14 = *((_DWORD *)this + 6);
  if ( (v14 & 4) == 0 )
  {
    v15 = (CTopLevelWindow3D *)*((_QWORD *)this + 21);
    *((_DWORD *)this + 6) = v14 | 4;
    v16 = **(void (__fastcall ***)(CTopLevelWindow3D *, const struct CSecondaryWindowRepresentation *))v15;
    if ( v16 == CTopLevelWindow3D::OnSWRInvalidated )
    {
      CTopLevelWindow3D::OnSWRInvalidated(v15, this);
    }
    else if ( v16 == CThumbnailVisual::OnSWRInvalidated )
    {
      CThumbnailVisual::OnSWRInvalidated(v15, this);
    }
    else
    {
      v16(v15, this);
    }
  }
  v17 = 0LL;
  v18 = *v4;
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v22 = *((_QWORD *)v18 + 53);
      if ( v22 )
      {
        v17 = *(CWindowData **)(v22 + 32);
        goto LABEL_24;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 18) != 3 )
        goto LABEL_24;
      if ( !CWindowData::IsImmersiveWindow(*v4) )
      {
        v17 = *(CWindowData **)(*((_QWORD *)v18 + 54) + 80LL);
        goto LABEL_24;
      }
    }
  }
  v17 = v18;
LABEL_24:
  v19 = (CVisual *)*((_QWORD *)v17 + 50);
  if ( v19 )
    CVisual::PropagateDirtyChildren(v19);
  CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(this);
  return v2;
}
