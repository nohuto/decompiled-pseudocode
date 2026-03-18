/*
 * XREFs of VmpProcessAccessedBatch @ 0x140279560
 * Callers:
 *     VmpQueryAccessedState @ 0x140279824 (VmpQueryAccessedState.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x140294B40 (HvlGetSparseGpaPagesAccessState.c)
 */

_BYTE *__fastcall VmpProcessAccessedBatch(__int64 a1, __int64 a2, int a3, _QWORD *a4, int a5)
{
  __int64 v5; // rbp
  int SparseGpaPagesAccessState; // eax
  __int64 v10; // rcx
  int v11; // r8d
  _BYTE *result; // rax
  _BYTE *i; // rdx
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v15[32]; // [rsp+38h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(a1 + 72);
  while ( 1 )
  {
    if ( v5 == -1 )
    {
      v10 = 0LL;
      v11 = -1073741823;
      v14 = 0LL;
    }
    else
    {
      SparseGpaPagesAccessState = HvlGetSparseGpaPagesAccessState(v5, a5 != 0, a3, a2, (__int64)&v14, (__int64)v15);
      v10 = v14;
      v11 = SparseGpaPagesAccessState;
    }
    result = v15;
    for ( i = v15; i < &v15[v10]; ++a4 )
    {
      if ( (*i & 1) != 0 )
        *a4 |= 1uLL;
      ++i;
    }
    a2 += 8 * v10;
    a3 -= v10;
    if ( !a3 )
      break;
    if ( v11 < 0 )
    {
      *a4 |= 2uLL;
      a2 += 8LL;
      ++a4;
      if ( !--a3 )
        break;
    }
  }
  return result;
}
