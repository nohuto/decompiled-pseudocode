/*
 * XREFs of ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180027358
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x1800077E8 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x180014B70 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180014E18 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024790 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x1800251CC (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180029EF0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18003B27C (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCResource@@0W4Enum@MilCombineMode@@PEAPEAV2@@Z @ 0x18007F478 (-CreateCombinedGeometry@ResourceHelper@@SAJPEBVCResource@@0W4Enum@MilCombineMode@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientBlur(CTopLevelWindow *this)
{
  __int64 v1; // r8
  CBaseObject *v2; // r13
  CBaseObject *v3; // rsi
  CBaseObject *v4; // r15
  unsigned int v5; // ebx
  CRenderDataVisual *v7; // rcx
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  LONG v12; // edx
  LONG v13; // eax
  LONG v14; // eax
  int inserted; // eax
  _QWORD *v16; // r14
  CBaseObject *v17; // rcx
  struct CVisual **v18; // r12
  const struct _MARGINS *v19; // rdx
  __int64 v20; // r8
  volatile signed __int32 *v21; // r14
  HRGN v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // eax
  int v25; // eax
  __int64 v26; // r8
  int v27; // eax
  struct CResource **v28; // r14
  int updated; // eax
  float *v30; // rax
  struct CResource *v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  unsigned int v35; // [rsp+28h] [rbp-39h]
  CBaseObject *v36; // [rsp+48h] [rbp-19h] BYREF
  struct CResource *v37; // [rsp+50h] [rbp-11h] BYREF
  struct CRenderDataInstruction *v38; // [rsp+58h] [rbp-9h] BYREF
  HRGN v39; // [rsp+60h] [rbp-1h] BYREF
  struct tagRECT v40; // [rsp+68h] [rbp+7h] BYREF
  float v41[4]; // [rsp+78h] [rbp+17h] BYREF

  v1 = *((_QWORD *)this + 90);
  v2 = 0LL;
  v3 = 0LL;
  v37 = 0LL;
  v4 = 0LL;
  v36 = 0LL;
  v5 = 0;
  v38 = 0LL;
  if ( (*(_BYTE *)(v1 + 593) & 4) != 0 )
  {
    if ( *(_QWORD *)(v1 + 368) )
    {
      v16 = (_QWORD *)((char *)this + 560);
      v17 = (CBaseObject *)*((_QWORD *)this + 70);
      if ( v17 )
      {
        CBaseObject::Release(v17);
        *v16 = 0LL;
      }
    }
    else
    {
      v9 = 0;
      v10 = 0;
      if ( *(_DWORD *)(v1 + 196) - *(_DWORD *)(v1 + 188) >= 0 )
        v9 = *(_DWORD *)(v1 + 196) - *(_DWORD *)(v1 + 188);
      v11 = v9 - *(_DWORD *)(v1 + 256) - *(_DWORD *)(v1 + 252);
      if ( *(_DWORD *)(v1 + 200) - *(_DWORD *)(v1 + 192) >= 0 )
        v10 = *(_DWORD *)(v1 + 200) - *(_DWORD *)(v1 + 192);
      v12 = v11 - *(_DWORD *)(v1 + 272);
      v13 = *(_DWORD *)(v1 + 268);
      v40.bottom = v10 - *(_DWORD *)(v1 + 264) - *(_DWORD *)(v1 + 260) - *(_DWORD *)(v1 + 280);
      v40.left = v13;
      v14 = *(_DWORD *)(v1 + 276);
      v40.right = v12;
      v40.top = v14;
      inserted = ResourceHelper::CreateRectangleGeometry(&v40, (struct CResource **)this + 70);
      v5 = inserted;
      if ( inserted < 0 )
      {
        v35 = 3570;
LABEL_54:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, v35);
        return v5;
      }
    }
    v18 = (struct CVisual **)((char *)this + 288);
    if ( !*((_QWORD *)this + 36) )
    {
      inserted = CCanvasVisual::Create(
                   *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                   (struct CCanvasVisual **)this + 36);
      v5 = inserted;
      if ( inserted < 0 )
      {
        v35 = 3581;
        goto LABEL_54;
      }
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)this + 32) + 32LL),
                   *v18,
                   *((struct CVisual **)this + 35),
                   1u,
                   1);
      v5 = inserted;
      if ( inserted < 0 )
      {
        v35 = 3583;
        goto LABEL_54;
      }
      v19 = (const struct _MARGINS *)*((_QWORD *)this + 67);
      if ( v19 )
        CVisual::SetInsetFromParent((struct _MARGINS *)*v18, v19 + 8);
      CTopLevelWindow::UpdateWindowScale(this);
    }
    if ( *((_DWORD *)*v18 + 68) )
      return v5;
    v20 = *((_QWORD *)this + 90);
    v21 = *(volatile signed __int32 **)(v20 + 368);
    if ( !v21 )
      v21 = (volatile signed __int32 *)*((_QWORD *)this + 70);
    v22 = 0LL;
    v39 = 0LL;
    v23 = *(_QWORD *)(v20 + 24);
    if ( v23 )
    {
      v24 = (*(__int64 (__fastcall **)(__int64, HRGN *))(*(_QWORD *)v23 + 328LL))(v23, &v39);
      v22 = v39;
      v5 = v24;
    }
    else
    {
      v5 = 0;
    }
    if ( (v5 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xE10u);
      return v5;
    }
    if ( v22 )
    {
      v25 = ResourceHelper::CreateGeometryFromHRGN(v22, &v37);
      v5 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xE15u);
        v2 = v37;
LABEL_46:
        if ( v2 )
          CBaseObject::Release(v2);
        if ( v3 )
          CBaseObject::Release(v3);
        if ( v4 )
          CBaseObject::Release(v4);
        return v5;
      }
      v2 = v37;
      v27 = ResourceHelper::CreateCombinedGeometry(v37, v21, v26, &v36);
      v5 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0xE1Fu);
        v3 = v36;
        goto LABEL_46;
      }
    }
    else
    {
      v36 = (CBaseObject *)v21;
      v3 = (CBaseObject *)v21;
      if ( !v21 )
        goto LABEL_37;
      _InterlockedIncrement(v21 + 2);
      v2 = v37;
      v4 = v38;
    }
    v3 = v36;
LABEL_37:
    v28 = (struct CResource **)((char *)this + 760);
    if ( !*((_QWORD *)this + 95) )
    {
      CResource::Create(0x21u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 95);
      updated = CTopLevelWindow::UpdateColorizationColor(this);
      v5 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xE2Bu);
        goto LABEL_46;
      }
      v30 = (float *)*((_QWORD *)this + 71);
      v31 = *v28;
      v32 = *((_QWORD *)*v28 + 2);
      v41[0] = v30[4] * v30[8];
      v41[1] = v30[5] * v30[8];
      v41[2] = v30[6] * v30[8];
      v41[3] = FLOAT_1_0;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, float *, _DWORD, _DWORD, _DWORD))(*(_QWORD *)v32 + 1176LL))(
        v32,
        *((unsigned int *)v31 + 6),
        0LL,
        v41,
        0,
        0,
        0);
    }
    if ( !*((_DWORD *)*v18 + 68) )
    {
      v33 = CDrawGeometryInstruction::Create(*v28, v3, &v38);
      v5 = v33;
      if ( v33 >= 0 )
      {
        v4 = v38;
        v34 = CRenderDataVisual::AddInstruction(*v18, v38);
        v5 = v34;
        if ( v34 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0xE3Fu);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0xE3Du);
        v4 = v38;
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
      v35 = 3655;
      goto LABEL_54;
    }
  }
  return v5;
}
