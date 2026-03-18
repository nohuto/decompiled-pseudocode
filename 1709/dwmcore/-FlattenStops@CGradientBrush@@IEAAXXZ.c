/*
 * XREFs of ?FlattenStops@CGradientBrush@@IEAAXXZ @ 0x18007182C
 * Callers:
 *     ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x18007148C (-ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLOR.c)
 * Callees:
 *     ?reserve@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z @ 0x1800720E8 (-reserve@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z.c)
 *     ?push_back@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAXAEBUD2D1_GRADIENT_STOP@@@Z @ 0x180072138 (-push_back@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAXAEBU.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall CGradientBrush::FlattenStops(CGradientBrush *this)
{
  char *v1; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // xmm0_4
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+24h] [rbp-24h]

  v1 = (char *)this + 136;
  *((_QWORD *)this + 18) = *((_QWORD *)this + 17);
  std::vector<D2D1_GRADIENT_STOP>::reserve(
    (char *)this + 136,
    (__int64)(*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 3);
  v3 = *((_QWORD *)this + 14);
  v4 = *((_QWORD *)this + 15);
  while ( v3 != v4 )
  {
    v5 = *(_DWORD *)(*(_QWORD *)v3 + 56LL);
    v7 = *(_OWORD *)(*(_QWORD *)v3 + 60LL);
    v6 = v5;
    std::vector<D2D1_GRADIENT_STOP>::push_back(v1, &v6);
    v3 += 8LL;
  }
}
