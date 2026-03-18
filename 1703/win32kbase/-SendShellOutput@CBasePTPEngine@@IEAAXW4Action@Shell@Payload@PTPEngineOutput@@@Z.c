/*
 * XREFs of ?SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x1C0137E70
 * Callers:
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C0136988 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall CBasePTPEngine::SendShellOutput(__int64 a1, int a2)
{
  _DWORD *v2; // rbx
  void (__fastcall ***v3)(_QWORD, _DWORD *); // rcx

  v2 = (_DWORD *)(a1 + 528);
  *(_DWORD *)(a1 + 532) = a2;
  v3 = *(void (__fastcall ****)(_QWORD, _DWORD *))(a1 + 8);
  *v2 = 4;
  (**v3)(v3, v2);
  return memset(v2, 0, 0x258uLL);
}
