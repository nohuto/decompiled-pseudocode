/*
 * XREFs of PiUEventFreeClientRegistrationContext @ 0x140457B18
 * Callers:
 *     PiUEventHandleRegistration @ 0x1404A4F10 (PiUEventHandleRegistration.c)
 *     PiUEventDispatch @ 0x1404A5300 (PiUEventDispatch.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ZwDeleteWnfStateName @ 0x14017F940 (ZwDeleteWnfStateName.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140464910 (PiUEventDequeuePendingEventWorker.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 */

void __fastcall PiUEventFreeClientRegistrationContext(char *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  PFAST_MUTEX v5; // rcx
  void **v6; // rax
  int v7; // ecx
  int v8; // ecx
  char *v9; // rdi
  char *v10; // rdi
  void *v11; // rcx
  int v12; // ecx
  char *v13; // rdx
  char *v14; // rdx

  if ( (_BYTE)a2 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    ExAcquireFastMutex(*((PFAST_MUTEX *)a1 + 2));
    v5 = *(PFAST_MUTEX *)a1;
    v6 = (void **)*((_QWORD *)a1 + 1);
    if ( *(char **)(*(_QWORD *)a1 + 8LL) != a1 || *v6 != a1 )
      __fastfail(3u);
    *v6 = v5;
    v5->Owner = v6;
    v7 = *((_DWORD *)a1 + 33);
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v12 = v8 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
            --PiUEventDevInstancePropertyClientCount;
        }
        else
        {
          --PiUEventDevInstanceClientCount;
        }
      }
      else
      {
        --PiUEventDevHandleClientCount;
      }
    }
    else
    {
      --PiUEventDevInterfaceClientCount;
    }
    v9 = (char *)*((_QWORD *)a1 + 14);
    while ( v9 != a1 + 112 )
    {
      v13 = v9;
      v9 = *(char **)v9;
      PiUEventDequeuePendingEventWorker(a1, v13, 0LL);
    }
    v10 = (char *)*((_QWORD *)a1 + 12);
    while ( v10 != a1 + 96 )
    {
      v14 = v10;
      LOBYTE(v4) = 1;
      v10 = *(char **)v10;
      PiUEventDequeuePendingEventWorker(a1, v14, v4);
    }
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)a1 + 2));
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  if ( *((_DWORD *)a1 + 33) == 1 || (unsigned int)(*((_DWORD *)a1 + 33) - 2) <= 1 )
  {
    v11 = (void *)*((_QWORD *)a1 + 3);
    if ( v11 )
      PiDmObjectRelease(v11);
  }
  ZwDeleteWnfStateName((__int64)(a1 + 88), a2, a3);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a1 + 56));
  ExFreePoolWithTag(*((PVOID *)a1 + 2), 0x59706E50u);
  memset(a1, 0, 0x90uLL);
  ExFreePoolWithTag(a1, 0x59706E50u);
}
