/*
 * XREFs of ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x180034798
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z @ 0x1800344FC (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x18009D6D8 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectangleInstruction::SetSolidFill(
        CRectangleInstruction *this,
        const struct _D3DCOLORVALUE *a2,
        double a3)
{
  __int64 v3; // r8
  CBaseObject **v4; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax

  v4 = (CBaseObject **)((char *)this + 16);
  if ( *((_QWORD *)this + 2) || (v6 = CResource::Create(0x22u, *((_QWORD *)this + 5), v4), v7 = v6, v6 >= 0) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct _D3DCOLORVALUE *, _DWORD, _DWORD, _DWORD))(**((_QWORD **)*v4 + 2) + 1176LL))(
           *((_QWORD *)*v4 + 2),
           *((unsigned int *)*v4 + 6),
           v3,
           a2,
           0,
           0,
           0);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x58u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x4Fu);
  }
  return v7;
}
