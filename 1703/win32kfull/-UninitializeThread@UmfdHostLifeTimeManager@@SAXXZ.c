/*
 * XREFs of ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00D5ABC
 * Callers:
 *     UmfdUninitializeThread @ 0x1C00D5AB0 (UmfdUninitializeThread.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C009BE0C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C00D5B90 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00D5C18 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z @ 0x1C00D5C44 (-UmfdGetServerPort@@YAPEAXW4FontDriverType@@@Z.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02BA300 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

void UmfdHostLifeTimeManager::UninitializeThread(void)
{
  __int64 ThreadWin32Thread; // rax
  struct UmfdTls *v1; // rbx
  void *ServerPort; // rdi
  CMultipleConsumerWorkQueue::CWaitableWorkItem **v3; // rbx
  __int64 v4; // rax
  struct UmfdTls *v5; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread && *(_QWORD *)(ThreadWin32Thread + 344) )
  {
    CAutoPushLockEx::CAutoPushLockEx(
      (CAutoPushLockEx *)&v6,
      (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
    UmfdHostLifeTimeManager::s_Ready = 0;
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v6);
    v1 = UmfdTls::EnsureTls();
    ServerPort = (void *)UmfdGetServerPort(*((unsigned int *)v1 + 2));
    if ( ServerPort )
    {
      v3 = (CMultipleConsumerWorkQueue::CWaitableWorkItem **)*((_QWORD *)v1 + 2);
      if ( v3 )
      {
        if ( *v3 )
        {
          CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(*v3);
          *v3 = 0LL;
        }
        EngFreeMem(v3);
      }
      UmfdCancelServerOutstandingRequests(ServerPort);
    }
    v4 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( v4 )
    {
      v5 = *(struct UmfdTls **)(v4 + 344);
      if ( v5 )
      {
        *(_QWORD *)(v4 + 344) = 0LL;
        UmfdTls::Destroy(v5);
      }
    }
  }
}
