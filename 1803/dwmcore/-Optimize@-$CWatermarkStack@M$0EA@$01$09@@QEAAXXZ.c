/*
 * XREFs of ?Optimize@?$CWatermarkStack@M$0EA@$01$09@@QEAAXXZ @ 0x1800BE308
 * Callers:
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006E2EC (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CWatermarkStack<float,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  int v3; // edi
  __int64 v4; // rsi
  unsigned int v5; // ecx
  SIZE_T v6; // r8
  LPVOID v7; // rbp
  int v8; // r9d

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 10 )
  {
    v4 = 64LL;
    if ( *(_DWORD *)(a1 + 24) > 0x40u )
      v4 = *(unsigned int *)(a1 + 24);
    v5 = -1;
    if ( (unsigned __int64)(3 * v4) <= 0xFFFFFFFF )
      v5 = 3 * v4;
    v3 = 0;
    if ( (unsigned __int64)(3 * v4) <= 0xFFFFFFFF )
    {
      if ( v5 <= *(_DWORD *)(a1 + 4) )
      {
        if ( (_DWORD)v4 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v4 > 4 )
        {
          v6 = 4LL * (unsigned int)v4;
          if ( !v6 )
            v6 = 1LL;
          v7 = HeapAlloc(WPF::g_processHeap, 0, v6);
          if ( v7 )
          {
            operator delete(*(void **)(a1 + 16));
            *(_QWORD *)(a1 + 16) = v7;
            *(_DWORD *)(a1 + 4) = v4;
            goto LABEL_20;
          }
          v8 = -2147024882;
        }
        else
        {
          v8 = -2147024809;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x100u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
    }
LABEL_20:
    *(_DWORD *)(a1 + 24) = 0;
    goto LABEL_3;
  }
  v3 = v1 + 1;
LABEL_3:
  *(_DWORD *)(a1 + 8) = v3;
}
