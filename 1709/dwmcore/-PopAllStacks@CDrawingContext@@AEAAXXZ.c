/*
 * XREFs of ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800405DC
 * Callers:
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x18004083C (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 * Callees:
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x180031C44 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18003B61C (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18009EDDC (-Clear@CLightStack@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@M$0EA@$01$09@@QEAAXXZ @ 0x1800B53D8 (-Optimize@-$CWatermarkStack@M$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x1800B9098 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 */

void __fastcall CDrawingContext::PopAllStacks(CDrawingContext *this)
{
  int v2; // ebp
  int v3; // eax
  __int64 v4; // r14
  __int64 v5; // rdi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rsi
  unsigned int v14; // ecx
  unsigned __int64 v15; // rax
  SIZE_T v16; // r8
  LPVOID v17; // rdi
  int v18; // r9d
  SIZE_T v19; // r8
  LPVOID v20; // rsi
  int v21; // r9d
  unsigned int v22; // eax
  __int64 v23; // rsi
  unsigned int v24; // edx
  unsigned __int64 v25; // rax
  SIZE_T v26; // r8
  LPVOID v27; // rdi
  int v28; // r9d
  unsigned int v29; // eax
  unsigned int v30; // edx
  unsigned __int64 v31; // rax
  SIZE_T v32; // r8
  LPVOID v33; // rdi

  *((_DWORD *)this + 112) = 0;
  v2 = -2147024882;
  v3 = *((_DWORD *)this + 114);
  v4 = 64LL;
  if ( v3 != 10 )
  {
    *((_DWORD *)this + 114) = v3 + 1;
    goto LABEL_3;
  }
  v12 = *((_DWORD *)this + 118);
  v13 = 64LL;
  v14 = -1;
  if ( v12 > 0x40 )
    v13 = v12;
  v15 = 3 * v13;
  if ( (unsigned __int64)(3 * v13) <= 0xFFFFFFFF )
    v14 = 3 * v13;
  if ( v15 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
  else if ( v14 <= *((_DWORD *)this + 113) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v13 <= 0x10 )
    {
      v18 = -2147024809;
    }
    else
    {
      v16 = 16LL * (unsigned int)v13;
      if ( !v16 )
        v16 = 1LL;
      v17 = HeapAlloc(WPF::g_processHeap, 0, v16);
      if ( v17 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 58));
        *((_QWORD *)this + 58) = v17;
        *((_DWORD *)this + 113) = v13;
        goto LABEL_24;
      }
      v18 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x100u);
  }
LABEL_24:
  *((_DWORD *)this + 118) = 0;
  *((_DWORD *)this + 114) = 0;
LABEL_3:
  *((_DWORD *)this + 120) = 0;
  v5 = 8LL;
  v6 = *((_DWORD *)this + 122);
  if ( v6 == 8 )
  {
    v9 = *((_DWORD *)this + 126);
    v10 = -1;
    if ( v9 > 8 )
      v5 = v9;
    v11 = 3 * v5;
    if ( (unsigned __int64)(3 * v5) <= 0xFFFFFFFF )
      v10 = 3 * v5;
    if ( v11 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
    }
    else if ( v10 <= *((_DWORD *)this + 121) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v5 <= 0x44 )
      {
        v21 = -2147024809;
      }
      else
      {
        v19 = 68LL * (unsigned int)v5;
        if ( !v19 )
          v19 = 1LL;
        v20 = HeapAlloc(WPF::g_processHeap, 0, v19);
        if ( v20 )
        {
          WPF::ProcessHeapImpl::Free(*((void **)this + 62));
          *((_QWORD *)this + 62) = v20;
          *((_DWORD *)this + 121) = v5;
          goto LABEL_17;
        }
        v21 = -2147024882;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x100u);
    }
LABEL_17:
    *((_DWORD *)this + 126) = 0;
    *((_DWORD *)this + 122) = 0;
    goto LABEL_5;
  }
  *((_DWORD *)this + 122) = v6 + 1;
LABEL_5:
  *((_DWORD *)this + 128) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize();
  while ( *((_DWORD *)this + 142) )
    CDrawingContext::PopLayerInternal((__int64)this);
  CLightStack::Clear((CDrawingContext *)((char *)this + 672));
  *((_DWORD *)this + 234) = 0;
  *((_DWORD *)this + 244) = 0;
  v7 = *((_DWORD *)this + 246);
  if ( v7 != 10 )
  {
    *((_DWORD *)this + 246) = v7 + 1;
    goto LABEL_9;
  }
  v22 = *((_DWORD *)this + 250);
  v23 = 64LL;
  v24 = -1;
  if ( v22 > 0x40 )
    v23 = v22;
  v25 = 3 * v23;
  if ( (unsigned __int64)(3 * v23) <= 0xFFFFFFFF )
    v24 = 3 * v23;
  if ( v25 <= 0xFFFFFFFF )
  {
    if ( v24 <= *((_DWORD *)this + 245) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v23 <= 0x1C )
      {
        v28 = -2147024809;
      }
      else
      {
        v26 = 28LL * (unsigned int)v23;
        if ( !v26 )
          v26 = 1LL;
        v27 = HeapAlloc(WPF::g_processHeap, 0, v26);
        if ( v27 )
        {
          WPF::ProcessHeapImpl::Free(*((void **)this + 124));
          *((_QWORD *)this + 124) = v27;
          *((_DWORD *)this + 245) = v23;
          goto LABEL_59;
        }
        v28 = -2147024882;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x100u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
LABEL_59:
  *((_DWORD *)this + 250) = 0;
  *((_DWORD *)this + 246) = 0;
LABEL_9:
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 1008));
  *((_DWORD *)this + 776) = 0;
  CWatermarkStack<float,64,2,10>::Optimize();
  *((_DWORD *)this + 826) = 0;
  v8 = *((_DWORD *)this + 828);
  if ( v8 != 10 )
  {
    *((_DWORD *)this + 828) = v8 + 1;
    return;
  }
  v29 = *((_DWORD *)this + 832);
  v30 = -1;
  if ( v29 > 0x40 )
    v4 = v29;
  v31 = 3 * v4;
  if ( (unsigned __int64)(3 * v4) <= 0xFFFFFFFF )
    v30 = 3 * v4;
  if ( v31 <= 0xFFFFFFFF )
  {
    if ( v30 <= *((_DWORD *)this + 827) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v4 <= 0x10 )
      {
        v2 = -2147024809;
      }
      else
      {
        v32 = 16LL * (unsigned int)v4;
        if ( !v32 )
          v32 = 1LL;
        v33 = HeapAlloc(WPF::g_processHeap, 0, v32);
        if ( v33 )
        {
          WPF::ProcessHeapImpl::Free(*((void **)this + 415));
          *((_QWORD *)this + 415) = v33;
          *((_DWORD *)this + 827) = v4;
          goto LABEL_74;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x100u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
LABEL_74:
  *((_DWORD *)this + 832) = 0;
  *((_DWORD *)this + 828) = 0;
}
