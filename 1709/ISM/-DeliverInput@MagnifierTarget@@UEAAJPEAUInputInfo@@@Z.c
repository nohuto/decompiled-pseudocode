/*
 * XREFs of ?DeliverInput@MagnifierTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800A64D0
 * Callers:
 *     ?DeliverInput@MagnifierTarget@@W7EAAJPEAUInputInfo@@@Z @ 0x1800A6A00 (-DeliverInput@MagnifierTarget@@W7EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x180071D7C (-OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall MagnifierTarget::DeliverInput(SessionBasedPointerDeviceArbitration **this, struct InputInfo *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx

  if ( a2 )
  {
    v3 = SessionBasedPointerDeviceArbitration::OnInputReport(this[6], a2);
    v2 = v3;
    if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, 216, v3);
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 213, 87);
  }
  return v2;
}
