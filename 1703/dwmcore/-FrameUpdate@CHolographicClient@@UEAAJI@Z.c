/*
 * XREFs of ?FrameUpdate@CHolographicClient@@UEAAJI@Z @ 0x1801A7AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x1801A4968 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 *     ?ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@Z @ 0x1801A4BB8 (-ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_eb9d63b7245e84e3ffbf14e01a0783af___ @ 0x1801A7320 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_eb9d63b7245e84e3ffbf14e01a0783af___.c)
 *     ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x1801A7608 (--4-$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionT.c)
 *     ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x1801A77DC (-DoTextureUpdates@CHolographicClient@@AEAAXXZ.c)
 *     ?FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z @ 0x1801A7A78 (-FindExclusiveViewByViewId@CHolographicClient@@AEAAPEAVCHolographicExclusiveView@@I@Z.c)
 *     ?FreezeTextures@CHolographicClient@@AEAAXXZ @ 0x1801A7BC8 (-FreezeTextures@CHolographicClient@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicClient::FrameUpdate(CHolographicClient *this, int a2)
{
  CHolographicClient *v2; // rsi
  int v5; // edx
  CHolographicExclusiveView **v6; // rdi
  CHolographicExclusiveView *ExclusiveViewByViewId; // rax
  __int64 v8; // rbp
  CHolographicExclusiveView *v9; // rcx
  __int64 v10; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  CHolographicClient *v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = (CHolographicClient *)((char *)this - 16);
  v14 = (CHolographicClient *)((char *)this - 16);
  CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_eb9d63b7245e84e3ffbf14e01a0783af___(
    *((union _SLIST_HEADER **)this + 25),
    &v14);
  v5 = *((_DWORD *)this + 30);
  if ( v5 )
  {
    v6 = (CHolographicExclusiveView **)((char *)this + 136);
    if ( !*((_QWORD *)this + 17) )
    {
      ExclusiveViewByViewId = CHolographicClient::FindExclusiveViewByViewId(v2, v5);
      v8 = (__int64)ExclusiveViewByViewId;
      if ( ExclusiveViewByViewId )
      {
        if ( CHolographicExclusiveView::ActivateView(ExclusiveViewByViewId, v2) )
        {
          Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((__int64 *)this + 17, v8);
          CHolographicClient::FreezeTextures(v2);
        }
      }
    }
    v9 = *v6;
    if ( *v6 )
    {
      if ( (v12[0] = 0LL, v12[1] = 0LL, v13 = 0LL, *((_BYTE *)v9 + 72))
        && CHolographicExclusiveView::ProcessExclusiveSurfaceUpdate(v9, a2, (struct EXCLUSIVE_SURFACE_UPDATE *)v12)
        || !WaitForSingleObject(*((HANDLE *)this + 24), 0x64u)
        && *((_BYTE *)*v6 + 72)
        && CHolographicExclusiveView::ProcessExclusiveSurfaceUpdate(*v6, a2, (struct EXCLUSIVE_SURFACE_UPDATE *)v12) )
      {
        v10 = *((_QWORD *)this + 1);
        LODWORD(v13) = *((_DWORD *)this + 31);
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 80LL))(v10, v12);
      }
    }
  }
  CHolographicClient::DoTextureUpdates(v2);
  return 0LL;
}
