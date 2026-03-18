/*
 * XREFs of ObpProcessRemoveObjectQueue @ 0x140552770
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KeInsertQueueDpc @ 0x140039000 (KeInsertQueueDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     MmGetNextSession @ 0x140074C10 (MmGetNextSession.c)
 *     MmDetachSession @ 0x14008A5E0 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008A660 (MmAttachSession.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1400AA020 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     MmQuitNextSession @ 0x14052D250 (MmQuitNextSession.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140552910 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpRemoveObjectRoutine @ 0x14059C950 (ObpRemoveObjectRoutine.c)
 *     ObpDeregisterObject @ 0x14075A4D0 (ObpDeregisterObject.c)
 */

int ObpProcessRemoveObjectQueue()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rdi
  signed __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned __int64 v7; // rax
  _KPROCESS *NextSession; // rax
  _KPROCESS *v9; // rbx
  int v10; // r8d
  __int128 **v11; // r11
  int v12; // r10d
  unsigned int v13; // esi
  __int64 v14; // rdi
  unsigned int v15; // ebp
  int v16; // r9d
  int *v17; // r14
  int v18; // edx
  __int64 v19; // rax
  signed __int32 v21[10]; // [rsp+0h] [rbp-98h] BYREF
  __int128 *v22; // [rsp+28h] [rbp-70h]
  __int128 *v23; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v24[48]; // [rsp+38h] [rbp-60h] BYREF

  if ( !qword_14039D610 )
  {
    v5 = __rdtsc();
    v6 = 41929663 * ((((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) >> 4);
    qword_14039D610 = v6;
    if ( !v6 )
      qword_14039D610 = 1LL;
    v7 = __rdtsc();
    qword_14039D618 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7) >> 4)) ^ 0xC24LL;
    qword_14039D620 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_14039D620 )
  {
    v22 = &xmmword_14044C920;
    v23 = &xmmword_14044C8E0;
    NextSession = (_KPROCESS *)MmGetNextSession(0LL);
    v9 = NextSession;
    if ( NextSession )
    {
      if ( (int)MmAttachSession(NextSession, (__int64)v24) >= 0 )
      {
        if ( !qword_14039D628 )
          qword_14039D628 = (unsigned int)KiTableInformation;
        if ( (_DWORD)xmmword_14044C8F0 && (_BYTE)KdDebuggerNotPresent )
        {
          v10 = 0;
          v11 = &v23;
          v12 = 2;
          do
          {
            v13 = 0;
            v14 = *(_QWORD *)*v11;
            v15 = *((_DWORD *)*v11 + 4);
            v16 = v10 + v14 + (unsigned int)*v11;
            if ( v15 )
            {
              v17 = *(int **)*v11;
              do
              {
                v18 = *v17;
                ++v13;
                v19 = *v17++;
                v16 = v13 * ((v18 + *(_DWORD *)((v19 >> 4) + v14)) ^ v16);
              }
              while ( v13 < v15 );
            }
            --v11;
            v10 += 2 * v16;
            --v12;
          }
          while ( v12 );
          if ( v10 != qword_14039D628 && !qword_14039D5E0 )
          {
            v21[8] = -2071986176;
            qword_14039D5E0 = (unsigned int)__ROL4__(-2071986176, 233);
            qword_14039D5E8 = 0LL;
            qword_14039D5F0 = 0LL;
            qword_14039D5F8 = 266LL;
            qword_14039D600 = v14;
          }
          MmDetachSession((__int64)v9, (__int64)v24);
        }
        else
        {
          MmDetachSession((__int64)v9, (__int64)v24);
        }
      }
      MmQuitNextSession(v9);
    }
    if ( qword_14039D5E0 )
    {
      if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList.DeferredRoutine != KiScanQueues )
        KeInitializeDpc(
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList,
          (PKDEFERRED_ROUTINE)KiScanQueues,
          &`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList);
      qword_14039D608 = 3853920LL;
      KeInsertQueueDpc(&`ObpTraceDeferredDeletionWorker'::`2'::ObjectEventList, 0LL, 0LL);
    }
    qword_14039D620 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
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
  _InterlockedOr(v21, 0);
  if ( ObpRemoveObjectWait )
    LODWORD(v4) = ExfUnblockPushLock(&ObpRemoveObjectWait, 0LL);
  return v4;
}
