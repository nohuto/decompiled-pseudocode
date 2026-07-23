/*
 * XREFs of KeIntSteerSnapPerf @ 0x140035520
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140033FB0 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x140035880 (RtlGetInterruptTimePrecise.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall KeIntSteerSnapPerf(_DWORD *a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER InterruptTimePrecise; // rax
  LONGLONG v5; // rbx
  LARGE_INTEGER v6; // rsi
  __int64 MHz; // rdi
  __int64 result; // rax
  __int64 v9; // r13
  KIRQL v10; // al
  ULONG_PTR *v11; // r11
  KIRQL LowPart; // r14
  ULONG_PTR *v13; // r10
  ULONG_PTR v14; // rdi
  ULONG_PTR *v15; // r12
  unsigned int v16; // ecx
  ULONG_PTR v17; // rdx
  ULONG_PTR v18; // r8
  __int64 *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  bool v23; // zf
  ULONG_PTR v24; // rcx
  __int64 v25; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp+18h] BYREF
  __int64 v27; // [rsp+78h] [rbp+20h]

  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v5 = InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap;
  v6 = InterruptTimePrecise;
  MHz = KeGetCurrentPrcb()->MHz;
  v27 = MHz;
  if ( (unsigned __int64)(InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap) >= 0x16E360 )
  {
    KiIntSteerPreviousPerfSnap = InterruptTimePrecise.QuadPart;
    v9 = 0LL;
    v10 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    v11 = (ULONG_PTR *)KiIntTrackRootList;
    LOBYTE(PerformanceCounter.LowPart) = v10;
    LowPart = v10;
    if ( (ULONG_PTR *)KiIntTrackRootList != &KiIntTrackRootList )
    {
      do
      {
        v13 = (ULONG_PTR *)v11[2];
        v14 = 0LL;
        if ( v13 != v11 + 2 )
        {
          do
          {
            v15 = (ULONG_PTR *)*v13;
            if ( *(ULONG_PTR **)(*v13 + 8) != v13 || *(ULONG_PTR **)v13[1] != v13 )
              __fastfail(3u);
            v16 = *((_DWORD *)v13 + 6);
            v17 = 0LL;
            v18 = 0LL;
            if ( v16 )
            {
              v19 = (__int64 *)v13[4];
              v20 = v16;
              do
              {
                v21 = *v19++;
                v18 += *(_QWORD *)(v21 + 176);
                v17 += *(_QWORD *)(v21 + 200);
                --v20;
              }
              while ( v20 );
            }
            v22 = v18 - v13[5];
            v23 = v18 == v13[5];
            v13[5] = v18;
            v24 = v14 + v22;
            if ( v22 < 0 || v23 )
              v24 = v14;
            v25 = v17 - v13[6];
            v13[6] = v17;
            v13 = v15;
            v14 = v24 + v25;
            if ( v25 <= 0 )
              v14 = v24;
          }
          while ( v15 != v11 + 2 );
        }
        v11[24] = v14;
        v9 += v14;
        v11 = (ULONG_PTR *)*v11;
      }
      while ( v11 != &KiIntTrackRootList );
      MHz = v27;
      LowPart = PerformanceCounter.LowPart;
    }
    KxReleaseSpinLock(&KiIntTrackSpinlock);
    __writecr8(LowPart);
    KiIntSteerLoadPercent = 10000 * v9 / (unsigned __int64)(v5 * MHz);
  }
  *a1 = KiIntSteerLoadPercent;
  result = 0LL;
  *a2 = v6;
  return result;
}
