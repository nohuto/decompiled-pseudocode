/*
 * XREFs of ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEAKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C01364F0
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x1C0135E10 (NtGdiFastPolyPolyline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMakePathRecords(
        struct _PATHRECORD *a1,
        unsigned int *a2,
        int a3,
        struct _POINTL *a4,
        unsigned int a5,
        int a6,
        int a7,
        struct _RECTFX *a8,
        struct _PATHRECORD **a9)
{
  LONG v9; // ebx
  LONG v10; // edi
  int v11; // r11d
  unsigned int *v13; // rdx
  LONG v14; // ebp
  int v15; // r8d
  LONG v16; // r14d
  struct _PATHRECORD *v18; // r9
  LONG x; // eax
  LONG y; // eax
  unsigned int v21; // r10d
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx

  v9 = 0x7FFFFFFF;
  *((_QWORD *)a1 + 1) = 0LL;
  v10 = 0x80000000;
  v11 = *a2;
  v13 = a2 + 1;
  v14 = 0x7FFFFFFF;
  v15 = a3 - v11;
  v16 = 0x80000000;
  if ( v15 >= 0 )
  {
    while ( 1 )
    {
      if ( v11 < 2 )
        return 0;
      *((_DWORD *)a1 + 5) = v11;
      v18 = a1;
      *((_DWORD *)a1 + 4) = 3;
      do
      {
        x = a4->x;
        if ( a4->x < v9 )
          v9 = a4->x;
        if ( x > v10 )
          v10 = a4->x;
        *((_DWORD *)a1 + 6) = a6 + x;
        y = a4->y;
        if ( y < v14 )
          v14 = a4->y;
        if ( y > v16 )
          v16 = a4->y;
        *((_DWORD *)a1 + 7) = a7 + y;
        ++a4;
        a1 = (struct _PATHRECORD *)((char *)a1 + 8);
        --v11;
      }
      while ( v11 );
      v21 = 1;
      if ( !--a5 )
        break;
      a1 = (struct _PATHRECORD *)((char *)a1 + 24);
      *((_QWORD *)a1 + 1) = v18;
      *(_QWORD *)v18 = a1;
      v11 = *v13++;
      v15 -= v11;
      if ( v15 < 0 )
        return 0;
    }
    v22 = a6 + (__int64)v9;
    *(_QWORD *)v18 = 0LL;
    *a9 = v18;
    if ( (unsigned __int64)(v22 + 0x80000000LL) > 0xFFFFFFFF )
    {
      a8->xLeft = -1;
    }
    else
    {
      a8->xLeft = v22;
      v23 = a6 + (__int64)v10;
      if ( (unsigned __int64)(v23 + 0x80000000LL) > 0xFFFFFFFF )
      {
        a8->xRight = -1;
      }
      else
      {
        a8->xRight = v23;
        v24 = a7 + (__int64)v14;
        if ( (unsigned __int64)(v24 + 0x80000000LL) > 0xFFFFFFFF )
        {
          a8->yTop = -1;
        }
        else
        {
          a8->yTop = v24;
          v25 = a7 + (__int64)v16;
          if ( (unsigned __int64)(v25 + 0x80000000LL) <= 0xFFFFFFFF )
          {
            a8->yBottom = v25;
            goto LABEL_19;
          }
          a8->yBottom = -1;
        }
      }
    }
    v21 = 0;
LABEL_19:
    if ( v15 )
      return 0;
    return v21;
  }
  return 0;
}
