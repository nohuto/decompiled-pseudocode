/*
 * XREFs of ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180027400
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180014E18 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024790 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180025400 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180029EF0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18003B27C (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaBackground(CTopLevelWindow *this)
{
  __int64 v1; // rax
  CBaseObject *v2; // rdi
  unsigned int v4; // esi
  int updated; // eax
  struct CVisual **v6; // r14
  int v7; // eax
  _DWORD *v8; // rax
  float *v9; // rax
  bool v10; // zf
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float *v14; // rax
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  CRenderDataVisual *v19; // rcx
  int v20; // eax
  struct CRenderDataInstruction *v21; // r12
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int inserted; // eax
  struct CVisual *v27; // rcx
  int v28; // eax
  struct CRenderDataInstruction *v29; // [rsp+40h] [rbp-29h] BYREF
  struct CRenderDataInstruction *v30; // [rsp+48h] [rbp-21h] BYREF
  struct _MARGINS v31; // [rsp+50h] [rbp-19h] BYREF
  __int128 v32; // [rsp+60h] [rbp-9h] BYREF
  __int128 v33; // [rsp+70h] [rbp+7h] BYREF

  v1 = *((_QWORD *)this + 90);
  v2 = 0LL;
  v30 = 0LL;
  v4 = 0;
  v29 = 0LL;
  if ( (*(_BYTE *)(v1 + 592) & 8) == 0
    || !*((_DWORD *)this + 151) && !*((_DWORD *)this + 153) && !*((_DWORD *)this + 152) && !*((_DWORD *)this + 154) )
  {
    v19 = (CRenderDataVisual *)*((_QWORD *)this + 35);
    if ( v19 )
    {
      v28 = CRenderDataVisual::ClearInstructions(v19);
      v4 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xDC9u);
    }
    return v4;
  }
  updated = CTopLevelWindow::UpdateNCAreaGeometry(this);
  v4 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xD65u);
    return v4;
  }
  v6 = (struct CVisual **)((char *)this + 280);
  if ( !*((_QWORD *)this + 35) )
  {
    v25 = CCanvasVisual::Create(
            *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
            (struct CCanvasVisual **)this + 35);
    v4 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xD6Au);
      return v4;
    }
    inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 32) + 32LL), *v6, 0LL, 1u, 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0xD6Du);
      return v4;
    }
    v27 = *v6;
    *(_QWORD *)&v31.cxLeftWidth = 0LL;
    *(_QWORD *)&v31.cyTopHeight = 0LL;
    CVisual::SetInsetFromParent((struct _MARGINS *)v27, &v31);
  }
  if ( !*((_QWORD *)this + 93) )
    CResource::Create(0x21u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 93);
  v7 = CTopLevelWindow::UpdateColorizationColor(this);
  v4 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xD7Au);
    return v4;
  }
  v8 = (_DWORD *)*((_QWORD *)this + 90);
  if ( v8[20] == 0x7FFFFFFF && v8[21] == 0x7FFFFFFF && v8[22] == 0x7FFFFFFF && v8[23] == 0x7FFFFFFF )
    v9 = (float *)*((_QWORD *)this + 72);
  else
    v9 = (float *)*((_QWORD *)this + 71);
  v10 = 1.0 == *((float *)this + 174);
  v11 = v9[8] * v9[4];
  v12 = v9[8] * v9[5];
  v13 = v9[8] * v9[6];
  *(_QWORD *)&v32 = __PAIR64__(LODWORD(v12), LODWORD(v11));
  *((_QWORD *)&v32 + 1) = LODWORD(v13) | 0x3F80000000000000LL;
  if ( !v10 || v11 != *((float *)this + 171) || v12 != *((float *)this + 172) || v13 != *((float *)this + 173) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 93) + 16LL)
                                                                                       + 1176LL))(
      *(_QWORD *)(*((_QWORD *)this + 93) + 16LL),
      *(unsigned int *)(*((_QWORD *)this + 93) + 24LL),
      *(_QWORD *)(*((_QWORD *)this + 93) + 16LL),
      &v32,
      0,
      0,
      0);
    *(_OWORD *)((char *)this + 684) = v32;
  }
  if ( !*((_QWORD *)this + 94) )
    CResource::Create(0x21u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 94);
  v14 = (float *)*((_QWORD *)this + 72);
  v10 = 1.0 == *((float *)this + 178);
  v15 = v14[4] * v14[8];
  *(float *)&v33 = v15;
  v16 = v14[5] * v14[8];
  *((float *)&v33 + 1) = v16;
  v17 = v14[6] * v14[8];
  *((_QWORD *)&v33 + 1) = LODWORD(v17) | 0x3F80000000000000LL;
  if ( !v10 || v15 != *((float *)this + 175) || v16 != *((float *)this + 176) || v17 != *((float *)this + 177) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 94) + 16LL)
                                                                                       + 1176LL))(
      *(_QWORD *)(*((_QWORD *)this + 94) + 16LL),
      *(unsigned int *)(*((_QWORD *)this + 94) + 24LL),
      *(_QWORD *)(*((_QWORD *)this + 94) + 16LL),
      &v33,
      0,
      0,
      0);
    *(_OWORD *)((char *)this + 700) = v33;
  }
  if ( !*((_DWORD *)*v6 + 68) )
  {
    v20 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 93), *((struct CResource **)this + 68), &v30);
    v21 = v30;
    v4 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xDB7u);
    }
    else
    {
      v22 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 94), *((struct CResource **)this + 69), &v29);
      v4 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xDBDu);
      }
      else
      {
        v23 = CRenderDataVisual::AddInstruction(*v6, v21);
        v4 = v23;
        if ( v23 >= 0 )
        {
          v2 = v29;
          v24 = CRenderDataVisual::AddInstruction(*v6, v29);
          v4 = v24;
          if ( v24 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xDC1u);
          goto LABEL_33;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xDC0u);
      }
      v2 = v29;
    }
LABEL_33:
    if ( v21 )
      CBaseObject::Release(v21);
    if ( v2 )
      CBaseObject::Release(v2);
  }
  return v4;
}
