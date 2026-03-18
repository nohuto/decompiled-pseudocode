/*
 * XREFs of ?GetCurrentPhysicalBackBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DPhysicalSwapChainBuffer@@@Z @ 0x1801B2858
 * Callers:
 *     ?GetCurrentPhysicalBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DPhysicalSwapChainBuffer@@@Z @ 0x1801AE340 (-GetCurrentPhysicalBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DPhysicalSwapChainBuffer@@@.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCD3DPhysicalSwapChainBuffer@@@WRL@Microsoft@@IEAAKXZ @ 0x180128430 (-InternalRelease@-$ComPtr@VCD3DPhysicalSwapChainBuffer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CD3DPhysicalSwapChainBuffer@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x1801A8CD0 (-Create@CD3DPhysicalSwapChainBuffer@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@.c)
 *     ?PreRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ @ 0x1801A9230 (-PreRender@CD3DPhysicalSwapChainBuffer@@QEAAJXZ.c)
 */

__int64 __fastcall CSwapChainBase::GetCurrentPhysicalBackBuffer(char **this, struct CD3DPhysicalSwapChainBuffer **a2)
{
  int v4; // eax
  unsigned int v5; // esi
  unsigned __int64 v6; // rcx
  bool v7; // zf
  DWORD v8; // r9d
  __int64 v9; // rbx
  __int64 v10; // rax
  bool v11; // cf
  SIZE_T v12; // rax
  _QWORD *v13; // rax
  char *v14; // rsi
  char *v15; // rcx
  char *v16; // rbx
  unsigned int v17; // r8d
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rdx
  char *v21; // rax
  struct CD3DPhysicalSwapChainBuffer **v22; // r15
  __int64 v23; // rcx
  char *v24; // rdx
  __int64 v25; // rax
  char *v26; // rcx
  char *v27; // rbx
  unsigned int v29; // [rsp+20h] [rbp-38h]
  unsigned int v30; // [rsp+60h] [rbp+8h] BYREF

  v4 = (*((__int64 (__fastcall **)(char **, unsigned int *))*this + 37))(this, &v30);
  v5 = v4;
  if ( v4 < 0 )
  {
    v29 = 223;
LABEL_32:
    v8 = v4;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, v29);
    v26 = this[51];
    if ( v26 )
    {
      v27 = v26 - 8;
      `vector destructor iterator'(
        v26,
        8LL,
        *((_QWORD *)v26 - 1),
        (void (__fastcall *)(CDrawListBitmap *))Microsoft::WRL::ComPtr<CD3DPhysicalSwapChainBuffer>::~ComPtr<CD3DPhysicalSwapChainBuffer>);
      WPF::ProcessHeapImpl::Free(v27);
      this[51] = 0LL;
    }
    return v5;
  }
  v6 = *((unsigned int *)this + 40);
  v7 = this[51] == 0LL;
  v30 %= (unsigned int)v6;
  if ( v7 )
  {
    if ( (*((_DWORD *)this + 39) & 0x2000000) == 0 )
    {
      v5 = -2003292287;
      v29 = 231;
LABEL_5:
      v8 = v5;
      goto LABEL_33;
    }
    v9 = v6;
    v10 = 8 * v6;
    if ( !is_mul_ok(v6, 8uLL) )
      v10 = -1LL;
    v11 = __CFADD__(v10, 8LL);
    v12 = v10 + 8;
    if ( v11 )
      v12 = -1LL;
    if ( !v12 )
      v12 = 1LL;
    v13 = HeapAlloc(WPF::g_processHeap, 0, v12);
    if ( v13 )
    {
      v14 = (char *)(v13 + 1);
      *v13 = v9;
      `vector constructor iterator'(
        (CInputSinkStruct::InputQueueInfo *)(v13 + 1),
        8LL,
        v9,
        (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::ComPtr<ID3D11DepthStencilState>);
    }
    else
    {
      v14 = 0LL;
    }
    v15 = this[51];
    if ( v14 != v15 )
    {
      if ( v15 )
      {
        v16 = v15 - 8;
        `vector destructor iterator'(
          v15,
          8LL,
          *((_QWORD *)v15 - 1),
          (void (__fastcall *)(CDrawListBitmap *))Microsoft::WRL::ComPtr<CD3DPhysicalSwapChainBuffer>::~ComPtr<CD3DPhysicalSwapChainBuffer>);
        WPF::ProcessHeapImpl::Free(v16);
      }
      this[51] = v14;
    }
    if ( !this[51] )
    {
      v5 = -2147024882;
      v29 = 235;
      goto LABEL_5;
    }
    v17 = *((_DWORD *)this + 40);
    v18 = 0LL;
    if ( v17 )
    {
      while ( 1 )
      {
        v19 = *(_QWORD *)&this[47][8 * v18];
        v20 = ((unsigned int)v18 + v30) % v17;
        v21 = this[51];
        v22 = (struct CD3DPhysicalSwapChainBuffer **)&v21[8 * v20];
        Microsoft::WRL::ComPtr<CD3DPhysicalSwapChainBuffer>::InternalRelease((CMILPoolResource **)&v21[8 * (unsigned int)v20]);
        v4 = CD3DPhysicalSwapChainBuffer::Create(
               (struct CD3DResourceManager *)(*((_QWORD *)this[2] + 10) + 896LL),
               *(struct ID3D11Texture2D **)(v19 + 128),
               v22);
        v5 = v4;
        if ( v4 < 0 )
          break;
        if ( !(_DWORD)v18 )
        {
          v4 = CD3DPhysicalSwapChainBuffer::PreRender(*v22);
          v5 = v4;
          if ( v4 < 0 )
          {
            v29 = 254;
            goto LABEL_32;
          }
        }
        v17 = *((_DWORD *)this + 40);
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= v17 )
          goto LABEL_26;
      }
      v29 = 247;
      goto LABEL_32;
    }
  }
LABEL_26:
  v23 = v30;
  v24 = this[51];
  v25 = *(_QWORD *)&v24[8 * v30];
  if ( v25 )
    _InterlockedAdd((volatile signed __int32 *)(v25 + 8), 1u);
  v5 = 0;
  *a2 = *(struct CD3DPhysicalSwapChainBuffer **)&v24[8 * v23];
  return v5;
}
