/*
 * XREFs of ?VidSchiCompleteHwQueueRenderPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D0F8
 * Callers:
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C002D6D8 (-VidSchiTryCompleteHwQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0004764 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0005F30 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A200 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIH@Z @ 0x1C001525C (-VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0015590 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiIncrementFlipOnDmaPacketCounter@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z @ 0x1C0024D5C (-VidSchiIncrementFlipOnDmaPacketCounter@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D4F0 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiCompleteHwQueueRenderPacket(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rax
  BOOL v3; // r14d
  CRefCountedBuffer *v4; // rcx
  BOOL v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rdi
  CRefCountedBuffer *v10; // rcx
  int v11; // eax
  void (__fastcall *v12)(_QWORD); // rax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // r12
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  v1 = *((_QWORD *)a1 + 12);
  v3 = 0;
  v4 = (CRefCountedBuffer *)*((_QWORD *)a1 + 39);
  v5 = 0;
  v6 = *(_QWORD *)(v1 + 24);
  v7 = *(_QWORD *)(v6 + 24);
  v8 = *(_QWORD *)(v6 + 32);
  v9 = *(_QWORD *)(v7 + 32);
  if ( v4 )
  {
    CRefCountedBuffer::RefCountedBufferRelease(v4);
    *((_QWORD *)a1 + 39) = 0LL;
  }
  v10 = (CRefCountedBuffer *)*((_QWORD *)a1 + 38);
  if ( v10 )
  {
    CRefCountedBuffer::RefCountedBufferRelease(v10);
    *((_QWORD *)a1 + 38) = 0LL;
  }
  v11 = *((_DWORD *)a1 + 20);
  if ( (v11 & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 20) = v11 & 0xFFFFFFEF;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 96LL) + 5904LL) != -1 )
    {
      v12 = *(void (__fastcall **)(_QWORD))(v9 + 2896);
      if ( v12 )
        v12(*(_QWORD *)(v9 + 2928));
    }
  }
  v13 = 0;
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  for ( *((_DWORD *)a1 + 13) = 16; v13 < *((_DWORD *)a1 + 120); ++v13 )
  {
    if ( v13 >= 0x10 )
      break;
    v14 = *((_QWORD *)a1 + v13 + 61);
    *((_QWORD *)a1 + v13 + 61) = 0LL;
    if ( v14 )
      _InterlockedDecrement((volatile signed __int32 *)(v14 + 104));
  }
  v15 = *((_DWORD *)a1 + 18);
  if ( (v15 & 0x4000) != 0 )
  {
    v16 = *((unsigned int *)a1 + 44);
    v17 = *((_DWORD *)a1 + 18) & 0xC00;
    if ( (v15 & 4) != 0 )
    {
      if ( *((_DWORD *)a1 + 102) != 1 )
      {
        if ( (*((_DWORD *)a1 + 16) & 2) != 0 )
        {
LABEL_30:
          VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v9 + 1848));
          goto LABEL_31;
        }
        LOBYTE(v3) = v17 != 1024;
        v5 = v3;
        if ( (*((_DWORD *)a1 + 182) & 0x3FF) != 0 )
          VidSchiUnreferencePrimaryAllocations(
            (struct _VIDSCH_GLOBAL *)v9,
            (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 728),
            *((_DWORD *)a1 + 106),
            1 << *(_BYTE *)(*(_QWORD *)(v9 + 8LL * *(unsigned __int16 *)(v8 + 4) + 424) + 6LL),
            0);
LABEL_22:
        if ( v5 && (_DWORD)v16 != -1 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v7 + 4 * v16 + 1060));
          v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 24LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(v7 + 32) + 4LL))
                          + 8 * v16
                          + 520);
          if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 8 * v16 + 6056) + 8LL));
            ++**(_DWORD **)(v9 + 8 * v16 + 6056);
          }
          _InterlockedDecrement((volatile signed __int32 *)(v18 + 8));
          ++*(_DWORD *)v18;
          if ( (*((_DWORD *)a1 + 18) & 0x20000) != 0 )
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v9 + 1896), &LockHandle);
            *(_DWORD *)(v7 + 4 * v16 + 468) = *((_DWORD *)a1 + 100);
            *(_QWORD *)(v7 + 8 * v16 + 536) = *((unsigned int *)a1 + 36);
            *(_QWORD *)(v7 + 8 * v16 + 664) = *((_QWORD *)a1 + 19);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          }
        }
        if ( v3 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v9 + 960));
          _InterlockedDecrement((volatile signed __int32 *)(v7 + 1188));
          _InterlockedDecrement((volatile signed __int32 *)(v7 + 4 * v16 + 1124));
        }
        goto LABEL_30;
      }
      v3 = v17 != 1024;
    }
    v5 = v17 != 1024;
    goto LABEL_22;
  }
LABEL_31:
  if ( (unsigned int)(*((_DWORD *)a1 + 12) - 4) > 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 1200));
  VidSchiIncrementFlipOnDmaPacketCounter(a1, 0xFFFFFFFF);
  VidSchiProfilePerformanceTick(9LL, v9, v8, v19, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiCheckPendingDeviceCommand((_QWORD *)v7);
  if ( v5 )
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v7 + 96));
  if ( v3 )
  {
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v7 + 112));
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v9 + 1832));
    *(_QWORD *)(v9 + 1776) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v9 + 1744), 0, 0);
  }
  VidSchiFreeCompletedHwQueuePacket(a1);
}
