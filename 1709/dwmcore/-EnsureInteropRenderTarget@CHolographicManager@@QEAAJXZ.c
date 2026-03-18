/*
 * XREFs of ?EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ @ 0x1801C06E8
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x1801BF828 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18001B418 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$HolographicInteropTargetCreated@AEAU_LUID@@@CompositorTracing@@SAXAEAU_LUID@@@Z @ 0x1801BF730 (--$HolographicInteropTargetCreated@AEAU_LUID@@@CompositorTracing@@SAXAEAU_LUID@@@Z.c)
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1801C1664 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicManager::EnsureInteropRenderTarget(CHolographicManager *this)
{
  struct _LUID *v1; // rsi
  unsigned int v2; // ebx
  struct CHolographicInteropTarget **v4; // r14
  signed int v5; // eax
  CHolographicInteropTaskQueue *v6; // rcx
  unsigned int v8; // [rsp+20h] [rbp-28h]

  v1 = (struct _LUID *)((char *)this + 60);
  v2 = 0;
  if ( !*((_DWORD *)this + 15) && !*((_DWORD *)this + 16) || !*((_BYTE *)this + 192) )
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0x2F8u);
    return v2;
  }
  v4 = (struct CHolographicInteropTarget **)((char *)this + 24);
  if ( *((_QWORD *)this + 3) )
    return v2;
  v5 = CHolographicInteropTarget::Create(*((struct CComposition **)this + 2), v1, v4);
  v2 = v5;
  if ( v5 < 0 )
  {
    v8 = 765;
    goto LABEL_14;
  }
  v5 = CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 72LL), *v4);
  v2 = v5;
  if ( v5 < 0 )
  {
    v8 = 767;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, v8);
    return v2;
  }
  v6 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 5);
  if ( v6 && *((_BYTE *)this + 192) )
    CHolographicInteropTaskQueue::PostMessageW(v6, 0x14u, (struct IUnknown *)*v4, 0LL, 0LL, 0LL, 0LL);
  CompositorTracing::HolographicInteropTargetCreated<_LUID &>(v1);
  return v2;
}
