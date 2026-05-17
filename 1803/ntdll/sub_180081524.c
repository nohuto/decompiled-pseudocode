/*
 * XREFs of sub_180081524 @ 0x180081524
 * Callers:
 *     sub_1800275D0 @ 0x1800275D0 (sub_1800275D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180081524(__int64 a1, signed __int32 a2)
{
  __int64 result; // rax
  signed __int32 v4; // edx
  int v5; // ett

  _m_prefetchw((const void *)(a1 + 428));
  result = *(unsigned int *)(a1 + 428);
  while ( (_DWORD)result == -2 )
  {
    v4 = a2;
LABEL_6:
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 428), v4, result);
    if ( v5 == (_DWORD)result )
      return result;
  }
  if ( (_DWORD)result != a2 && (_DWORD)result != -1 )
  {
    v4 = -1;
    goto LABEL_6;
  }
  return result;
}
