/*
 * XREFs of ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z @ 0x1C01B467C
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00CB880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100890 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01B3E20 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01DA37C (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C018ABFC (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C01A30A8 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 */

__int64 __fastcall DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
        DXGCONTEXT *this,
        struct DXGCONTEXT **a2,
        unsigned int a3)
{
  signed __int64 v6; // rax
  DXGDEVICE *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int RenderHwQueueCount; // edi
  DXGCONTEXT **v12; // r9
  __int64 v13; // r9
  __int64 v14; // r10
  _QWORD *v15; // r10
  _BYTE *PoolWithTag; // r10
  __int64 v17; // rdx
  DXGCONTEXT *i; // r8
  DXGCONTEXT *v19; // rax
  struct DXGCONTEXT **v20; // r11
  __int64 v21; // rbx
  _QWORD **v22; // r8
  _QWORD *j; // r9
  _QWORD *v24; // rax
  int v25; // eax
  _BYTE *v27; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v28[64]; // [rsp+48h] [rbp-11h] BYREF
  unsigned int v29; // [rsp+88h] [rbp+2Fh]
  signed __int64 v30; // [rsp+C0h] [rbp+67h] BYREF
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+D8h] [rbp+7Fh] BYREF

  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this + 2) + 1736LL), 1uLL);
  v7 = (DXGDEVICE *)*((_QWORD *)this + 2);
  v30 = v6 + 1;
  BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(v7);
  if ( BroadcastPresentSyncObject )
  {
    RenderHwQueueCount = DXGCONTEXT::GetRenderHwQueueCount(this);
    if ( a3 > 1 )
    {
      v12 = a2 + 1;
      do
      {
        RenderHwQueueCount += DXGCONTEXT::GetRenderHwQueueCount(*v12);
        v12 = (DXGCONTEXT **)(v13 + 8);
      }
      while ( v14 != 1 );
    }
    v15 = 0LL;
    v29 = 0;
    v27 = 0LL;
    if ( RenderHwQueueCount <= 8 )
    {
      PoolWithTag = v28;
      v27 = v28;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / RenderHwQueueCount < 8 )
        goto LABEL_12;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * RenderHwQueueCount, 0x4B677844u);
      v27 = PoolWithTag;
    }
    v29 = RenderHwQueueCount;
    if ( !PoolWithTag )
      goto LABEL_13;
    memset(PoolWithTag, 0, 8LL * RenderHwQueueCount);
    v15 = v27;
LABEL_12:
    if ( v15 )
    {
      v17 = 0LL;
      for ( i = (DXGCONTEXT *)*((_QWORD *)this + 46); ; i = *(DXGCONTEXT **)i )
      {
        v19 = 0LL;
        if ( i != (DXGCONTEXT *)((char *)this + 368) )
          v19 = i;
        if ( !v19 )
          break;
        v15[v17] = *((_QWORD *)v19 + 5);
        v17 = (unsigned int)(v17 + 1);
      }
      if ( a3 > 1 )
      {
        v20 = a2 + 1;
        v21 = a3 - 1;
        do
        {
          v22 = (_QWORD **)((char *)*v20 + 368);
          for ( j = *v22; ; j = (_QWORD *)*j )
          {
            v24 = 0LL;
            if ( j != v22 )
              v24 = j;
            if ( !v24 )
              break;
            v15[v17] = v24[5];
            v17 = (unsigned int)(v17 + 1);
          }
          ++v20;
          --v21;
        }
        while ( v21 );
      }
      v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, signed __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 656LL))(
              RenderHwQueueCount,
              v15,
              1LL,
              &BroadcastPresentSyncObject,
              0,
              &v30);
      if ( v25 >= 0 )
        v25 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL)
                                                                                              + 640LL))(
                *((_QWORD *)this + 33),
                BroadcastPresentSyncObject,
                v30);
      v10 = v25;
      goto LABEL_30;
    }
LABEL_13:
    v10 = -1073741801;
LABEL_30:
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v27);
    return v10;
  }
  v9 = WdLogNewEntry5_WdError(v8);
  v10 = -1073741801;
  *(_QWORD *)(v9 + 24) = -1073741801LL;
  *(_QWORD *)(v9 + 32) = 2214LL;
  WdLogEvent5_WdError(v9);
  return v10;
}
