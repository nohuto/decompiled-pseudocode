/*
 * XREFs of TouchTargetingSnapToSegment @ 0x1C023B7C4
 * Callers:
 *     TouchTargetingRankForRectDeep @ 0x1C023B4FC (TouchTargetingRankForRectDeep.c)
 *     _TTUpdateRankWithSegment @ 0x1C023BE04 (_TTUpdateRankWithSegment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchTargetingSnapToSegment(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v5; // r12d
  int v6; // r15d
  int v7; // ebp
  int v8; // r14d
  int v9; // edi
  int v10; // r10d
  unsigned int v11; // r11d
  int v12; // r9d
  __int64 v13; // r9

  v5 = HIDWORD(a2) - HIDWORD(a1);
  v6 = a2 - a1;
  v7 = a3 - a1;
  v8 = HIDWORD(a3) - HIDWORD(a1);
  v9 = v6 * v6 + v5 * v5;
  v10 = v8 * v8 + v7 * v7;
  v11 = 1;
  v12 = (HIDWORD(a3) - HIDWORD(a2)) * (HIDWORD(a3) - HIDWORD(a2)) + (a3 - a2) * (a3 - a2);
  if ( v12 < v10 + v9 )
  {
    if ( v10 < v12 + v9 )
    {
      v13 = v5 * v7 - (__int64)(v6 * v8);
      *a4 = (v9 * (int)a3 - v13 * v5) / v9;
      a4[1] = (v9 * HIDWORD(a3) + v13 * v6) / v9;
      return v11;
    }
    *(_QWORD *)a4 = a2;
  }
  else
  {
    *(_QWORD *)a4 = a1;
  }
  return 0;
}
