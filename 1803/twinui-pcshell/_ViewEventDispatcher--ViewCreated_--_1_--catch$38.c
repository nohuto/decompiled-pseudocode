/*
 * XREFs of _ViewEventDispatcher::ViewCreated_::_1_::catch$38 @ 0x1800B2DEC
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x1801DBE80 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewEventDispatcher::ViewCreated_::_1_::catch_38(__int64 a1, __int64 a2)
{
  ViewManagerBridge::CloseViewForScenario(
    *(_QWORD *)(*(_QWORD *)(a2 + 184) + 512LL),
    *(unsigned int *)(a2 + 48),
    *(_QWORD *)(a2 + 64),
    1LL);
  return &loc_1800363C2;
}
