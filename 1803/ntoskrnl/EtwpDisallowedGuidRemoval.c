/*
 * XREFs of EtwpDisallowedGuidRemoval @ 0x1407A5894
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x1407B2A2C (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1400A1C70 (PsGetCurrentThreadProcessId.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     EtwpBuildNotificationPacket @ 0x14058B92C (EtwpBuildNotificationPacket.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x14058C580 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpCalculateUpdateNotification @ 0x14058C620 (EtwpCalculateUpdateNotification.c)
 *     EtwpSendDataBlock @ 0x14058DED0 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405906D4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405907D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpIsGuidAllowed @ 0x140591820 (EtwpIsGuidAllowed.c)
 */

_QWORD *__fastcall EtwpDisallowedGuidRemoval(_DWORD *a1, __int64 a2)
{
  unsigned __int8 v4; // bp
  _QWORD *result; // rax
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR v8; // r12
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rbx
  _QWORD *v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rdx
  unsigned __int8 v15; // cl
  __int64 v16; // rax
  unsigned __int8 v17; // bl
  _DWORD *v18; // [rsp+78h] [rbp+10h] BYREF

  v18 = 0LL;
  v4 = 0;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 1112), a1, 0);
  v6 = (__int64)result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = (ULONG_PTR)(result + 48);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(result + 48), 0LL);
    *(_QWORD *)(v6 + 392) = KeGetCurrentThread();
    if ( !(unsigned int)EtwpBuildNotificationPacket(v6, 0LL, 0, &v18) )
    {
      v11 = v18;
      *v18 = 3;
      *(_OWORD *)(v11 + 10) = *(_OWORD *)a1;
      v11[9] = PsGetCurrentThreadProcessId();
      if ( EtwpIsGuidAllowed(a2, a1) )
      {
        v12 = *(_QWORD **)(v6 + 40);
        while ( v12 != (_QWORD *)(v6 + 40) )
        {
          v13 = (__int64)v12;
          v12 = (_QWORD *)*v12;
          v14 = *(_QWORD *)(v13 + 40);
          if ( v14 && *(_DWORD *)(v14 + 80) )
          {
            v15 = 0;
            while ( 1 )
            {
              v16 = 32LL * v15;
              if ( *(_DWORD *)(v16 + v14 + 112) )
              {
                if ( *(unsigned __int16 *)(v16 + v14 + 118) == *(_DWORD *)a2 )
                  break;
              }
              if ( ++v15 >= 8u )
                goto LABEL_13;
            }
            v4 = 1 << v15;
LABEL_13:
            if ( v4 )
            {
              v17 = *(_BYTE *)(v13 + 101);
              LOBYTE(v9) = v4;
              EtwpUpdateRegEntryEnableMask(v13, a2, v9, 2, 1);
              if ( EtwpCalculateUpdateNotification(v13, v4, v17, 0, 2, 1, &v18) )
                EtwpSendDataBlock(v13, (__int64)v18, v9);
            }
          }
        }
      }
    }
    *(_QWORD *)(v6 + 392) = 0LL;
    ExReleasePushLockEx(v8, 0LL, v9, v10);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (_QWORD *)EtwpUnreferenceGuidEntry((volatile signed __int64 *)v6);
  }
  return result;
}
