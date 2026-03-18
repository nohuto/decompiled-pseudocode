/*
 * XREFs of sub_140175B00 @ 0x140175B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall @ 0x140189D70 (_guard_check_icall.c)
 */

char __fastcall sub_140175B00(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 (__fastcall *a4)(_QWORD, _QWORD, __int64, __int64),
        _BYTE *a5)
{
  unsigned __int8 *v5; // r14
  __int64 v6; // r8
  unsigned __int8 v8; // bp
  _BYTE *v9; // rsi
  unsigned __int8 v10; // r12
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  unsigned int v14; // edi
  unsigned __int64 v15; // r15
  _BYTE *v16; // r8
  _BYTE *v17; // r13
  __int64 v18; // r9
  unsigned __int8 v19; // r11
  unsigned __int64 v20; // rbp
  int v21; // r12d
  unsigned __int64 v22; // rax
  unsigned __int8 *v23; // rcx
  int v24; // edx
  unsigned __int64 *v25; // rax
  bool v26; // zf
  __int64 v27; // rcx
  __int64 v28; // rdx
  char v29; // r8
  unsigned __int64 retaddr; // [rsp+68h] [rbp+0h] BYREF
  unsigned __int64 v32; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 v33; // [rsp+78h] [rbp+10h]
  __int64 v34; // [rsp+80h] [rbp+18h]
  __int64 (__fastcall *v35)(_QWORD, _QWORD, __int64, __int64); // [rsp+88h] [rbp+20h]

  v35 = a4;
  v34 = a3;
  v5 = a5;
  v6 = 2LL;
  v8 = *a5;
  v9 = a5 + 258;
  v10 = a5[1];
  v11 = a5 + 2;
  v33 = *a5;
  LOBYTE(a5) = v10;
  v12 = v9;
  do
  {
    *v12 = *v11;
    v12[1] = v11[1];
    v12[2] = v11[2];
    v12[3] = v11[3];
    v12[4] = v11[4];
    v12[5] = v11[5];
    v12[6] = v11[6];
    v12 += 8;
    v13 = v11[7];
    v11 += 8;
    *(v12 - 1) = v13;
    --v6;
  }
  while ( v6 );
  v14 = 0;
  v15 = 0LL;
  if ( (v5[2] & 1) != 0 )
  {
    v15 = a1 ^ retaddr;
    retaddr = 0LL;
  }
  v16 = (_BYTE *)a1;
  v17 = (_BYTE *)(a1 + a2);
  v18 = 0LL;
  if ( (_BYTE *)a1 != v17 )
  {
    do
    {
      v10 += v5[++v8 + 2];
      v19 = v5[v10 + 2];
      v5[v10 + 2] = v5[v8 + 2];
      v5[v8 + 2] = v19;
      if ( (unsigned int)v18 < 0x400 )
        v18 = (unsigned int)(v18 + 1);
      else
        *v16++ ^= v5[(unsigned __int8)(v19 + v5[v10 + 2]) + 2] ^ 0x9C;
    }
    while ( v16 != v17 );
  }
  *v5 = v8;
  v5[1] = v10;
  v20 = (unsigned __int64)&v32 ^ a1;
  v21 = 64;
  v22 = (unsigned __int64)&v32 ^ a1;
  v23 = v5;
  v24 = 64;
  do
  {
    *(_QWORD *)v23 ^= v22;
    v23 += 8;
    v22 = __ROR8__(v22, 3);
    --v24;
  }
  while ( v24 );
  v32 = v22;
  LOBYTE(v25) = v35(0LL, 0LL, v34, v18);
  do
  {
    *(_QWORD *)v5 ^= v20;
    v5 += 8;
    v20 = __ROR8__(v20, 3);
    --v21;
  }
  while ( v21 );
  v26 = (*v9 & 1) == 0;
  v32 = v20;
  if ( !v26 )
  {
    v25 = &retaddr;
    retaddr = a1 ^ v15;
  }
  while ( (_BYTE *)a1 != v17 )
  {
    v27 = ++v33;
    LOBYTE(a5) = v9[v33] + (_BYTE)a5;
    v28 = (unsigned __int8)a5;
    LOBYTE(v25) = v9[v33];
    v29 = v9[(unsigned __int8)a5];
    v9[(unsigned __int8)a5] = (_BYTE)v25;
    v9[v27] = v29;
    if ( v14 < 0x400 )
    {
      ++v14;
    }
    else
    {
      LOBYTE(v25) = v29 + v9[v28];
      *(_BYTE *)a1++ ^= v9[(unsigned __int8)v25] ^ 0x9C;
    }
  }
  return (char)v25;
}
