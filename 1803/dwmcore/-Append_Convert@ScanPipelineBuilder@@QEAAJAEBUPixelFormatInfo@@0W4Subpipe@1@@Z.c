/*
 * XREFs of ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x180202EE0
 * Callers:
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x180202A2C (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x180202DB0 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 *     ?Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z @ 0x18020316C (-Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z.c)
 *     ?GetNearestInterchangeFormat@@YA?AW4DXGI_FORMAT@@W41@@Z @ 0x180203378 (-GetNearestInterchangeFormat@@YA-AW4DXGI_FORMAT@@W41@@Z.c)
 *     ?GetOp_AlphaDivide@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z @ 0x18020339C (-GetOp_AlphaDivide@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z.c)
 *     ?GetOp_AlphaMultiply@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z @ 0x1802033E0 (-GetOp_AlphaMultiply@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z.c)
 *     ?GetOp_IgnoreAlpha@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z @ 0x180203424 (-GetOp_IgnoreAlpha@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall ScanPipelineBuilder::Append_Convert(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned int v7; // ebx
  enum DXGI_FORMAT *v8; // r8
  enum DXGI_FORMAT NearestInterchangeFormat; // ebp
  enum DXGI_FORMAT v10; // ecx
  _QWORD *v11; // r8
  int v12; // r9d
  enum DXGI_FORMAT v13; // r12d
  void (*v14)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  int v15; // eax
  void (*v16)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  int v17; // eax
  void (__fastcall *v18)(const struct PipelineParams *, const struct ScanOpParams *); // rdi
  void (__fastcall *v19)(const struct PipelineParams *, const struct ScanOpParams *); // rdx
  int v20; // eax
  int appended; // eax
  _QWORD *v22; // r8
  int v23; // eax
  void (*Op_IgnoreAlpha)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  _QWORD *v25; // r8
  int v26; // eax
  void (*Op_AlphaDivide)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  _QWORD *v28; // r8
  int v29; // eax
  void (*v30)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  _QWORD *v31; // r8
  int v32; // eax
  void (*Op_AlphaMultiply)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  _QWORD *v34; // r8
  int v35; // eax

  v3 = *(_DWORD *)(a3 + 4);
  v7 = 0;
  if ( *(_DWORD *)a2 == *(_DWORD *)a3 )
  {
    if ( v3 == 3 )
    {
      Op_IgnoreAlpha = GetOp_IgnoreAlpha((enum DXGI_FORMAT)*(_DWORD *)a3);
      if ( Op_IgnoreAlpha )
      {
        v26 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)Op_IgnoreAlpha, v25);
        v7 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x204u);
          return v7;
        }
      }
    }
    else if ( v3 == 1 )
    {
      Op_AlphaDivide = GetOp_AlphaDivide((enum DXGI_FORMAT)*(_DWORD *)a3);
      if ( Op_AlphaDivide )
      {
        v29 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)Op_AlphaDivide, v28);
        v7 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x20Du);
          return v7;
        }
      }
    }
  }
  else
  {
    NearestInterchangeFormat = GetNearestInterchangeFormat(*(enum DXGI_FORMAT *)a2);
    v13 = GetNearestInterchangeFormat(*v8);
    if ( v12 == 3 )
    {
      v14 = GetOp_IgnoreAlpha(v10);
      if ( v14 )
      {
        v15 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v14, v11);
        v7 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x1C3u);
          return v7;
        }
      }
    }
    else if ( v12 == 1 )
    {
      v16 = GetOp_AlphaDivide(v10);
      if ( v16 )
      {
        v17 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v16, v11);
        v7 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x1CCu);
          return v7;
        }
      }
    }
    v18 = Convert_32bppABGR_32bppARGB;
    if ( *(_DWORD *)a3 != v13 )
    {
      switch ( *(_DWORD *)a3 )
      {
        case 0xA:
          v19 = Convert_64bppABGRFloat_128bppABGR;
          break;
        case 0x18:
          v19 = Convert_32bppABGR2101010_64bppABGR;
          break;
        case 0x1C:
          v19 = Convert_32bppABGR_32bppARGB;
          break;
        case 0x41:
          v19 = Convert_8bppA_32bppARGB;
          break;
        default:
          v19 = Quantize_32bppARGB_32RGB;
          if ( *(_DWORD *)a3 != 88 )
            v19 = 0LL;
          break;
      }
      v20 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v19, v11);
      v7 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x1DCu);
        return v7;
      }
    }
    appended = ScanPipelineBuilder::Append_Convert_BetweenInterchange(
                 a1,
                 (unsigned int)NearestInterchangeFormat,
                 (unsigned int)v13);
    v7 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x1E4u);
      return v7;
    }
    if ( *(_DWORD *)a2 != NearestInterchangeFormat
      && (*(_DWORD *)a2 != 88 || NearestInterchangeFormat != DXGI_FORMAT_B8G8R8A8_UNORM) )
    {
      if ( *(_DWORD *)a2 == 10 )
      {
        v18 = Convert_128bppABGR_64bppABGRFloat;
      }
      else if ( *(_DWORD *)a2 == 24 )
      {
        v18 = Convert_64bppABGR_32bppABGR2101010;
      }
      else if ( *(_DWORD *)a2 != 28 )
      {
        v18 = Quantize_32bppARGB_32RGB;
        if ( *(_DWORD *)a2 != 88 )
          v18 = 0LL;
      }
      v23 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v18, v22);
      v7 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x1F6u);
        return v7;
      }
    }
  }
  if ( *(_DWORD *)(a2 + 4) == 3 )
  {
    v30 = GetOp_IgnoreAlpha((enum DXGI_FORMAT)*(_DWORD *)a2);
    if ( v30 )
    {
      v32 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)v30, v31);
      v7 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x21Bu);
    }
  }
  else if ( *(_DWORD *)(a2 + 4) == 1 )
  {
    Op_AlphaMultiply = GetOp_AlphaMultiply((enum DXGI_FORMAT)*(_DWORD *)a2);
    if ( Op_AlphaMultiply )
    {
      v35 = ScanPipelineBuilder::AddOp_Binary(a1, (__int64)Op_AlphaMultiply, v34);
      v7 = v35;
      if ( v35 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x226u);
    }
  }
  return v7;
}
