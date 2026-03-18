/*
 * XREFs of RtlpStdGetRecordedStackTraceIndex @ 0x14023B884
 * Callers:
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     ExpInitializeResource @ 0x1401526A0 (ExpInitializeResource.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlpStdExtendUpperWatermark @ 0x14023B79C (RtlpStdExtendUpperWatermark.c)
 */

__int64 __fastcall RtlpStdGetRecordedStackTraceIndex(KSPIN_LOCK *SpinLock, unsigned __int16 *a2)
{
  unsigned __int16 v3; // cx
  unsigned int v5; // eax
  _DWORD *v6; // rdx
  __int64 v7; // r8
  KSPIN_LOCK *v8; // rsi
  void *v9; // rdx
  unsigned __int16 v10; // ax
  _QWORD *v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx

  v3 = a2[7];
  v5 = 0;
  if ( v3 )
  {
    v6 = a2 + 8;
    v7 = v3;
    do
    {
      v5 += *v6;
      v6 += 2;
      --v7;
    }
    while ( v7 );
  }
  v8 = &SpinLock[3 * (v5 % *((_DWORD *)SpinLock + 180))];
  *((_BYTE *)v8 + 744) = KeAcquireSpinLockRaiseToDpc(v8 + 92);
  v10 = a2[6];
  if ( v10 || a2[5] )
  {
    LODWORD(v12) = v10 + (a2[5] << 16);
  }
  else
  {
    v11 = (_QWORD *)RtlpStdExtendUpperWatermark(SpinLock, v9);
    if ( v11 )
    {
      *v11 = a2;
      v12 = (__int64)(SpinLock[23] - (_QWORD)v11) >> 3;
      a2[6] = v12;
      a2[5] = WORD1(v12);
    }
    else
    {
      LODWORD(v12) = 0;
    }
  }
  v13 = *((unsigned __int8 *)v8 + 744);
  KxReleaseSpinLock(v8 + 92);
  __writecr8(v13);
  return (unsigned int)v12;
}
