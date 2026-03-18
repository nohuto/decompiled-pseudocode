/*
 * XREFs of ?push_back@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAXAEBUD2D1_GRADIENT_STOP@@@Z @ 0x180072138
 * Callers:
 *     ?FlattenStops@CGradientBrush@@IEAAXXZ @ 0x18007182C (-FlattenStops@CGradientBrush@@IEAAXXZ.c)
 * Callees:
 *     ?_Reserve@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@IEAAX_K@Z @ 0x180167538 (-_Reserve@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@IEAAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<D2D1_GRADIENT_STOP>::push_back(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 result; // rax

  v4 = a1[1];
  if ( a2 < v4 && *a1 <= a2 )
  {
    result = (unsigned __int64)((unsigned __int128)((__int64)(a2 - *a1) * (__int128)0x6666666666666667LL) >> 64) >> 63;
    v6 = (__int64)(a2 - *a1) / 20;
    if ( v4 == a1[2] )
      result = std::vector<D2D1_GRADIENT_STOP>::_Reserve(a1);
    v7 = a1[1];
    if ( v7 )
    {
      v8 = *a1;
      *(_OWORD *)v7 = *(_OWORD *)(*a1 + 20 * v6);
      result = *(unsigned int *)(v8 + 20 * v6 + 16);
      *(_DWORD *)(v7 + 16) = result;
    }
  }
  else
  {
    if ( v4 == a1[2] )
      result = std::vector<D2D1_GRADIENT_STOP>::_Reserve(a1);
    v5 = a1[1];
    if ( v5 )
    {
      *(_OWORD *)v5 = *(_OWORD *)a2;
      result = *(unsigned int *)(a2 + 16);
      *(_DWORD *)(v5 + 16) = result;
    }
  }
  a1[1] += 20LL;
  return result;
}
