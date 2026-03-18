/*
 * XREFs of ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x1801C62BC
 * Callers:
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x1801C5F50 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?ResetPipeline@CScanPipeline@@MEAAXXZ @ 0x1801C61B0 (-ResetPipeline@CScanPipeline@@MEAAXXZ.c)
 *     ?AllocateBuffers@CSPIntermediateBuffers@@QEAAJ_JI@Z @ 0x1801C61FC (-AllocateBuffers@CSPIntermediateBuffers@@QEAAJ_JI@Z.c)
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x1801C6648 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 *     ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x1801C6778 (-Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z.c)
 *     ?ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ @ 0x1801C6B5C (-ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ.c)
 */

__int64 __fastcall CScanPipeline::InitializeForFormatConversion(
        void **this,
        const struct PixelFormatInfo *a2,
        const struct PixelFormatInfo *a3,
        unsigned int a4)
{
  __int64 v8; // rdx
  signed int Buffers; // eax
  DWORD v10; // ebx
  int v11; // eax
  void (__fastcall *v12)(const struct PipelineParams *, const struct ScanOpParams *); // rdx
  signed int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-68h]
  _QWORD v16[2]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v17; // [rsp+40h] [rbp-48h]
  char v18; // [rsp+42h] [rbp-46h]
  int v19; // [rsp+44h] [rbp-44h]
  __m128i si128; // [rsp+48h] [rbp-40h]

  CScanPipeline::ResetPipeline((CScanPipeline *)this);
  WPF::ProcessHeapImpl::Free(this[80]);
  this[80] = 0LL;
  Buffers = CSPIntermediateBuffers::AllocateBuffers((CSPIntermediateBuffers *)(this + 80), v8, a4);
  v10 = Buffers;
  if ( Buffers < 0 )
  {
    v15 = 70;
    goto LABEL_22;
  }
  v19 = 0;
  v17 = 257;
  v18 = 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v16[0] = this;
  v16[1] = this + 80;
  Buffers = ScanPipelineBuilder::Append_Convert(v16, a2, a3);
  v10 = Buffers;
  if ( Buffers < 0 )
  {
    v15 = 85;
    goto LABEL_22;
  }
  if ( !*(_DWORD *)(v16[0] + 32LL) )
  {
    v11 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == 2 )
    {
      v12 = Copy_128;
    }
    else
    {
      if ( v11 > 9 )
      {
        if ( v11 <= 11 )
        {
          v12 = Copy_64;
          goto LABEL_14;
        }
        if ( v11 == 24 || v11 == 28 || (unsigned int)(v11 - 87) <= 1 )
        {
          v12 = Copy_32;
          goto LABEL_14;
        }
      }
      v12 = 0LL;
    }
LABEL_14:
    Buffers = ScanPipelineBuilder::AddOp_Binary(v16, v12);
    v10 = Buffers;
    if ( Buffers < 0 )
    {
      v15 = 97;
LABEL_22:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Buffers, v15);
      return v10;
    }
  }
  v13 = ScanPipelineBuilder::ConvertDestBufferReferences((ScanPipelineBuilder *)v16);
  v10 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x95u);
  if ( (v10 & 0x80000000) != 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x64u);
  return v10;
}
