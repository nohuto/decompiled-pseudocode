/*
 * XREFs of ?AddEdgeToGET@@YAPEAVEDGE@@PEAV1@0PEAU_POINTFIX@@1PEAU_RECTL@@@Z @ 0x1C005E4B0
 * Callers:
 *     bConstructGET @ 0x1C005E3A0 (bConstructGET.c)
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
  FIX y; // esi
  FIX x; // edi
  FIX v8; // r8d
  int v9; // r11d
  FIX v10; // r14d
  FIX v12; // ebp
  signed int v13; // r9d
  int v14; // r11d
  LONG v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // edi
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // edi
  unsigned int v22; // r10d
  int v23; // ecx
  int v24; // edx
  bool v25; // zf
  int v26; // eax
  int v27; // r8d
  __int64 v28; // rax
  int v29; // ecx
  struct EDGE *result; // rax
  LONG top; // eax
  LONG bottom; // ecx
  bool v33; // sf
  bool v34; // of
  bool v35; // cc
  LONG v36; // edx
  int v37; // edx
  int v38; // kr00_4
  int v39; // eax
  int v40; // edi
  __int64 v41; // rdx
  int v42; // ecx
  int v43; // r10d
  int v44; // eax

  y = a3->y;
  x = a4->x;
  v8 = a3->x;
  v9 = a4->y - y;
  v10 = a4->y;
  if ( v9 < 0 )
    v10 = y;
  v12 = 0;
  if ( v9 < 0 )
  {
    x = v8;
    y = a4->y;
    v8 = a4->x;
  }
  v13 = abs32(v9);
  *((_DWORD *)a2 + 10) = ((v9 >> 31) & 0xFFFFFFFE) + 1;
  v14 = 0;
  v15 = v10;
  if ( a5 )
  {
    top = a5->top;
    if ( v10 < top )
      return a2;
    bottom = a5->bottom;
    if ( y > bottom )
      return a2;
    v34 = __OFSUB__(y, top);
    v33 = y - top < 0;
    v35 = y < top;
    v36 = a5->top;
    v12 = y;
    v15 = v10;
    if ( !v35 )
      v36 = y;
    LOBYTE(v14) = v33 ^ v34;
    if ( !v35 )
      v12 = 0;
    y = v36;
    if ( v10 > bottom )
      v15 = a5->bottom;
  }
  v16 = (y + 15) >> 4;
  v17 = ((v15 + 15) >> 4) - v16;
  *((_DWORD *)a2 + 4) = v16;
  *((_DWORD *)a2 + 2) = v17;
  if ( v17 <= 0 )
    return a2;
  v18 = x - v8;
  if ( v18 < 0 )
    v19 = -v13;
  else
    v19 = -1;
  v20 = v18;
  if ( v18 < 0 )
    v20 = -v18;
  v21 = ((v18 >> 31) & 0xFFFFFFFE) + 1;
  *((_DWORD *)a2 + 9) = v21;
  *((_DWORD *)a2 + 5) = v19;
  if ( v20 >= v13 )
  {
    v38 = v20;
    v37 = v20 >> 31;
    v39 = __SPAIR64__(v37, v38) / v13;
    v20 = __SPAIR64__(v37, v38) % v13;
    *((_DWORD *)a2 + 8) = v39;
    if ( v21 == -1 )
      *((_DWORD *)a2 + 8) = -v39;
  }
  else
  {
    *((_DWORD *)a2 + 8) = 0;
  }
  *((_DWORD *)a2 + 6) = v20;
  *((_DWORD *)a2 + 7) = v13;
  if ( v14 )
    v22 = a5->top;
  else
    v22 = (y + 15) & 0xFFFFFFF0;
  if ( !v14 )
    v12 = y;
  if ( v12 != v22 )
  {
    v40 = v20;
    v41 = v22 - v12;
    do
    {
      v8 += *((_DWORD *)a2 + 8);
      v33 = v40 + v19 < 0;
      v42 = v40 + v19;
      v43 = v42;
      if ( !v33 )
        v8 += *((_DWORD *)a2 + 9);
      v44 = v42;
      v19 = v42 - v13;
      if ( v44 < 0 )
        v19 = v43;
      --v41;
    }
    while ( v41 );
    *((_DWORD *)a2 + 5) = v19;
  }
  v23 = *((_DWORD *)a2 + 5);
  v24 = (v8 + 15) >> 4;
  v25 = *((_DWORD *)a2 + 9) == 1;
  *((_DWORD *)a2 + 3) = v24;
  if ( v25 )
    v26 = ((v8 + 15) & 0xFFFFFFF0) - v8;
  else
    v26 = ((_BYTE)v8 - 1) & 0xF;
  *((_DWORD *)a2 + 6) *= 16;
  v27 = *((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 7) = 16 * v13;
  *((_DWORD *)a2 + 5) = v23 - v13 * v26;
  while ( 1 )
  {
    v28 = *(_QWORD *)a1;
    v29 = *(_DWORD *)(*(_QWORD *)a1 + 16LL);
    if ( v27 <= v29 && (v27 != v29 || v24 <= *(_DWORD *)(v28 + 12)) )
      break;
    a1 = *(struct EDGE **)a1;
  }
  *(_QWORD *)a2 = v28;
  result = (struct EDGE *)((char *)a2 + 48);
  *(_QWORD *)a1 = a2;
  return result;
}
