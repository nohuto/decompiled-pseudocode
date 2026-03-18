/*
 * XREFs of ?SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z @ 0x1C0137F5C
 * Callers:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1C01332A0 (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@@Z @ 0x1C0137D6C (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall CBasePTPEngine::SendTimerOutput(__int64 a1, int a2, int a3)
{
  _DWORD *v3; // rbx
  void (__fastcall ***v4)(_QWORD, _DWORD *); // rcx

  v3 = (_DWORD *)(a1 + 528);
  *(_DWORD *)(a1 + 532) = a2;
  *(_DWORD *)(a1 + 536) = a3;
  v4 = *(void (__fastcall ****)(_QWORD, _DWORD *))(a1 + 8);
  *v3 = 3;
  (**v4)(v4, v3);
  return memset(v3, 0, 0x258uLL);
}
