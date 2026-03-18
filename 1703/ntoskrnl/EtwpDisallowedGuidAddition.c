/*
 * XREFs of EtwpDisallowedGuidAddition @ 0x1405C7F38
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x1405C7CC4 (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x14003C360 (PsGetCurrentThreadProcessId.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     EtwpUnreferenceGuidEntry @ 0x140480BE4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140480CD0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpIsGuidAllowed @ 0x1404F2BA0 (EtwpIsGuidAllowed.c)
 *     EtwpSendDataBlock @ 0x1405535DC (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x1405539C8 (EtwpCalculateUpdateNotification.c)
 *     EtwpBuildNotificationPacket @ 0x140554118 (EtwpBuildNotificationPacket.c)
 */

_QWORD *__fastcall EtwpDisallowedGuidAddition(_DWORD *a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // rdi
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR v7; // r15
  _OWORD *v8; // rbx
  _QWORD *v9; // rbx
  __int64 v10; // rbp
  unsigned __int8 v11; // r8
  __int64 v12; // rdx
  unsigned __int8 v13; // cl
  __int64 v14; // rax
  unsigned __int8 v15; // dl
  char v16; // r9
  __int64 v17; // r8
  _OWORD *v18; // [rsp+68h] [rbp+10h] BYREF

  v18 = 0LL;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 944), a1, 0);
  v5 = result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (ULONG_PTR)(result + 48);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(result + 48), 0LL);
    v5[49] = KeGetCurrentThread();
    EtwpBuildNotificationPacket((__int64)v5, 0LL, 0, &v18);
    v8 = v18;
    *(_DWORD *)v18 = 3;
    *(_OWORD *)((char *)v8 + 40) = *(_OWORD *)a1;
    *((_DWORD *)v8 + 9) = PsGetCurrentThreadProcessId();
    if ( !EtwpIsGuidAllowed(a2, a1) )
    {
      v9 = (_QWORD *)v5[5];
LABEL_4:
      while ( v9 != v5 + 5 )
      {
        v10 = (__int64)v9;
        v9 = (_QWORD *)*v9;
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
              goto LABEL_4;
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (_QWORD *)EtwpUnreferenceGuidEntry(v5);
  }
  return result;
}
