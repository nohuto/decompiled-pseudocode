/*
 * XREFs of ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006E2EC
 * Callers:
 *     ??1CDrawingContext@@EEAA@XZ @ 0x18006E594 (--1CDrawingContext@@EEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18006313C (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18006BB20 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Optimize@?$CWatermarkStack@M$0EA@$01$09@@QEAAXXZ @ 0x1800BE308 (-Optimize@-$CWatermarkStack@M$0EA@$01$09@@QEAAXXZ.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x1800C2320 (-Clear@CLightStack@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x1800C2F74 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 */

void __fastcall CDrawingContext::PopAllStacks(CDrawingContext *this)
{
  int v1; // edi
  int v3; // eax
  int v4; // r14d
  __int64 v5; // r15
  int v6; // eax
  __int64 v7; // rsi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rbp
  unsigned int v18; // ecx
  unsigned __int64 v19; // rax
  SIZE_T v20; // r8
  LPVOID v21; // rsi
  int v22; // r9d
  SIZE_T v23; // r8
  LPVOID v24; // rbp
  int v25; // r9d
  unsigned int v26; // eax
  __int64 v27; // rbp
  unsigned int v28; // edx
  unsigned __int64 v29; // rax
  SIZE_T v30; // r8
  LPVOID v31; // rsi
  int v32; // r9d
  unsigned int v33; // eax
  unsigned int v34; // edx
  unsigned __int64 v35; // rax
  SIZE_T v36; // r8
  LPVOID v37; // rsi

  v1 = 0;
  *((_DWORD *)this + 112) = 0;
  v3 = *((_DWORD *)this + 114);
  v4 = -2147024882;
  v5 = 64LL;
  if ( v3 != 10 )
  {
    v6 = v3 + 1;
    goto LABEL_3;
  }
  v16 = *((_DWORD *)this + 118);
  v17 = 64LL;
  v18 = -1;
  if ( v16 > 0x40 )
    v17 = v16;
  v19 = 3 * v17;
  if ( (unsigned __int64)(3 * v17) <= 0xFFFFFFFF )
    v18 = 3 * v17;
  if ( v19 <= 0xFFFFFFFF )
  {
    if ( v18 <= *((_DWORD *)this + 113) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v17 <= 0x10 )
      {
        v22 = -2147024809;
      }
      else
      {
        v20 = 16LL * (unsigned int)v17;
        if ( !v20 )
          v20 = 1LL;
        v21 = HeapAlloc(WPF::g_processHeap, 0, v20);
        if ( v21 )
        {
          operator delete(*((void **)this + 58));
          *((_QWORD *)this + 58) = v21;
          *((_DWORD *)this + 113) = v17;
          goto LABEL_34;
        }
        v22 = -2147024882;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x100u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
LABEL_34:
  *((_DWORD *)this + 118) = 0;
  v6 = 0;
LABEL_3:
  *((_DWORD *)this + 114) = v6;
  v7 = 8LL;
  *((_DWORD *)this + 120) = 0;
  v8 = *((_DWORD *)this + 122);
  if ( v8 == 8 )
  {
    v13 = *((_DWORD *)this + 126);
    v14 = -1;
    if ( v13 > 8 )
      v7 = v13;
    v15 = 3 * v7;
    if ( (unsigned __int64)(3 * v7) <= 0xFFFFFFFF )
      v14 = 3 * v7;
    if ( v15 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
    }
    else if ( v14 <= *((_DWORD *)this + 121) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v7 <= 0x44 )
      {
        v25 = -2147024809;
      }
      else
      {
        v23 = 68LL * (unsigned int)v7;
        if ( !v23 )
          v23 = 1LL;
        v24 = HeapAlloc(WPF::g_processHeap, 0, v23);
        if ( v24 )
        {
          operator delete(*((void **)this + 62));
          *((_QWORD *)this + 62) = v24;
          *((_DWORD *)this + 121) = v7;
          goto LABEL_18;
        }
        v25 = -2147024882;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x100u);
    }
LABEL_18:
    *((_DWORD *)this + 126) = 0;
    v9 = 0;
    goto LABEL_5;
  }
  v9 = v8 + 1;
LABEL_5:
  *((_DWORD *)this + 122) = v9;
  *((_DWORD *)this + 128) = 0;
  CWatermarkStack<bool,64,2,10>::Optimize();
  while ( *((_DWORD *)this + 142) )
    CDrawingContext::PopLayerInternal((__int64)this);
  CLightStack::Clear((CDrawingContext *)((char *)this + 672));
  *((_DWORD *)this + 234) = 0;
  *((_DWORD *)this + 244) = 0;
  v10 = *((_DWORD *)this + 246);
  if ( v10 != 10 )
  {
    v11 = v10 + 1;
    goto LABEL_9;
  }
  v26 = *((_DWORD *)this + 250);
  v27 = 64LL;
  v28 = -1;
  if ( v26 > 0x40 )
    v27 = v26;
  v29 = 3 * v27;
  if ( (unsigned __int64)(3 * v27) <= 0xFFFFFFFF )
    v28 = 3 * v27;
  if ( v29 <= 0xFFFFFFFF )
  {
    if ( v28 <= *((_DWORD *)this + 245) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v27 <= 0x1C )
      {
        v32 = -2147024809;
      }
      else
      {
        v30 = 28LL * (unsigned int)v27;
        if ( !v30 )
          v30 = 1LL;
        v31 = HeapAlloc(WPF::g_processHeap, 0, v30);
        if ( v31 )
        {
          operator delete(*((void **)this + 124));
          *((_QWORD *)this + 124) = v31;
          *((_DWORD *)this + 245) = v27;
          goto LABEL_60;
        }
        v32 = -2147024882;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x100u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
  }
LABEL_60:
  *((_DWORD *)this + 250) = 0;
  v11 = 0;
LABEL_9:
  *((_DWORD *)this + 246) = v11;
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 1008));
  *((_DWORD *)this + 776) = 0;
  CWatermarkStack<float,64,2,10>::Optimize();
  *((_DWORD *)this + 826) = 0;
  v12 = *((_DWORD *)this + 828);
  if ( v12 == 10 )
  {
    v33 = *((_DWORD *)this + 832);
    v34 = -1;
    if ( v33 > 0x40 )
      v5 = v33;
    v35 = 3 * v5;
    if ( (unsigned __int64)(3 * v5) <= 0xFFFFFFFF )
      v34 = 3 * v5;
    if ( v35 <= 0xFFFFFFFF )
    {
      if ( v34 <= *((_DWORD *)this + 827) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v5 <= 0x10 )
        {
          v4 = -2147024809;
        }
        else
        {
          v36 = 16LL * (unsigned int)v5;
          if ( !v36 )
            v36 = 1LL;
          v37 = HeapAlloc(WPF::g_processHeap, 0, v36);
          if ( v37 )
          {
            operator delete(*((void **)this + 415));
            *((_QWORD *)this + 415) = v37;
            *((_DWORD *)this + 827) = v5;
            goto LABEL_75;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x100u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35 > 0xFFFFFFFF ? 0x80070216 : 0, 0xEFu);
    }
LABEL_75:
    *((_DWORD *)this + 832) = 0;
    goto LABEL_11;
  }
  v1 = v12 + 1;
LABEL_11:
  *((_DWORD *)this + 828) = v1;
}
