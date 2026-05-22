/*
 * XREFs of ?NavigationDisable@ControllerProcessor@@QEAAJXZ @ 0x18003E9A4
 * Callers:
 *     ?NavigationDisable@ControllerNavigationManager@@UEAAJXZ @ 0x18003CB50 (-NavigationDisable@ControllerNavigationManager@@UEAAJXZ.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18003D2D8 (--1ControllerProcessor@@MEAA@XZ.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x1800418B4 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18003EA00 (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

__int64 __fastcall ControllerProcessor::NavigationDisable(ControllerProcessor *this)
{
  __int64 result; // rax
  __int64 v2; // rcx

  LODWORD(result) = ControllerProcessor::UpdateNavigationState(this, 2LL, 0LL);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v2, &MinInput_Warning_CheckResult, 12, 887, result);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  return (unsigned int)result;
}
