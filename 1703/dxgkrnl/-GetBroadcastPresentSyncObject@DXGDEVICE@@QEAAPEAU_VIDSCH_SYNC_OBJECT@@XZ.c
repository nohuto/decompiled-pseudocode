/*
 * XREFs of ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C0187B64
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B2DA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00BDE10 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

struct _VIDSCH_SYNC_OBJECT *__fastcall DXGDEVICE::GetBroadcastPresentSyncObject(DXGDEVICE *this)
{
  char *v1; // rbx
  __int64 v3; // rax
  _DWORD v5[20]; // [rsp+40h] [rbp-58h] BYREF

  v1 = (char *)this + 160;
  DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 160));
  if ( !*((_QWORD *)this + 230) )
  {
    memset(v5, 0, sizeof(v5));
    v3 = *((_QWORD *)this + 2);
    v5[0] = 3;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v3 + 408) + 8LL)
                                                                                         + 520LL))(
           *(_QWORD *)(v3 + 416),
           0LL,
           v5,
           0LL,
           0LL,
           (char *)this + 1840,
           0LL) < 0 )
      return 0LL;
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + 230);
}
