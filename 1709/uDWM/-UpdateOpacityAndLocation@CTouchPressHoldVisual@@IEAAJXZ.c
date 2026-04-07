/*
 * XREFs of ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x18009D6D8
 * Callers:
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009D1C8 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009D368 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009D4EC (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x18009DCF0 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180018E30 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x180034798 (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     ?Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180034828 (-Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 */

__int64 __fastcall CTouchPressHoldVisual::UpdateOpacityAndLocation(CTouchPressHoldVisual *this)
{
  float v1; // xmm1_4
  int v3; // ebx
  int v4; // edx
  float v5; // xmm8_4
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  float v9; // xmm3_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  struct IDwmChannel *v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  struct CRectangleInstruction *v15; // rdi
  int v16; // eax
  int v17; // eax
  float v18; // xmm9_4
  struct IDwmChannel *v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  struct IDwmChannel *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  struct IDwmChannel *v27; // rcx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  struct IDwmChannel *v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  struct CRectangleInstruction *v39; // [rsp+38h] [rbp-79h] BYREF
  __int128 v40; // [rsp+40h] [rbp-71h]
  struct _D3DCOLORVALUE v41; // [rsp+50h] [rbp-61h] BYREF
  struct _D3DCOLORVALUE v42; // [rsp+60h] [rbp-51h] BYREF

  v1 = *((float *)this + 82);
  v39 = 0LL;
  CVisual::SetOpacity(this, v1);
  if ( *((int *)this + 79) < 10 )
    *((_DWORD *)this + 79) = 10;
  if ( *((int *)this + 80) < 10 )
    *((_DWORD *)this + 80) = 10;
  CRenderDataVisual::ClearInstructions(this);
  v3 = *((_DWORD *)this + 79);
  v4 = *((_DWORD *)this + 83);
  v5 = (float)(*((_DWORD *)this + 75) - v3 / 2);
  *(float *)&v40 = v5;
  v6 = MulDiv(-5, v4, 100);
  v7 = *((_DWORD *)this + 80);
  v8 = *((_DWORD *)this + 76) + v3 / -2 - *((_DWORD *)this + 81) + v6;
  *(struct _D3DCOLORVALUE *)&v41.r = (struct _D3DCOLORVALUE)_xmm;
  *(_QWORD *)&v42.r = 0x3F8000003F800000LL;
  *(_QWORD *)&v42.b = 0x3F8000003F800000LL;
  v9 = (float)v8;
  *((float *)&v40 + 2) = (float)v3 + v5;
  *((float *)&v40 + 1) = (float)v8;
  *((float *)&v40 + 3) = (float)v7 + (float)v8;
  if ( v3 <= 4 || v7 <= 4 )
  {
    v35 = CRectangleInstruction::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v39);
    v14 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x137u);
      goto LABEL_39;
    }
    v15 = v39;
    v36 = CRectangleInstruction::SetSolidFill(v39, &v41, 0.949999988079071);
    v14 = v36;
    if ( v36 >= 0 )
    {
      *(_OWORD *)((char *)v15 + 24) = v40;
      v37 = CRenderDataVisual::AddInstruction(this, v15);
      v14 = v37;
      if ( v37 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x13Au);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x138u);
    }
  }
  else
  {
    v10 = (float)((float)v7 + v9) - v9;
    v11 = (float)((float)v3 + v5) - v5;
    v12 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    *(float *)&v40 = v5;
    *((float *)&v40 + 2) = v5 + 2.0;
    *((float *)&v40 + 1) = v9;
    *((float *)&v40 + 3) = v10 + v9;
    v13 = CRectangleInstruction::Create(v12, &v39);
    v14 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x156u);
LABEL_39:
      v15 = v39;
      goto LABEL_44;
    }
    v15 = v39;
    v16 = CRectangleInstruction::SetSolidFill(v39, &v41, 0.949999988079071);
    v14 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x157u);
      goto LABEL_44;
    }
    *(_OWORD *)((char *)v15 + 24) = v40;
    v17 = CRenderDataVisual::AddInstruction(this, v15);
    v14 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x159u);
      goto LABEL_44;
    }
    CBaseObject::Release(v15);
    v39 = 0LL;
    v18 = v5 + 2.0;
    v19 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    *(_QWORD *)&v40 = __PAIR64__(LODWORD(v9), LODWORD(v18));
    *((float *)&v40 + 2) = (float)(v11 + v18) - 4.0;
    *((float *)&v40 + 3) = v9 + 2.0;
    v20 = CRectangleInstruction::Create(v19, &v39);
    v14 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x161u);
      goto LABEL_39;
    }
    v15 = v39;
    v21 = CRectangleInstruction::SetSolidFill(v39, &v41, 0.949999988079071);
    v14 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x162u);
      goto LABEL_44;
    }
    *(_OWORD *)((char *)v15 + 24) = v40;
    v22 = CRenderDataVisual::AddInstruction(this, v15);
    v14 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x164u);
      goto LABEL_44;
    }
    CBaseObject::Release(v15);
    v39 = 0LL;
    v23 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    *((float *)&v40 + 1) = v9;
    *(float *)&v40 = (float)(v11 + v5) - 2.0;
    *((float *)&v40 + 2) = *(float *)&v40 + 2.0;
    *((float *)&v40 + 3) = v10 + v9;
    v24 = CRectangleInstruction::Create(v23, &v39);
    v14 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x16Cu);
      goto LABEL_39;
    }
    v15 = v39;
    v25 = CRectangleInstruction::SetSolidFill(v39, &v41, 0.949999988079071);
    v14 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x16Du);
      goto LABEL_44;
    }
    *(_OWORD *)((char *)v15 + 24) = v40;
    v26 = CRenderDataVisual::AddInstruction(this, v15);
    v14 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x16Fu);
      goto LABEL_44;
    }
    CBaseObject::Release(v15);
    v39 = 0LL;
    v27 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    *(float *)&v40 = v5 + 2.0;
    *((float *)&v40 + 1) = (float)(v10 + v9) - 2.0;
    *((float *)&v40 + 3) = *((float *)&v40 + 1) + 2.0;
    *((float *)&v40 + 2) = (float)(v11 + v18) - 4.0;
    v28 = CRectangleInstruction::Create(v27, &v39);
    v14 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x177u);
      goto LABEL_39;
    }
    v15 = v39;
    v29 = CRectangleInstruction::SetSolidFill(v39, &v41, 0.949999988079071);
    v14 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x178u);
      goto LABEL_44;
    }
    *(_OWORD *)((char *)v15 + 24) = v40;
    v30 = CRenderDataVisual::AddInstruction(this, v15);
    v14 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x17Au);
      goto LABEL_44;
    }
    CBaseObject::Release(v15);
    v39 = 0LL;
    v31 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    *(float *)&v40 = v5 + 2.0;
    *((float *)&v40 + 1) = v9 + 2.0;
    *((float *)&v40 + 2) = (float)(v11 + v18) - 4.0;
    *((float *)&v40 + 3) = (float)(v10 + *((float *)&v40 + 1)) - 4.0;
    v32 = CRectangleInstruction::Create(v31, &v39);
    v14 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x182u);
      goto LABEL_39;
    }
    v15 = v39;
    v33 = CRectangleInstruction::SetSolidFill(v39, &v42, 0.300000011920929);
    v14 = v33;
    if ( v33 >= 0 )
    {
      *(_OWORD *)((char *)v15 + 24) = v40;
      v34 = CRenderDataVisual::AddInstruction(this, v15);
      v14 = v34;
      if ( v34 >= 0 )
      {
LABEL_45:
        CBaseObject::Release(v15);
        return v14;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x185u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x183u);
    }
  }
LABEL_44:
  if ( v15 )
    goto LABEL_45;
  return v14;
}
