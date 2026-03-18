/*
 * XREFs of EtwpDisallowedGuidAddition @ 0x1407A5704
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x1407B2A2C (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1400A1C70 (PsGetCurrentThreadProcessId.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     EtwpBuildNotificationPacket @ 0x14058B92C (EtwpBuildNotificationPacket.c)
 *     EtwpCalculateUpdateNotification @ 0x14058C620 (EtwpCalculateUpdateNotification.c)
 *     EtwpSendDataBlock @ 0x14058DED0 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405906D4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405907D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpIsGuidAllowed @ 0x140591820 (EtwpIsGuidAllowed.c)
 */

_QWORD *__fastcall EtwpDisallowedGuidAddition(_DWORD *a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR v7; // r15
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rbx
  _QWORD *v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rdx
  unsigned __int8 v14; // cl
  __int64 v15; // rax
  unsigned __int8 v16; // dl
  char v17; // r9
  __int64 v18; // r8
  _DWORD *v19; // [rsp+68h] [rbp+10h] BYREF

  v19 = 0LL;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 1112), a1, 0);
  v5 = (__int64)result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (ULONG_PTR)(result + 48);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(result + 48), 0LL);
    *(_QWORD *)(v5 + 392) = KeGetCurrentThread();
    if ( !(unsigned int)EtwpBuildNotificationPacket(v5, 0LL, 0, &v19) )
    {
      v10 = v19;
      *v19 = 3;
      *(_OWORD *)(v10 + 10) = *(_OWORD *)a1;
      v10[9] = PsGetCurrentThreadProcessId();
      if ( !EtwpIsGuidAllowed(a2, a1) )
      {
        v11 = *(_QWORD **)(v5 + 40);
LABEL_14:
        while ( v11 != (_QWORD *)(v5 + 40) )
        {
          v12 = (__int64)v11;
          v11 = (_QWORD *)*v11;
          LOBYTE(v8) = *(_BYTE *)(v12 + 101);
          if ( (_BYTE)v8 )
          {
            v13 = *(_QWORD *)(v12 + 40);
            v14 = 0;
            while ( 1 )
            {
              v15 = 32LL * v14;
              if ( *(_DWORD *)(v15 + v13 + 112) )
              {
                if ( *(unsigned __int16 *)(v15 + v13 + 118) == *(_DWORD *)a2 )
                  break;
              }
              if ( ++v14 >= 8u )
                goto LABEL_14;
            }
            v16 = 1 << v14;
            if ( 1 << v14 )
            {
              if ( ((unsigned __int8)v8 & v16) != 0 )
              {
                v17 = *(_BYTE *)(v12 + 101);
                *(_BYTE *)(v12 + 101) = v8 & ~v16;
                EtwpCalculateUpdateNotification(v12, v16, v8, v17, 2, 0, &v19);
                EtwpSendDataBlock(v12, (__int64)v19, v18);
              }
            }
          }
        }
      }
    }
    *(_QWORD *)(v5 + 392) = 0LL;
    ExReleasePushLockEx(v7, 0LL, v8, v9);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (_QWORD *)EtwpUnreferenceGuidEntry((volatile signed __int64 *)v5);
  }
  return result;
}
