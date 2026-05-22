/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAULegacyInputInfo@@PEAU1@V?$allocator@ULegacyInputInfo@@@std@@@std@@YAPEAULegacyInputInfo@@PEAU1@00AEAV?$allocator@ULegacyInputInfo@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18005ED38
 * Callers:
 *     ??$emplace_back@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAAAEAULegacyInputInfo@@AEAU2@@Z @ 0x18005E398 (--$emplace_back@AEAULegacyInputInfo@@@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInputInfo@@.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::_Uninitialized_move_al_unchecked<LegacyInputInfo *,LegacyInputInfo *,std::allocator<LegacyInputInfo>>(
        _OWORD *a1,
        _OWORD *a2,
        _OWORD *a3)
{
  _OWORD *v4; // r8
  _OWORD *v5; // rax
  __int64 v6; // r10

  try
  {
    for ( ; a1 != a2; a1 = (_OWORD *)((char *)a1 + 1736) )
    {
      v4 = a3;
      v5 = a1;
      v6 = 13LL;
      do
      {
        *v4 = *v5;
        v4[1] = v5[1];
        v4[2] = v5[2];
        v4[3] = v5[3];
        v4[4] = v5[4];
        v4[5] = v5[5];
        v4[6] = v5[6];
        v4 += 8;
        *(v4 - 1) = v5[7];
        v5 += 8;
        --v6;
      }
      while ( v6 );
      *v4 = *v5;
      v4[1] = v5[1];
      v4[2] = v5[2];
      v4[3] = v5[3];
      *((_QWORD *)v4 + 8) = *((_QWORD *)v5 + 8);
      a3 = (_OWORD *)((char *)a3 + 1736);
    }
  }
  catch ( ... )
  {
    throw;
  }
  return a3;
}
