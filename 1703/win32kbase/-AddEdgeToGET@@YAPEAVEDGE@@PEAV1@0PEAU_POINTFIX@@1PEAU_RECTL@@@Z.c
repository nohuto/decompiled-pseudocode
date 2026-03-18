/*
 * XREFs of ?AddEdgeToGET@@YAPEAVEDGE@@PEAV1@0PEAU_POINTFIX@@1PEAU_RECTL@@@Z @ 0x1C0096ECC
 * Callers:
 *     bConstructGET @ 0x1C0096DD0 (bConstructGET.c)
 * Callees:
 *     <none>
 */

struct EDGE *__fastcall AddEdgeToGET(
        struct EDGE *a1,
        struct EDGE *a2,
        struct _POINTFIX *a3,
        struct _POINTFIX *a4,
        struct _RECTL *a5)
{
  FIX y; // edi
  FIX v6; // r14d
  FIX v7; // ebx
  int v8; // r11d
  FIX v11; // r8d
  FIX v12; // eax
  FIX x; // edx
  int v14; // ebp
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  unsigned int v18; // r9d
  int v19; // ecx
  bool v20; // zf
  int v21; // eax
  int v22; // r8d
  __int64 v23; // rax
  int v24; // edx
  struct EDGE *result; // rax
  int v26; // eax
  __int64 v27; // rcx
  int v28; // edx
  int v29; // kr00_4
  int v30; // eax
  LONG top; // ecx
  LONG bottom; // r9d

  y = a4->y;
  v6 = 0;
  v7 = a3->y;
  v8 = y - v7;
  if ( y - v7 < 0 )
  {
    x = a3->x;
    v8 = v7 - a4->y;
    v11 = a4->x;
    v12 = v7;
    *((_DWORD *)a2 + 10) = -1;
    v7 = y;
  }
  else
  {
    v11 = a3->x;
    v12 = a4->y;
    x = a4->x;
    *((_DWORD *)a2 + 10) = 1;
  }
  v14 = 0;
  if ( a5 )
  {
    top = a5->top;
    if ( v12 < top )
      return a2;
    bottom = a5->bottom;
    if ( v7 > bottom )
      return a2;
    if ( v7 < top )
    {
      v6 = v7;
      v14 = 1;
      v7 = a5->top;
    }
    if ( v12 > bottom )
      v12 = a5->bottom;
  }
  v15 = (v7 + 15) >> 4;
  v16 = ((v12 + 15) >> 4) - v15;
  *((_DWORD *)a2 + 4) = v15;
  *((_DWORD *)a2 + 2) = v16;
  if ( v16 <= 0 )
    return a2;
  v17 = x - v11;
  if ( v17 < 0 )
  {
    *((_DWORD *)a2 + 9) = -1;
    v17 = -v17;
    *((_DWORD *)a2 + 5) = -v8;
  }
  else
  {
    *((_DWORD *)a2 + 5) = -1;
    *((_DWORD *)a2 + 9) = 1;
  }
  if ( v17 >= v8 )
  {
    v29 = v17;
    v28 = v17 >> 31;
    v30 = __SPAIR64__(v28, v29) / v8;
    v17 = __SPAIR64__(v28, v29) % v8;
    v20 = *((_DWORD *)a2 + 9) == -1;
    *((_DWORD *)a2 + 8) = v30;
    if ( v20 )
      *((_DWORD *)a2 + 8) = -v30;
  }
  else
  {
    *((_DWORD *)a2 + 8) = 0;
  }
  *((_DWORD *)a2 + 6) = v17;
  *((_DWORD *)a2 + 7) = v8;
  if ( v14 )
  {
    v18 = a5->top;
    v7 = v6;
  }
  else
  {
    v18 = (v7 + 15) & 0xFFFFFFF0;
  }
  if ( v7 != v18 )
  {
    v26 = *((_DWORD *)a2 + 5);
    v27 = v18 - v7;
    do
    {
      v11 += *((_DWORD *)a2 + 8);
      v26 += *((_DWORD *)a2 + 6);
      if ( v26 >= 0 )
      {
        v26 -= v8;
        v11 += *((_DWORD *)a2 + 9);
      }
      --v27;
    }
    while ( v27 );
    *((_DWORD *)a2 + 5) = v26;
  }
  v19 = (v11 + 15) >> 4;
  v20 = *((_DWORD *)a2 + 9) == 1;
  *((_DWORD *)a2 + 3) = v19;
  if ( v20 )
    v21 = ((v11 + 15) & 0xFFFFFFF0) - v11;
  else
    v21 = ((_BYTE)v11 - 1) & 0xF;
  *((_DWORD *)a2 + 6) *= 16;
  v22 = *((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 5) -= v8 * v21;
  *((_DWORD *)a2 + 7) = 16 * v8;
  while ( 1 )
  {
    v23 = *(_QWORD *)a1;
    v24 = *(_DWORD *)(*(_QWORD *)a1 + 16LL);
    if ( v22 <= v24 && (v22 != v24 || v19 <= *(_DWORD *)(v23 + 12)) )
      break;
    a1 = *(struct EDGE **)a1;
  }
  *(_QWORD *)a2 = v23;
  result = (struct EDGE *)((char *)a2 + 48);
  *(_QWORD *)a1 = a2;
  return result;
}
