/*
 * XREFs of LdrpQueueWork @ 0x18004B450
 * Callers:
 *     LdrpSignalModuleMapped @ 0x1800226F0 (LdrpSignalModuleMapped.c)
 *     LdrpMapAndSnapDependency @ 0x18002EEF8 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     LdrpLoadContextReplaceModule @ 0x18008041C (LdrpLoadContextReplaceModule.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     TpPostWork @ 0x180047120 (TpPostWork.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 */

struct _PEB *__fastcall LdrpQueueWork(__int64 a1)
{
  struct _PEB *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  result = *(struct _PEB **)(a1 + 40);
  if ( *(int *)&result->InheritedAddressSpace >= 0 )
  {
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v3 = (_QWORD *)qword_18015F2B8;
    v4 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_18015F2B8 != &LdrpWorkQueue )
      __fastfail(3u);
    *(_QWORD *)(a1 + 72) = qword_18015F2B8;
    *v4 = &LdrpWorkQueue;
    *v3 = v4;
    qword_18015F2B8 = a1 + 64;
    result = (struct _PEB *)RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      result = NtCurrentPeb();
      if ( !result->Ldr->ShutdownInProgress )
        return (struct _PEB *)TpPostWork((_PEB_LDR_DATA *)LdrpMapAndSnapWork, v5, v6, v7);
    }
  }
  return result;
}
