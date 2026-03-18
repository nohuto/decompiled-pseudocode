/*
 * XREFs of EtwpDisallowedGuidAddition @ 0x140743A34
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
 */

__int64 *__fastcall EtwpDisallowedGuidAddition(_DWORD *a1, __int64 a2)
{
  __int64 *result; // rax
  __int64 *v5; // rdi
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR v7; // r15
  _DWORD *v8; // rbx
  __int64 *v9; // rbx
  __int64 v10; // rbp
  unsigned __int8 v11; // r8
  __int64 v12; // rdx
  unsigned __int8 v13; // cl
  __int64 v14; // rax
  unsigned __int8 v15; // dl
  char v16; // r9
  __int64 v17; // r8
  _DWORD *v18; // [rsp+68h] [rbp+10h] BYREF

  v18 = 0LL;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 2256), a1, 0);
  v5 = result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (ULONG_PTR)(result + 48);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(result + 48), 0LL);
    v5[49] = (__int64)KeGetCurrentThread();
    EtwpBuildNotificationPacket((__int64)v5, 0LL, 0, &v18);
    v8 = v18;
    *v18 = 3;
    *(_OWORD *)(v8 + 10) = *(_OWORD *)a1;
    v8[9] = PsGetCurrentThreadProcessId();
    if ( !EtwpIsGuidAllowed(a2, a1) )
    {
      v9 = (__int64 *)v5[5];
LABEL_13:
      while ( v9 != v5 + 5 )
      {
        v10 = (__int64)v9;
        v9 = (__int64 *)*v9;
        v11 = *(_BYTE *)(v10 + 101);
        if ( v11 )
        {
          v12 = *(_QWORD *)(v10 + 40);
          v13 = 0;
          while ( 1 )
          {
            v14 = 32LL * v13;
            if ( *(_DWORD *)(v14 + v12 + 112) )
            {
              if ( *(unsigned __int16 *)(v14 + v12 + 118) == *(_DWORD *)a2 )
                break;
            }
            if ( ++v13 >= 8u )
              goto LABEL_13;
          }
          v15 = 1 << v13;
          if ( 1 << v13 )
          {
            if ( (v11 & v15) != 0 )
            {
              v16 = *(_BYTE *)(v10 + 101);
              *(_BYTE *)(v10 + 101) = v11 & ~v15;
              EtwpCalculateUpdateNotification(v10, v15, v11, v16, 2, 0, &v18);
              EtwpSendDataBlock(v10, (__int64)v18, v17);
            }
          }
        }
      }
    }
    v5[49] = 0LL;
    ExReleasePushLockEx(v7, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (__int64 *)EtwpUnreferenceGuidEntry(v5);
  }
  return result;
}
