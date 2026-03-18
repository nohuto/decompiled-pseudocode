/*
 * XREFs of ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B8D5C
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
        unsigned int *a1,
        _OWORD *a2)
{
  __int64 v2; // rax
  signed int v3; // ebx
  void *v4; // rbp
  unsigned int v7; // edx
  unsigned __int64 v9; // rax
  unsigned int v10; // esi
  SIZE_T v11; // r8
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax

  v2 = a1[1];
  v3 = 0;
  v4 = 0LL;
  if ( *a1 == (_DWORD)v2 )
  {
    v9 = 2 * v2;
    v10 = -1;
    if ( v9 <= 0xFFFFFFFF )
      v10 = v9;
    v3 = v9 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v9 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x4Cu);
      goto LABEL_5;
    }
    if ( v10 <= 0x40 )
      v10 = 64;
    v3 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v10 <= 0x10 )
    {
      v3 = -2147024809;
    }
    else
    {
      v11 = 16LL * v10;
      if ( !v11 )
        v11 = 1LL;
      v4 = HeapAlloc(WPF::g_processHeap, 0, v11);
      if ( !v4 )
        v3 = -2147024882;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x54u);
      goto LABEL_5;
    }
    v12 = -1;
    v13 = 16LL * *a1;
    if ( v13 <= 0xFFFFFFFF )
      v12 = 16 * *a1;
    v3 = v13 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v13 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x56u);
      goto LABEL_5;
    }
    memcpy_0(v4, *((const void **)a1 + 2), v12);
    WPF::ProcessHeapImpl::Free(*((void **)a1 + 2));
    *((_QWORD *)a1 + 2) = v4;
    v4 = 0LL;
    a1[1] = v10;
  }
  *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * (*a1)++) = *a2;
  v7 = *a1;
  if ( a1[6] > *a1 )
    v7 = a1[6];
  a1[6] = v7;
LABEL_5:
  WPF::ProcessHeapImpl::Free(v4);
  return (unsigned int)v3;
}
