/*
 * XREFs of _TTUpdateRankWithSegment @ 0x1C023BE04
 * Callers:
 *     TouchTargetingRankForRect @ 0x1C023AF0C (TouchTargetingRankForRect.c)
 * Callees:
 *     TouchTargetingIntersectSegment @ 0x1C023ACD0 (TouchTargetingIntersectSegment.c)
 *     TouchTargetingRank @ 0x1C023AE78 (TouchTargetingRank.c)
 *     TouchTargetingSnapToSegment @ 0x1C023B7C4 (TouchTargetingSnapToSegment.c)
 */

__int64 __fastcall TTUpdateRankWithSegment(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned __int16 *a6,
        _DWORD *a7,
        unsigned __int64 a8)
{
  unsigned __int64 v8; // rdi
  __int64 result; // rax
  int v10; // eax
  int v11; // ecx
  int v12; // r8d
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // edx
  int v16; // edx
  int v17; // r8d
  int v18; // r8d
  int v19; // edx
  int v20; // edx
  int v21; // r8d
  __int64 v22; // rbx
  int v23; // r15d
  unsigned __int16 v24; // r14
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v28; // [rsp+40h] [rbp-10h] BYREF

  v8 = a8;
  result = a1;
  if ( (int)a1 <= (int)a3 )
    result = a3;
  if ( (int)result >= *(_DWORD *)a8 )
  {
    result = a1;
    if ( (int)a1 >= (int)a3 )
      result = a3;
    if ( (int)result < *(_DWORD *)(a8 + 8) )
    {
      result = a2;
      if ( (int)a2 <= (int)a4 )
        result = a4;
      if ( (int)result >= *(_DWORD *)(a8 + 4) )
      {
        result = a2;
        if ( (int)a2 >= (int)a4 )
          result = a4;
        if ( (int)result < *(_DWORD *)(a8 + 12) )
        {
          v27[1] = __PAIR64__(a4, a3);
          *(_QWORD *)&v28 = __PAIR64__(a2, a1);
          result = TouchTargetingIntersectSegment(__SPAIR64__(a2, a1), __SPAIR64__(a4, a3), a8, v27, &a8);
          if ( (_DWORD)result )
          {
            v10 = a8;
            v11 = v27[0];
            if ( LODWORD(v27[0]) == (_DWORD)a8 )
            {
              v12 = *(_DWORD *)(v8 + 4);
              v13 = HIDWORD(v27[0]);
              v14 = HIDWORD(a8);
              LODWORD(a8) = v27[0];
              v15 = v14;
              if ( SHIDWORD(v27[0]) < (int)v14 )
                v15 = HIDWORD(v27[0]);
              if ( v15 <= v12 )
              {
                HIDWORD(v27[0]) = v12;
              }
              else
              {
                v16 = v14;
                if ( SHIDWORD(v27[0]) < (int)v14 )
                  v16 = HIDWORD(v27[0]);
                HIDWORD(v27[0]) = v16;
              }
              v17 = v14;
              if ( (int)v13 > (int)v14 )
                v17 = v13;
              if ( v17 >= *(_DWORD *)(v8 + 12) - 1 )
              {
                HIDWORD(a8) = *(_DWORD *)(v8 + 12) - 1;
              }
              else
              {
                if ( (int)v13 > (int)v14 )
                  LODWORD(v14) = v13;
                HIDWORD(a8) = v14;
              }
            }
            else
            {
              v18 = *(_DWORD *)v8;
              HIDWORD(a8) = HIDWORD(v27[0]);
              v19 = a8;
              if ( SLODWORD(v27[0]) < (int)a8 )
                v19 = v27[0];
              if ( v19 <= v18 )
              {
                LODWORD(v27[0]) = v18;
              }
              else
              {
                v20 = a8;
                if ( SLODWORD(v27[0]) < (int)a8 )
                  v20 = v27[0];
                LODWORD(v27[0]) = v20;
              }
              v21 = a8;
              if ( v11 > (int)a8 )
                v21 = v11;
              if ( v21 >= *(_DWORD *)(v8 + 8) - 1 )
              {
                LODWORD(a8) = *(_DWORD *)(v8 + 8) - 1;
              }
              else
              {
                if ( v11 > (int)a8 )
                  v10 = v11;
                LODWORD(a8) = v10;
              }
            }
            result = TouchTargetingSnapToSegment(v27[0], a8, *(_QWORD *)(v8 + 32), &v28);
            v22 = v28;
            v23 = DWORD1(v28);
            v24 = *a6;
            if ( *a6 == 4094 || (_QWORD)v28 != *(_QWORD *)a5 )
            {
              v25 = (*a7 + a7[2]) / 2;
              v28 = *(_OWORD *)a7;
              LODWORD(a8) = v25;
              v26 = *(_QWORD *)(v8 + 32);
              HIDWORD(a8) = (a7[1] + a7[3]) / 2;
              result = TouchTargetingRank(v26, v22, &v28, a8);
              if ( v24 == 4094 || (unsigned __int16)result < v24 )
              {
                *a6 = result;
                *a5 = v22;
                a5[1] = v23;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
