/*
 * XREFs of ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0013570
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0013330 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiFlushPendingTokenList @ 0x1C001541C (VidSchiFlushPendingTokenList.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00103BC (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0012384 (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C0013DE0 (-VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C00149D4 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C001539C (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIH@Z @ 0x1C00156A0 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00159C0 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqqx @ 0x1C0028DA0 (McTemplateK0ppqqx.c)
 */

void __fastcall VidSchiProcessPresentHistoryToken(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_SUBMIT_DATA2 *a2,
        union _ULARGE_INTEGER a3,
        bool a4,
        bool a5)
{
  _QWORD *v9; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rbx
  volatile signed __int32 *v17; // rcx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r14
  __int64 v26; // r15
  bool v27; // zf
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  CRefCountedBuffer *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  void (__fastcall *v37)(_QWORD); // rax
  struct _KLOCK_QUEUE_HANDLE v38; // [rsp+50h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-40h] BYREF

  if ( (*(_DWORD *)a2 & 0x1000000) != 0 )
  {
    if ( a1 )
    {
      v25 = *((_QWORD *)a1 + 13);
    }
    else
    {
      v36 = *(_QWORD *)((char *)a2 + *((_DWORD *)a2 + 125) * ((8 * *((_DWORD *)a2 + 126) + 175) & 0xFFFFFFF8) + 544);
      if ( v36 )
        v25 = *(_QWORD *)(*(_QWORD *)(v36 + 8) + 32LL);
      else
        v25 = 0LL;
    }
    v26 = *(_QWORD *)(v25 + 32);
    v27 = !_BitScanForward((unsigned int *)&v28, *((_DWORD *)a2 + 124) & 0x3FF);
    if ( v27 || (_BYTE)v28 == 0xFF )
      LOBYTE(v28) = 0;
    if ( VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v26, *((_DWORD *)a2 + 29), (char)v28)
      && VidSchiCheckTokenIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v26, a2) )
    {
      VidSchiSubmitIndependentFlip(a1, a2, a3, (struct _VIDSCH_DEVICE *)v25);
    }
    else
    {
      v29 = *(_QWORD *)(v26 + 8LL * *((unsigned int *)a2 + 29) + 3032);
      v30 = *(unsigned int *)(v29 + 28128);
      if ( (_DWORD)v30 != -1 )
      {
        v37 = *(void (__fastcall **)(_QWORD))(v26 + 2904);
        if ( v37 )
          v37(*(_QWORD *)(v26 + 2952));
      }
      v31 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v29, v30);
      v31[3] = *((_QWORD *)a2 + 13);
      v31[4] = *((unsigned int *)a2 + 28);
      if ( a4 )
      {
        v31[5] = 0LL;
        v31[6] = *((_QWORD *)a2 + 19);
        v32 = *((_QWORD *)a2 + 20);
      }
      else
      {
        v31[5] = *((_QWORD *)a2 + 19);
        v31[6] = *((_QWORD *)a2 + 20);
        v32 = *((_DWORD *)a2 + 1) & 1;
      }
      v31[7] = v32;
      WdLogEvent5_WdPresentTokenEvent(v31);
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
        (struct _VIDSCH_GLOBAL *)v26,
        (struct VIDSCH_SUBMIT_DATA2 *)((char *)a2 + 496),
        *((_DWORD *)a2 + 34),
        *((_DWORD *)a2 + 34),
        0);
      _InterlockedDecrement((volatile signed __int32 *)(v26 + 976));
      _InterlockedDecrement((volatile signed __int32 *)(v25 + 1212));
      _InterlockedDecrement((volatile signed __int32 *)(v25 + 4LL * *((unsigned int *)a2 + 29) + 1148));
      VidSchiCheckPendingDeviceCommand((_QWORD *)v25);
    }
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(a1, a2);
    v9[3] = *((_QWORD *)a2 + 13);
    v9[4] = *((unsigned int *)a2 + 28);
    v9[5] = *((_QWORD *)a2 + 19);
    v9[6] = *((_QWORD *)a2 + 20);
    WdLogEvent5_WdPresentTokenEvent(v9);
    v12 = *((_QWORD *)a2 + 61);
    v13 = *((_QWORD *)a2 + 3);
    v14 = *((_QWORD *)a2 + 4);
    v15 = *((_QWORD *)a2 + 13);
    v16 = *((_QWORD *)a2 + 12);
    if ( v12 )
    {
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))DxgCoreInterface[66])(
        v12,
        *((_QWORD *)a2 + 12),
        *((_QWORD *)a2 + 13),
        *((_QWORD *)a2 + 3));
    }
    else
    {
      v17 = (volatile signed __int32 *)*((_QWORD *)a2 + 3);
      if ( v14 && v13 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 16), &v38);
        v33 = *(CRefCountedBuffer **)(v14 + 8);
        if ( v33 )
          CRefCountedBuffer::RefCountedBufferRelease(v33);
        *(_QWORD *)(v14 + 8) = v13;
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 4));
        KeReleaseInStackQueuedSpinLock(&v38);
        v17 = (volatile signed __int32 *)*((_QWORD *)a2 + 3);
      }
      if ( v17 )
      {
        if ( _InterlockedExchangeAdd(v17 + 1, 0xFFFFFFFF) == 1 )
          ExFreePoolWithTag((PVOID)v17, 0);
        *((_QWORD *)a2 + 3) = 0LL;
      }
      v18 = *((_DWORD *)a2 + 1) & 1;
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqqx((_DWORD)v17, v10, v11, v16, v15);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v16, &LockHandle);
      v21 = *(unsigned int *)(v16 + 8);
      if ( (unsigned int)v21 >= 0x800 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v20, v19);
        *(_QWORD *)(v34 + 24) = 3146LL;
        WdLogEvent5_WdAssertion(v34);
        v21 = *(unsigned int *)(v16 + 8);
      }
      *(_QWORD *)(v16 + 8 * v21 + 80) = v15;
      *(_BYTE *)(*(unsigned int *)(v16 + 8) + v16 + 16464) &= ~1u;
      *(_BYTE *)(*(unsigned int *)(v16 + 8) + v16 + 16464) &= ~2u;
      *(_BYTE *)(*(unsigned int *)(v16 + 8) + v16 + 16464) &= ~4u;
      v22 = *(unsigned int *)(v16 + 8);
      v23 = *(unsigned __int8 *)(v22 + v16 + 16464);
      LOBYTE(v23) = (8 * a5) | v23 & 0xF7;
      *(_BYTE *)(v22 + v16 + 16464) = v23;
      *(_BYTE *)(*(unsigned int *)(v16 + 8) + v16 + 16464) ^= (*(_BYTE *)(*(unsigned int *)(v16 + 8) + v16 + 16464) ^ (16 * v18)) & 0x10;
      v24 = ((unsigned __int16)*(_DWORD *)(v16 + 8) + 1) & 0x7FF;
      *(_DWORD *)(v16 + 8) = v24;
      if ( v24 == *(_DWORD *)(v16 + 12) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v23, v22);
        *(_QWORD *)(v35 + 24) = 3162LL;
        WdLogEvent5_WdAssertion(v35);
      }
      KeSetEvent(*(PRKEVENT *)(v16 + 72), 0, 0);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}
