/*
 * XREFs of PiUEventHandleVetoEvent @ 0x1405E5ED8
 * Callers:
 *     PiUEventHandleIoctl @ 0x14058BDEC (PiUEventHandleIoctl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     PsGetProcessImageFileName @ 0x1400C1120 (PsGetProcessImageFileName.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     RtlStringCchCopyNW @ 0x140161D3C (RtlStringCchCopyNW.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     PsGetAllocatedFullProcessImageName @ 0x14050E958 (PsGetAllocatedFullProcessImageName.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14051EC20 (PiUEventDequeuePendingEventWorker.c)
 *     PsLookupProcessByProcessId @ 0x14059A9C0 (PsLookupProcessByProcessId.c)
 */

__int64 __fastcall PiUEventHandleVetoEvent(__int64 a1, __int64 *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  UNICODE_STRING *v6; // rbx
  int AllocatedFullProcessImageName; // edi
  PEPROCESS v8; // r15
  char v9; // r13
  __int64 v10; // r12
  struct _FAST_MUTEX *v11; // rcx
  _QWORD *v12; // r14
  __int64 v14; // rcx
  _DWORD *v15; // rdx
  __int64 v16; // rax
  NTSTATUS v17; // eax
  const CHAR *ProcessImageFileName; // rax
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  _STRING DestinationString; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING v21; // [rsp+38h] [rbp-18h] BYREF
  PEPROCESS Process; // [rsp+80h] [rbp+30h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  Process = 0LL;
  *(_QWORD *)&v21.Length = 0LL;
  v6 = 0LL;
  P = 0LL;
  AllocatedFullProcessImageName = 0;
  v21.Buffer = 0LL;
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
      if ( v15 )
      {
        v16 = *(_QWORD *)(v14 + 40);
        if ( v16 )
        {
          if ( !*v15 )
          {
            if ( (_BYTE)v10 )
            {
              *v15 = *(_DWORD *)(&DestinationString.MaximumLength + 1);
              v17 = PsLookupProcessByProcessId(*(HANDLE *)(v5 + 48), &Process);
              v8 = Process;
              if ( v17 < 0
                || (AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageName((__int64)Process, &P),
                    AllocatedFullProcessImageName < 0) )
              {
                v6 = &v21;
                RtlInitUnicodeString(&v21, &word_140657F20);
                AllocatedFullProcessImageName = 0;
              }
              else
              {
                v6 = (UNICODE_STRING *)P;
                if ( !*(_WORD *)P )
                {
                  v9 = 1;
                  ExFreePoolWithTag(P, 0);
                  v6 = &v21;
                  ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)v8);
                  RtlInitAnsiString(&DestinationString, ProcessImageFileName);
                  RtlAnsiStringToUnicodeString(&v21, &DestinationString, 1u);
                }
              }
              if ( v6->Length > 0x400u )
              {
                AllocatedFullProcessImageName = RtlStringCchCopyNW(
                                                  *(NTSTRSAFE_PWSTR *)(*(_QWORD *)(v12[3] + 40LL) + 8LL),
                                                  0x200uLL,
                                                  v6->Buffer,
                                                  0x1FFuLL);
                *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v12[3] + 40LL) + 8LL) + 1022LL) = 0;
                **(_WORD **)(v12[3] + 40LL) = 1024;
              }
              else
              {
                RtlCopyUnicodeString(*(PUNICODE_STRING *)(v12[3] + 40LL), v6);
              }
              KeSetEvent(*(PRKEVENT *)(v12[3] + 24LL), 0, 0);
            }
            else
            {
              **(_WORD **)(v16 + 8) = 0;
              **(_WORD **)(v14 + 40) = 0;
              **(_DWORD **)(v14 + 32) = 0;
            }
          }
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
    RtlFreeAnsiString(v6);
  }
  else if ( v6 && v6 != &v21 )
  {
    ExFreePoolWithTag(v6, 0);
  }
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x746C6644u);
LABEL_11:
  *(_QWORD *)(a5 + 8) = 0LL;
  return (unsigned int)AllocatedFullProcessImageName;
}
