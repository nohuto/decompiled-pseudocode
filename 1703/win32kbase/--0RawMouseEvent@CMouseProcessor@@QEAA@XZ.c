/*
 * XREFs of ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x1C0049F00
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00477DC (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1C0047A94 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C01310D8 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@P.c)
 * Callees:
 *     <none>
 */

CMouseProcessor::RawMouseEvent *__fastcall CMouseProcessor::RawMouseEvent::RawMouseEvent(
        CMouseProcessor::RawMouseEvent *this)
{
  CMouseProcessor::RawMouseEvent *result; // rax

  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_WORD *)this + 12) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  result = this;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_BYTE *)this + 104) = 0;
  *(_QWORD *)((char *)this + 92) = 0xFFFFFFFFLL;
  *((_DWORD *)this + 25) = 0;
  *((_BYTE *)this + 120) = 0;
  *(_QWORD *)((char *)this + 108) = 0xFFFFFFFFLL;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_QWORD *)this + 16) = 0LL;
  return result;
}
