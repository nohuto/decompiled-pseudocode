/*
 * XREFs of ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800A96E0
 * Callers:
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x1800A9948 (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 * Callees:
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18000D164 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x1800932E0 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@M$0EA@$01$09@@QEAAXXZ @ 0x1800BF8E0 (-Optimize@-$CWatermarkStack@M$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x1800C2290 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x1800C5360 (-Clear@CLightStack@@QEAAXXZ.c)
 */

void __fastcall CDrawingContext::PopAllStacks(CDrawingContext *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  int v5; // eax
  int v6; // r14d
  __int64 v7; // rbp
  __int64 v8; // r9
  __int64 v9; // rdi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rdi
  unsigned int v18; // eax
  SIZE_T v19; // r8
  LPVOID v20; // rsi
  int v21; // r9d
  SIZE_T v22; // r8
  LPVOID v23; // rsi
  int v24; // r9d
  SIZE_T v25; // r8
  LPVOID v26; // rsi
  int v27; // r9d
  SIZE_T v28; // r8
  LPVOID v29; // rdi

  *((_DWORD *)this + 110) = 0;
  v4 = 0xFFFFFFFFLL;
  v5 = *((_DWORD *)this + 112);
  v6 = -2147024882;
  v7 = 64LL;
  v8 = 1LL;
  if ( v5 != 10 )
  {
    *((_DWORD *)this + 112) = v5 + 1;
    goto LABEL_3;
  }
  v14 = *((_DWORD *)this + 116);
  v15 = 64LL;
  if ( v14 > 0x40 )
    v15 = v14;
  a3 = (unsigned int)v15;
  if ( (unsigned __int64)(3 * v15) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    goto LABEL_40;
  }
  if ( (unsigned int)(3 * v15) <= *((_DWORD *)this + 111) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v15 <= 0x10 )
    {
      v21 = -2147024809;
      goto LABEL_39;
    }
    v19 = 16LL * (unsigned int)v15;
    if ( !v19 )
      v19 = 1LL;
    v20 = HeapAlloc(WPF::g_processHeap, 0, v19);
    if ( !v20 )
    {
      v21 = -2147024882;
LABEL_39:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xF3u);
      goto LABEL_40;
    }
    WPF::ProcessHeapImpl::Free(*((void **)this + 57));
    *((_QWORD *)this + 57) = v20;
    *((_DWORD *)this + 111) = v15;
LABEL_40:
    v4 = 0xFFFFFFFFLL;
    v8 = 1LL;
  }
  *((_DWORD *)this + 116) = 0;
  *((_DWORD *)this + 112) = 0;
LABEL_3:
  *((_DWORD *)this + 118) = 0;
  v9 = 8LL;
  v10 = *((_DWORD *)this + 120);
  if ( v10 == 8 )
  {
    v13 = *((_DWORD *)this + 124);
    if ( v13 > 8 )
      v9 = v13;
    if ( (unsigned __int64)(3 * v9) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v9) <= *((_DWORD *)this + 119) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v9 <= 0x44 )
      {
        v24 = -2147024809;
      }
      else
      {
        v22 = 68LL * (unsigned int)v9;
        if ( !v22 )
          v22 = 1LL;
        v23 = HeapAlloc(WPF::g_processHeap, 0, v22);
        if ( v23 )
        {
          WPF::ProcessHeapImpl::Free(*((void **)this + 61));
          *((_QWORD *)this + 61) = v23;
          *((_DWORD *)this + 119) = v9;
          goto LABEL_15;
        }
        v24 = -2147024882;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xF3u);
    }
LABEL_15:
    *((_DWORD *)this + 124) = 0;
    *((_DWORD *)this + 120) = 0;
    goto LABEL_5;
  }
  *((_DWORD *)this + 120) = v10 + 1;
LABEL_5:
  *((_DWORD *)this + 126) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize((char *)this + 504, v4, a3, v8);
  while ( *((_DWORD *)this + 140) )
    CDrawingContext::PopLayerInternal((__int64)this);
  CLightStack::Clear((CDrawingContext *)((char *)this + 664));
  *((_DWORD *)this + 210) = 0;
  *((_DWORD *)this + 220) = 0;
  v11 = *((_DWORD *)this + 222);
  if ( v11 != 10 )
  {
    *((_DWORD *)this + 222) = v11 + 1;
    goto LABEL_9;
  }
  v16 = *((_DWORD *)this + 226);
  v17 = 64LL;
  if ( v16 > 0x40 )
    v17 = v16;
  if ( (unsigned __int64)(3 * v17) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v17) <= *((_DWORD *)this + 221) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v17 <= 0x1C )
    {
      v27 = -2147024809;
    }
    else
    {
      v25 = 28LL * (unsigned int)v17;
      if ( !v25 )
        v25 = 1LL;
      v26 = HeapAlloc(WPF::g_processHeap, 0, v25);
      if ( v26 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 112));
        *((_QWORD *)this + 112) = v26;
        *((_DWORD *)this + 221) = v17;
        goto LABEL_25;
      }
      v27 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0xF3u);
  }
LABEL_25:
  *((_DWORD *)this + 226) = 0;
  *((_DWORD *)this + 222) = 0;
LABEL_9:
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 912));
  *((_DWORD *)this + 752) = 0;
  CWatermarkStack<float,64,2,10>::Optimize();
  *((_DWORD *)this + 802) = 0;
  v12 = *((_DWORD *)this + 804);
  if ( v12 != 10 )
  {
    *((_DWORD *)this + 804) = v12 + 1;
    return;
  }
  v18 = *((_DWORD *)this + 808);
  if ( v18 > 0x40 )
    v7 = v18;
  if ( (unsigned __int64)(3 * v7) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v7) <= *((_DWORD *)this + 803) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v7 <= 0x10 )
    {
      v6 = -2147024809;
    }
    else
    {
      v28 = 16LL * (unsigned int)v7;
      if ( !v28 )
        v28 = 1LL;
      v29 = HeapAlloc(WPF::g_processHeap, 0, v28);
      if ( v29 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 403));
        *((_QWORD *)this + 403) = v29;
        *((_DWORD *)this + 803) = v7;
        goto LABEL_30;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xF3u);
  }
LABEL_30:
  *((_DWORD *)this + 808) = 0;
  *((_DWORD *)this + 804) = 0;
}
