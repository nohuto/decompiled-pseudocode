/*
 * XREFs of ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x180031468
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z @ 0x1800311D0 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800A5C08 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectangleInstruction::SetSolidFill(
        CRectangleInstruction *this,
        const struct _D3DCOLORVALUE *a2,
        double a3)
{
  CBaseObject **v3; // rdi
  CBaseObject *v4; // r8
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax

  v3 = (CBaseObject **)((char *)this + 16);
  v4 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( !v4 )
  {
    v6 = CResource::Create(0x22u, *((_QWORD *)this + 5), v3);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x4Fu);
      return v7;
    }
    v4 = *v3;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, CBaseObject *, const struct _D3DCOLORVALUE *, _DWORD, _DWORD, _DWORD))(**((_QWORD **)v4 + 2) + 1192LL))(
         *((_QWORD *)v4 + 2),
         *((unsigned int *)v4 + 6),
         v4,
         a2,
         0,
         0,
         0);
  v7 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x58u);
  return v7;
}
