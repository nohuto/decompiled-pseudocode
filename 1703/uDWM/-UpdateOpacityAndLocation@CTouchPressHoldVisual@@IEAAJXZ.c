/*
 * XREFs of ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x18009F618
 * Callers:
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009F108 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009F2A8 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009F42C (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x18009FC50 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetRect@CRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800158A4 (-SetRect@CRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x1800158B8 (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     ?Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180015978 (-Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180024460 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTouchPressHoldVisual::UpdateOpacityAndLocation(CTouchPressHoldVisual *this)
{
  float v1; // xmm1_4
  int v3; // ebx
  int v4; // edx
  float v5; // xmm6_4
  int v6; // r8d
  int v7; // eax
  int v8; // r8d
  float v9; // xmm3_4
  float v10; // xmm12_4
  float v11; // xmm11_4
  struct IDwmChannel *v12; // rcx
  double v13; // xmm10_8
  double v14; // xmm13_8
  int v15; // eax
  unsigned int v16; // ebx
  struct CRectangleInstruction *v17; // rdi
  int v18; // eax
  int v19; // eax
  float v20; // xmm6_4
  struct IDwmChannel *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  struct IDwmChannel *v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  struct IDwmChannel *v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  struct IDwmChannel *v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  struct CRectangleInstruction *v41; // [rsp+38h] [rbp-79h] BYREF
  __int128 v42; // [rsp+40h] [rbp-71h] BYREF
  struct _D3DCOLORVALUE v43; // [rsp+50h] [rbp-61h] BYREF
  struct _D3DCOLORVALUE v44; // [rsp+60h] [rbp-51h] BYREF

  v1 = *((float *)this + 82);
  v41 = 0LL;
  CVisual::SetOpacity(this, v1);
  if ( *((int *)this + 79) < 10 )
    *((_DWORD *)this + 79) = 10;
  if ( *((int *)this + 80) < 10 )
    *((_DWORD *)this + 80) = 10;
  CRenderDataVisual::ClearInstructions(this);
  v3 = *((_DWORD *)this + 79);
  v4 = *((_DWORD *)this + 83);
  v5 = (float)(*((_DWORD *)this + 75) - v3 / 2);
  *(float *)&v42 = v5;
  v6 = MulDiv(-5, v4, 100);
  v7 = *((_DWORD *)this + 80);
  v8 = *((_DWORD *)this + 76) - *((_DWORD *)this + 81) - v3 / 2 + v6;
  *(_QWORD *)&v44.r = 0x3F8000003F800000LL;
  *(_QWORD *)&v44.b = 0x3F8000003F800000LL;
  v9 = (float)v8;
  *((float *)&v42 + 1) = (float)v8;
  *((float *)&v42 + 2) = (float)v3 + v5;
  *(struct _D3DCOLORVALUE *)&v43.r = (struct _D3DCOLORVALUE)_xmm;
  *((float *)&v42 + 3) = (float)v7 + (float)v8;
  if ( v3 <= 4 || v7 <= 4 )
  {
    v37 = CRectangleInstruction::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v41);
    v16 = v37;
    if ( v37 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v37, 0x137u);
      goto LABEL_47;
    }
    v17 = v41;
    v38 = CRectangleInstruction::SetSolidFill(v41, &v43, 0.949999988079071);
    v16 = v38;
    if ( v38 >= 0 )
    {
      CRectangleInstruction::SetRect((__int64)v17, &v42);
      v39 = CRenderDataVisual::AddInstruction(this, v17);
      v16 = v39;
      if ( v39 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v39, 0x13Au);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v38, 0x138u);
    }
  }
  else
  {
    v10 = (float)((float)v7 + v9) - v9;
    v11 = (float)((float)v3 + v5) - v5;
    v12 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    v13 = (float)(v5 + 2.0);
    v14 = (float)((float)(v11 + v5) - 2.0);
    *((float *)&v42 + 1) = (float)v8;
    *(float *)&v42 = v5;
    *((float *)&v42 + 2) = v5 + 2.0;
    *((float *)&v42 + 3) = v9 + v10;
    v15 = CRectangleInstruction::Create(v12, &v41);
    v16 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x156u);
LABEL_47:
      v17 = v41;
      goto LABEL_52;
    }
    v17 = v41;
    v18 = CRectangleInstruction::SetSolidFill(v41, &v43, 0.949999988079071);
    v16 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x157u);
      goto LABEL_52;
    }
    CRectangleInstruction::SetRect((__int64)v17, &v42);
    v19 = CRenderDataVisual::AddInstruction(this, v17);
    v16 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x159u);
      goto LABEL_52;
    }
    if ( v17 )
    {
      CBaseObject::Release(v17);
      v41 = 0LL;
    }
    v20 = v5 + 2.0;
    v21 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    *(_QWORD *)&v42 = __PAIR64__(LODWORD(v9), LODWORD(v20));
    *((float *)&v42 + 2) = (float)(v20 + v11) - 4.0;
    *((float *)&v42 + 3) = v9 + 2.0;
    v22 = CRectangleInstruction::Create(v21, &v41);
    v16 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x161u);
      goto LABEL_47;
    }
    v17 = v41;
    v23 = CRectangleInstruction::SetSolidFill(v41, &v43, 0.949999988079071);
    v16 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x162u);
      goto LABEL_52;
    }
    CRectangleInstruction::SetRect((__int64)v17, &v42);
    v24 = CRenderDataVisual::AddInstruction(this, v17);
    v16 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x164u);
      goto LABEL_52;
    }
    if ( v17 )
    {
      CBaseObject::Release(v17);
      v41 = 0LL;
    }
    v25 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    *((float *)&v42 + 1) = v9;
    *(float *)&v42 = v14;
    *((float *)&v42 + 3) = v9 + v10;
    *((float *)&v42 + 2) = *(float *)&v42 + 2.0;
    v26 = CRectangleInstruction::Create(v25, &v41);
    v16 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x16Cu);
      goto LABEL_47;
    }
    v17 = v41;
    v27 = CRectangleInstruction::SetSolidFill(v41, &v43, 0.949999988079071);
    v16 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0x16Du);
      goto LABEL_52;
    }
    CRectangleInstruction::SetRect((__int64)v17, &v42);
    v28 = CRenderDataVisual::AddInstruction(this, v17);
    v16 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x16Fu);
      goto LABEL_52;
    }
    if ( v17 )
    {
      CBaseObject::Release(v17);
      v41 = 0LL;
    }
    v29 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    *(float *)&v42 = v13;
    *((float *)&v42 + 1) = (float)(v10 + v9) - 2.0;
    *((float *)&v42 + 3) = *((float *)&v42 + 1) + 2.0;
    *((float *)&v42 + 2) = (float)(v20 + v11) - 4.0;
    v30 = CRectangleInstruction::Create(v29, &v41);
    v16 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v30, 0x177u);
      goto LABEL_47;
    }
    v17 = v41;
    v31 = CRectangleInstruction::SetSolidFill(v41, &v43, 0.949999988079071);
    v16 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v31, 0x178u);
      goto LABEL_52;
    }
    CRectangleInstruction::SetRect((__int64)v17, &v42);
    v32 = CRenderDataVisual::AddInstruction(this, v17);
    v16 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v32, 0x17Au);
      goto LABEL_52;
    }
    if ( v17 )
    {
      CBaseObject::Release(v17);
      v41 = 0LL;
    }
    v33 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    *(float *)&v42 = v13;
    *((float *)&v42 + 1) = v9 + 2.0;
    *((float *)&v42 + 2) = (float)(v20 + v11) - 4.0;
    *((float *)&v42 + 3) = (float)(*((float *)&v42 + 1) + v10) - 4.0;
    v34 = CRectangleInstruction::Create(v33, &v41);
    v16 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v34, 0x182u);
      goto LABEL_47;
    }
    v17 = v41;
    v35 = CRectangleInstruction::SetSolidFill(v41, &v44, 0.300000011920929);
    v16 = v35;
    if ( v35 >= 0 )
    {
      CRectangleInstruction::SetRect((__int64)v17, &v42);
      v36 = CRenderDataVisual::AddInstruction(this, v17);
      v16 = v36;
      if ( v36 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v36, 0x185u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v35, 0x183u);
    }
  }
LABEL_52:
  if ( v17 )
    CBaseObject::Release(v17);
  return v16;
}
