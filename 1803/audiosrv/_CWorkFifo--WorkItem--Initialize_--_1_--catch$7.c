/*
 * XREFs of _CWorkFifo::WorkItem::Initialize_::_1_::catch$7 @ 0x1800F3470
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CWorkFifo::WorkItem::Initialize_::_1_::catch_7(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x22,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
    (const char *)0x8007000ELL);
  return &loc_1800F344A;
}
