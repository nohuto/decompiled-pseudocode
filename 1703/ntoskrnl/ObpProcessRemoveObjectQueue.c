/*
 * XREFs of ObpProcessRemoveObjectQueue @ 0x140428DC0
 * Callers:
 *     <none>
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14000DF50 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     MmGetNextSession @ 0x140071180 (MmGetNextSession.c)
 *     MmDetachSession @ 0x140073870 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400738F0 (MmAttachSession.c)
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140428F60 (ObpHandleRevocationBlockRemoveObject.c)
 *     MmQuitNextSession @ 0x14045EE60 (MmQuitNextSession.c)
 *     ObpRemoveObjectRoutine @ 0x140520990 (ObpRemoveObjectRoutine.c)
 *     ObpDeregisterObject @ 0x1406C2688 (ObpDeregisterObject.c)
 */

int ObpProcessRemoveObjectQueue()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rdi
  signed __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  ULONG_PTR NextSession; // rax
  __int64 v8; // rbx
  int v9; // r8d
  __int128 **v10; // r11
  int v11; // r10d
  unsigned int v12; // esi
  __int64 v13; // rdi
  unsigned int v14; // ebp
  int v15; // r9d
  int *v16; // r14
  int v17; // edx
  __int64 v18; // rax
  signed __int32 v20[10]; // [rsp+0h] [rbp-98h] BYREF
  __int128 *v21; // [rsp+28h] [rbp-70h]
  __int128 *v22; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v23[48]; // [rsp+38h] [rbp-60h] BYREF

  if ( !qword_140341850 )
  {
    v5 = __rdtsc();
    LODWORD(v5) = 41929663 * ((((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) >> 4);
    qword_140341850 = (unsigned int)v5;
    if ( !(_DWORD)v5 )
      qword_140341850 = 1LL;
    v6 = __rdtsc();
    qword_140341858 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6) >> 4)) ^ 0xBFDLL;
    qword_140341860 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140341860 )
  {
    v21 = &xmmword_1403E45A0;
    v22 = &xmmword_1403E4560;
    NextSession = MmGetNextSession(0LL);
    v8 = NextSession;
    if ( NextSession )
    {
      if ( (int)MmAttachSession(NextSession) >= 0 )
      {
        if ( !qword_140341868 )
          qword_140341868 = (unsigned int)KiTableInformation;
        if ( (_DWORD)xmmword_1403E4570 && (_BYTE)KdDebuggerNotPresent )
        {
          v9 = 0;
          v10 = &v22;
          v11 = 2;
          do
          {
            v12 = 0;
            v13 = *(_QWORD *)*v10;
            v14 = *((_DWORD *)*v10 + 4);
            v15 = v9 + v13 + (unsigned int)*v10;
            if ( v14 )
            {
              v16 = *(int **)*v10;
              do
              {
                v17 = *v16;
                ++v12;
                v18 = *v16++;
                v15 = v12 * ((v17 + *(_DWORD *)((v18 >> 4) + v13)) ^ v15);
              }
              while ( v12 < v14 );
            }
            --v10;
            v9 += 2 * v15;
            --v11;
          }
          while ( v11 );
          if ( v9 != qword_140341868 && !qword_140341820 )
          {
            v20[8] = -2071986176;
            qword_140341820 = (unsigned int)__ROL4__(-2071986176, 233);
            qword_140341828 = 0LL;
            qword_140341830 = 0LL;
            qword_140341838 = 266LL;
            qword_140341840 = v13;
          }
          MmDetachSession(v8, (__int64)v23);
        }
        else
        {
          MmDetachSession(v8, (__int64)v23);
        }
      }
      MmQuitNextSession(v8);
    }
    if ( qword_140341820 )
    {
      if ( (void (__fastcall __noreturn *)(struct _KDPC *, ULONG_PTR *, PVOID, PVOID))`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList.DeferredRoutine != KiSchedulerDpc )
        KeInitializeDpc(
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList,
          (PKDEFERRED_ROUTINE)KiSchedulerDpc,
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList);
      qword_140341848 = 3805560LL;
      KeInsertQueueDpc(&`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList, 0LL, 0LL);
    }
    qword_140341860 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
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
      v3 = *(_QWORD *)(v0 + 8);
      LOBYTE(v2) = 1;
      ObpRemoveObjectRoutine(v0, v2);
      v0 = v3;
    }
    while ( v3 && v3 != 1 );
    if ( ObpRemoveObjectList == 1 )
    {
      v4 = _InterlockedCompareExchange64(&ObpRemoveObjectList, 0LL, 1LL);
      if ( v4 == 1 )
        break;
    }
  }
  _InterlockedOr(v20, 0);
  if ( ObpRemoveObjectWait )
    LODWORD(v4) = ExfUnblockPushLock(&ObpRemoveObjectWait, 0LL);
  return v4;
}
