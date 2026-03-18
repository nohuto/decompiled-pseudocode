/*
 * XREFs of itrp_SkipPushData @ 0x1C02DA854
 * Callers:
 *     itrp_ELSE @ 0x1C02D1190 (itrp_ELSE.c)
 *     itrp_FDEF @ 0x1C02D18D0 (itrp_FDEF.c)
 *     itrp_IDEF @ 0x1C02D2730 (itrp_IDEF.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall itrp_SkipPushData(unsigned __int8 *a1)
{
  __int64 v1; // rdx
  unsigned __int8 *v2; // rax
  __int64 v3; // rax

  v1 = qword_1C032CA58;
  v2 = a1 - 1;
  if ( (unsigned __int64)(a1 - 1) < qword_1C032CA60 || (unsigned __int64)a1 > qword_1C032CA58 || a1 < v2 )
    goto LABEL_19;
  _mm_lfence();
  v3 = byte_1C02F4B00[*v2];
  if ( !(_DWORD)v3 )
    return a1;
  v1 = qword_1C032CA58;
  if ( (_DWORD)v3 == 21 )
  {
    if ( (unsigned __int64)a1 >= qword_1C032CA60 && (unsigned __int64)(a1 + 1) <= qword_1C032CA58 && a1 + 1 >= a1 )
    {
      v3 = (unsigned int)*a1 + 1;
      goto LABEL_15;
    }
LABEL_19:
    dword_1C032CA50 = 4381;
    return (unsigned __int8 *)v1;
  }
  if ( (_DWORD)v3 == 22 )
  {
    if ( (unsigned __int64)a1 < qword_1C032CA60 || (unsigned __int64)(a1 + 1) > qword_1C032CA58 || a1 + 1 < a1 )
      goto LABEL_19;
    v3 = 2 * (unsigned int)*a1 + 1;
  }
LABEL_15:
  a1 += v3;
  if ( (unsigned __int64)a1 >= qword_1C032CA60 )
  {
    if ( (unsigned __int64)a1 > qword_1C032CA58 )
      return (unsigned __int8 *)v1;
    return a1;
  }
  dword_1C032CA50 = 4363;
  return (unsigned __int8 *)v1;
}
