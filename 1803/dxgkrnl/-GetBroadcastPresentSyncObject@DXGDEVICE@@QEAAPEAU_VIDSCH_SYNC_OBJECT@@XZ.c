/*
 * XREFs of ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C018ABFC
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00CB880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100890 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z @ 0x1C01B467C (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

struct _VIDSCH_SYNC_OBJECT *__fastcall DXGDEVICE::GetBroadcastPresentSyncObject(DXGDEVICE *this)
{
  char *v1; // rbx
  int DriverVersion; // eax
  __int64 v4; // r8
  int v5; // ecx
  _DWORD v7[20]; // [rsp+40h] [rbp-58h] BYREF

  v1 = (char *)this + 160;
  DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 160));
  if ( !*((_QWORD *)this + 216) )
  {
    memset(v7, 0, sizeof(v7));
    DriverVersion = DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL));
    v5 = 3;
    if ( DriverVersion >= 2400 )
      v5 = 5;
    v7[0] = v5;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v4 + 520) + 8LL)
                                                                                         + 616LL))(
           *(_QWORD *)(v4 + 528),
           0LL,
           v7,
           0LL,
           0LL,
           (char *)this + 1728,
           0LL) < 0 )
      return 0LL;
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + 216);
}
