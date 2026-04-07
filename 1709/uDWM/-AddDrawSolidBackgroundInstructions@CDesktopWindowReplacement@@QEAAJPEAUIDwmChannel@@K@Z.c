/*
 * XREFs of ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z @ 0x1800344FC
 * Callers:
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180034430 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800346A8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x180034798 (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     ?Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180034828 (-Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJPEAUIDwmChannel@@KH@Z @ 0x18006EFB0 (-_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJPEAUIDwmChannel@@KH@Z.c)
 */

__int64 __fastcall CDesktopWindowReplacement::AddDrawSolidBackgroundInstructions(
        CDesktopWindowReplacement *this,
        struct IDwmChannel *a2,
        int a3)
{
  float SystemMetrics; // xmm6_4
  float v6; // xmm7_4
  int v7; // eax
  int v8; // eax
  int v9; // eax
  struct CRectangleInstruction *v10; // rdi
  unsigned int v11; // ebx
  CRectangleInstruction *v12; // rcx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // r8d
  int v16; // r9d
  signed int v18; // eax
  signed int LastError; // eax
  unsigned int v20; // [rsp+20h] [rbp-60h]
  struct CRectangleInstruction *v21; // [rsp+30h] [rbp-50h] BYREF
  __int128 v22; // [rsp+38h] [rbp-48h]
  struct _D3DCOLORVALUE v23; // [rsp+48h] [rbp-38h] BYREF

  v21 = 0LL;
  v23.a = FLOAT_1_0;
  v23.r = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
  v23.g = GammaLUT_sRGB_to_scRGB[BYTE1(a3)] / 255.0;
  v23.b = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
  SystemMetrics = (float)GetSystemMetrics(76);
  *(float *)&v22 = SystemMetrics;
  v6 = (float)GetSystemMetrics(77);
  *((float *)&v22 + 1) = v6;
  SetLastError(0);
  v7 = GetSystemMetrics(78);
  if ( v7 )
  {
    *((float *)&v22 + 2) = (float)v7 + SystemMetrics;
    SetLastError(0);
    v8 = GetSystemMetrics(79);
    if ( v8 )
    {
      *((float *)&v22 + 3) = (float)v8 + v6;
      v9 = CRectangleInstruction::Create(a2, &v21);
      v10 = v21;
      v11 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x47u);
      }
      else
      {
        v12 = v21;
        *(_OWORD *)((char *)v21 + 24) = v22;
        v13 = CRectangleInstruction::SetSolidFill(v12, &v23, 1.0);
        v11 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x4Au);
        }
        else
        {
          v14 = CRenderDataVisual::AddInstruction(this, v10);
          v11 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x4Cu);
          }
          else if ( IsPPIEdition() )
          {
            CDesktopWindowReplacement::_AddPPIRectangleInstruction(this, a2, v15, v16);
          }
        }
      }
      if ( v10 )
        CBaseObject::Release(v10);
      return v11;
    }
    LastError = GetLastError();
    v11 = LastError;
    if ( LastError > 0 )
      v11 = (unsigned __int16)LastError | 0x80070000;
    v20 = 68;
  }
  else
  {
    v18 = GetLastError();
    v11 = v18;
    if ( v18 > 0 )
      v11 = (unsigned __int16)v18 | 0x80070000;
    v20 = 65;
  }
  if ( (v11 & 0x80000000) == 0 )
    v11 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v20);
  return v11;
}
