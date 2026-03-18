/*
 * XREFs of ?Create@CD3DPhysicalSwapChainBuffer@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1801A8CD0
 * Callers:
 *     ?GetCurrentPhysicalBackBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DPhysicalSwapChainBuffer@@@Z @ 0x1801B2858 (-GetCurrentPhysicalBackBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DPhysicalSwapChainBuffer@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DPhysicalSwapChainBuffer@@@WRL@Microsoft@@IEAAKXZ @ 0x180128430 (-InternalRelease@-$ComPtr@VCD3DPhysicalSwapChainBuffer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CD3DPhysicalSwapChainBuffer@@AEAA@XZ @ 0x1801A8B9C (--0CD3DPhysicalSwapChainBuffer@@AEAA@XZ.c)
 *     ?Initialize@CD3DPhysicalSwapChainBuffer@@AEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1801A8D90 (-Initialize@CD3DPhysicalSwapChainBuffer@@AEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CD3DPhysicalSwapChainBuffer::Create(
        struct CD3DResourceManager *a1,
        struct ID3D11Texture2D *a2,
        struct CD3DPhysicalSwapChainBuffer **a3)
{
  CD3DPhysicalSwapChainBuffer *v6; // rax
  volatile signed __int32 *v7; // rbx
  signed int v8; // eax
  unsigned int v9; // edi
  CMILPoolResource *v11; // [rsp+58h] [rbp+20h] BYREF

  v6 = (CD3DPhysicalSwapChainBuffer *)HeapAlloc(WPF::g_processHeap, 0, 0xF0uLL);
  if ( v6 )
    v7 = (volatile signed __int32 *)CD3DPhysicalSwapChainBuffer::CD3DPhysicalSwapChainBuffer(v6);
  else
    v7 = 0LL;
  v11 = (CMILPoolResource *)v7;
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v8 = CD3DPhysicalSwapChainBuffer::Initialize((CD3DPhysicalSwapChainBuffer *)v7, a1, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xFu);
    }
    else
    {
      v11 = 0LL;
      *a3 = (struct CD3DPhysicalSwapChainBuffer *)v7;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xEu);
  }
  Microsoft::WRL::ComPtr<CD3DPhysicalSwapChainBuffer>::InternalRelease(&v11);
  return v9;
}
