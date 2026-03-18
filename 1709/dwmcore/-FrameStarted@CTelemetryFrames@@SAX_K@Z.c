/*
 * XREFs of ?FrameStarted@CTelemetryFrames@@SAX_K@Z @ 0x180010FB4
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x1800082C4 (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 *     _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180008454 (_anonymous_namespace_--SealCurrentFrameSequenceLocked.c)
 */

void __fastcall CTelemetryFrames::FrameStarted(__int64 a1)
{
  HANDLE CurrentThread; // rax
  unsigned __int64 v3; // rax
  int v4; // ecx
  int v5; // ecx
  __int32 v6; // ebx
  int v7; // ebx
  _QWORD *v8; // rcx
  char OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  if ( !byte_18026EBA8 )
  {
    AcquireSRWLockExclusive(&SRWLock);
    dword_18026EE70 = GetCurrentThreadId();
    byte_18026EBA8 = 1;
  }
  CurrentThread = GetCurrentThread();
  if ( QueryThreadCycleTime(CurrentThread, &CycleTime) )
  {
    qword_18026EB98 = CycleTime;
  }
  else
  {
    qword_18026EB98 = 0LL;
    CycleTime = 0LL;
  }
  if ( byte_18026EBA9 )
  {
    anonymous_namespace_::SealCurrentFrameSequenceLocked(1);
    byte_18026EBA9 = 0;
    xmmword_180272748 = xmmword_180272968;
  }
  v3 = a1 - qword_18026EB80;
  qword_18026EB80 = a1;
  if ( 1000 * (v3 / g_qpcFrequency.QuadPart) + 1000 * (v3 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart >= CCommonRegistryData::m_telemetryFramesSequenceIdleIntervalMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequenceLocked(0);
  if ( dword_18026ED28 )
    goto LABEL_10;
  qword_18026EE58 = a1;
  v8 = (_QWORD *)*((_QWORD *)qword_180272758 + 5);
  if ( (v8[1] - *v8) / 456LL )
    dword_18026ED3C = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(v8, a1);
  if ( CallNtPowerInformation(SystemExecutionState, 0LL, 0, &OutputBuffer, 4u) < 0 || (OutputBuffer & 2) == 0 )
LABEL_10:
    v4 = dword_18026ED20;
  else
    v4 = dword_18026ED20 | 0x20;
  v5 = dword_18026EB94 | v4;
  dword_18026ED20 = v5;
  byte_18026EB89 = byte_18026EB90;
  if ( byte_18026EB90 )
  {
    byte_18026EB90 = 0;
    dword_18026ED20 = v5 | 0x100;
  }
  dword_18026EB94 = 0;
  v6 = _InterlockedExchange(&dword_180272190, 0);
  dword_18026ED24 |= v6;
  ++dword_18026ED28;
  dword_18026EB8C = v6;
  v7 = MEMORY[0x7FFE02E4];
  if ( GetTickCount() - v7 < 0x3E8 )
    dword_18026ED20 |= 1u;
  `anonymous namespace'::_frameStartSnaphot = dword_18026EDA8;
  dword_18026EBB8 = dword_18026EDB0;
  dword_18026EBB4 = dword_18026EDAC;
  dword_18026EBBC = dword_18026EDB4;
}
