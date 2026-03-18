/*
 * XREFs of itrp_SkipPushData @ 0x1C02D4510
 * Callers:
 *     itrp_ELSE @ 0x1C02CAF80 (itrp_ELSE.c)
 *     itrp_FDEF @ 0x1C02CB6D0 (itrp_FDEF.c)
 *     itrp_IDEF @ 0x1C02CC4E0 (itrp_IDEF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_SkipPushData(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // rax
  __int64 v2; // rax
  __int64 result; // rax

  v1 = a1 - 1;
  if ( (unsigned __int64)(a1 - 1) < qword_1C0327CF0 || (unsigned __int64)a1 > qword_1C0327CE8 || a1 < v1 )
    goto LABEL_19;
  _mm_lfence();
  v2 = byte_1C02F1750[*v1];
  switch ( (_DWORD)v2 )
  {
    case 0:
      return (__int64)a1;
    case 0x15:
      if ( (unsigned __int64)a1 >= qword_1C0327CF0 && (unsigned __int64)(a1 + 1) <= qword_1C0327CE8 && a1 + 1 >= a1 )
      {
        v2 = (unsigned int)*a1 + 1;
        break;
      }
LABEL_19:
      result = qword_1C0327CE8;
      dword_1C0327CE0 = 4381;
      return result;
    case 0x16:
      if ( (unsigned __int64)a1 < qword_1C0327CF0 || (unsigned __int64)(a1 + 1) > qword_1C0327CE8 || a1 + 1 < a1 )
        goto LABEL_19;
      v2 = 2 * (unsigned int)*a1 + 1;
      break;
  }
  a1 += v2;
  result = qword_1C0327CE8;
  if ( (unsigned __int64)a1 < qword_1C0327CF0 )
  {
    dword_1C0327CE0 = 4363;
    return result;
  }
  if ( (unsigned __int64)a1 <= qword_1C0327CE8 )
    return (__int64)a1;
  return result;
}
