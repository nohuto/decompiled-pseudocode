/*
 * XREFs of VidSchiPropagatePresentHistoryToken @ 0x1C0012384
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000D930 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010550 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0013570 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002AB00 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchSubmitCommand @ 0x1C0075380 (VidSchSubmitCommand.c)
 * Callees:
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N1111@Z @ 0x1C0012450 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00159C0 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiPropagatePresentHistoryToken(
        PKSPIN_LOCK SpinLock,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        bool a3,
        bool a4,
        bool a5,
        bool a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  BOOL v9; // ebx
  __int64 v14; // rcx
  CRefCountedBuffer *v15; // rcx
  CRefCountedBuffer *v16; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  LOBYTE(v9) = 0;
  if ( a9 && (v14 = *(_QWORD *)(a9 + 488)) != 0 )
  {
    ((void (__fastcall *)(__int64, PKSPIN_LOCK, struct _D3DKMT_PRESENTHISTORYTOKEN *, _QWORD))DxgCoreInterface[66])(
      v14,
      SpinLock,
      a2,
      *(_QWORD *)(a9 + 24));
  }
  else
  {
    if ( a7 && a8 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a7 + 16), &LockHandle);
      v16 = *(CRefCountedBuffer **)(a7 + 8);
      if ( v16 )
        CRefCountedBuffer::RefCountedBufferRelease(v16);
      *(_QWORD *)(a7 + 8) = a8;
      _InterlockedIncrement((volatile signed __int32 *)(a8 + 4));
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    if ( a9 )
    {
      v15 = *(CRefCountedBuffer **)(a9 + 24);
      if ( v15 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v15);
        *(_QWORD *)(a9 + 24) = 0LL;
      }
      v9 = *(_DWORD *)(a9 + 4) & 1;
    }
    DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(SpinLock, a2, a3, a4, a5, a6, v9);
  }
}
