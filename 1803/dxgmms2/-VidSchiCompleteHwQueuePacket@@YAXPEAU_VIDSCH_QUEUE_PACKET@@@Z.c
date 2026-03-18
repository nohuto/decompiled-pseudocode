/*
 * XREFs of ?VidSchiCompleteHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002FCF8
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030F04 (-VidSchiReleasePacketToGpu@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0031108 (-VidSchiRundownHardwarePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0031368 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C0031EE4 (-VidSchiTryCompleteHwQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z.c)
 * Callees:
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0004BA0 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000F294 (VidSchiSignalRegisteredEvent.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0013330 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0015360 (VidSchiTryEnterIndependentFlip.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIH@Z @ 0x1C00156A0 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00159C0 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C00225D0 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     McTemplateK0pp @ 0x1C0028C6C (McTemplateK0pp.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030AC8 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiCompleteHwQueuePacket(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r8
  BOOL v2; // r15d
  BOOL v3; // r12d
  __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  struct _VIDMM_DMA_BUFFER *v11; // rdx
  CRefCountedBuffer *v12; // rcx
  __int64 i; // rcx
  __int64 v14; // rdx
  int v15; // edx
  __int64 v16; // r15
  int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r11
  int v22; // edx
  unsigned int v23; // r10d
  int v24; // eax
  char v25; // cl
  int v26; // eax
  unsigned int v27; // edi
  bool j; // zf
  int v29; // eax
  __int64 v30; // r9
  char v31; // r14
  __int64 v32; // rdx
  int v33; // edx
  char v34; // cl
  __int64 v35; // [rsp+38h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-60h] BYREF
  BOOL v37; // [rsp+B0h] [rbp+8h]

  v1 = *((_QWORD *)a1 + 12);
  v2 = 0;
  v3 = 0;
  v37 = 0;
  v35 = *(_QWORD *)(v1 + 24);
  v5 = *(_QWORD *)(v35 + 8);
  v6 = *(_QWORD *)(v35 + 16);
  v7 = *(_QWORD *)(v5 + 32);
  if ( bTracingEnabled && (*((_DWORD *)a1 + 16) & 0x20) != 0 )
  {
    v8 = *((_QWORD *)a1 + 11);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 56);
      if ( !v9 || (*(_DWORD *)(v8 + 112) & 0x40) != 0 )
        v9 = v8;
    }
    else
    {
      v9 = *(_QWORD *)(v1 + 32);
      if ( !v9 )
        v9 = v1;
    }
    if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pp(v9, &AbortQueuePacket, v1, a1, v9);
  }
  v10 = *((_DWORD *)a1 + 12);
  if ( v10 )
  {
    if ( v10 == 8 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 1712));
      if ( (*((_DWORD *)a1 + 68) & 0x100) != 0 )
        VIDMM_DMA_POOL::ReleaseBuffer(
          *(VIDMM_DMA_POOL **)(*((_QWORD *)a1 + 35) + 136LL),
          *((struct _VIDMM_DMA_BUFFER **)a1 + 35),
          1);
    }
  }
  else
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 1712));
    v11 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)a1 + 35);
    if ( v11 )
    {
      VIDMM_GLOBAL::UnreferenceDmaBuffer(*(VIDMM_GLOBAL **)(*(_QWORD *)(v7 + 8) + 552LL), v11, 0);
      if ( (*((_DWORD *)a1 + 18) & 0x100) != 0 )
        VIDMM_DMA_POOL::ReleaseBuffer(
          *(VIDMM_DMA_POOL **)(*((_QWORD *)a1 + 35) + 136LL),
          *((struct _VIDMM_DMA_BUFFER **)a1 + 35),
          0);
    }
    v12 = (CRefCountedBuffer *)*((_QWORD *)a1 + 37);
    if ( v12 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v12);
      *((_QWORD *)a1 + 37) = 0LL;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 116); i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 0x10 )
        break;
      v14 = *((_QWORD *)a1 + i + 59);
      *((_QWORD *)a1 + i + 59) = 0LL;
      if ( v14 )
        _InterlockedDecrement((volatile signed __int32 *)(v14 + 104));
    }
  }
  v15 = *((_DWORD *)a1 + 18);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 16;
  if ( (v15 & 0x40020) == 0x40000 || (v15 & 0x4000) != 0 )
  {
    v16 = *((unsigned int *)a1 + 40);
    v17 = v15 & 0xC00;
    if ( (v15 & 0x40000) != 0 )
    {
      v3 = (v15 & 0x4000) != 0 && v17 != 1024;
      goto LABEL_38;
    }
    if ( (v15 & 4) != 0 )
    {
      if ( *((_DWORD *)a1 + 98) != 1 )
      {
        if ( (*((_DWORD *)a1 + 16) & 2) != 0 )
        {
LABEL_45:
          if ( (*((_DWORD *)a1 + 18) & 0x40080) != 0 && *((_QWORD *)a1 + 18) && *((_QWORD *)a1 + 19) && v17 != 1024 )
            VidSchiSubmitPresentHistoryToken(a1, 0LL, 0LL, 0LL);
          if ( v37 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v7 + 976));
            _InterlockedDecrement((volatile signed __int32 *)(v5 + 1212));
            _InterlockedDecrement((volatile signed __int32 *)(v5 + 4 * v16 + 1148));
          }
          VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v7 + 1864));
          v2 = v37;
          goto LABEL_53;
        }
        v37 = v17 != 1024;
        v3 = v37;
        if ( (*((_DWORD *)a1 + 192) & 0x3FF) != 0 )
        {
          VidSchiUnreferencePrimaryAllocations(
            (struct _VIDSCH_GLOBAL *)v7,
            (struct _VIDSCH_QUEUE_PACKET *)((char *)a1 + 768),
            *((_DWORD *)a1 + 102),
            1 << *(_BYTE *)(*(_QWORD *)(v7 + 8LL * *(unsigned __int16 *)(v6 + 4) + 440) + 6LL),
            0);
          v37 = v17 != 1024;
        }
LABEL_38:
        if ( v3 && (_DWORD)v16 != -1 && (*((_DWORD *)a1 + 18) & 0x40000) == 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v5 + 4 * v16 + 1084));
          v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 24LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(v5 + 32) + 4LL))
                          + 8 * v16
                          + 520);
          if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 8 * v16 + 6248) + 8LL));
            ++**(_DWORD **)(v7 + 8 * v16 + 6248);
          }
          _InterlockedDecrement((volatile signed __int32 *)(v18 + 8));
          ++*(_DWORD *)v18;
          if ( (*((_DWORD *)a1 + 18) & 0x20000) != 0 )
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + 1912), &LockHandle);
            *(_DWORD *)(v5 + 4 * v16 + 492) = *((_DWORD *)a1 + 96);
            *(_QWORD *)(v5 + 8 * v16 + 560) = *((unsigned int *)a1 + 33);
            *(_QWORD *)(v5 + 8 * v16 + 688) = *((_QWORD *)a1 + 17);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          }
        }
        goto LABEL_45;
      }
      v37 = v17 != 1024;
    }
    v3 = v17 != 1024;
    goto LABEL_38;
  }
LABEL_53:
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 40) != -1 )
  {
    v19 = *((_QWORD *)a1 + 11);
    if ( v19 )
      v20 = *(_QWORD *)(v19 + 104);
    else
      v20 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL) + 8LL);
    v21 = *(_QWORD *)(v20 + 32);
    v22 = *((_DWORD *)a1 + 18);
    if ( (v22 & 0x800000) != 0 )
      v23 = ((unsigned __int16)*((_DWORD *)a1 + 192) | (unsigned __int16)(*((_DWORD *)a1 + 192) >> 10)) & 0x3FF;
    else
      v23 = (1 << *(_DWORD *)(v21 + 132)) - 1;
    j = !_BitScanForward((unsigned int *)&v24, v23);
    v25 = -1;
    if ( !j )
      v25 = v24;
    if ( v23 )
    {
      do
      {
        _InterlockedExchangeAdd(
          (volatile signed __int32 *)(*(_QWORD *)(v21 + 8LL * *((unsigned int *)a1 + 40) + 3032) + 216LL * v25 + 144),
          0xFFFFFFFF);
        v26 = 1 << v25;
        v25 = -1;
        v23 &= ~v26;
        j = !_BitScanForward((unsigned int *)&v26, v23);
        if ( !j )
          v25 = v26;
      }
      while ( v23 );
      v22 = *((_DWORD *)a1 + 18);
    }
    if ( (v22 & 0x800000) != 0 )
      v27 = ((unsigned __int16)*((_DWORD *)a1 + 192) | (unsigned __int16)(*((_DWORD *)a1 + 192) >> 10)) & 0x3FF;
    else
      v27 = (1 << *(_DWORD *)(v7 + 132)) - 1;
    for ( j = !_BitScanForward((unsigned int *)&v29, v27); ; j = !_BitScanForward((unsigned int *)&v29, v27) )
    {
      v34 = -1;
      if ( !j )
        v34 = v29;
      if ( !v27 )
        break;
      v30 = *((unsigned int *)a1 + 40);
      v31 = v34;
      v32 = *(int *)(*(_QWORD *)(v7 + 8 * v30 + 3032) + 216LL * (unsigned int)v34 + 140);
      if ( (int)v32 <= -1 )
        v33 = 0;
      else
        v33 = *(_DWORD *)(136 * v32 + *(_QWORD *)(v7 + 3160) + 112);
      if ( v33 == 1 )
        VidSchiTryEnterIndependentFlip((struct _VIDSCH_GLOBAL *)v7, v30, v34);
      v27 &= ~(1 << v31);
    }
  }
  if ( (unsigned int)(*((_DWORD *)a1 + 12) - 4) > 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 1224));
  if ( v3 )
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v5 + 120));
  if ( v2 )
  {
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v5 + 136));
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v7 + 1848));
    *(_QWORD *)(v7 + 1792) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 1760), 0, 0);
  }
  if ( (*((_DWORD *)a1 + 12) & 0xFFFFFFF7) == 0 )
  {
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v35 + 368));
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v6 + 408));
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v7 + 1816));
    *(_QWORD *)(v35 + 344) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v35 + 312), 0, 0);
    *(_QWORD *)(v6 + 272) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v6 + 240), 0, 0);
    *(_QWORD *)(v7 + 1624) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 1592), 0, 0);
  }
  VidSchiFreeCompletedHwQueuePacket(a1);
}
