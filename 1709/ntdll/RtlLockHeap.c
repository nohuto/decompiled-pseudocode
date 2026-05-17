/*
 * XREFs of RtlLockHeap @ 0x18004A090
 * Callers:
 *     RtlpLockUlockAllHeapsCallback @ 0x180012D60 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800136B8 (RtlpQueryExtendedHeapInformation.c)
 *     RtlValidateHeap @ 0x18004BEC0 (RtlValidateHeap.c)
 *     RtlExitUserProcess @ 0x180076130 (RtlExitUserProcess.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180100870 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpHpHeapLock @ 0x180048BF8 (RtlpHpHeapLock.c)
 *     RtlpCheckHeapSignature @ 0x18004A1AC (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpLogHeapLockEvent @ 0x18010177C (RtlpLogHeapLockEvent.c)
 */

char __fastcall RtlLockHeap(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  _DWORD *SharedData; // rcx
  __int64 v6; // rcx

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    RtlpHpHeapLock(a1, a2, a3, a4);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_180159440)();
    if ( !(unsigned __int8)RtlpCheckHeapSignature(a1, "RtlLockHeap") )
      return 0;
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      ++*(_WORD *)(a1 + 384);
    }
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v6 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v6 = 2147353472LL;
  if ( *(_BYTE *)v6 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapLockEvent(a1);
  }
  return 1;
}
