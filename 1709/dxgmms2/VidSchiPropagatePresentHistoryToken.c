/*
 * XREFs of VidSchiPropagatePresentHistoryToken @ 0x1C0011D98
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C00029E0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0005730 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0011AB0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0027CD0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchSubmitCommand @ 0x1C006E3C0 (VidSchSubmitCommand.c)
 * Callees:
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111@Z @ 0x1C0011E58 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0015590 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
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
  __int64 v13; // rcx
  CRefCountedBuffer *v14; // rcx
  CRefCountedBuffer *v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  if ( a9 && (v13 = *(_QWORD *)(a9 + 432)) != 0 )
  {
    ((void (__fastcall *)(__int64, PKSPIN_LOCK, struct _D3DKMT_PRESENTHISTORYTOKEN *, _QWORD))DxgCoreInterface[54])(
      v13,
      SpinLock,
      a2,
      *(_QWORD *)(a9 + 24));
  }
  else
  {
    if ( a7 && a8 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a7 + 16), &LockHandle);
      v15 = *(CRefCountedBuffer **)(a7 + 8);
      if ( v15 )
        CRefCountedBuffer::RefCountedBufferRelease(v15);
      *(_QWORD *)(a7 + 8) = a8;
      _InterlockedIncrement((volatile signed __int32 *)(a8 + 4));
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    if ( a9 )
    {
      v14 = *(CRefCountedBuffer **)(a9 + 24);
      if ( v14 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v14);
        *(_QWORD *)(a9 + 24) = 0LL;
      }
    }
    DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(SpinLock, a2, a3, a4, a5, a6);
  }
}
