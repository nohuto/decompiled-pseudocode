/*
 * XREFs of ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z @ 0x1C01B7D00
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C4D00 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C00CD300 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01B74A8 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01D1F50 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ?GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008E24 (-GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008EC0 (-GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C019D4AC (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 */

__int64 __fastcall DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(
        DXGCONTEXT *this,
        struct DXGCONTEXT **a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  signed __int64 v7; // rax
  DXGDEVICE *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ebx
  PVOID v12; // r10
  _BYTE *PoolWithTag; // r10
  struct _VIDSCH_CONTEXT *RenderHwQueue; // rax
  char *v15; // r10
  _QWORD *v16; // rdx
  char *v17; // rsi
  struct _VIDSCH_CONTEXT *v18; // rax
  struct _VIDSCH_CONTEXT **v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  struct _VIDSCH_CONTEXT *ImplicitHwQueue; // rax
  __int64 v23; // rdx
  _BYTE *v25; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v26[64]; // [rsp+48h] [rbp-1h] BYREF
  unsigned int v27; // [rsp+88h] [rbp+3Fh]
  signed __int64 v28; // [rsp+B0h] [rbp+67h] BYREF
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+C8h] [rbp+7Fh] BYREF

  v3 = a3 + 1;
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this + 2) + 1720LL), 1uLL);
  v8 = (DXGDEVICE *)*((_QWORD *)this + 2);
  v28 = v7 + 1;
  BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(v8);
  if ( BroadcastPresentSyncObject )
  {
    v12 = 0LL;
    v27 = 0;
    v25 = 0LL;
    if ( v3 <= 8 )
    {
      PoolWithTag = v26;
      v25 = v26;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v3 < 8 )
        goto LABEL_9;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v3, 0x4B677844u);
      v25 = PoolWithTag;
    }
    v27 = v3;
    if ( !PoolWithTag )
      goto LABEL_10;
    memset(PoolWithTag, 0, 8LL * v3);
    v12 = v25;
LABEL_9:
    if ( v12 )
    {
      RenderHwQueue = DXGCONTEXT::GetRenderHwQueue(this);
      *(_QWORD *)v15 = RenderHwQueue;
      if ( a3 > 1 )
      {
        v16 = v15 + 8;
        v17 = (char *)((char *)a2 - v15);
        do
        {
          v18 = DXGCONTEXT::GetRenderHwQueue(*(DXGCONTEXT **)((char *)v16 + (_QWORD)v17));
          *v19 = v18;
          v16 = v19 + 1;
        }
        while ( v20 != 1 );
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, signed __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 504LL) + 8LL) + 544LL))(
              v3,
              v15,
              1LL,
              &BroadcastPresentSyncObject,
              0,
              &v28);
      if ( v21 >= 0 )
      {
        ImplicitHwQueue = DXGCONTEXT::GetImplicitHwQueue(this);
        v21 = (*(__int64 (__fastcall **)(struct _VIDSCH_CONTEXT *, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(v23 + 8) + 536LL))(
                ImplicitHwQueue,
                BroadcastPresentSyncObject,
                v28);
      }
      v11 = v21;
      goto LABEL_17;
    }
LABEL_10:
    v11 = -1073741801;
LABEL_17:
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v25);
    return v11;
  }
  v10 = WdLogNewEntry5_WdError(v9);
  v11 = -1073741801;
  *(_QWORD *)(v10 + 24) = -1073741801LL;
  *(_QWORD *)(v10 + 32) = 2273LL;
  WdLogEvent5_WdError(v10);
  return v11;
}
