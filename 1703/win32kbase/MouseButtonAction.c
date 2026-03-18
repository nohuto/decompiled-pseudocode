/*
 * XREFs of MouseButtonAction @ 0x1C012EDF0
 * Callers:
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C01192F0 (-xxxMKButtonSetState@@YAHG@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C01310D8 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@P.c)
 */

__int64 __fastcall MouseButtonAction(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0186018[0] + 8LL))(qword_1C0186018[0]);
  if ( result )
    return CMouseProcessor::AccessibilityMouseButtonAction(result, a1, a2, a3);
  return result;
}
