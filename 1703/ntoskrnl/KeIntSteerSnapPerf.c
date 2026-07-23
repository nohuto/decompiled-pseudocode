/*
 * XREFs of KeIntSteerSnapPerf @ 0x140044D00
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140045AD0 (PpmParkSteerInterrupts.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140044EC0 (RtlGetInterruptTimePrecise.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401FECBC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KeIntSteerSnapPerf(_DWORD *a1, LARGE_INTEGER *a2)
{
  _DWORD *v2; // rbx
  LARGE_INTEGER InterruptTimePrecise; // rax
  LONGLONG v5; // r14
  LARGE_INTEGER v6; // r15
  __int64 MHz; // r12
  __int64 v8; // rbp
  unsigned __int8 CurrentIrql; // di
  ULONG_PTR *v10; // r11
  ULONG_PTR *v11; // r10
  ULONG_PTR v12; // rdi
  ULONG_PTR *v13; // rsi
  unsigned int v14; // ecx
  ULONG_PTR v15; // r8
  ULONG_PTR v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 v26; // [rsp+70h] [rbp+18h]
  LARGE_INTEGER PerformanceCounter; // [rsp+78h] [rbp+20h] BYREF

  v2 = a1;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v5 = InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap;
  v6 = InterruptTimePrecise;
  MHz = KeGetCurrentPrcb()->MHz;
  if ( (unsigned __int64)(InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap) < 0x186A0 )
  {
    LODWORD(v22) = KiIntSteerLoadPercent;
  }
  else
  {
    KiIntSteerPreviousPerfSnap = InterruptTimePrecise.QuadPart;
    v8 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    v26 = CurrentIrql;
    __writecr8(2uLL);
    KxAcquireSpinLock(&KiIntTrackSpinlock);
    v10 = (ULONG_PTR *)KiIntTrackRootList;
    if ( (ULONG_PTR *)KiIntTrackRootList != &KiIntTrackRootList )
    {
      do
      {
        v11 = (ULONG_PTR *)v10[2];
        v12 = 0LL;
        if ( v11 != v10 + 2 )
        {
          do
          {
            v13 = (ULONG_PTR *)*v11;
            if ( *(ULONG_PTR **)(*v11 + 8) != v11 || *(ULONG_PTR **)v11[1] != v11 )
              __fastfail(3u);
            v14 = *((_DWORD *)v11 + 6);
            v15 = 0LL;
            v16 = 0LL;
            if ( v14 )
            {
              v17 = (__int64 *)v11[4];
              v18 = v14;
              do
              {
                v19 = *v17++;
                v16 += *(_QWORD *)(v19 + 176);
                v15 += *(_QWORD *)(v19 + 200);
                --v18;
              }
              while ( v18 );
            }
            v20 = v16 - v11[5];
            v11[5] = v16;
            if ( v20 > 0 )
              v12 += v20;
            v21 = v15 - v11[6];
            v11[6] = v15;
            if ( v21 > 0 )
              v12 += v21;
            v11 = v13;
          }
          while ( v13 != v10 + 2 );
        }
        v10[24] = v12;
        v8 += v12;
        v10 = (ULONG_PTR *)*v10;
      }
      while ( v10 != &KiIntTrackRootList );
      v2 = a1;
      CurrentIrql = v26;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KiIntTrackSpinlock, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)&KiIntTrackSpinlock, 0LL);
    __writecr8(CurrentIrql);
    v22 = 10000 * v8 / (unsigned __int64)(v5 * MHz);
    KiIntSteerLoadPercent = v22;
  }
  *v2 = v22;
  result = 0LL;
  *a2 = v6;
  return result;
}
