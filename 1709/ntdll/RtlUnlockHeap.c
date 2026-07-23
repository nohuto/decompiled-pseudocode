/*
 * XREFs of RtlUnlockHeap @ 0x18004A120
 * Callers:
 *     RtlpLockUlockAllHeapsCallback @ 0x180012D60 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800136B8 (RtlpQueryExtendedHeapInformation.c)
 *     RtlValidateHeap @ 0x18004BEC0 (RtlValidateHeap.c)
 *     RtlExitUserProcess @ 0x180076130 (RtlExitUserProcess.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x180076728 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180100870 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlpHpHeapUnlock @ 0x18003886C (RtlpHpHeapUnlock.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18004A1AC (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpLogHeapUnlockEvent @ 0x180101D2C (RtlpLogHeapUnlockEvent.c)
 */

BOOLEAN __cdecl RtlUnlockHeap(PVOID HeapHandle)
{
  _RTL_CRITICAL_SECTION *v2; // rcx
  _DWORD *SharedData; // rcx
  __int64 v4; // rcx

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    RtlpHpHeapUnlock((__int64)HeapHandle, 0);
  }
  else
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_180159448)();
    if ( !(unsigned __int8)RtlpCheckHeapSignature(HeapHandle, "RtlUnlockHeap") )
      return 0;
    if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
    {
      v2 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
      --*((_WORD *)HeapHandle + 192);
      RtlLeaveCriticalSection(v2);
    }
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v4 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v4 = 2147353472LL;
  if ( *(_BYTE *)v4 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapUnlockEvent(HeapHandle);
  }
  return 1;
}
