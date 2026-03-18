/*
 * XREFs of RtlpStdGetRecordedStackTraceIndex @ 0x140251114
 * Callers:
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     ExpInitializeResource @ 0x140153AF4 (ExpInitializeResource.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlpStdExtendUpperWatermark @ 0x140251034 (RtlpStdExtendUpperWatermark.c)
 */

__int64 __fastcall RtlpStdGetRecordedStackTraceIndex(KSPIN_LOCK *SpinLock, unsigned __int16 *a2)
{
  __int64 v2; // r8
  unsigned int v5; // eax
  _DWORD *v6; // rdx
  KSPIN_LOCK *v7; // rsi
  void *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx

  v2 = a2[7];
  v5 = 0;
  if ( a2[7] )
  {
    v6 = a2 + 8;
    do
    {
      v5 += *v6;
      v6 += 2;
      --v2;
    }
    while ( v2 );
  }
  v7 = &SpinLock[3 * (v5 % *((_DWORD *)SpinLock + 180))];
  *((_BYTE *)v7 + 744) = KeAcquireSpinLockRaiseToDpc(v7 + 92);
  if ( *(_DWORD *)(a2 + 5) )
  {
    LODWORD(v10) = a2[6] + (a2[5] << 16);
  }
  else
  {
    v9 = (_QWORD *)RtlpStdExtendUpperWatermark(SpinLock, v8);
    if ( v9 )
    {
      *v9 = a2;
      v10 = (__int64)(SpinLock[23] - (_QWORD)v9) >> 3;
      a2[6] = v10;
      a2[5] = WORD1(v10);
    }
    else
    {
      LODWORD(v10) = 0;
    }
  }
  v11 = *((unsigned __int8 *)v7 + 744);
  KxReleaseSpinLock(v7 + 92);
  __writecr8(v11);
  return (unsigned int)v10;
}
