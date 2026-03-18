/*
 * XREFs of ?_Reserve@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@IEAAX_K@Z @ 0x180167538
 * Callers:
 *     ?push_back@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAXAEBUD2D1_GRADIENT_STOP@@@Z @ 0x180072138 (-push_back@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAXAEBU.c)
 * Callees:
 *     ?_Reallocate@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@IEAAX_K@Z @ 0x180072020 (-_Reallocate@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@IEAAX_K.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall std::vector<D2D1_GRADIENT_STOP>::_Reserve(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[2];
  v3 = a1[1];
  result = (unsigned __int64)((unsigned __int128)((v2 - v3) * (__int128)0x6666666666666667LL) >> 64) >> 63;
  if ( !((v2 - v3) / 20) )
  {
    v5 = (v3 - *a1) / 20;
    if ( v5 == 0xCCCCCCCCCCCCCCCLL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v6 = v5 + 1;
    v7 = (unsigned __int128)((v2 - *a1) * (__int128)0x6666666666666667LL) >> 64;
    v8 = 0LL;
    v9 = ((unsigned __int64)v7 >> 63) + (v7 >> 3);
    if ( 0xCCCCCCCCCCCCCCCLL - (v9 >> 1) >= v9 )
      v8 = v9 + (v9 >> 1);
    if ( v8 >= v6 )
      v6 = v8;
    return std::vector<D2D1_GRADIENT_STOP>::_Reallocate((__int64)a1, v6);
  }
  return result;
}
