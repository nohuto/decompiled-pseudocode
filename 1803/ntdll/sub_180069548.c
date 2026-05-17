/*
 * XREFs of sub_180069548 @ 0x180069548
 * Callers:
 *     sub_1800694C8 @ 0x1800694C8 (sub_1800694C8.c)
 * Callees:
 *     sub_180069670 @ 0x180069670 (sub_180069670.c)
 *     sub_1800697E4 @ 0x1800697E4 (sub_1800697E4.c)
 *     sub_1800F5F7C @ 0x1800F5F7C (sub_1800F5F7C.c)
 */

__int64 __fastcall sub_180069548(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  __int64 v6; // r10
  unsigned int v8; // r11d
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int v12; // edi
  int v13; // ecx
  int v14; // r9d
  int v15; // r10d
  int v16; // eax
  __int64 v17; // [rsp+28h] [rbp-39h] BYREF
  __int64 v18; // [rsp+30h] [rbp-31h]
  __int64 v19; // [rsp+38h] [rbp-29h]
  __int64 v20; // [rsp+40h] [rbp-21h]
  __int64 v21; // [rsp+48h] [rbp-19h]
  __int64 v22; // [rsp+50h] [rbp-11h]
  int v23; // [rsp+58h] [rbp-9h]
  int v24; // [rsp+5Ch] [rbp-5h]
  int v25; // [rsp+60h] [rbp-1h]
  __int64 v26; // [rsp+68h] [rbp+7h]
  __int16 v27; // [rsp+70h] [rbp+Fh]
  __int64 v28; // [rsp+78h] [rbp+17h]
  int v29; // [rsp+80h] [rbp+1Fh]
  __int16 v30; // [rsp+84h] [rbp+23h]
  __int64 v31; // [rsp+98h] [rbp+37h]

  v6 = a2;
  if ( !a2 || !a4 || !a6 )
    return 3221225485LL;
  v25 = 0;
  v27 = 0;
  v29 = 0;
  v30 = 0;
  *a6 = 0;
  v8 = 0;
  v17 = a2;
  v24 = a3;
  v20 = a4;
  v22 = a4;
  v18 = a2 + 2LL * (int)a3;
  v23 = a5;
  v28 = a4;
  v31 = a1;
  v21 = a4 + 2LL * a5;
  v26 = a4 - 2;
  while ( v6 != v18 )
  {
    if ( v8 )
      goto LABEL_18;
    v9 = *(unsigned __int16 *)v6;
    v10 = *(unsigned __int16 *)v6;
    v19 = v6 + 2;
    if ( (signed int)v9 < *(_DWORD *)(a1 + 28)
      || (LOBYTE(a3) = *(_BYTE *)(((unsigned __int64)v9 >> 7) + *(_QWORD *)(a1 + 32)), !(_BYTE)a3)
      || (_BYTE)a3 == 0xFB && *(_BYTE *)(a1 + 113) )
    {
      if ( !(unsigned __int8)sub_1800697E4(&v17, v10) )
      {
        v6 = v19;
        v8 = -1073741789;
        break;
      }
    }
    else
    {
      v8 = sub_180069670(a1, v10, a3, &v17);
    }
    v6 = v19;
  }
  if ( !v8 )
  {
    v6 = (v22 - v20) >> 1;
    goto LABEL_14;
  }
LABEL_18:
  if ( v8 == -1073741789 )
  {
    v12 = ((v18 - v6) >> 1) + 1;
    v13 = sub_1800F5F7C(a1, v12);
    v16 = (int)(v12 * v14) / v15;
    if ( v16 <= v13 )
      v16 = v13;
    LODWORD(v6) = v14 + v16 + (v16 >> 3);
  }
  else
  {
    LODWORD(v6) = ((v6 - v17) >> 1) - 1;
  }
LABEL_14:
  *a6 = v6;
  return v8;
}
