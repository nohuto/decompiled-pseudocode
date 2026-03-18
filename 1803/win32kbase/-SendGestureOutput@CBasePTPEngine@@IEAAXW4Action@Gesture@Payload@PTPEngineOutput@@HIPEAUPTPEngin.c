/*
 * XREFs of ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x1C013AEE0
 * Callers:
 *     ?ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1C01396EC (-ProcessGestureFrame@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z.c)
 *     ?SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z @ 0x1C013AFB0 (-SendInitialGestureFrame@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

void *__fastcall CBasePTPEngine::SendGestureOutput(__int64 a1, int a2, int a3, unsigned int a4, void *Src)
{
  void *v5; // rdi

  *(_DWORD *)(a1 + 556) = a2;
  v5 = (void *)(a1 + 552);
  *(_DWORD *)(a1 + 572) = a4;
  *(_DWORD *)(a1 + 552) = 2;
  *(_DWORD *)(a1 + 560) = a3 != 0;
  memmove((void *)(a1 + 576), Src, 96LL * a4);
  (***(void (__fastcall ****)(_QWORD, void *))(a1 + 8))(*(_QWORD *)(a1 + 8), v5);
  return memset(v5, 0, 0x258uLL);
}
