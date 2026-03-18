/*
 * XREFs of _TTIntersectLine @ 0x1C023BAB4
 * Callers:
 *     TouchTargetingIntersectSegment @ 0x1C023ACD0 (TouchTargetingIntersectSegment.c)
 *     TouchTargetingRankForRectDeep @ 0x1C023B4FC (TouchTargetingRankForRectDeep.c)
 * Callees:
 *     _TTAddLineAndSegmentIntersection @ 0x1C023B8D0 (_TTAddLineAndSegmentIntersection.c)
 */

__int64 __fastcall TTIntersectLine(unsigned __int64 a1, unsigned __int64 a2, _DWORD *a3, _QWORD *a4, _QWORD *a5)
{
  int v7; // edx
  int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  int v14; // eax
  int v15; // ebp
  int *v16; // r14
  bool v17; // zf
  __int64 result; // rax
  _QWORD *v19; // rdx
  _QWORD v20[2]; // [rsp+40h] [rbp-28h] BYREF
  int v21; // [rsp+70h] [rbp+8h] BYREF

  v7 = 0;
  v21 = 0;
  if ( a1 == a2 )
    return 0LL;
  v10 = a2;
  if ( (int)a1 > (int)a2 )
    v10 = a1;
  if ( v10 < *a3 )
    return 0LL;
  v11 = a2;
  if ( (int)a1 < (int)a2 )
    v11 = a1;
  if ( v11 > a3[2] )
    return 0LL;
  v12 = HIDWORD(a1);
  v13 = HIDWORD(a2);
  v14 = HIDWORD(a2);
  if ( SHIDWORD(a1) > SHIDWORD(a2) )
    v14 = v12;
  if ( v14 < a3[1] )
    return 0LL;
  if ( (int)v12 < SHIDWORD(a2) )
    LODWORD(v13) = v12;
  if ( (int)v13 > a3[3] || (int)a3[11] <= 0 )
    return 0LL;
  v15 = 1;
  v16 = a3 + 12;
  while ( 1 )
  {
    v17 = v7 == 2;
    if ( v7 >= 2 )
      break;
    TTAddLineAndSegmentIntersection(
      a1,
      a2,
      *v16,
      (unsigned int)v16[1],
      a3[2 * (v15 % a3[11]) + 12],
      a3[2 * (v15 % a3[11]) + 13],
      v20,
      &v21);
    v7 = v21;
    ++v15;
    v16 += 2;
    if ( v15 - 1 >= a3[11] )
    {
      v17 = v21 == 2;
      break;
    }
  }
  if ( !v17 )
    return 0LL;
  result = 1LL;
  v19 = a5;
  *a4 = v20[0];
  *v19 = v20[1];
  return result;
}
