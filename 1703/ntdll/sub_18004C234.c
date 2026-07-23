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
  PWSTR *v7; // r15
  int v8; // eax
  int v9; // ebx
  _UNICODE_STRING v10; // xmm1
  bool v12; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v13; // [rsp+54h] [rbp-ACh] BYREF
  _UNICODE_STRING v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h]
  _UNICODE_STRING String1; // [rsp+70h] [rbp-90h] BYREF
  WCHAR *v17[2]; // [rsp+80h] [rbp-80h] BYREF
  __m128i v18; // [rsp+90h] [rbp-70h] BYREF
  _WORD v19[128]; // [rsp+A0h] [rbp-60h] BYREF
  PWSTR Path[15]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v21; // [rsp+21Ch] [rbp+11Ch]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_QWORD *)(a1 + 48);
  v17[0] = 0LL;
  v17[1] = 0LL;
  v4 = 0;
  v15 = 0LL;
  v18.m128i_i64[1] = (__int64)v19;
  v12 = 0;
  v18.m128i_i32[0] = 0x1000000;
  v19[0] = 0;
  *(_QWORD *)&v14.Length = 0LL;
  v14.Buffer = 0LL;
  v13 = 0;
  if ( !v1 )
    goto LABEL_5;
  v5 = 32512;
  v6 = *(unsigned int *)(v1 + 280);
  if ( (dword_180158674 & 4) == 0 )
    v5 = 31488;
  if ( ((unsigned int)v6 & v5) != 0 )
  {
    sub_18003BE90(*(_QWORD *)(v1 + 80), ((dword_180158674 & 4) != 0 ? 32512LL : 31488LL) & v6 | 1, (__int64 *)Path);
    v7 = Path;
  }
  else
  {
LABEL_5:
    sub_18003BE90(0LL, 0LL, (__int64 *)Path);
    v7 = *(PWSTR **)(a1 + 16);
  }
  while ( 1 )
  {
    v8 = sub_18004BD40(
           (const UNICODE_STRING *)a1,
           (__int64)v7,
           (*(_BYTE *)(a1 + 24) & 8) != 0,
           v17,
           &v18,
           &String1,
           &v14,
           &v12,
           (__int64)&v13);
    v9 = v8;
    if ( v12 )
      *(_DWORD *)(v2 + 104) |= 1u;
    if ( v8 == -1073741515 )
      break;
    if ( v8 < 0 )
      goto LABEL_15;
LABEL_10:
    v4 = 1;
    v9 = sub_18004C564(a1, (unsigned int)&v14, (unsigned int)&String1, (unsigned int)&v18, 0LL, v8);
    if ( v9 < 0 )
      goto LABEL_15;
    if ( (*(_DWORD *)(a1 + 24) & 0x10000) != 0 )
      v13 |= 1u;
    v9 = sub_18004C728(&String1, &v14);
    if ( v9 != -1073741515 )
      goto LABEL_15;
    sub_18004C4D8(v2 + 72);
    v10 = String1;
    *(_UNICODE_STRING *)(v2 + 72) = v14;
    *(_UNICODE_STRING *)(v2 + 88) = v10;
    *(_QWORD *)&v14.Length = 0LL;
    v14.Buffer = 0LL;
    v9 = sub_18004C7E0(a1, &v18);
    if ( v9 != 1073741838 )
      goto LABEL_15;
    if ( v19 != (_WORD *)v18.m128i_i64[1] )
      RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v18.m128i_i64[1]);
    v18.m128i_i32[0] = 0x1000000;
    v18.m128i_i64[1] = (__int64)v19;
    v19[0] = 0;
  }
  if ( !v4 )
    goto LABEL_10;
  v9 = -1073741701;
LABEL_15:
  if ( v15 )
  {
    sub_180050570(a1);
  }
  else if ( (unsigned __int8)sub_18004C508() )
  {
    sub_1800D6040(v13, a1);
  }
  if ( v19 != (_WORD *)v18.m128i_i64[1] )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v18.m128i_i64[1]);
  v18.m128i_i32[0] = 0x1000000;
  v18.m128i_i64[1] = (__int64)v19;
  v19[0] = 0;
  sub_18004C4D8(&v14);
  if ( v21 )
    RtlReleasePath(Path[0]);
  return (unsigned int)v9;
}
