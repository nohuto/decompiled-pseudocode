/*
 * XREFs of PiUEventHandleVetoEvent @ 0x1405743B4
 * Callers:
 *     PiUEventHandleIoctl @ 0x1404A539C (PiUEventHandleIoctl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     PsGetProcessImageFileName @ 0x14002BD00 (PsGetProcessImageFileName.c)
 *     RtlStringCchCopyNW @ 0x14006DBC0 (RtlStringCchCopyNW.c)
 *     RtlInitAnsiString @ 0x1400852C0 (RtlInitAnsiString.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140464910 (PiUEventDequeuePendingEventWorker.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     PsLookupProcessByProcessId @ 0x14050F8F0 (PsLookupProcessByProcessId.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     PsGetAllocatedFullProcessImageName @ 0x140564360 (PsGetAllocatedFullProcessImageName.c)
 */

__int64 __fastcall PiUEventHandleVetoEvent(__int64 a1, __int64 *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  int AllocatedFullProcessImageName; // esi
  PEPROCESS v7; // r12
  UNICODE_STRING *v8; // rdi
  char v9; // r13
  __int64 v10; // rbx
  struct _FAST_MUTEX *v11; // rcx
  __int64 *v12; // r15
  __int64 v14; // rcx
  _DWORD *v15; // rdx
  NTSTATUS v16; // eax
  const CHAR *ProcessImageFileName; // rax
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  _STRING DestinationString; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING v20; // [rsp+38h] [rbp-18h] BYREF
  PEPROCESS Process; // [rsp+80h] [rbp+30h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  Process = 0LL;
  *(_QWORD *)&v20.Length = 0LL;
  AllocatedFullProcessImageName = 0;
  v20.Buffer = 0LL;
  v7 = 0LL;
  P = 0LL;
  v8 = 0LL;
  v9 = 0;
  if ( v5 && a2 && a3 == 8 )
  {
    v10 = *a2;
    v11 = *(struct _FAST_MUTEX **)(v5 + 16);
    *(_QWORD *)&DestinationString.Length = *a2;
    ExAcquireFastMutex(v11);
    v12 = *(__int64 **)(v5 + 96);
    if ( v12 == (__int64 *)(v5 + 96) )
    {
      AllocatedFullProcessImageName = -1073741811;
      KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
      goto LABEL_11;
    }
    if ( *(_BYTE *)(v12[3] + 69) )
    {
      ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
      v14 = v12[3];
      v15 = *(_DWORD **)(v14 + 32);
      if ( v15 && *(_QWORD *)(v14 + 40) && !*v15 )
      {
        if ( (_BYTE)v10 )
        {
          *v15 = *(_DWORD *)(&DestinationString.MaximumLength + 1);
          v16 = PsLookupProcessByProcessId(*(HANDLE *)(v5 + 48), &Process);
          v7 = Process;
          if ( v16 < 0
            || (AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageName((__int64)Process, &P),
                AllocatedFullProcessImageName < 0) )
          {
            v8 = &v20;
            RtlInitUnicodeString(&v20, (PCWSTR)&cchOriginalDestLength);
            AllocatedFullProcessImageName = 0;
          }
          else
          {
            v8 = (UNICODE_STRING *)P;
            if ( !*(_WORD *)P )
            {
              v9 = 1;
              ExFreePoolWithTag(P, 0);
              v8 = &v20;
              ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)v7);
              RtlInitAnsiString(&DestinationString, ProcessImageFileName);
              RtlAnsiStringToUnicodeString(&v20, &DestinationString, 1u);
            }
          }
          if ( v8->Length > 0x400u )
          {
            AllocatedFullProcessImageName = RtlStringCchCopyNW(
                                              *(NTSTRSAFE_PWSTR *)(*(_QWORD *)(v12[3] + 40) + 8LL),
                                              0x200uLL,
                                              v8->Buffer,
                                              0x1FFuLL);
            *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v12[3] + 40) + 8LL) + 1022LL) = 0;
            **(_WORD **)(v12[3] + 40) = 1024;
          }
          else
          {
            RtlCopyUnicodeString(*(PUNICODE_STRING *)(v12[3] + 40), v8);
          }
          KeSetEvent(*(PRKEVENT *)(v12[3] + 24), 0, 0);
        }
        else
        {
          **(_WORD **)(*(_QWORD *)(v14 + 40) + 8LL) = 0;
          **(_WORD **)(v14 + 40) = 0;
          **(_DWORD **)(v14 + 32) = 0;
        }
      }
      KeReleaseGuardedMutex(&PiUEventUsermodeEventQueueLock);
    }
    PiUEventDequeuePendingEventWorker(v5, v12, 1);
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
  }
  else
  {
    AllocatedFullProcessImageName = -1073741811;
  }
  if ( v9 )
  {
    RtlFreeUnicodeString(v8);
  }
  else if ( v8 && v8 != &v20 )
  {
    ExFreePoolWithTag(v8, 0);
  }
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
LABEL_11:
  *(_QWORD *)(a5 + 8) = 0LL;
  return (unsigned int)AllocatedFullProcessImageName;
}
