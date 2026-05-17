/*
 * XREFs of sub_18004C234 @ 0x18004C234
 * Callers:
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003BE90 @ 0x18003BE90 (sub_18003BE90.c)
 *     sub_18004BD40 @ 0x18004BD40 (sub_18004BD40.c)
 *     sub_18004C4D8 @ 0x18004C4D8 (sub_18004C4D8.c)
 *     sub_18004C508 @ 0x18004C508 (sub_18004C508.c)
 *     sub_18004C564 @ 0x18004C564 (sub_18004C564.c)
 *     sub_18004C728 @ 0x18004C728 (sub_18004C728.c)
 *     sub_18004C7E0 @ 0x18004C7E0 (sub_18004C7E0.c)
 *     sub_180050570 @ 0x180050570 (sub_180050570.c)
 *     RtlReleasePath @ 0x18006F830 (RtlReleasePath.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800D6040 @ 0x1800D6040 (sub_1800D6040.c)
 */

__int64 __fastcall sub_18004C234(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rsi
  int v4; // r14d
  int v5; // eax
  __int64 v6; // rdx
  __int64 *v7; // r15
  int v8; // eax
  int v9; // ebx
  __int64 v10; // r8
  __int128 v11; // xmm1
  bool v13; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v14; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v15; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  __int128 v17; // [rsp+70h] [rbp-90h] BYREF
  __int16 *v18[2]; // [rsp+80h] [rbp-80h] BYREF
  __m128i v19; // [rsp+90h] [rbp-70h] BYREF
  _WORD v20[128]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v21[15]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v22; // [rsp+21Ch] [rbp+11Ch]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_QWORD *)(a1 + 48);
  v18[0] = 0LL;
  v18[1] = 0LL;
  v4 = 0;
  v16 = 0LL;
  v19.m128i_i64[1] = (__int64)v20;
  v13 = 0;
  v19.m128i_i32[0] = 0x1000000;
  v20[0] = 0;
  v15 = 0uLL;
  v14 = 0;
  if ( !v1 )
    goto LABEL_5;
  v5 = 32512;
  v6 = *(unsigned int *)(v1 + 280);
  if ( (dword_180158674 & 4) == 0 )
    v5 = 31488;
  if ( ((unsigned int)v6 & v5) != 0 )
  {
    sub_18003BE90(*(_QWORD *)(v1 + 80), ((dword_180158674 & 4) != 0 ? 32512LL : 31488LL) & v6 | 1, v21);
    v7 = v21;
  }
  else
  {
LABEL_5:
    sub_18003BE90(0LL, 0LL, v21);
    v7 = *(__int64 **)(a1 + 16);
  }
  while ( 1 )
  {
    v8 = sub_18004BD40(
           (__int16 *)a1,
           (__int64)v7,
           (*(_BYTE *)(a1 + 24) & 8) != 0,
           v18,
           &v19,
           (__int64)&v17,
           (unsigned __int16 *)&v15,
           &v13,
           (__int64)&v14);
    v9 = v8;
    if ( v13 )
      *(_DWORD *)(v2 + 104) |= 1u;
    if ( v8 == -1073741515 )
      break;
    if ( v8 < 0 )
      goto LABEL_15;
LABEL_10:
    v4 = 1;
    v9 = sub_18004C564(a1, (unsigned int)&v15, (unsigned int)&v17, (unsigned int)&v19, 0LL, v8);
    if ( v9 < 0 )
      goto LABEL_15;
    v10 = *(unsigned int *)(a1 + 24);
    if ( (v10 & 0x10000) != 0 )
      v14 |= 1u;
    v9 = sub_18004C728(&v17, &v15, v10, &v16);
    if ( v9 != -1073741515 )
      goto LABEL_15;
    sub_18004C4D8(v2 + 72);
    v11 = v17;
    *(_OWORD *)(v2 + 72) = v15;
    *(_OWORD *)(v2 + 88) = v11;
    v15 = 0uLL;
    v9 = sub_18004C7E0(a1, &v19);
    if ( v9 != 1073741838 )
      goto LABEL_15;
    if ( v20 != (_WORD *)v19.m128i_i64[1] )
      RtlDeleteBoundaryDescriptor();
    v19.m128i_i32[0] = 0x1000000;
    v19.m128i_i64[1] = (__int64)v20;
    v20[0] = 0;
  }
  if ( !v4 )
    goto LABEL_10;
  v9 = -1073741701;
LABEL_15:
  if ( v16 )
  {
    sub_180050570(a1);
  }
  else if ( (unsigned __int8)sub_18004C508() )
  {
    sub_1800D6040(v14, a1);
  }
  if ( v20 != (_WORD *)v19.m128i_i64[1] )
    RtlDeleteBoundaryDescriptor();
  v19.m128i_i32[0] = 0x1000000;
  v19.m128i_i64[1] = (__int64)v20;
  v20[0] = 0;
  sub_18004C4D8(&v15);
  if ( v22 )
    RtlReleasePath(v21[0]);
  return (unsigned int)v9;
}
