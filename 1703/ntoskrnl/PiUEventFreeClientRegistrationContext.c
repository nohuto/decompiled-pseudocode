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

void __fastcall PiUEventFreeClientRegistrationContext(char *a1, char a2)
{
  __int64 v3; // r8
  PFAST_MUTEX v4; // rcx
  void **v5; // rax
  int v6; // ecx
  int v7; // ecx
  char *v8; // rdi
  char *v9; // rdi
  void *v10; // rcx
  int v11; // ecx
  char *v12; // rdx
  char *v13; // rdx

  if ( a2 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    ExAcquireFastMutex(*((PFAST_MUTEX *)a1 + 2));
    v4 = *(PFAST_MUTEX *)a1;
    v5 = (void **)*((_QWORD *)a1 + 1);
    if ( *(char **)(*(_QWORD *)a1 + 8LL) != a1 || *v5 != a1 )
      __fastfail(3u);
    *v5 = v4;
    v4->Owner = v5;
    v6 = *((_DWORD *)a1 + 33);
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v11 = v7 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
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
    v8 = (char *)*((_QWORD *)a1 + 14);
    while ( v8 != a1 + 112 )
    {
      v12 = v8;
      v8 = *(char **)v8;
      PiUEventDequeuePendingEventWorker(a1, v12, 0LL);
    }
    v9 = (char *)*((_QWORD *)a1 + 12);
    while ( v9 != a1 + 96 )
    {
      v13 = v9;
      LOBYTE(v3) = 1;
      v9 = *(char **)v9;
      PiUEventDequeuePendingEventWorker(a1, v13, v3);
    }
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)a1 + 2));
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  if ( *((_DWORD *)a1 + 33) == 1 || (unsigned int)(*((_DWORD *)a1 + 33) - 2) <= 1 )
  {
    v10 = (void *)*((_QWORD *)a1 + 3);
    if ( v10 )
      PiDmObjectRelease(v10);
  }
  ZwDeleteWnfStateName((PCWNF_STATE_NAME)a1 + 11);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a1 + 56));
  ExFreePoolWithTag(*((PVOID *)a1 + 2), 0x59706E50u);
  memset(a1, 0, 0x90uLL);
  ExFreePoolWithTag(a1, 0x59706E50u);
}
