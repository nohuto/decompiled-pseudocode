/*
 * XREFs of ?SendTimerOutput@CBasePTPEngine@@IEAAXW4Action@Timer@Payload@PTPEngineOutput@@I@Z @ 0x1C013723C
 * Callers:
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z @ 0x1C01326C8 (-CancelMouseUpTimer@CPTPEngine@@AEAAXKH@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@@Z @ 0x1C013704C (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIKKUtagPOINT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void *__fastcall CBasePTPEngine::SendTimerOutput(__int64 a1, int a2, int a3)
{
  _DWORD *v3; // rbx
  void (__fastcall ***v4)(_QWORD, _DWORD *); // rcx

  v3 = (_DWORD *)(a1 + 548);
  *(_DWORD *)(a1 + 552) = a2;
  *(_DWORD *)(a1 + 556) = a3;
  v4 = *(void (__fastcall ****)(_QWORD, _DWORD *))(a1 + 8);
  *v3 = 3;
  (**v4)(v4, v3);
  return memset(v3, 0, 0x258uLL);
}
