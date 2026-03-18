/*
 * XREFs of InitializeShaderLinkingInput @ 0x1800B842C
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800B8A74 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV-$ArrayRef@PEBUShaderLinking.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     GetHlslNameAndSemantic @ 0x1800B8590 (GetHlslNameAndSemantic.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@AEBV?$ArrayRef@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@@@@Z @ 0x1800B9084 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@AEBV-$ArrayRef@$$CBUSign.c)
 *     ?GetOutputs@VertexShaderDesc@@SA?AV?$ArrayRef@$$CBUVertexShaderOutput@@@@W4Enum@VertexShaderKey@@@Z @ 0x1800BB758 (-GetOutputs@VertexShaderDesc@@SA-AV-$ArrayRef@$$CBUVertexShaderOutput@@@@W4Enum@VertexShaderKey@.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x1800BB82C (-ResolveKey@VertexShaderDesc@@QEBA-AW4Enum@VertexShaderKey@@XZ.c)
 */

__int64 __fastcall InitializeShaderLinkingInput(struct ID3D11Linker **ppLinker, __int64 a2, __int64 a3)
{
  void *v4; // rbx
  unsigned int v5; // eax
  __int64 Outputs; // rax
  unsigned int v7; // r9d
  unsigned int v8; // edi
  __int64 i; // r14
  __int16 v10; // cx
  SIZE_T v11; // rax
  _DWORD *v12; // rsi
  unsigned int v13; // r11d
  _DWORD *v14; // r10
  int v15; // r11d
  __int64 v16; // r10
  int v17; // eax
  unsigned int v18; // edi
  _DWORD *v20; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-20h]

  v4 = 0LL;
  v5 = VertexShaderDesc::ResolveKey(a3);
  Outputs = VertexShaderDesc::GetOutputs(&v20, v5);
  v8 = *(_DWORD *)(Outputs + 8);
  for ( i = *(_QWORD *)Outputs; v8; --v8 )
  {
    v10 = *(_WORD *)(i + 12LL * (int)(v8 - 1));
    if ( (v10 & 0xFF00) != 0x100 )
      break;
    if ( (unsigned __int8)v10 < v7 )
      break;
  }
  v11 = 32LL * v8;
  if ( !is_mul_ok(v8, 0x20uLL) )
    v11 = -1LL;
  if ( !v11 )
    v11 = 1LL;
  v12 = HeapAlloc(WPF::g_processHeap, 0, v11);
  if ( v12 )
  {
    WPF::ProcessHeapImpl::Free(0LL);
    v13 = 0;
    v4 = v12;
    if ( v8 )
    {
      v14 = v12 + 7;
      do
      {
        *((_WORD *)v14 - 14) = *(_WORD *)(i + 12LL * (int)v13);
        *(v14 - 1) = *(_DWORD *)(i + 12LL * (int)v13 + 4);
        *v14 = *(_DWORD *)(i + 12LL * (int)v13 + 8);
        GetHlslNameAndSemantic(*(unsigned __int16 *)(i + 12LL * (int)v13), v14 - 5, v14 - 3);
        v13 = v15 + 1;
        v14 = (_DWORD *)(v16 + 32);
      }
      while ( v13 < v8 );
    }
    v21 = v8;
    v20 = v12;
    v17 = CShaderLinkingGraphBuilder::Initialize(ppLinker);
    v18 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x15Au);
  }
  else
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x14Du);
  }
  WPF::ProcessHeapImpl::Free(v4);
  return v18;
}
