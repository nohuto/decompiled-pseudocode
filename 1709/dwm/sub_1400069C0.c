/*
 * XREFs of sub_1400069C0 @ 0x1400069C0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140002D1C (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x140003014 (-_Xbad_alloc@std@@YAXXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall sub_1400069C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  size_t v4; // rcx
  void *v5; // rax

  v3 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 104) = v3;
  v4 = v3 + 1;
  v5 = 0LL;
  if ( v4 )
  {
    v5 = operator new(v4);
    if ( !v5 )
      std::_Xbad_alloc();
  }
  *(_QWORD *)(a2 + 120) = v5;
  return &loc_140002F50;
}
