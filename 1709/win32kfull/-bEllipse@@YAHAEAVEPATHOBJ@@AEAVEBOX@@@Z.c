/*
 * XREFs of ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x1C028B9AC
 * Callers:
 *     NtGdiCreateEllipticRgn @ 0x1C027A870 (NtGdiCreateEllipticRgn.c)
 *     NtGdiEllipse @ 0x1C027B930 (NtGdiEllipse.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall bEllipse(struct EPATHOBJ *a1, struct EBOX *a2)
{
  __int64 v2; // r8
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  struct _POINTL v11; // rax
  int v12; // r9d
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // ebx
  struct _POINTL v21; // [rsp+20h] [rbp-49h] BYREF
  struct _POINTL v22; // [rsp+30h] [rbp-39h] BYREF
  int v23; // [rsp+38h] [rbp-31h]
  int v24; // [rsp+3Ch] [rbp-2Dh]
  struct _POINTL v25; // [rsp+40h] [rbp-29h]
  int v26; // [rsp+48h] [rbp-21h]
  int v27; // [rsp+4Ch] [rbp-1Dh]
  int v28; // [rsp+50h] [rbp-19h]
  int v29; // [rsp+54h] [rbp-15h]
  __int64 v30; // [rsp+58h] [rbp-11h]
  int v31; // [rsp+60h] [rbp-9h]
  int v32; // [rsp+64h] [rbp-5h]
  int v33; // [rsp+68h] [rbp-1h]
  int v34; // [rsp+6Ch] [rbp+3h]
  __int64 v35; // [rsp+70h] [rbp+7h]
  int v36; // [rsp+78h] [rbp+Fh]
  int v37; // [rsp+7Ch] [rbp+13h]
  int v38; // [rsp+80h] [rbp+17h]
  int v39; // [rsp+84h] [rbp+1Bh]
  int v40; // [rsp+88h] [rbp+1Fh]
  int v41; // [rsp+8Ch] [rbp+23h]

  v2 = *((int *)a2 + 14);
  v5 = 1922922357LL * *((int *)a2 + 12);
  v6 = *((int *)a2 + 13);
  v7 = *((int *)a2 + 15);
  v8 = 1922922357 * v6;
  LODWORD(v6) = v2 + *((_DWORD *)a2 + 8);
  v21.y = v7 + *((_DWORD *)a2 + 9);
  v5 >>= 32;
  v8 >>= 32;
  v9 = (1922922357 * v2) >> 32;
  v10 = (1922922357 * v7) >> 32;
  v21.x = v6;
  EPATHOBJ::bMoveTo(a1, 0LL, &v21);
  v12 = *((_DWORD *)a2 + 12);
  v13 = *((_DWORD *)a2 + 13);
  v14 = *((_DWORD *)a2 + 14);
  v15 = *((_DWORD *)a2 + 15);
  v22 = (struct _POINTL)*((_QWORD *)a2 + 1);
  v11 = v22;
  v22.x -= v9;
  v22.y -= v10;
  v23 = v11.x - v5;
  v24 = v11.y - v8;
  v25 = v11;
  v16 = *((_QWORD *)a2 + 2);
  v25.x -= v12;
  v25.y -= v13;
  v26 = v5 + v16;
  v27 = v8 + HIDWORD(v16);
  v28 = v16 - v9;
  v29 = HIDWORD(v16) - v10;
  v30 = v16;
  v17 = *((_QWORD *)a2 + 3);
  LODWORD(v30) = v30 - v14;
  HIDWORD(v30) -= v15;
  v31 = v9 + v17;
  v32 = v10 + HIDWORD(v17);
  v33 = v5 + v17;
  v34 = v8 + HIDWORD(v17);
  v35 = v17;
  v18 = *((_QWORD *)a2 + 4);
  LODWORD(v35) = v12 + v35;
  HIDWORD(v35) += v13;
  v40 = v14 + v18;
  v41 = v15 + HIDWORD(v18);
  v36 = v18 - v5;
  v37 = HIDWORD(v18) - v8;
  v38 = v9 + v18;
  v39 = v10 + HIDWORD(v18);
  v19 = 0;
  if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v22, 0xCu) )
    return EPATHOBJ::bCloseFigure(a1) != 0;
  return v19;
}
