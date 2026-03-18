/*
 * XREFs of ?_TTIntersectSegmentAndLine@@YAHUtagPOINT@@000PEAU1@@Z @ 0x1C023C1B8
 * Callers:
 *     ?_TTAddLineAndSegmentIntersection@@YAXUtagPOINT@@0JJJJPEAU1@PEAH@Z @ 0x1C023BE9C (-_TTAddLineAndSegmentIntersection@@YAXUtagPOINT@@0JJJJPEAU1@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _TTIntersectSegmentAndLine(
        struct tagPOINT a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        struct tagPOINT *a5)
{
  int v5; // r12d
  int v6; // r14d
  int v7; // r15d
  int v8; // r11d
  int v9; // r10d
  int v10; // eax
  int v11; // r10d
  LONG v12; // esi
  LONG v13; // r11d
  int v14; // edi
  int v15; // ebx
  unsigned int v16; // r10d
  int v17; // eax
  struct tagPOINT v19; // [rsp+50h] [rbp+20h]

  v19 = a4;
  v5 = a4.x - a1.x;
  v6 = a2.x - a1.x;
  v7 = a2.y - a1.y;
  a4.x = 0;
  v8 = (a3.x - a1.x) * (v19.y - a1.y) - (a3.y - a1.y) * (v19.x - a1.x);
  v9 = (a3.x - a2.x) * (a4.y - a2.y) - (v19.x - a2.x) * (a3.y - a2.y);
  if ( v8 )
  {
    if ( !v9 )
    {
      *a5 = a2;
      goto LABEL_6;
    }
    if ( v8 <= 0 )
      v10 = v8 >> 31;
    else
      v10 = 1;
    if ( v9 <= 0 )
      v11 = v9 >> 31;
    else
      v11 = 1;
    if ( v10 != v11 )
    {
      v12 = v6 * v8;
      v13 = v7 * v8;
      a5->x = v12;
      v14 = v6 * (a4.y - a3.y) + v7 * (a3.x - a1.x - v5);
      a5->y = v13;
      if ( v12 <= 0 )
        v15 = v12 >> 31;
      else
        v15 = 1;
      v16 = abs32(v14 / 2);
      a5->x = a1.x + (int)(v12 + v15 * v16) / v14;
      if ( v13 <= 0 )
        v17 = v13 >> 31;
      else
        v17 = 1;
      a4.x = 1;
      a5->y = a1.y + (int)(v13 + v16 * v17) / v14;
    }
  }
  else if ( v9 )
  {
    *a5 = a1;
LABEL_6:
    a4.x = 1;
  }
  return (unsigned int)a4.x;
}
