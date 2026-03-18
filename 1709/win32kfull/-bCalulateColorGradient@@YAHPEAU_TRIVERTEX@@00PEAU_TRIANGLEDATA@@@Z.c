/*
 * XREFs of ?bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C01310C4
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C013086C (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 * Callees:
 *     ?bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z @ 0x1C013127C (-bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z.c)
 */

__int64 __fastcall bCalulateColorGradient(
        struct _TRIVERTEX *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIANGLEDATA *a4)
{
  LONG y; // eax
  LONG x; // esi
  int v8; // r11d
  LONG v9; // r10d
  LONG v11; // edi
  int v12; // edx
  int v13; // r10d
  int v14; // ebx
  int v15; // ecx
  int v16; // edi
  __int64 *v18; // r8
  signed int v19; // eax
  __int64 v20; // rt2
  __int64 *v21; // rcx
  int Red; // eax
  int v23; // r10d
  int v24; // r9d
  _DWORD v26[5]; // [rsp+40h] [rbp-30h] BYREF
  int v27; // [rsp+54h] [rbp-1Ch]
  __int64 v28; // [rsp+58h] [rbp-18h]
  __int64 v29; // [rsp+60h] [rbp-10h]

  y = a1->y;
  x = a1->x;
  v8 = a2->y - y;
  v9 = a2->x;
  v11 = a3->x;
  v12 = 0;
  v13 = v9 - a1->x;
  v14 = a3->y - y;
  *((_DWORD *)a4 + 34) = a1->x;
  v15 = 0;
  v26[3] = v14;
  v16 = v11 - x;
  v26[2] = v8;
  v26[1] = v16;
  v26[0] = v13;
  v27 = v13 * v14 - v8 * v16;
  v18 = (__int64 *)((char *)a4 + 80);
  if ( v13 < 0 )
    v15 = v13;
  if ( v8 < 0 )
    v12 = v8;
  if ( v15 < v16 )
    v16 = v15;
  if ( v12 < v14 )
    v14 = v12;
  v19 = abs32(v27);
  v26[4] = v14 + v16;
  v20 = 0x1000000000000LL % v19;
  v21 = (__int64 *)((char *)a4 + 16);
  v28 = 0x1000000000000LL / v19;
  *((_DWORD *)a4 + 35) = a1->y;
  Red = a3->Red;
  v23 = a2->Red;
  v24 = a1->Red;
  v29 = v20;
  bDoGradient(v21, (__int64 *)a4 + 6, v18, v24, v23, Red, (struct _GRADSTRUCT *)v26);
  bDoGradient(
    (__int64 *)a4 + 3,
    (__int64 *)a4 + 7,
    (__int64 *)a4 + 11,
    a1->Green,
    a2->Green,
    a3->Green,
    (struct _GRADSTRUCT *)v26);
  bDoGradient(
    (__int64 *)a4 + 4,
    (__int64 *)a4 + 8,
    (__int64 *)a4 + 12,
    a1->Blue,
    a2->Blue,
    a3->Blue,
    (struct _GRADSTRUCT *)v26);
  bDoGradient(
    (__int64 *)a4 + 5,
    (__int64 *)a4 + 9,
    (__int64 *)a4 + 13,
    a1->Alpha,
    a2->Alpha,
    a3->Alpha,
    (struct _GRADSTRUCT *)v26);
  return 1LL;
}
