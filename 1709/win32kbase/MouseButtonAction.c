/*
 * XREFs of MouseButtonAction @ 0x1C012E2F0
 * Callers:
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C0118160 (-xxxMKButtonSetState@@YAHG@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C01307E8 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 */

__int64 __fastcall MouseButtonAction(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
  if ( result )
    return CMouseProcessor::AccessibilityMouseButtonAction(result, a1, a2);
  return result;
}
