/*
 * XREFs of ObpProcessRemoveObjectQueue @ 0x140568570
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     MmGetNextSession @ 0x1400B15D0 (MmGetNextSession.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     MmDetachSession @ 0x1400B4910 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400B4990 (MmAttachSession.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1401092D0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     ObpRemoveObjectRoutine @ 0x1404A3C00 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140568710 (ObpHandleRevocationBlockRemoveObject.c)
 *     MmQuitNextSession @ 0x14059E950 (MmQuitNextSession.c)
 *     ObpDeregisterObject @ 0x1406F10E4 (ObpDeregisterObject.c)
 */

int ObpProcessRemoveObjectQueue()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdi
  signed __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  _KPROCESS *NextSession; // rax
  __int64 v7; // rbx
  int v8; // r8d
  __int128 **v9; // r11
  int v10; // r10d
  unsigned int v11; // esi
  __int64 v12; // rdi
  unsigned int v13; // ebp
  int v14; // r9d
  int *v15; // r14
  int v16; // edx
  __int64 v17; // rax
  signed __int32 v19[10]; // [rsp+0h] [rbp-98h] BYREF
  __int128 *v20; // [rsp+28h] [rbp-70h]
  __int128 *v21; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v22[48]; // [rsp+38h] [rbp-60h] BYREF

  if ( !qword_140359FD0 )
  {
    v4 = __rdtsc();
    LODWORD(v4) = 41929663 * ((((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4) >> 4);
    qword_140359FD0 = (unsigned int)v4;
    if ( !(_DWORD)v4 )
      qword_140359FD0 = 1LL;
    v5 = __rdtsc();
    qword_140359FD8 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) >> 4)) ^ 0xBFDLL;
    qword_140359FE0 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140359FE0 )
  {
    v20 = &xmmword_140401760;
    v21 = &xmmword_140401720;
    NextSession = (_KPROCESS *)MmGetNextSession(0LL);
    v7 = (__int64)NextSession;
    if ( NextSession )
    {
      if ( (int)MmAttachSession(NextSession, (__int64)v22) >= 0 )
      {
        if ( !qword_140359FE8 )
          qword_140359FE8 = (unsigned int)KiTableInformation;
        if ( (_DWORD)xmmword_140401730 && (_BYTE)KdDebuggerNotPresent )
        {
          v8 = 0;
          v9 = &v21;
          v10 = 2;
          do
          {
            v11 = 0;
            v12 = *(_QWORD *)*v9;
            v13 = *((_DWORD *)*v9 + 4);
            v14 = v8 + v12 + (unsigned int)*v9;
            if ( v13 )
            {
              v15 = *(int **)*v9;
              do
              {
                v16 = *v15;
                ++v11;
                v17 = *v15++;
                v14 = v11 * ((v16 + *(_DWORD *)((v17 >> 4) + v12)) ^ v14);
              }
              while ( v11 < v13 );
            }
            --v9;
            v8 += 2 * v14;
            --v10;
          }
          while ( v10 );
          if ( v8 != qword_140359FE8 && !qword_140359FA0 )
          {
            v19[8] = -2071986176;
            qword_140359FA0 = (unsigned int)__ROL4__(-2071986176, 233);
            qword_140359FA8 = 0LL;
            qword_140359FB0 = 0LL;
            qword_140359FB8 = 266LL;
            qword_140359FC0 = v12;
          }
          MmDetachSession(v7, (__int64)v22);
        }
        else
        {
          MmDetachSession(v7, (__int64)v22);
        }
      }
      MmQuitNextSession(v7);
    }
    if ( qword_140359FA0 )
    {
      if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList.DeferredRoutine != KiSchedulerDpc )
        KeInitializeDpc(
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList,
          (PKDEFERRED_ROUTINE)KiSchedulerDpc,
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList);
      qword_140359FC8 = 3805560LL;
      KeInsertQueueDpc(&`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList, 0LL, 0LL);
    }
    qword_140359FE0 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  while ( 1 )
  {
    v0 = _InterlockedExchange64(&ObpRemoveObjectList, 1LL);
    do
    {
      v1 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v0);
      if ( v1 )
        ObpHandleRevocationBlockRemoveObject(v1);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v0);
      v2 = *(_QWORD *)(v0 + 8);
      ObpRemoveObjectRoutine(v0, 1);
      v0 = v2;
    }
    while ( v2 && v2 != 1 );
    if ( ObpRemoveObjectList == 1 )
    {
      v3 = _InterlockedCompareExchange64(&ObpRemoveObjectList, 0LL, 1LL);
      if ( v3 == 1 )
        break;
    }
  }
  _InterlockedOr(v19, 0);
  if ( ObpRemoveObjectWait )
    LODWORD(v3) = ExfUnblockPushLock(&ObpRemoveObjectWait, 0LL);
  return v3;
}
