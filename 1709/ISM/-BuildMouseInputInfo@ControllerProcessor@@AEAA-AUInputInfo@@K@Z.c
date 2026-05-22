/*
 * XREFs of ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AUInputInfo@@K@Z @ 0x18003F664
 * Callers:
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x18003F2FC (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z @ 0x18003F504 (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z.c)
 *     ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x1800401C0 (-ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 */

_DWORD *__fastcall ControllerProcessor::BuildMouseInputInfo(__int64 a1, _DWORD *a2, int a3)
{
  int *v6; // rax
  int v7; // ecx
  _DWORD *result; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  memset(a2, 0, 0xB20uLL);
  *a2 = 2;
  a2[2] = GetTickCount();
  *((LARGE_INTEGER *)a2 + 2) = PerformanceCount;
  v6 = *(int **)(a1 + 32);
  a2[10] = 2848;
  v7 = *v6;
  *((_QWORD *)a2 + 83) = *(_QWORD *)(a1 + 296);
  *(_OWORD *)(a2 + 174) = 0uLL;
  a2[1] = v7;
  *((_QWORD *)a2 + 89) = 0LL;
  *((_WORD *)a2 + 349) = 0;
  *(_QWORD *)(a2 + 177) = 0LL;
  result = a2;
  a2[175] = a3;
  return result;
}
