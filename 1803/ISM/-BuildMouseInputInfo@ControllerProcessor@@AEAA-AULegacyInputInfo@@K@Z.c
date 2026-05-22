/*
 * XREFs of ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AULegacyInputInfo@@K@Z @ 0x180033EE8
 * Callers:
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180033A24 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z @ 0x180033C2C (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z.c)
 *     ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x180034B98 (-ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

_DWORD *__fastcall ControllerProcessor::BuildMouseInputInfo(__int64 a1, _DWORD *a2, int a3)
{
  _DWORD *result; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  memset_0(a2, 0, 0x6C8uLL);
  a2[6] = 1736;
  *a2 = 2;
  a2[2] = GetTickCount();
  *((LARGE_INTEGER *)a2 + 2) = PerformanceCount;
  *((_QWORD *)a2 + 61) = *(_QWORD *)(a1 + 1920);
  *(_OWORD *)(a2 + 130) = 0uLL;
  *((_QWORD *)a2 + 67) = 0LL;
  *((_WORD *)a2 + 261) = 0;
  *(_QWORD *)(a2 + 133) = 0LL;
  result = a2;
  a2[131] = a3;
  return result;
}
