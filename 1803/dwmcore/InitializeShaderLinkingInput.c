/*
 * XREFs of InitializeShaderLinkingInput @ 0x1800D39CC
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800D4288 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     GetHlslNameAndSemantic @ 0x1800D3B30 (GetHlslNameAndSemantic.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1800D4EE8 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x1800D5B30 (-ResolveKey@VertexShaderDesc@@QEBA-AW4Enum@VertexShaderKey@@XZ.c)
 */

__int64 __fastcall InitializeShaderLinkingInput(struct ID3D11Linker **ppLinker, __int64 a2, __int64 a3)
{
  unsigned int v4; // r9d
  unsigned int v5; // ebx
  unsigned __int16 *v6; // rdi
  __int64 v7; // rdx
  SIZE_T v8; // rax
  _DWORD *v9; // rax
  void *v10; // rsi
  _DWORD *v11; // r10
  __int64 v12; // r10
  __int64 v13; // r11
  int v14; // eax
  unsigned int v15; // ebx
  __int128 v17; // [rsp+30h] [rbp-28h]

  v17 = *((_OWORD *)&unk_1802D3E60 + (int)VertexShaderDesc::ResolveKey(a3));
  v6 = (unsigned __int16 *)*((_QWORD *)&v17 + 1);
  v5 = v17;
  if ( (_DWORD)v17 )
  {
    do
    {
      v7 = v5 - 1;
      if ( (*(_WORD *)(*((_QWORD *)&v17 + 1) + 12 * v7) & 0xFF00) != 0x100 )
        break;
      if ( (unsigned __int8)*(_WORD *)(*((_QWORD *)&v17 + 1) + 12 * v7) < v4 )
        break;
      --v5;
    }
    while ( (_DWORD)v7 );
  }
  v8 = 32LL * v5;
  if ( !is_mul_ok(v5, 0x20uLL) )
    v8 = -1LL;
  if ( !v8 )
    v8 = 1LL;
  v9 = HeapAlloc(WPF::g_processHeap, 0, v8);
  v10 = v9;
  if ( v9 )
  {
    if ( v5 )
    {
      v11 = v9 + 7;
      do
      {
        *((_WORD *)v11 - 14) = *v6;
        *(v11 - 1) = *((_DWORD *)v6 + 1);
        *v11 = *((_DWORD *)v6 + 2);
        GetHlslNameAndSemantic(*v6, v11 - 5, v11 - 3);
        v6 += 6;
        v11 = (_DWORD *)(v12 + 32);
      }
      while ( v13 != 1 );
    }
    v14 = CShaderLinkingGraphBuilder::Initialize(ppLinker);
    v15 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x1B2u);
    operator delete(v10);
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1A5u);
  }
  return v15;
}
