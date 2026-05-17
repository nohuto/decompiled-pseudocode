/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x1800EE1A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800745EC @ 0x1800745EC (sub_1800745EC.c)
 */

_QWORD *__fastcall RtlStronglyEnumerateEntryHashTable(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r9
  __int64 v4; // r11
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *result; // rax

  v2 = *(_DWORD *)(a2 + 32);
  v3 = a2;
  v4 = a1;
  if ( v2 >= *(_DWORD *)(a1 + 8) )
    return 0LL;
  while ( 1 )
  {
    if ( v2 == *(_DWORD *)(v3 + 32) )
    {
      v5 = *(_QWORD **)v3;
      v6 = *(_QWORD *)(v3 + 24);
    }
    else
    {
      v6 = sub_1800745EC(v4, v2);
      v5 = (_QWORD *)v6;
    }
    v7 = (_QWORD *)*v5;
    if ( v7 != (_QWORD *)v6 )
      break;
LABEL_8:
    if ( ++v2 >= *(_DWORD *)(v4 + 8) )
      return 0LL;
  }
  while ( !v7[2] )
  {
    v7 = (_QWORD *)*v7;
    if ( v7 == (_QWORD *)v6 )
      goto LABEL_8;
  }
  *(_DWORD *)(v3 + 32) = v2;
  result = v7;
  *(_QWORD *)(v3 + 24) = v6;
  *(_QWORD *)v3 = v7;
  return result;
}
