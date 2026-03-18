/*
 * XREFs of PpmInstallFeedbackCounters @ 0x14017F278
 * Callers:
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     PpmContinueActiveTimeAccumulation @ 0x140038C54 (PpmContinueActiveTimeAccumulation.c)
 *     PpmPerfFeedbackCounterRead @ 0x14017F3C8 (PpmPerfFeedbackCounterRead.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall PpmInstallFeedbackCounters(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ecx
  unsigned __int8 CurrentIrql; // r15
  __int64 v6; // rbp
  __int64 v7; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v9; // r8
  bool v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rax
  struct _GROUP_AFFINITY v14; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v15[8]; // [rsp+30h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-40h] BYREF
  int v17; // [rsp+70h] [rbp-8h]

  v4 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  v14.Reserved[1] = 0;
  v14.Reserved[2] = 0;
  *(_DWORD *)&v14.Group = (unsigned __int16)(v4 >> 6);
  v14.Mask = 1LL << (v4 & 0x3F);
  KeSetSystemGroupAffinityThread(&v14, &PreviousAffinity);
  CurrentIrql = KeGetCurrentIrql();
  v6 = 2LL;
  __writecr8(2uLL);
  v7 = a1 + 23880;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  PpmContinueActiveTimeAccumulation(a1, PerformanceCounter.QuadPart, v9);
  _disable();
  v10 = (v17 & 0x200) != 0;
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 23880));
  v12 = a1 + 23880 - (_QWORD)a2;
  do
  {
    v13 = *a2;
    if ( *a2 )
    {
      if ( *(_BYTE *)(v13 + 34) )
      {
        *(_BYTE *)(v7 + 137) = 1;
        v13 = *a2;
      }
      *(_QWORD *)((char *)a2 + v12 + 24) = v13;
      LOBYTE(v11) = 1;
      *(_QWORD *)((char *)a2 + v12 + 64) = 100LL * *(_QWORD *)(v7 + 48);
      PpmPerfFeedbackCounterRead(*a2, v11, v15);
    }
    ++a2;
    --v6;
  }
  while ( v6 );
  if ( *(_QWORD *)(v7 + 32) )
  {
    *(_BYTE *)(v7 + 136) = 1;
  }
  else if ( *(_QWORD *)(v7 + 24) )
  {
    *(_BYTE *)(v7 + 136) = 0;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v7);
  if ( v10 )
    _enable();
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
