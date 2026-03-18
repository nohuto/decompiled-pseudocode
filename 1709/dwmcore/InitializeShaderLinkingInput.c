/*
 * XREFs of InitializeShaderLinkingInput @ 0x180001FD0
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800028D0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@@.c)
 * Callees:
 *     ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x180001F7C (-ResolveKey@VertexShaderDesc@@QEBA-AW4Enum@VertexShaderKey@@XZ.c)
 *     GetHlslNameAndSemantic @ 0x180002144 (GetHlslNameAndSemantic.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@@gsl@@@Z @ 0x180004938 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall InitializeShaderLinkingInput(struct ID3D11Linker **ppLinker, __int64 a2, __int64 a3)
{
  void *v4; // rbx
  int v5; // eax
  unsigned int v6; // r9d
  unsigned __int16 *v7; // rsi
  unsigned __int32 v8; // edi
  __int64 v9; // rdx
  SIZE_T v10; // rax
  _DWORD *v11; // rbp
  _DWORD *v12; // r10
  __int64 v13; // r10
  __int64 v14; // r11
  int v15; // eax
  unsigned int v16; // edi
  __m128i v18; // [rsp+30h] [rbp-38h]

  v4 = 0LL;
  LOBYTE(v5) = VertexShaderDesc::ResolveKey(a3);
  v18 = off_18026DBC0[v5];
  v7 = (unsigned __int16 *)off_18026DBC0[v5].m128i_i64[0];
  v8 = _mm_srli_si128(v18, 8).m128i_u32[0];
  if ( v8 )
  {
    do
    {
      v9 = v8 - 1;
      if ( (*(_WORD *)(v18.m128i_i64[0] + 12 * v9) & 0xFF00) != 0x100 )
        break;
      if ( (unsigned __int8)*(_WORD *)(v18.m128i_i64[0] + 12 * v9) < v6 )
        break;
      --v8;
    }
    while ( (_DWORD)v9 );
  }
  v10 = 32LL * v8;
  if ( !is_mul_ok(v8, 0x20uLL) )
    v10 = -1LL;
  if ( !v10 )
    v10 = 1LL;
  v11 = HeapAlloc(WPF::g_processHeap, 0, v10);
  if ( v11 )
  {
    WPF::ProcessHeapImpl::Free(0LL);
    v4 = v11;
    if ( v8 )
    {
      v12 = v11 + 7;
      do
      {
        *((_WORD *)v12 - 14) = *v7;
        *(v12 - 1) = *((_DWORD *)v7 + 1);
        *v12 = *((_DWORD *)v7 + 2);
        GetHlslNameAndSemantic(*v7, v12 - 5, v12 - 3);
        v7 += 6;
        v12 = (_DWORD *)(v13 + 32);
      }
      while ( v14 != 1 );
    }
    v15 = CShaderLinkingGraphBuilder::Initialize(ppLinker);
    v16 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x17Fu);
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x172u);
  }
  WPF::ProcessHeapImpl::Free(v4);
  return v16;
}
