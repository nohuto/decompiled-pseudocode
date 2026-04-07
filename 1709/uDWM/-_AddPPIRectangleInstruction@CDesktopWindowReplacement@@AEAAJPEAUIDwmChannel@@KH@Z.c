/*
 * XREFs of ?_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJPEAUIDwmChannel@@KH@Z @ 0x18006EFB0
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z @ 0x1800344FC (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800356E8 (-Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopWindowReplacement::_AddPPIRectangleInstruction(
        CDesktopWindowReplacement *this,
        struct IDwmChannel *a2)
{
  int SystemMetrics; // ebx
  signed int LastError; // eax
  signed int v6; // ebx
  int v7; // eax
  struct CSolidRectangleInstruction *v8; // rdi
  struct CRenderDataInstruction *v9; // rdx
  __int128 v10; // xmm1
  int v11; // eax
  struct CSolidRectangleInstruction *v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+38h] [rbp-28h]
  __int128 v15; // [rsp+48h] [rbp-18h]

  v13 = 0LL;
  *(float *)&v15 = (float)(GetSystemMetrics(76) + 10);
  *((float *)&v15 + 2) = *(float *)&v15 + 4.0;
  SetLastError(0);
  SystemMetrics = GetSystemMetrics(79);
  if ( SystemMetrics )
  {
    *(_QWORD *)&v14 = 0x3F8000003F800000LL;
    *((_QWORD *)&v14 + 1) = 0x3F8000003F800000LL;
    *((float *)&v15 + 1) = (float)(SystemMetrics + GetSystemMetrics(77) - 14);
    *((float *)&v15 + 3) = *((float *)&v15 + 1) + 4.0;
    v7 = CSolidRectangleInstruction::Create(a2, &v13);
    v8 = v13;
    v6 = v7;
    if ( v7 >= 0 )
    {
      v9 = v13;
      v10 = v14;
      *((_OWORD *)v13 + 2) = v15;
      *((_OWORD *)v8 + 1) = v10;
      v11 = CRenderDataVisual::AddInstruction(this, v9);
      v6 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x73u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x70u);
    }
    if ( v8 )
      CBaseObject::Release(v8);
  }
  else
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( v6 >= 0 )
      v6 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x65u);
  }
  return (unsigned int)v6;
}
