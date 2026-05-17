/*
 * XREFs of sub_1800F23A4 @ 0x1800F23A4
 * Callers:
 *     sub_1800F1BE4 @ 0x1800F1BE4 (sub_1800F1BE4.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800F23A4(unsigned __int16 *a1)
{
  __int64 v2; // rdx
  unsigned __int16 v3; // r9
  __int16 v4; // cx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax

  v2 = *a1;
  if ( NlsMbOemCodePageTag )
  {
    v5 = (unsigned __int8)HIBYTE(*(_WORD *)(qword_18015AFC0 + 2 * v2));
    if ( word_18015B000[v5] )
    {
      v6 = *(unsigned __int8 *)(qword_18015AFC0 + 2 * v2) + (unsigned int)(unsigned __int16)word_18015B000[v5];
      v7 = qword_18015AFD8;
    }
    else
    {
      v6 = *(unsigned __int8 *)(qword_18015AFC0 + 2 * v2);
      v7 = qword_18015B208;
    }
    v3 = *(_WORD *)(v7 + 2 * v6);
    if ( v3 >= 0x61u )
    {
      if ( v3 > 0x7Au )
        v3 += *(_WORD *)(qword_18015B238
                       + 2LL
                       * ((v3 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(qword_18015B238
                                                            + 2LL
                                                            * (((v3 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_18015B238
                                                                                                 + 2
                                                                                                 * ((unsigned __int64)v3 >> 8))))));
      else
        v3 -= 32;
    }
    v4 = *(_WORD *)(qword_18015AFC0 + 2LL * v3);
  }
  else
  {
    v3 = *(_WORD *)(qword_18015B208 + 2LL * *(unsigned __int8 *)(v2 + qword_18015AFD0));
    if ( v3 >= 0x61u )
    {
      if ( v3 > 0x7Au )
        v3 += *(_WORD *)(qword_18015B238
                       + 2LL
                       * ((v3 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(qword_18015B238
                                                            + 2LL
                                                            * (((v3 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_18015B238
                                                                                                 + 2
                                                                                                 * ((unsigned __int64)v3 >> 8))))));
      else
        v3 -= 32;
    }
    v4 = *(char *)(v3 + qword_18015AFD0);
  }
  if ( v4 == word_18015B220 )
    return 0;
  *a1 = v3;
  return 1;
}
