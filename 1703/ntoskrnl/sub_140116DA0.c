/*
 * XREFs of sub_140116DA0 @ 0x140116DA0
 * Callers:
 *     sub_1405485C4 @ 0x1405485C4 (sub_1405485C4.c)
 * Callees:
 *     WarbirdCrypto::CCipherFeistel64::CallRoundFunction @ 0x140116290 (WarbirdCrypto--CCipherFeistel64--CallRoundFunction.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 */

void __fastcall sub_140116DA0(__int64 a1, _BYTE *a2, char *a3, unsigned int a4, __int64 a5, unsigned int a6, _BYTE *a7)
{
  int v7; // r12d
  unsigned int v8; // esi
  int v12; // r15d
  unsigned int v13; // r15d
  unsigned int v14; // ebp
  unsigned int v15; // r15d
  unsigned int v16; // ebp
  unsigned int v17; // r15d
  unsigned int v18; // ebp
  unsigned int v19; // r15d
  unsigned int v20; // ebp
  unsigned int v21; // r15d
  int v22; // ebp
  __int64 v23; // rbx
  int v24; // esi
  __int64 v25; // rbp
  int *v26; // rbp
  unsigned int v27; // r14d
  char *v28; // r13
  __int64 v29; // rbx
  unsigned int v30; // r15d
  unsigned int v31; // r12d
  unsigned int v32; // r15d
  unsigned int v33; // r12d
  unsigned int v34; // r15d
  unsigned int v35; // r12d
  unsigned int v36; // r15d
  unsigned int v37; // r12d
  unsigned int v38; // r15d
  unsigned int v39; // r12d
  int v40; // eax
  bool v41; // zf
  __int64 Src; // [rsp+20h] [rbp-48h] BYREF
  __int64 v43; // [rsp+28h] [rbp-40h] BYREF
  char *v45; // [rsp+80h] [rbp+18h]
  unsigned int v46; // [rsp+88h] [rbp+20h]

  if ( a4 )
  {
    v45 = a3;
    v7 = a6;
    v8 = a4 & 7;
    v46 = v8;
    *a7 = a2[a4 - 1];
    v12 = ~a6;
    if ( (a4 & 7) != 0 )
    {
      v13 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 9u, a5, a6) ^ v12;
      v14 = a6 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 8u, a5, v13);
      v15 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 7u, a5, v14) ^ v13;
      v16 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 6u, a5, v15) ^ v14;
      v17 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 5u, a5, v16) ^ v15;
      v18 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 4u, a5, v17) ^ v16;
      v19 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 3u, a5, v18) ^ v17;
      v20 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 2u, a5, v19) ^ v18;
      v21 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 1u, a5, v20) ^ v19;
      v43 = 0LL;
      v22 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 0, a5, v21) ^ v20;
      v23 = v8;
      memmove(&v43, a2, v8);
      v24 = v43;
      LODWORD(Src) = v43 ^ v21;
      HIDWORD(Src) = HIDWORD(v43) ^ v22;
      v25 = v46;
      memset((char *)&Src + v23, 0, 8 - v46);
      memmove(v45, &Src, (unsigned int)v23);
      a3 = v45;
      v7 = HIDWORD(Src);
      v12 = Src;
    }
    else
    {
      v25 = a4 & 7;
      v24 = 0;
      v43 = 0LL;
    }
    v26 = (int *)&a3[v25];
    v27 = a4 >> 3;
    if ( v27 )
    {
      v28 = (char *)(a2 - a3);
      Src = v27;
      do
      {
        v29 = *(_QWORD *)&v28[(_QWORD)v26];
        v30 = v29 ^ v12;
        v31 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 0, a5, v30) ^ HIDWORD(v29) ^ v7;
        v32 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 1u, a5, v31) ^ v30;
        v33 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 2u, a5, v32) ^ v31;
        v34 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 3u, a5, v33) ^ v32;
        v35 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 4u, a5, v34) ^ v33;
        v36 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 5u, a5, v35) ^ v34;
        v37 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 6u, a5, v36) ^ v35;
        v38 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 7u, a5, v37) ^ v36;
        v39 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 8u, a5, v38) ^ v37;
        v40 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 9u, a5, v39);
        v7 = HIDWORD(v43) ^ v39;
        v12 = v24 ^ v40 ^ v38;
        v26[1] = v7;
        v41 = Src-- == 1;
        v24 = v29;
        *v26 = v12;
        v26 += 2;
        v43 = v29;
      }
      while ( !v41 );
    }
  }
}
