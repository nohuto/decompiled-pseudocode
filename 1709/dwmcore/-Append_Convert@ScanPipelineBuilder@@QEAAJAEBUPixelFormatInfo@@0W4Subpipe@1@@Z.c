/*
 * XREFs of ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x1801C6778
 * Callers:
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x1801C62BC (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x1801C6648 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 *     ?Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z @ 0x1801C6A04 (-Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z.c)
 *     ?GetNearestInterchangeFormat@@YA?AW4DXGI_FORMAT@@W41@@Z @ 0x1801C6C10 (-GetNearestInterchangeFormat@@YA-AW4DXGI_FORMAT@@W41@@Z.c)
 *     ?GetOp_AlphaDivide@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z @ 0x1801C6C34 (-GetOp_AlphaDivide@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z.c)
 *     ?GetOp_AlphaMultiply@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z @ 0x1801C6C78 (-GetOp_AlphaMultiply@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z.c)
 *     ?GetOp_IgnoreAlpha@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z @ 0x1801C6CBC (-GetOp_IgnoreAlpha@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall ScanPipelineBuilder::Append_Convert(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  enum DXGI_FORMAT *v7; // r8
  enum DXGI_FORMAT NearestInterchangeFormat; // ebp
  enum DXGI_FORMAT v9; // ecx
  __int64 v10; // r8
  enum DXGI_FORMAT v11; // r12d
  void (*v12)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  signed int v13; // eax
  void (*v14)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  signed int v15; // eax
  void (__fastcall *v16)(const struct PipelineParams *, const struct ScanOpParams *); // rdi
  void (__fastcall *v17)(const struct PipelineParams *, const struct ScanOpParams *); // rdx
  signed int v18; // eax
  signed int appended; // eax
  _QWORD *v20; // r8
  signed int v21; // eax
  void (*Op_IgnoreAlpha)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  _QWORD *v23; // r8
  signed int v24; // eax
  void (*Op_AlphaDivide)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  _QWORD *v26; // r8
  signed int v27; // eax
  void (*v28)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  _QWORD *v29; // r8
  signed int v30; // eax
  void (*Op_AlphaMultiply)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  _QWORD *v32; // r8
  signed int v33; // eax

  v6 = 0;
  if ( *(_DWORD *)a2 == *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)(a3 + 4) == 3 )
    {
      Op_IgnoreAlpha = GetOp_IgnoreAlpha((enum DXGI_FORMAT)*(_DWORD *)a3);
      if ( Op_IgnoreAlpha )
      {
        v24 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)Op_IgnoreAlpha, v23);
        v6 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0x204u);
          return v6;
        }
      }
    }
    else if ( *(_DWORD *)(a3 + 4) == 1 )
    {
      Op_AlphaDivide = GetOp_AlphaDivide((enum DXGI_FORMAT)*(_DWORD *)a3);
      if ( Op_AlphaDivide )
      {
        v27 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)Op_AlphaDivide, v26);
        v6 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v27, 0x20Du);
          return v6;
        }
      }
    }
  }
  else
  {
    NearestInterchangeFormat = GetNearestInterchangeFormat(*(enum DXGI_FORMAT *)a2);
    v11 = GetNearestInterchangeFormat(*v7);
    if ( *(_DWORD *)(v10 + 4) == 3 )
    {
      v12 = GetOp_IgnoreAlpha(v9);
      if ( v12 )
      {
        v13 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v12, (_QWORD *)v10);
        v6 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x1C3u);
          return v6;
        }
      }
    }
    else if ( *(_DWORD *)(v10 + 4) == 1 )
    {
      v14 = GetOp_AlphaDivide(v9);
      if ( v14 )
      {
        v15 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v14, (_QWORD *)v10);
        v6 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x1CCu);
          return v6;
        }
      }
    }
    v16 = Convert_32bppABGR_32bppARGB;
    if ( *(_DWORD *)a3 != v11 )
    {
      switch ( *(_DWORD *)a3 )
      {
        case 0xA:
          v17 = Convert_64bppABGRFloat_128bppABGR;
          break;
        case 0x18:
          v17 = Convert_32bppABGR2101010_64bppABGR;
          break;
        case 0x1C:
          v17 = Convert_32bppABGR_32bppARGB;
          break;
        case 0x41:
          v17 = Convert_8bppA_32bppARGB;
          break;
        default:
          v17 = Quantize_32bppARGB_32RGB;
          if ( *(_DWORD *)a3 != 88 )
            v17 = 0LL;
          break;
      }
      v18 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v17, (_QWORD *)v10);
      v6 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0x1DCu);
        return v6;
      }
    }
    appended = ScanPipelineBuilder::Append_Convert_BetweenInterchange(
                 a1,
                 (unsigned int)NearestInterchangeFormat,
                 (unsigned int)v11);
    v6 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, appended, 0x1E4u);
      return v6;
    }
    if ( *(_DWORD *)a2 != NearestInterchangeFormat
      && (*(_DWORD *)a2 != 88 || NearestInterchangeFormat != DXGI_FORMAT_B8G8R8A8_UNORM) )
    {
      if ( *(_DWORD *)a2 == 10 )
      {
        v16 = Convert_128bppABGR_64bppABGRFloat;
      }
      else if ( *(_DWORD *)a2 == 24 )
      {
        v16 = Convert_64bppABGR_32bppABGR2101010;
      }
      else if ( *(_DWORD *)a2 != 28 )
      {
        v16 = Quantize_32bppARGB_32RGB;
        if ( *(_DWORD *)a2 != 88 )
          v16 = 0LL;
      }
      v21 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v16, v20);
      v6 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0x1F6u);
        return v6;
      }
    }
  }
  if ( *(_DWORD *)(a2 + 4) == 3 )
  {
    v28 = GetOp_IgnoreAlpha((enum DXGI_FORMAT)*(_DWORD *)a2);
    if ( v28 )
    {
      v30 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v28, v29);
      v6 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v30, 0x21Bu);
    }
  }
  else if ( *(_DWORD *)(a2 + 4) == 1 )
  {
    Op_AlphaMultiply = GetOp_AlphaMultiply((enum DXGI_FORMAT)*(_DWORD *)a2);
    if ( Op_AlphaMultiply )
    {
      v33 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)Op_AlphaMultiply, v32);
      v6 = v33;
      if ( v33 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v33, 0x226u);
    }
  }
  return v6;
}
