/*
 * XREFs of ?FrameUpdate@CHolographicClient@@UEAAJII@Z @ 0x1801FF2C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x1801F9D00 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 *     ?ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@Z @ 0x1801FA050 (-ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___ @ 0x1801FEB74 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___.c)
 *     ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x1801FF00C (-DoTextureUpdates@CHolographicClient@@AEAAXXZ.c)
 *     ?FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z @ 0x1801FF28C (-FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z.c)
 *     ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x180208BB0 (--4-$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionT.c)
 */

__int64 __fastcall CHolographicClient::FrameUpdate(CHolographicClient *this, int a2, DWORD a3)
{
  CHolographicClient *v3; // rbp
  int v7; // edx
  CHolographicExclusiveView **v8; // rdi
  struct CHolographicExclusiveView *ExclusiveViewByViewId; // rax
  struct CHolographicExclusiveView *v10; // rsi
  CHolographicExclusiveView *v11; // rcx
  __int64 v12; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]
  CHolographicClient *v16; // [rsp+60h] [rbp+8h] BYREF

  v3 = (CHolographicClient *)((char *)this - 16);
  v16 = (CHolographicClient *)((char *)this - 16);
  CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_e17157816af85a08dfd01dfd4111dd83___(
    *((_QWORD *)this + 28),
    &v16);
  v7 = *((_DWORD *)this + 38);
  if ( !v7 )
    goto LABEL_16;
  v8 = (CHolographicExclusiveView **)((char *)this + 168);
  if ( !*((_QWORD *)this + 21) )
  {
    ExclusiveViewByViewId = CHolographicClient::FindExclusiveViewByViewId(v3, v7);
    v10 = ExclusiveViewByViewId;
    if ( ExclusiveViewByViewId )
    {
      if ( *((_BYTE *)ExclusiveViewByViewId + 75) )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 104LL))(*((_QWORD *)this + 1));
      }
      else if ( !CHolographicExclusiveView::ActivateView(ExclusiveViewByViewId, v3) )
      {
        goto LABEL_8;
      }
      Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((char *)this + 168, v10);
    }
  }
LABEL_8:
  v11 = *v8;
  if ( *v8 && !*((_BYTE *)v11 + 75) )
  {
    if ( (v14[0] = 0LL, v14[1] = 0LL, v15 = 0LL, *((_BYTE *)v11 + 72))
      && CHolographicExclusiveView::ProcessExclusiveSurfaceUpdate(v11, a2, (struct EXCLUSIVE_SURFACE_UPDATE *)v14)
      || !WaitForSingleObject(*((HANDLE *)this + 27), a3)
      && *((_BYTE *)*v8 + 72)
      && CHolographicExclusiveView::ProcessExclusiveSurfaceUpdate(*v8, a2, (struct EXCLUSIVE_SURFACE_UPDATE *)v14) )
    {
      v12 = *((_QWORD *)this + 1);
      LODWORD(v15) = *((_DWORD *)this + 39);
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 80LL))(v12, v14);
    }
  }
LABEL_16:
  CHolographicClient::DoTextureUpdates(v3);
  return 0LL;
}
