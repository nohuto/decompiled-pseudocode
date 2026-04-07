/*
 * XREFs of ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001BE20
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000FFF4 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180019F50 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001E820 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x1800259D8 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800338C4 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaBackground(CTopLevelWindow *this)
{
  __int64 v1; // rax
  CBaseObject *v2; // rdi
  unsigned int v4; // esi
  int updated; // eax
  struct CVisual ***v6; // r14
  int v7; // eax
  _DWORD *v8; // rax
  float *v9; // rax
  float v10; // xmm2_4
  float v11; // xmm3_4
  bool v12; // zf
  float v13; // xmm4_4
  float v14; // xmm2_4
  float *v15; // rax
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  CRenderDataVisual *v20; // rcx
  int v21; // eax
  struct CRenderDataInstruction *v22; // r12
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int inserted; // eax
  struct CVisual **v28; // rcx
  int v29; // eax
  struct CRenderDataInstruction *v30; // [rsp+40h] [rbp-29h] BYREF
  struct CRenderDataInstruction *v31; // [rsp+48h] [rbp-21h] BYREF
  struct _MARGINS v32; // [rsp+50h] [rbp-19h] BYREF
  __int128 v33; // [rsp+60h] [rbp-9h] BYREF
  __int128 v34; // [rsp+70h] [rbp+7h] BYREF

  v1 = *((_QWORD *)this + 90);
  v2 = 0LL;
  v31 = 0LL;
  v4 = 0;
  v30 = 0LL;
  if ( (*(_BYTE *)(v1 + 592) & 8) == 0
    || !*((_DWORD *)this + 151) && !*((_DWORD *)this + 153) && !*((_DWORD *)this + 152) && !*((_DWORD *)this + 154) )
  {
    v20 = (CRenderDataVisual *)*((_QWORD *)this + 35);
    if ( v20 )
    {
      v29 = CRenderDataVisual::ClearInstructions(v20);
      v4 = v29;
      if ( v29 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xE05u);
    }
    return v4;
  }
  updated = CTopLevelWindow::UpdateNCAreaGeometry(this);
  v4 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xDA1u);
    return v4;
  }
  v6 = (struct CVisual ***)((char *)this + 280);
  if ( !*((_QWORD *)this + 35) )
  {
    v26 = CCanvasVisual::Create(
            *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
            (struct CCanvasVisual **)this + 35);
    v4 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xDA6u);
      return v4;
    }
    inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 32) + 32LL), *v6, 0LL, 1u, 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0xDA9u);
      return v4;
    }
    v28 = *v6;
    *(_QWORD *)&v32.cxLeftWidth = 0LL;
    *(_QWORD *)&v32.cyTopHeight = 0LL;
    CVisual::SetInsetFromParent((CVisual *)v28, &v32);
  }
  if ( !*((_QWORD *)this + 93) )
    CResource::Create(0x22u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 93);
  v7 = CTopLevelWindow::UpdateColorizationColor(this);
  v4 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xDB6u);
    return v4;
  }
  v8 = (_DWORD *)*((_QWORD *)this + 90);
  if ( v8[20] == 0x7FFFFFFF && v8[21] == 0x7FFFFFFF && v8[22] == 0x7FFFFFFF && v8[23] == 0x7FFFFFFF )
    v9 = (float *)*((_QWORD *)this + 72);
  else
    v9 = (float *)*((_QWORD *)this + 71);
  v10 = v9[8];
  v11 = v10 * v9[4];
  v12 = 1.0 == *((float *)this + 174);
  v13 = v10 * v9[5];
  v14 = v10 * v9[6];
  *(_QWORD *)&v33 = __PAIR64__(LODWORD(v13), LODWORD(v11));
  *((_QWORD *)&v33 + 1) = LODWORD(v14) | 0x3F80000000000000LL;
  if ( !v12 || v11 != *((float *)this + 171) || v13 != *((float *)this + 172) || v14 != *((float *)this + 173) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 93) + 16LL)
                                                                                       + 1192LL))(
      *(_QWORD *)(*((_QWORD *)this + 93) + 16LL),
      *(unsigned int *)(*((_QWORD *)this + 93) + 24LL),
      *(_QWORD *)(*((_QWORD *)this + 93) + 16LL),
      &v33,
      0,
      0,
      0);
    *(_OWORD *)((char *)this + 684) = v33;
  }
  if ( !*((_QWORD *)this + 94) )
    CResource::Create(0x22u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 94);
  v15 = (float *)*((_QWORD *)this + 72);
  v12 = 1.0 == *((float *)this + 178);
  v16 = v15[4] * v15[8];
  *(float *)&v34 = v16;
  v17 = v15[5] * v15[8];
  *((float *)&v34 + 1) = v17;
  v18 = v15[6] * v15[8];
  *((_QWORD *)&v34 + 1) = LODWORD(v18) | 0x3F80000000000000LL;
  if ( !v12 || v16 != *((float *)this + 175) || v17 != *((float *)this + 176) || v18 != *((float *)this + 177) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 94) + 16LL)
                                                                                       + 1192LL))(
      *(_QWORD *)(*((_QWORD *)this + 94) + 16LL),
      *(unsigned int *)(*((_QWORD *)this + 94) + 24LL),
      *(_QWORD *)(*((_QWORD *)this + 94) + 16LL),
      &v34,
      0,
      0,
      0);
    *(_OWORD *)((char *)this + 700) = v34;
  }
  if ( !*((_DWORD *)*v6 + 68) )
  {
    v21 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 93), *((struct CResource **)this + 68), &v31);
    v22 = v31;
    v4 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xDF3u);
    }
    else
    {
      v23 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 94), *((struct CResource **)this + 69), &v30);
      v4 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xDF9u);
      }
      else
      {
        v24 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)*v6, v22);
        v4 = v24;
        if ( v24 >= 0 )
        {
          v2 = v30;
          v25 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)*v6, v30);
          v4 = v25;
          if ( v25 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xDFDu);
          goto LABEL_33;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xDFCu);
      }
      v2 = v30;
    }
LABEL_33:
    if ( v22 )
      CBaseObject::Release(v22);
    if ( v2 )
      CBaseObject::Release(v2);
  }
  return v4;
}
