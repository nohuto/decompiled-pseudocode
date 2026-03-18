/*
 * XREFs of EtwpDisallowedGuidRemoval @ 0x140709A14
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
 *     EtwpUpdateRegEntryEnableMask @ 0x140553B64 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpBuildNotificationPacket @ 0x140554118 (EtwpBuildNotificationPacket.c)
 */

_QWORD *__fastcall EtwpDisallowedGuidRemoval(_DWORD *a1, __int64 a2)
{
  char v4; // bp
  _QWORD *result; // rax
  _QWORD *v6; // rsi
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR v8; // r12
  _OWORD *v9; // rbx
  __int64 v10; // r8
  _QWORD *v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rdx
  unsigned __int8 v14; // cl
  __int64 v15; // rax
  unsigned __int8 v16; // bl
  _OWORD *v17; // [rsp+78h] [rbp+10h] BYREF

  v17 = 0LL;
  v4 = 0;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 944), a1, 0);
  v6 = result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = (ULONG_PTR)(result + 48);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(result + 48), 0LL);
    v6[49] = KeGetCurrentThread();
    EtwpBuildNotificationPacket((__int64)v6, 0LL, 0, &v17);
    v9 = v17;
    *(_DWORD *)v17 = 3;
    *(_OWORD *)((char *)v9 + 40) = *(_OWORD *)a1;
    *((_DWORD *)v9 + 9) = PsGetCurrentThreadProcessId();
    if ( EtwpIsGuidAllowed(a2, a1) )
    {
      v11 = (_QWORD *)v6[5];
      while ( v11 != v6 + 5 )
      {
        v12 = (__int64)v11;
        v11 = (_QWORD *)*v11;
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
            LOBYTE(v10) = 2;
            EtwpUpdateRegEntryEnableMask(v12, v4, v10, 1);
            if ( EtwpCalculateUpdateNotification(v12, v4, v16, 0, 2, 1, &v17) )
              EtwpSendDataBlock(v12, (__int64)v17, v10);
          }
        }
      }
    }
    v6[49] = 0LL;
    ExReleasePushLockEx(v8, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (_QWORD *)EtwpUnreferenceGuidEntry(v6);
  }
  return result;
}
