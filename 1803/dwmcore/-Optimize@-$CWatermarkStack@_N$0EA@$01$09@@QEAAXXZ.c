/*
 * XREFs of ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x1800C2F74
 * Callers:
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006E2EC (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CWatermarkStack<bool,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  int v3; // edi
  __int64 v4; // rbp
  unsigned int v5; // ecx
  LPVOID v6; // rsi
  int v7; // r9d

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
        if ( (_DWORD)v4 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v4 > 1 )
        {
          v6 = HeapAlloc(WPF::g_processHeap, 0, (unsigned int)v4);
          if ( v6 )
          {
            operator delete(*(void **)(a1 + 16));
            *(_QWORD *)(a1 + 16) = v6;
            *(_DWORD *)(a1 + 4) = v4;
            goto LABEL_18;
          }
          v7 = -2147024882;
        }
        else
        {
          v7 = -2147024809;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x100u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
    }
LABEL_18:
    *(_DWORD *)(a1 + 24) = 0;
    goto LABEL_3;
  }
  v3 = v1 + 1;
LABEL_3:
  *(_DWORD *)(a1 + 8) = v3;
}
