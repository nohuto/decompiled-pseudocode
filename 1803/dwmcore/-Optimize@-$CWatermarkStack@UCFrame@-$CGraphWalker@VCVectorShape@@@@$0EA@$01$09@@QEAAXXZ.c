/*
 * XREFs of ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAXXZ @ 0x180210658
 * Callers:
 *     ?EndWalk@?$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z @ 0x1802103C8 (-EndWalk@-$CGraphWalker@VCVectorShape@@@@QEAAXPEAVCVectorShape@@@Z.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x180212C9C (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CWatermarkStack<CGraphWalker<CVectorShape>::CFrame,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rsi
  unsigned int v4; // ecx
  int v5; // edi
  SIZE_T v6; // r8
  LPVOID v7; // rbp
  int v8; // r9d

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 != 10 )
  {
    v5 = v1 + 1;
    goto LABEL_20;
  }
  v3 = 64LL;
  if ( *(_DWORD *)(a1 + 24) > 0x40u )
    v3 = *(unsigned int *)(a1 + 24);
  v4 = -1;
  if ( (unsigned __int64)(3 * v3) <= 0xFFFFFFFF )
    v4 = 3 * v3;
  v5 = 0;
  if ( (unsigned __int64)(3 * v3) <= 0xFFFFFFFF )
  {
    if ( v4 <= *(_DWORD *)(a1 + 4) )
    {
      if ( (_DWORD)v3 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v3 > 0x10 )
      {
        v6 = 16LL * (unsigned int)v3;
        if ( !v6 )
          v6 = 1LL;
        v7 = HeapAlloc(WPF::g_processHeap, 0, v6);
        if ( v7 )
        {
          operator delete(*(void **)(a1 + 16));
          *(_QWORD *)(a1 + 16) = v7;
          *(_DWORD *)(a1 + 4) = v3;
          goto LABEL_18;
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
LABEL_18:
  *(_DWORD *)(a1 + 24) = 0;
LABEL_20:
  *(_DWORD *)(a1 + 8) = v5;
}
