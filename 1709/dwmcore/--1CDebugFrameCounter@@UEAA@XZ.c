/*
 * XREFs of ??1CDebugFrameCounter@@UEAA@XZ @ 0x180125DBC
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180125EB4 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??_ECDebugFrameCounter@@UEAAPEAXI@Z @ 0x180126280 (--_ECDebugFrameCounter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CDisplayDebugFrameCounter@@UEAA@XZ @ 0x18012F4E8 (--1CDisplayDebugFrameCounter@@UEAA@XZ.c)
 */

void __fastcall CDebugFrameCounter::~CDebugFrameCounter(CDebugFrameCounter *this)
{
  *(_QWORD *)this = &CDebugFrameCounter::`vftable';
  CDisplayDebugFrameCounter::~CDisplayDebugFrameCounter((CDebugFrameCounter *)((char *)this + 4656));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
