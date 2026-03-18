/*
 * XREFs of ?Push@?$CWatermarkStack@_N$0EA@$01$01@@QEAAJAEB_N@Z @ 0x1800C1EC0
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009D050 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<bool,64,2,2>::Push(const void **a1, _BYTE *a2)
{
  __int64 v2; // rax
  int v3; // ebx
  void *v4; // rbp
  unsigned int v7; // ecx
  unsigned int v9; // esi

  v2 = *((unsigned int *)a1 + 1);
  v3 = 0;
  v4 = 0LL;
  if ( *(_DWORD *)a1 != (_DWORD)v2 )
    goto LABEL_2;
  v9 = 2 * v2;
  if ( (unsigned __int64)(2 * v2) > 0xFFFFFFFF )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    return (unsigned int)v3;
  }
  if ( v9 <= 0x40 )
    v9 = 64;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v9 <= 1 )
  {
    v3 = -2147024809;
  }
  else
  {
    v4 = HeapAlloc(WPF::g_processHeap, 0, v9);
    if ( !v4 )
      v3 = -2147024882;
  }
  if ( v3 >= 0 )
  {
    v3 = 0;
    memcpy_0(v4, a1[2], *(unsigned int *)a1);
    WPF::ProcessHeapImpl::Free((void *)a1[2]);
    a1[2] = v4;
    v4 = 0LL;
    *((_DWORD *)a1 + 1) = v9;
LABEL_2:
    *((_BYTE *)a1[2] + (unsigned int)(*(_DWORD *)a1)++) = *a2;
    v7 = *(_DWORD *)a1;
    if ( *((_DWORD *)a1 + 6) > *(_DWORD *)a1 )
      v7 = *((_DWORD *)a1 + 6);
    *((_DWORD *)a1 + 6) = v7;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x54u);
LABEL_5:
  if ( v4 )
    HeapFree(WPF::g_processHeap, 0, v4);
  return (unsigned int)v3;
}
