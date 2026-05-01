/*
 * XREFs of ?Update@DragData@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x1802E4990
 * Callers:
 *     <none>
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180288518 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall DragData::Update(struct tagPOINT *this, const struct tagPOINT *a2)
{
  int x; // eax
  unsigned __int64 v5; // rax
  _DWORD *v6; // r9
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  const struct tagPOINT *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r8
  __int64 v14; // r9

  if ( this[6].x != a2->x || this[6].y != a2->y )
  {
    this[6] = *a2;
    x = a2->y - this[4].y;
    if ( x <= this[7].x )
      x = this[7].x;
    this[7].x = x;
    if ( x > this[7].y )
    {
      v5 = 0LL;
      if ( this[15] )
      {
        v6 = (_DWORD *)this[14];
        v7 = v6;
        while ( *v7 != 5 )
        {
          ++v5;
          v7 += 6;
          if ( v5 >= *(_QWORD *)&this[15] )
            goto LABEL_13;
        }
        v8 = &v6[6 * v5];
      }
      else
      {
LABEL_13:
        v8 = 0LL;
      }
      if ( v8 )
        *((_BYTE *)v8 + 20) = 1;
    }
    this[9].x = -1;
    if ( Geometry::CRect::Contains((Geometry::CRect *)&this[4], a2) )
    {
      v11 = *(_QWORD *)(v10 + 112);
      v12 = v11 + 24LL * *(_QWORD *)(v10 + 120);
      while ( v11 != v12 )
      {
        if ( Geometry::CRect::Contains((Geometry::CRect *)(v11 + 4), v9) && *(_BYTE *)(v14 + 20) )
        {
          *(_OWORD *)(v13 + 72) = *(_OWORD *)v14;
          *(_QWORD *)(v13 + 88) = *(_QWORD *)(v14 + 16);
          return 0LL;
        }
        v11 = v14 + 24;
      }
    }
  }
  return 0LL;
}
