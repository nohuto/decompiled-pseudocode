/*
 * XREFs of PiUEventHandleVetoEvent @ 0x1405E0CB0
 * Callers:
 *     PiUEventHandleIoctl @ 0x1405482BC (PiUEventHandleIoctl.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400AE570 (RtlInitAnsiString.c)
 *     RtlStringCchCopyNW @ 0x1400F9D6C (RtlStringCchCopyNW.c)
 *     PsGetProcessImageFileName @ 0x140124270 (PsGetProcessImageFileName.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14054AF40 (PiUEventDequeuePendingEventWorker.c)
 *     PsLookupProcessByProcessId @ 0x140575060 (PsLookupProcessByProcessId.c)
 *     PsGetAllocatedFullProcessImageName @ 0x14057D3A8 (PsGetAllocatedFullProcessImageName.c)
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
  _QWORD *v12; // r15
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
    v12 = *(_QWORD **)(v5 + 96);
    if ( v12 == (_QWORD *)(v5 + 96) )
    {
      AllocatedFullProcessImageName = -1073741811;
      KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
      goto LABEL_11;
    }
    if ( *(_BYTE *)(v12[3] + 69LL) )
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
            RtlInitUnicodeString(&v20, &word_1405F52C0);
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
                                              *(NTSTRSAFE_PWSTR *)(*(_QWORD *)(v12[3] + 40LL) + 8LL),
                                              0x200uLL,
                                              v8->Buffer,
                                              0x1FFuLL);
            *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v12[3] + 40LL) + 8LL) + 1022LL) = 0;
            **(_WORD **)(v12[3] + 40LL) = 1024;
          }
          else
          {
            RtlCopyUnicodeString(*(PUNICODE_STRING *)(v12[3] + 40LL), v8);
          }
          KeSetEvent(*(PRKEVENT *)(v12[3] + 24LL), 0, 0);
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
