/*
 * XREFs of ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18001BD78
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180006C10 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000FFF4 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180019D60 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001E820 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x1800259D8 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x180033420 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800338C4 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCResource@@0W4Enum@MilCombineMode@@PEAPEAV2@@Z @ 0x18007FB80 (-CreateCombinedGeometry@ResourceHelper@@SAJPEBVCResource@@0W4Enum@MilCombineMode@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientBlur(CTopLevelWindow *this)
{
  __int64 v1; // r8
  CBaseObject *v2; // r12
  CBaseObject *v3; // rsi
  CBaseObject *v4; // r15
  unsigned int v5; // ebx
  CRenderDataVisual *v7; // rcx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int inserted; // eax
  _QWORD *v14; // r14
  CBaseObject *v15; // rcx
  struct CVisual ***v16; // r13
  __int64 v17; // rax
  const struct _MARGINS *v18; // rdx
  __int64 v19; // r8
  volatile signed __int32 *v20; // r14
  HRGN v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // r8
  int v26; // eax
  struct CResource **v27; // r14
  int updated; // eax
  float *v29; // rax
  struct CResource *v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  unsigned int v34; // [rsp+28h] [rbp-39h]
  CBaseObject *v35; // [rsp+48h] [rbp-19h] BYREF
  CBaseObject *v36; // [rsp+50h] [rbp-11h] BYREF
  struct CRenderDataInstruction *v37; // [rsp+58h] [rbp-9h] BYREF
  HRGN v38; // [rsp+60h] [rbp-1h] BYREF
  struct tagRECT v39; // [rsp+68h] [rbp+7h] BYREF
  float v40[4]; // [rsp+78h] [rbp+17h] BYREF

  v1 = *((_QWORD *)this + 90);
  v2 = 0LL;
  v3 = 0LL;
  v36 = 0LL;
  v4 = 0LL;
  v35 = 0LL;
  v5 = 0;
  v37 = 0LL;
  if ( (*(_BYTE *)(v1 + 593) & 4) != 0 )
  {
    if ( *(_QWORD *)(v1 + 360) )
    {
      v14 = (_QWORD *)((char *)this + 560);
      v15 = (CBaseObject *)*((_QWORD *)this + 70);
      if ( v15 )
      {
        CBaseObject::Release(v15);
        *v14 = 0LL;
      }
    }
    else
    {
      v9 = *(_DWORD *)(v1 + 188) - *(_DWORD *)(v1 + 180);
      v10 = *(_DWORD *)(v1 + 192) - *(_DWORD *)(v1 + 184);
      v39.left = *(_DWORD *)(v1 + 260);
      v11 = 0;
      if ( v9 >= 0 )
        v11 = v9;
      v39.right = v11 - *(_DWORD *)(v1 + 264) - *(_DWORD *)(v1 + 248) - *(_DWORD *)(v1 + 244);
      v39.top = *(_DWORD *)(v1 + 268);
      v12 = 0;
      if ( v10 >= 0 )
        v12 = v10;
      v39.bottom = v12 - *(_DWORD *)(v1 + 272) - *(_DWORD *)(v1 + 256) - *(_DWORD *)(v1 + 252);
      inserted = ResourceHelper::CreateRectangleGeometry(&v39, (struct CResource **)this + 70);
      v5 = inserted;
      if ( inserted < 0 )
      {
        v34 = 3630;
LABEL_54:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v34);
        return v5;
      }
    }
    v16 = (struct CVisual ***)((char *)this + 288);
    v17 = *((_QWORD *)this + 36);
    if ( !v17 )
    {
      inserted = CCanvasVisual::Create(
                   *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                   (struct CCanvasVisual **)this + 36);
      v5 = inserted;
      if ( inserted < 0 )
      {
        v34 = 3641;
        goto LABEL_54;
      }
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)this + 32) + 32LL),
                   *v16,
                   *((struct CVisual **)this + 35),
                   1u,
                   1);
      v5 = inserted;
      if ( inserted < 0 )
      {
        v34 = 3643;
        goto LABEL_54;
      }
      v18 = (const struct _MARGINS *)*((_QWORD *)this + 67);
      if ( v18 )
        CVisual::SetInsetFromParent((CVisual *)*v16, v18 + 8);
      CTopLevelWindow::UpdateWindowScale(this);
      v17 = *((_QWORD *)this + 36);
    }
    if ( *(_DWORD *)(v17 + 272) )
      return v5;
    v19 = *((_QWORD *)this + 90);
    v20 = *(volatile signed __int32 **)(v19 + 360);
    if ( !v20 )
      v20 = (volatile signed __int32 *)*((_QWORD *)this + 70);
    v21 = 0LL;
    v38 = 0LL;
    v22 = *(_QWORD *)(v19 + 24);
    if ( v22 )
    {
      v23 = (*(__int64 (__fastcall **)(__int64, HRGN *))(*(_QWORD *)v22 + 328LL))(v22, &v38);
      v21 = v38;
      v5 = v23;
    }
    else
    {
      v5 = 0;
    }
    if ( (v5 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xE4Cu);
      return v5;
    }
    if ( v21 )
    {
      v24 = ResourceHelper::CreateGeometryFromHRGN(v21, &v36);
      v5 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xE51u);
        v2 = v36;
LABEL_46:
        if ( v2 )
          CBaseObject::Release(v2);
        if ( v3 )
          CBaseObject::Release(v3);
        if ( v4 )
          CBaseObject::Release(v4);
        return v5;
      }
      v2 = v36;
      v26 = ResourceHelper::CreateCombinedGeometry(v36, v20, v25, &v35);
      v5 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xE5Bu);
        v3 = v35;
        goto LABEL_46;
      }
    }
    else
    {
      v35 = (CBaseObject *)v20;
      v3 = (CBaseObject *)v20;
      if ( !v20 )
        goto LABEL_37;
      _InterlockedIncrement(v20 + 2);
      v2 = v36;
      v4 = v37;
    }
    v3 = v35;
LABEL_37:
    v27 = (struct CResource **)((char *)this + 760);
    if ( !*((_QWORD *)this + 95) )
    {
      CResource::Create(0x22u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 95);
      updated = CTopLevelWindow::UpdateColorizationColor(this);
      v5 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xE67u);
        goto LABEL_46;
      }
      v29 = (float *)*((_QWORD *)this + 71);
      v30 = *v27;
      v31 = *((_QWORD *)*v27 + 2);
      v40[0] = v29[4] * v29[8];
      v40[1] = v29[5] * v29[8];
      v40[2] = v29[6] * v29[8];
      v40[3] = FLOAT_1_0;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, float *, _DWORD, _DWORD, _DWORD))(*(_QWORD *)v31 + 1192LL))(
        v31,
        *((unsigned int *)v30 + 6),
        0LL,
        v40,
        0,
        0,
        0);
    }
    if ( !*((_DWORD *)*v16 + 68) )
    {
      v32 = CDrawGeometryInstruction::Create(*v27, v3, &v37);
      v5 = v32;
      if ( v32 >= 0 )
      {
        v4 = v37;
        v33 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)*v16, v37);
        v5 = v33;
        if ( v33 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0xE7Bu);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0xE79u);
        v4 = v37;
      }
    }
    goto LABEL_46;
  }
  v7 = (CRenderDataVisual *)*((_QWORD *)this + 36);
  if ( v7 )
  {
    inserted = CRenderDataVisual::ClearInstructions(v7);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v34 = 3715;
      goto LABEL_54;
    }
  }
  return v5;
}
