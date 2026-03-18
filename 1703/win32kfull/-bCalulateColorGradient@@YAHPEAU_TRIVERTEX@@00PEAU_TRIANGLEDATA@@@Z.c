/*
 * XREFs of ?bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C012DAD4
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C012D28C (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 * Callees:
 *     ?bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z @ 0x1C012DC8C (-bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z.c)
 */

__int64 __fastcall bCalulateColorGradient(
        struct _TRIVERTEX *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIANGLEDATA *a4)
{
  int v5; // r11d
  LONG x; // esi
  LONG v9; // r10d
  int v11; // edx
  int v12; // r10d
  int v13; // ebx
  int v14; // edi
  int v15; // ecx
  __int64 *v16; // r8
  signed int v17; // eax
  __int64 v18; // rt2
  __int64 *v19; // rcx
  int Red; // eax
  int v21; // r10d
  int v22; // r9d
  int v24; // [rsp+40h] [rbp-30h] BYREF
  int v25; // [rsp+44h] [rbp-2Ch]
  int v26; // [rsp+48h] [rbp-28h]
  int v27; // [rsp+4Ch] [rbp-24h]
  int v28; // [rsp+50h] [rbp-20h]
  int v29; // [rsp+54h] [rbp-1Ch]
  __int64 v30; // [rsp+58h] [rbp-18h]
  __int64 v31; // [rsp+60h] [rbp-10h]

  v5 = a2->y - a1->y;
  x = a1->x;
  v9 = a2->x;
  v11 = 0;
  v12 = v9 - a1->x;
  v13 = a3->y - a1->y;
  v15 = 0;
  v25 = a3->x - x;
  v14 = v25;
  v27 = v13;
  *((_DWORD *)a4 + 34) = x;
  v26 = v5;
  v24 = v12;
  v29 = v12 * v13 - v5 * v14;
  v16 = (__int64 *)((char *)a4 + 80);
  if ( v12 < 0 )
    v15 = v12;
  if ( v5 < 0 )
    v11 = v5;
  if ( v15 < v14 )
    v14 = v15;
  if ( v11 < v13 )
    v13 = v11;
  v17 = abs32(v29);
  v28 = v13 + v14;
  v18 = 0x1000000000000LL % v17;
  v19 = (__int64 *)((char *)a4 + 16);
  v30 = 0x1000000000000LL / v17;
  *((_DWORD *)a4 + 35) = a1->y;
  Red = a3->Red;
  v21 = a2->Red;
  v22 = a1->Red;
  v31 = v18;
  bDoGradient(v19, (__int64 *)a4 + 6, v16, v22, v21, Red, (struct _GRADSTRUCT *)&v24);
  bDoGradient(
    (__int64 *)a4 + 3,
    (__int64 *)a4 + 7,
    (__int64 *)a4 + 11,
    a1->Green,
    a2->Green,
    a3->Green,
    (struct _GRADSTRUCT *)&v24);
  bDoGradient(
    (__int64 *)a4 + 4,
    (__int64 *)a4 + 8,
    (__int64 *)a4 + 12,
    a1->Blue,
    a2->Blue,
    a3->Blue,
    (struct _GRADSTRUCT *)&v24);
  bDoGradient(
    (__int64 *)a4 + 5,
    (__int64 *)a4 + 9,
    (__int64 *)a4 + 13,
    a1->Alpha,
    a2->Alpha,
    a3->Alpha,
    (struct _GRADSTRUCT *)&v24);
  return 1LL;
}
