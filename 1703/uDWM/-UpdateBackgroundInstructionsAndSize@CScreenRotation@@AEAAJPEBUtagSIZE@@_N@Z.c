/*
 * XREFs of ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800951C0
 * Callers:
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x180093F7C (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180094988 (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x1800077E8 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z @ 0x180016228 (-Create@CDrawOcclusionRectangleInstruction@@SAJAEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001A33C (-Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001A41C (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18003B27C (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScreenRotation::UpdateBackgroundInstructionsAndSize(
        CScreenRotation *this,
        const struct tagSIZE *a2,
        char a3)
{
  LONG cx; // eax
  struct CRenderDataInstruction *v4; // rsi
  CBaseObject *v6; // r15
  CBaseObject *v7; // r14
  CBaseObject *v8; // r12
  __int64 v9; // rax
  void (__fastcall *v12)(CScreenRotation *, struct tagRECT *); // rax
  LONG v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rax
  struct CResource *v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int128 v21; // xmm0
  struct CSolidRectangleInstruction *v22; // rcx
  int v23; // eax
  unsigned int v25; // [rsp+20h] [rbp-60h]
  struct CResource *v26; // [rsp+30h] [rbp-50h] BYREF
  struct CRenderDataInstruction *v27; // [rsp+38h] [rbp-48h] BYREF
  struct CSolidRectangleInstruction *v28; // [rsp+40h] [rbp-40h] BYREF
  struct CDrawOcclusionRectangleInstruction *v29; // [rsp+48h] [rbp-38h] BYREF
  struct _MARGINS v30; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v31; // [rsp+60h] [rbp-20h] BYREF

  cx = a2->cx;
  v4 = 0LL;
  *(_QWORD *)&v30.cxLeftWidth = 0LL;
  *(_QWORD *)&v30.cyTopHeight = 0LL;
  v6 = 0LL;
  v31.left = cx;
  v7 = 0LL;
  v8 = 0LL;
  v31.top = a2->cy;
  v9 = *(_QWORD *)this;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v12 = *(void (__fastcall **)(CScreenRotation *, struct tagRECT *))(v9 + 80);
  v26 = 0LL;
  v12(this, &v31);
  CRenderDataVisual::ClearInstructions(this);
  if ( a3 )
  {
    v13 = *((_DWORD *)this + 30);
    v31.left = 0;
    v31.top = 0;
    v31.right = v13;
    v31.bottom = *((_DWORD *)this + 31);
    v14 = ResourceHelper::CreateRectangleGeometry(&v31, &v26);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x43u);
      v8 = v26;
LABEL_21:
      if ( v8 )
        CBaseObject::Release(v8);
      if ( v7 )
        CBaseObject::Release(v7);
      goto LABEL_25;
    }
    v16 = *((_QWORD *)this + 39);
    v17 = *(struct CResource **)(v16 + 608);
    if ( !v17 )
      v17 = *(struct CResource **)(v16 + 592);
    v8 = v26;
    v18 = CDrawGeometryInstruction::Create(v17, v26, &v27);
    v15 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x44u);
      v6 = v27;
      goto LABEL_21;
    }
    v6 = v27;
    v19 = CRenderDataVisual::AddInstruction(this, v27);
    v15 = v19;
    if ( v19 < 0 )
    {
      v25 = 69;
      goto LABEL_20;
    }
LABEL_16:
    CDrawOcclusionRectangleInstruction::Create(&v30, &v29);
    v7 = v29;
    if ( !v29 )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x60u);
      goto LABEL_21;
    }
    v19 = CRenderDataVisual::AddInstruction(this, v29);
    v15 = v19;
    if ( v19 >= 0 )
      goto LABEL_21;
    v25 = 97;
LABEL_20:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, v25);
    goto LABEL_21;
  }
  v20 = CSolidRectangleInstruction::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v28);
  v15 = v20;
  if ( v20 >= 0 )
  {
    v4 = v28;
    if ( !v28 )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x4Du);
      return v15;
    }
    v21 = *(_OWORD *)((char *)this + 364);
    v31.left = 0;
    v31.top = 0;
    v22 = v28;
    *((_OWORD *)v28 + 1) = v21;
    *(float *)&v21 = (float)a2->cy;
    *(float *)&v31.right = (float)a2->cx;
    v31.bottom = v21;
    CSolidRectangleInstruction::SetRect((__int64)v22, &v31);
    v23 = CRenderDataVisual::AddInstruction(this, v4);
    v15 = v23;
    if ( v23 >= 0 )
      goto LABEL_16;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x56u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x4Cu);
    v4 = v28;
  }
LABEL_25:
  if ( v4 )
    CBaseObject::Release(v4);
  if ( v6 )
    CBaseObject::Release(v6);
  return v15;
}
