/*
 * XREFs of RtlDeleteCriticalSection @ 0x180061480
 * Callers:
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     EtwpFreeLoggerContext @ 0x180060EAC (EtwpFreeLoggerContext.c)
 *     RtlDestroyHeap @ 0x1800610F0 (RtlDestroyHeap.c)
 *     RtlDeleteResource @ 0x180061430 (RtlDeleteResource.c)
 *     RtlTraceDatabaseDestroy @ 0x1800FAF70 (RtlTraceDatabaseDestroy.c)
 *     _ResFindClose @ 0x18010FAF0 (_ResFindClose.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpGetStackTraceAddressEx @ 0x180061570 (RtlpGetStackTraceAddressEx.c)
 *     RtlpFreeDebugInfo @ 0x180061594 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlStdReleaseStackTrace @ 0x1800FA3C0 (RtlStdReleaseStackTrace.c)
 */

__int64 __fastcall RtlDeleteCriticalSection(__int64 *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  char *v5; // rcx
  unsigned int v6; // r14d
  __int64 v7; // rbx
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 *v11; // rdx
  __int64 **v12; // rcx
  __int64 StackTraceAddress; // rax

  v5 = (char *)a1[3];
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    v6 = NtClose(v5);
  else
    v6 = 0;
  v7 = *a1;
  if ( (unsigned __int64)(*a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v9 = a1[4] & 0x4000000;
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlCriticalSectionLock, a2, a3, a4);
    v10 = (__int64 *)(v7 + 16);
    if ( *(_QWORD *)(v7 + 16) )
    {
      v11 = (__int64 *)*v10;
      v12 = *(__int64 ***)(v7 + 24);
      if ( *(__int64 **)(*v10 + 8) != v10 || *v12 != v10 )
        __fastfail(3u);
      *v12 = v11;
      v11[1] = (__int64)v12;
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    StackTraceAddress = RtlpGetStackTraceAddressEx(*(unsigned __int16 *)(v7 + 2), *(unsigned __int16 *)(v7 + 44));
    if ( StackTraceAddress && RtlpStackTraceDatabase )
      RtlStdReleaseStackTrace(RtlpStackTraceDatabase, StackTraceAddress);
    memset((void *)v7, 0, 0x30uLL);
    if ( !v9 )
      RtlpFreeDebugInfo(v7);
  }
  memset(a1, 0, 0x28uLL);
  return v6;
}
