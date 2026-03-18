/*
 * XREFs of ??1CDebugFrameCounter@@UEAA@XZ @ 0x18014883C
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18014886C (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??_ECDebugFrameCounter@@UEAAPEAXI@Z @ 0x180148C50 (--_ECDebugFrameCounter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CDisplayDebugFrameCounter@@UEAA@XZ @ 0x180150D5C (--1CDisplayDebugFrameCounter@@UEAA@XZ.c)
 */

void __fastcall CDebugFrameCounter::~CDebugFrameCounter(CDebugFrameCounter *this)
{
  *(_QWORD *)this = &CDebugFrameCounter::`vftable';
  CDisplayDebugFrameCounter::~CDisplayDebugFrameCounter((CDebugFrameCounter *)((char *)this + 4656));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
