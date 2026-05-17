/*
 * XREFs of sub_18004213C @ 0x18004213C
 * Callers:
 *     sub_1800426E8 @ 0x1800426E8 (sub_1800426E8.c)
 *     sub_1800CA2A4 @ 0x1800CA2A4 (sub_1800CA2A4.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     RtlReleasePath @ 0x1800258A0 (RtlReleasePath.c)
 *     sub_1800404E8 @ 0x1800404E8 (sub_1800404E8.c)
 *     sub_1800410D4 @ 0x1800410D4 (sub_1800410D4.c)
 *     sub_180042054 @ 0x180042054 (sub_180042054.c)
 *     sub_180042420 @ 0x180042420 (sub_180042420.c)
 *     sub_180042604 @ 0x180042604 (sub_180042604.c)
 *     sub_180042934 @ 0x180042934 (sub_180042934.c)
 *     sub_180043094 @ 0x180043094 (sub_180043094.c)
 *     sub_180043144 @ 0x180043144 (sub_180043144.c)
 *     sub_180070738 @ 0x180070738 (sub_180070738.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800CB800 @ 0x1800CB800 (sub_1800CB800.c)
 */

__int64 __fastcall sub_18004213C(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rsi
  int v4; // r14d
  __int64 v5; // r8
  __int64 *v6; // r15
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  __int128 v10; // xmm1
  bool v12; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v13; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  __int128 v16; // [rsp+70h] [rbp-90h] BYREF
  __int16 *v17[2]; // [rsp+80h] [rbp-80h] BYREF
  int v18; // [rsp+90h] [rbp-70h] BYREF
  _WORD *v19; // [rsp+98h] [rbp-68h]
  _WORD v20[128]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v21[15]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v22; // [rsp+21Ch] [rbp+11Ch]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 56);
  v17[0] = 0LL;
  v17[1] = 0LL;
  v4 = 0;
  v15 = 0LL;
  v19 = v20;
  v12 = 0;
  v18 = 0x1000000;
  v20[0] = 0;
  v14 = 0uLL;
  v13 = 0;
  if ( v1 && (v5 = *(unsigned int *)(v1 + 280), (((dword_1801596D4 & 4) != 0 ? 32512 : 31488) & (unsigned int)v5) != 0) )
  {
    sub_180042054(*(void **)(v1 + 80), v5 & ((-(__int64)((dword_1801596D4 & 4) != 0) & 0x400) + 31488) | 1, v21);
    v6 = v21;
  }
  else
  {
    sub_180042054(0LL, 0LL, v21);
    v6 = *(__int64 **)(a1 + 16);
  }
  while ( 1 )
  {
    v7 = sub_1800410D4(
           (__int16 *)a1,
           (__int64)v6,
           (*(_DWORD *)(a1 + 32) & 8) != 0,
           v17,
           &v18,
           (__int64)&v16,
           (unsigned __int16 *)&v14,
           &v12,
           (__int64)&v13);
    v8 = v7;
    if ( v12 )
      *(_DWORD *)(v2 + 104) |= 1u;
    if ( v7 == -1073741515 )
      break;
    if ( v7 < 0 )
      goto LABEL_14;
LABEL_8:
    v4 = 1;
    if ( !*(_QWORD *)(a1 + 168) )
    {
      v8 = sub_180042934(a1, (unsigned int)&v14, (unsigned int)&v16, (unsigned int)&v18, v7);
      if ( v8 < 0 )
        goto LABEL_14;
      if ( (*(_DWORD *)(a1 + 32) & 0x10000) != 0 )
        v13 |= 1u;
      v9 = sub_1800404E8((unsigned __int16 *)&v16);
      *(_DWORD *)(v2 + 264) = v9;
      v8 = sub_180043094((unsigned int)&v16, (unsigned int)&v14, *(_DWORD *)(a1 + 32), v9, (__int64)&v15);
      if ( v8 != -1073741515 )
        goto LABEL_14;
    }
    sub_180042420(v2 + 72);
    v10 = v16;
    *(_OWORD *)(v2 + 72) = v14;
    *(_OWORD *)(v2 + 88) = v10;
    v14 = 0uLL;
    v8 = sub_180043144(a1, &v18);
    if ( v8 != 1073741838 )
      goto LABEL_14;
    if ( v20 != v19 )
      RtlDeleteBoundaryDescriptor((__int64)v19);
    v18 = 0x1000000;
    v19 = v20;
    v20[0] = 0;
  }
  if ( !v4 )
    goto LABEL_8;
  v8 = -1073741701;
LABEL_14:
  if ( v15 )
  {
    sub_180070738(a1, v15);
  }
  else if ( (unsigned __int8)sub_180042604() )
  {
    sub_1800CB800(v13, a1);
  }
  if ( v20 != v19 )
    RtlDeleteBoundaryDescriptor((__int64)v19);
  v18 = 0x1000000;
  v19 = v20;
  v20[0] = 0;
  sub_180042420(&v14);
  if ( v22 )
    RtlReleasePath(v21[0]);
  return (unsigned int)v8;
}
