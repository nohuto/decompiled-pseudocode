/*
 * XREFs of PfTStart @ 0x1406451D8
 * Callers:
 *     PfSetSuperfetchInformation @ 0x14048DBD0 (PfSetSuperfetchInformation.c)
 *     PfpParametersPropagate @ 0x14075CCAC (PfpParametersPropagate.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     PfFbBufferListUpdateMax @ 0x1400D2E80 (PfFbBufferListUpdateMax.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PfFbBufferListAllocate @ 0x140181198 (PfFbBufferListAllocate.c)
 *     PfTAccessTracingStart @ 0x140478230 (PfTAccessTracingStart.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x14052AC40 (PsCreateSystemThreadEx.c)
 *     PsEnumProcesses @ 0x1405385E4 (PsEnumProcesses.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     PfTInitialize @ 0x1406444B8 (PfTInitialize.c)
 *     PfTAllocateBuffers @ 0x140645458 (PfTAllocateBuffers.c)
 *     PfpCreateEvent @ 0x1406455CC (PfpCreateEvent.c)
 *     PfTCleanup @ 0x14075C578 (PfTCleanup.c)
 */

__int64 __fastcall PfTStart(__int64 a1, void *a2, unsigned int a3)
{
  unsigned int v3; // edi
  int SystemThread; // esi
  HANDLE v6; // rcx
  _SLIST_ENTRY *v7; // rcx
  _SLIST_ENTRY *v8; // rcx
  __int64 v10; // rdx
  signed __int32 v11[8]; // [rsp+0h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  Handle = a2;
  v3 = a3;
  if ( (a3 & 1) != 0 && (xmmword_1403CD504 & 1) == 0 )
    v3 = a3 & 0xFFFFFFFE;
  if ( (v3 & 2) != 0 && (xmmword_1403CD504 & 1) == 0 && (_DWORD)qword_1403CD520 != 1 && HIDWORD(qword_1403CD520) != 1 )
    v3 &= ~2u;
  if ( (v3 & 1) != 0 )
  {
    SystemThread = PfTAllocateBuffers(a1 + 24, 0x8000LL, 8LL, 1112303184LL);
    if ( SystemThread < 0 )
      goto LABEL_30;
    SystemThread = PfTAllocateBuffers(a1 + 64, 81960LL, 2LL, 1413834320LL);
    if ( SystemThread < 0 )
      goto LABEL_30;
    SystemThread = PsCreateSystemThreadEx(
                     (__int64)&Handle,
                     0x1FFFFF,
                     0LL,
                     0LL,
                     0LL,
                     (__int64)PfTLoggingWorker,
                     a1 + 104,
                     0LL,
                     0LL);
    if ( SystemThread < 0 )
      goto LABEL_30;
    ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v6 = Handle;
    *(_QWORD *)(a1 + 104) = Object;
    ObCloseHandle(v6, 0);
  }
  if ( (v3 & 3) != 0 && !*(_QWORD *)(a1 + 616) )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchTracesReady");
    SystemThread = PfpCreateEvent(&DestinationString, 1LL, a1 + 616);
    if ( SystemThread < 0 )
    {
LABEL_30:
      PfTCleanup(a1);
      PfTInitialize(a1, v10, 1);
      return (unsigned int)SystemThread;
    }
  }
  if ( (v3 & 1) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 352, 0x100000);
    PfFbBufferListAllocate(v7, ((_DWORD)KeNumberProcessors_0 + 2) << 12, 2 * KeNumberProcessors_0 + 4);
  }
  if ( (v3 & 2) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 224, 0x1000000);
    PfFbBufferListAllocate(v8, ((_DWORD)KeNumberProcessors_0 + 7) << 15, 2 * KeNumberProcessors_0 + 14);
  }
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
  if ( (v3 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 540) = HIDWORD(xmmword_1403CD504);
    if ( dword_1403CD398 < (unsigned int)dword_1403CD39C )
      PfTAccessTracingStart(a1, (__int64)&PfKernelGlobals, 2);
  }
  if ( (v3 & 2) != 0 )
    *(_DWORD *)(a1 + 548) = DWORD2(xmmword_1403CD504);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 560));
  *(_DWORD *)(a1 + 8) |= v3;
  if ( (v3 & 1) != 0 )
  {
    _InterlockedOr(v11, 0);
    PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PfCalculateProcessHash, 0LL);
    PfTAccessTracingStart(a1, (__int64)&PfKernelGlobals, 1);
  }
  return 0;
}
