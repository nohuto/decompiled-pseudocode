/*
 * XREFs of PsWatchWorkingSet @ 0x140284450
 * Callers:
 *     KiPageFault @ 0x1401B8300 (KiPageFault.c)
 * Callees:
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 */

signed __int64 __fastcall PsWatchWorkingSet(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 result; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // rdi
  signed __int32 v8; // ecx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v10; // eax
  int v11; // ecx
  signed __int32 v12; // ett
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  signed __int32 v15; // eax
  signed __int64 v16; // rdx
  bool v17; // zf

  CurrentThread = KeGetCurrentThread();
  result = (signed __int64)CurrentThread->ApcState.Process;
  v6 = *(_QWORD *)(result + 976);
  if ( v6 )
  {
    v7 = 0x4000000000000000LL;
    result = 0x8000000000000000uLL;
    if ( a1 >= 276 )
      v7 = 0x8000000000000000uLL;
    _m_prefetchw((const void *)v6);
    v8 = *(_DWORD *)v6;
    CurrentIrql = KeGetCurrentIrql();
    if ( !CurrentIrql )
      --CurrentThread->KernelApcDisable;
    if ( (v8 & 1) != 0 )
      goto LABEL_20;
    do
    {
      result = (unsigned __int16)v8 & 0xFFFE;
      if ( (unsigned int)result >= 0x800 )
        break;
      v10 = v8;
      v11 = ((unsigned __int16)v8 ^ (unsigned __int16)(v8 + 2)) & 0xFFFE ^ v8;
      v12 = v10;
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)v6,
                               (v11 ^ (v11 + 0x10000)) & 0x7FFF0000 ^ v11,
                               v10);
      v8 = result;
      if ( v12 == (_DWORD)result )
        break;
    }
    while ( (result & 1) == 0 );
    if ( (v8 & 1) != 0 || (result = (unsigned __int16)v8 & 0xFFFE, (unsigned int)result >= 0x800) )
    {
LABEL_20:
      _m_prefetchw((const void *)(v6 + 8));
      v16 = *(_QWORD *)(v6 + 8);
      if ( v16 != -1 )
      {
        do
        {
          result = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 8), v16 + 1, v16);
          v17 = v16 == result;
          v16 = result;
        }
        while ( !v17 && result != -1 );
      }
    }
    else
    {
      v13 = (unsigned __int16)v8 >> 1;
      *(_QWORD *)(v6 + 24 * v13 + 40) = a2;
      if ( a1 >= 276 )
        v14 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      else
        v14 = a3 | 1;
      *(_QWORD *)(v6 + 24 * v13 + 48) = v14;
      *(_QWORD *)(v6 + 24 * v13 + 56) = *(_QWORD *)&CurrentThread[1].CurrentRunTime;
      v15 = _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFF0000);
      if ( (v15 & 1) != 0 && (v15 & 0x7FFF0000) == 0x10000 )
        KeSignalGate(v6 + 16, 0);
      result = (signed __int64)CurrentThread->WaitBlock[0].SparePtr;
      if ( result )
        _InterlockedOr64((volatile signed __int64 *)result, v7);
    }
    if ( !CurrentIrql )
      return (signed __int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return result;
}
