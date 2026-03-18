/*
 * XREFs of EtwpDisallowedGuidRemoval @ 0x140743BBC
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x140751C2C (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetCurrentThreadProcessId @ 0x1400851E0 (PsGetCurrentThreadProcessId.c)
 *     EtwpIsGuidAllowed @ 0x14048E60C (EtwpIsGuidAllowed.c)
 *     EtwpUnreferenceGuidEntry @ 0x140491D2C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140491E20 (EtwpFindGuidEntryByGuid.c)
 *     EtwpBuildNotificationPacket @ 0x1404EE23C (EtwpBuildNotificationPacket.c)
 *     EtwpSendDataBlock @ 0x1404EF6A0 (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x1404EFE84 (EtwpCalculateUpdateNotification.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x1404EFF44 (EtwpUpdateRegEntryEnableMask.c)
 */

__int64 *__fastcall EtwpDisallowedGuidRemoval(_DWORD *a1, __int64 a2)
{
  unsigned __int8 v4; // bp
  __int64 *result; // rax
  __int64 *v6; // rsi
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR v8; // r12
  _DWORD *v9; // rbx
  __int64 v10; // r8
  __int64 *v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rdx
  unsigned __int8 v14; // cl
  __int64 v15; // rax
  unsigned __int8 v16; // bl
  _DWORD *v17; // [rsp+78h] [rbp+10h] BYREF

  v17 = 0LL;
  v4 = 0;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 2256), a1, 0);
  v6 = result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = (ULONG_PTR)(result + 48);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(result + 48), 0LL);
    v6[49] = (__int64)KeGetCurrentThread();
    EtwpBuildNotificationPacket((__int64)v6, 0LL, 0, &v17);
    v9 = v17;
    *v17 = 3;
    *(_OWORD *)(v9 + 10) = *(_OWORD *)a1;
    v9[9] = PsGetCurrentThreadProcessId();
    if ( EtwpIsGuidAllowed(a2, a1) )
    {
      v11 = (__int64 *)v6[5];
      while ( v11 != v6 + 5 )
      {
        v12 = (__int64)v11;
        v11 = (__int64 *)*v11;
        v13 = *(_QWORD *)(v12 + 40);
        if ( v13 && *(_DWORD *)(v13 + 80) )
        {
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
              goto LABEL_12;
          }
          v4 = 1 << v14;
LABEL_12:
          if ( v4 )
          {
            v16 = *(_BYTE *)(v12 + 101);
            LOBYTE(v10) = v4;
            EtwpUpdateRegEntryEnableMask(v12, a2, v10, 2, 1);
            if ( EtwpCalculateUpdateNotification(v12, v4, v16, 0, 2, 1, &v17) )
              EtwpSendDataBlock(v12, (__int64)v17, v10);
          }
        }
      }
    }
    v6[49] = 0LL;
    ExReleasePushLockEx(v8, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (__int64 *)EtwpUnreferenceGuidEntry(v6);
  }
  return result;
}
