/*
 * XREFs of sub_1800F4E40 @ 0x1800F4E40
 * Callers:
 *     sub_1800F469C @ 0x1800F469C (sub_1800F469C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800F4E40(unsigned __int16 *a1)
{
  __int64 v2; // rax
  unsigned __int16 v3; // r9
  __int16 v4; // cx
  __int16 v5; // dx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax

  v2 = *a1;
  if ( NlsMbOemCodePageTag )
  {
    v5 = *(_WORD *)(qword_180159F80 + 2 * v2);
    if ( word_180159FC0[HIBYTE(v5)] )
    {
      v6 = (unsigned __int8)v5 + (unsigned __int64)(unsigned __int16)word_180159FC0[HIBYTE(v5)];
      v7 = qword_180159F98;
    }
    else
    {
      v7 = qword_18015A1C8;
      v6 = (unsigned __int8)v5;
    }
    v3 = *(_WORD *)(v7 + 2 * v6);
    if ( v3 >= 0x61u )
    {
      if ( v3 > 0x7Au )
        v3 += *(_WORD *)(qword_180159D68
                       + 2LL
                       * ((v3 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(qword_180159D68
                                                            + 2LL
                                                            * (((v3 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_180159D68
                                                                                                 + 2
                                                                                                 * ((unsigned __int64)v3 >> 8))))));
      else
        v3 -= 32;
    }
    v4 = *(_WORD *)(qword_180159F80 + 2LL * v3);
  }
  else
  {
    v3 = *(_WORD *)(qword_18015A1C8 + 2LL * *(unsigned __int8 *)(v2 + qword_180159F90));
    if ( v3 >= 0x61u )
    {
      if ( v3 > 0x7Au )
        v3 += *(_WORD *)(qword_180159D68
                       + 2
                       * ((v3 & 0xF)
                        + (unsigned __int64)*(unsigned __int16 *)(qword_180159D68
                                                                + 2LL
                                                                * (((unsigned __int8)v3 >> 4)
                                                                 + (unsigned int)*(unsigned __int16 *)(qword_180159D68 + 2 * ((unsigned __int64)v3 >> 8))))));
      else
        v3 -= 32;
    }
    v4 = *(char *)(v3 + qword_180159F90);
  }
  if ( v4 == word_18015A1E0 )
    return 0;
  *a1 = v3;
  return 1;
}
