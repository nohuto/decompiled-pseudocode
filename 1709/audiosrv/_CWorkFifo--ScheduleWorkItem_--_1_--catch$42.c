/*
 * XREFs of _CWorkFifo::ScheduleWorkItem_::_1_::catch$42 @ 0x1800C2199
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CWorkFifo::ScheduleWorkItem_::_1_::catch_42(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 152),
    (void *)0x62,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
    (const char *)0x8007000ELL);
  return &loc_1800C2109;
}
