/*
 * XREFs of ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C000BEA0
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x1C0026204 (VidSchiFlushPendingTokenList.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C00280C4 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000E8C8 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C001236C (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0012D18 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIH@Z @ 0x1C0012D78 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0012F58 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C002220C (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0023478 (-VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER.c)
 *     Template_ppqqx @ 0x1C0024100 (Template_ppqqx.c)
 */

void __fastcall VidSchiProcessPresentHistoryToken(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_SUBMIT_DATA2 *a2,
        union _ULARGE_INTEGER a3,
        bool a4,
        bool a5)
{
  __int64 v6; // rbp
  __int64 v10; // r14
  _QWORD *v11; // rax
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rbp
  __int64 v18; // rbx
  volatile signed __int32 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  CRefCountedBuffer *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  char v28; // dl
  int v30; // eax
  char v31; // cl
  __int64 v32; // rcx
  __int64 v33; // rdx
  void (__fastcall *v34)(_QWORD); // rax
  _QWORD *v35; // rax
  struct _KLOCK_QUEUE_HANDLE v36; // [rsp+50h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-40h] BYREF

  v6 = *((_QWORD *)a1 + 13);
  v10 = *(_QWORD *)(v6 + 32);
  if ( (*(_DWORD *)a2 & 0x1000000) != 0 )
  {
    v30 = *((_DWORD *)a2 + 108);
    v28 = -1;
    if ( _BitScanForward((unsigned int *)&v30, (unsigned __int8)v30) )
      v28 = v30;
    v31 = 0;
    if ( v28 != -1 )
      v31 = v28;
    if ( VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v10, *((_DWORD *)a2 + 29), v31)
      && VidSchiCheckTokenIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v10, a2) )
    {
      VidSchiSubmitIndependentFlip(a1, a2, a3);
    }
    else
    {
      v32 = *(_QWORD *)(v10 + 8LL * *((unsigned int *)a2 + 29) + 2992);
      v33 = *(unsigned int *)(v32 + 18896);
      if ( (_DWORD)v33 != -1 )
      {
        v34 = *(void (__fastcall **)(_QWORD))(v10 + 2864);
        if ( v34 )
          v34(*(_QWORD *)(v10 + 2912));
      }
      v35 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v32, v33);
      v35[3] = *((_QWORD *)a2 + 13);
      v35[4] = *((unsigned int *)a2 + 28);
      if ( a4 )
      {
        v35[5] = 0LL;
        v35[6] = *((_QWORD *)a2 + 19);
        v35[7] = *((_QWORD *)a2 + 20);
      }
      else
      {
        v35[5] = *((_QWORD *)a2 + 19);
        v35[6] = *((_QWORD *)a2 + 20);
      }
      WdLogEvent5_WdPresentTokenEvent(v35);
      VidSchiPropagatePresentHistoryToken(
        *((PKSPIN_LOCK *)a2 + 12),
        *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a2 + 13),
        0,
        0,
        a4,
        a5,
        *((_QWORD *)a2 + 4),
        *((_QWORD *)a2 + 3),
        (__int64)a2);
      VidSchiUnreferencePrimaryAllocations(
        (struct _VIDSCH_GLOBAL *)v10,
        (struct VIDSCH_SUBMIT_DATA2 *)((char *)a2 + 432),
        *((_DWORD *)a2 + 34),
        *((_DWORD *)a2 + 34),
        0);
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 960));
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 1188));
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 4LL * *((unsigned int *)a2 + 29) + 1124));
      VidSchiCheckPendingDeviceCommand(v6);
    }
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(a1, a2);
    v11[3] = *((_QWORD *)a2 + 13);
    v11[4] = *((unsigned int *)a2 + 28);
    v11[5] = *((_QWORD *)a2 + 19);
    v11[6] = *((_QWORD *)a2 + 20);
    WdLogEvent5_WdPresentTokenEvent(v11);
    v14 = *((_QWORD *)a2 + 53);
    v15 = *((_QWORD *)a2 + 3);
    v16 = *((_QWORD *)a2 + 4);
    v17 = *((_QWORD *)a2 + 13);
    v18 = *((_QWORD *)a2 + 12);
    if ( v14 )
    {
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))DxgCoreInterface[54])(
        v14,
        *((_QWORD *)a2 + 12),
        *((_QWORD *)a2 + 13),
        *((_QWORD *)a2 + 3));
    }
    else
    {
      if ( v16 && v15 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 16), &v36);
        v25 = *(CRefCountedBuffer **)(v16 + 8);
        if ( v25 )
          CRefCountedBuffer::RefCountedBufferRelease(v25);
        *(_QWORD *)(v16 + 8) = v15;
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 4));
        KeReleaseInStackQueuedSpinLock(&v36);
      }
      v19 = (volatile signed __int32 *)*((_QWORD *)a2 + 3);
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 1, 0xFFFFFFFF) == 1 )
          ExFreePoolWithTag((PVOID)v19, 0);
        *((_QWORD *)a2 + 3) = 0LL;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_ppqqx((_DWORD)v19, v12, v13, v18, v17);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v18, &LockHandle);
      if ( *(_DWORD *)(v18 + 8) >= 0x800u )
      {
        v26 = WdLogNewEntry5_WdAssertion(v21, v20);
        *(_QWORD *)(v26 + 24) = 2770LL;
        WdLogEvent5_WdAssertion(v26);
      }
      *(_QWORD *)(v18 + 8LL * *(unsigned int *)(v18 + 8) + 80) = v17;
      *(_BYTE *)(*(unsigned int *)(v18 + 8) + v18 + 16464) &= ~1u;
      *(_BYTE *)(*(unsigned int *)(v18 + 8) + v18 + 16464) &= ~2u;
      *(_BYTE *)(*(unsigned int *)(v18 + 8) + v18 + 16464) &= ~4u;
      v22 = *(unsigned int *)(v18 + 8);
      v23 = *(unsigned __int8 *)(v22 + v18 + 16464);
      LOBYTE(v23) = (8 * a5) | v23 & 0xF7;
      *(_BYTE *)(v22 + v18 + 16464) = v23;
      v24 = ((unsigned __int16)*(_DWORD *)(v18 + 8) + 1) & 0x7FF;
      *(_DWORD *)(v18 + 8) = v24;
      if ( v24 == *(_DWORD *)(v18 + 12) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v23, v22);
        *(_QWORD *)(v27 + 24) = 2785LL;
        WdLogEvent5_WdAssertion(v27);
      }
      KeSetEvent(*(PRKEVENT *)(v18 + 72), 0, 0);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}
