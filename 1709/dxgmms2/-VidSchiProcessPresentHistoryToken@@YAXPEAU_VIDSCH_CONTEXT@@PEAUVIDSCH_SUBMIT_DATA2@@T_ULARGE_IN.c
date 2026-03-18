/*
 * XREFs of ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0011AB0
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0011898 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiFlushPendingTokenList @ 0x1C00150F0 (VidSchiFlushPendingTokenList.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0004764 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0011D98 (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C001437C (-VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0014B0C (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0015090 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIH@Z @ 0x1C001525C (-VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0015590 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqqx @ 0x1C002616C (McTemplateK0ppqqx.c)
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
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rbx
  volatile signed __int32 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r14
  __int64 v24; // r15
  bool v25; // zf
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // rax
  CRefCountedBuffer *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  void (__fastcall *v34)(_QWORD); // rax
  struct _KLOCK_QUEUE_HANDLE v35; // [rsp+50h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-40h] BYREF

  if ( (*(_DWORD *)a2 & 0x1000000) != 0 )
  {
    if ( a1 )
    {
      v23 = *((_QWORD *)a1 + 13);
    }
    else
    {
      v33 = *(_QWORD *)((char *)a2 + *((_DWORD *)a2 + 111) * ((8 * *((_DWORD *)a2 + 112) + 175) & 0xFFFFFFF8) + 488);
      if ( v33 )
        v23 = *(_QWORD *)(*(_QWORD *)(v33 + 8) + 32LL);
      else
        v23 = 0LL;
    }
    v24 = *(_QWORD *)(v23 + 32);
    v25 = !_BitScanForward((unsigned int *)&v26, *((_DWORD *)a2 + 110) & 0x3FF);
    if ( v25 || (_BYTE)v26 == 0xFF )
      LOBYTE(v26) = 0;
    if ( VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v24, *((_DWORD *)a2 + 29), (char)v26)
      && VidSchiCheckTokenIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v24, a2) )
    {
      VidSchiSubmitIndependentFlip(a1, a2, a3, (struct _VIDSCH_DEVICE *)v23);
    }
    else
    {
      v27 = *(_QWORD *)(v24 + 8LL * *((unsigned int *)a2 + 29) + 3008);
      v28 = *(unsigned int *)(v27 + 23648);
      if ( (_DWORD)v28 != -1 )
      {
        v34 = *(void (__fastcall **)(_QWORD))(v24 + 2880);
        if ( v34 )
          v34(*(_QWORD *)(v24 + 2928));
      }
      v29 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v27, v28);
      v29[3] = *((_QWORD *)a2 + 13);
      v29[4] = *((unsigned int *)a2 + 28);
      if ( a4 )
      {
        v29[5] = 0LL;
        v29[6] = *((_QWORD *)a2 + 19);
        v29[7] = *((_QWORD *)a2 + 20);
      }
      else
      {
        v29[5] = *((_QWORD *)a2 + 19);
        v29[6] = *((_QWORD *)a2 + 20);
      }
      WdLogEvent5_WdPresentTokenEvent(v29);
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
        (struct _VIDSCH_GLOBAL *)v24,
        (struct VIDSCH_SUBMIT_DATA2 *)((char *)a2 + 440),
        *((_DWORD *)a2 + 34),
        *((_DWORD *)a2 + 34),
        0);
      _InterlockedDecrement((volatile signed __int32 *)(v24 + 960));
      _InterlockedDecrement((volatile signed __int32 *)(v23 + 1188));
      _InterlockedDecrement((volatile signed __int32 *)(v23 + 4LL * *((unsigned int *)a2 + 29) + 1124));
      VidSchiCheckPendingDeviceCommand((_QWORD *)v23);
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
    v12 = *((_QWORD *)a2 + 54);
    v13 = *((_QWORD *)a2 + 3);
    v14 = *((_QWORD *)a2 + 4);
    v15 = *((_QWORD *)a2 + 13);
    v16 = *((_QWORD *)a2 + 12);
    if ( v12 )
    {
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))DxgCoreInterface[54])(
        v12,
        *((_QWORD *)a2 + 12),
        *((_QWORD *)a2 + 13),
        *((_QWORD *)a2 + 3));
    }
    else
    {
      if ( v14 && v13 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 16), &v35);
        v30 = *(CRefCountedBuffer **)(v14 + 8);
        if ( v30 )
          CRefCountedBuffer::RefCountedBufferRelease(v30);
        *(_QWORD *)(v14 + 8) = v13;
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 4));
        KeReleaseInStackQueuedSpinLock(&v35);
      }
      v17 = (volatile signed __int32 *)*((_QWORD *)a2 + 3);
      if ( v17 )
      {
        if ( _InterlockedExchangeAdd(v17 + 1, 0xFFFFFFFF) == 1 )
          ExFreePoolWithTag((PVOID)v17, 0);
        *((_QWORD *)a2 + 3) = 0LL;
      }
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqqx((_DWORD)v17, v10, v11, v16, v15);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v16, &LockHandle);
      if ( *(_DWORD *)(v16 + 8) >= 0x800u )
      {
        v31 = WdLogNewEntry5_WdAssertion(v19, v18);
        *(_QWORD *)(v31 + 24) = 2871LL;
        WdLogEvent5_WdAssertion(v31);
      }
      *(_QWORD *)(v16 + 8LL * *(unsigned int *)(v16 + 8) + 80) = v15;
      *(_BYTE *)(*(unsigned int *)(v16 + 8) + v16 + 16464) &= ~1u;
      *(_BYTE *)(*(unsigned int *)(v16 + 8) + v16 + 16464) &= ~2u;
      *(_BYTE *)(*(unsigned int *)(v16 + 8) + v16 + 16464) &= ~4u;
      v20 = *(unsigned int *)(v16 + 8);
      v21 = *(unsigned __int8 *)(v20 + v16 + 16464);
      LOBYTE(v21) = (8 * a5) | v21 & 0xF7;
      *(_BYTE *)(v20 + v16 + 16464) = v21;
      v22 = ((unsigned __int16)*(_DWORD *)(v16 + 8) + 1) & 0x7FF;
      *(_DWORD *)(v16 + 8) = v22;
      if ( v22 == *(_DWORD *)(v16 + 12) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v21, v20);
        *(_QWORD *)(v32 + 24) = 2886LL;
        WdLogEvent5_WdAssertion(v32);
      }
      KeSetEvent(*(PRKEVENT *)(v16 + 72), 0, 0);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}
