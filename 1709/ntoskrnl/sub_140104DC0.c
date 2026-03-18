/*
 * XREFs of sub_140104DC0 @ 0x140104DC0
 * Callers:
 *     sub_14056585C @ 0x14056585C (sub_14056585C.c)
 * Callees:
 *     WarbirdCrypto::CCipherFeistel64::CallRoundFunction @ 0x140104330 (WarbirdCrypto--CCipherFeistel64--CallRoundFunction.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall sub_140104DC0(__int64 a1, void *a2, char *a3, unsigned int a4, __int64 a5, unsigned int a6, _BYTE *a7)
{
  unsigned int v7; // eax
  __int64 v9; // r13
  unsigned int v10; // r14d
  unsigned int v11; // ebp
  unsigned int v12; // r14d
  unsigned int v13; // ebp
  unsigned int v14; // r14d
  unsigned int v15; // ebp
  unsigned int v16; // r14d
  unsigned int v17; // ebp
  unsigned int v18; // r14d
  int v19; // ebp
  int v20; // ebp
  int v21; // esi
  unsigned int v22; // r12d
  int v23; // r14d
  int *v24; // r13
  __int64 v25; // rax
  void *v26; // rdx
  __int64 v27; // rbx
  unsigned int v28; // ebp
  unsigned int v29; // esi
  unsigned int v30; // ebp
  unsigned int v31; // esi
  unsigned int v32; // ebp
  unsigned int v33; // esi
  unsigned int v34; // ebp
  unsigned int v35; // esi
  unsigned int v36; // ebp
  unsigned int v37; // esi
  int v38; // eax
  bool v39; // zf
  __int64 v40; // [rsp+20h] [rbp-48h] BYREF
  __int64 v41; // [rsp+28h] [rbp-40h] BYREF
  void *Src; // [rsp+78h] [rbp+10h]
  void *Srca; // [rsp+78h] [rbp+10h]
  char *v44; // [rsp+80h] [rbp+18h]

  if ( a4 )
  {
    v44 = a3;
    Src = a2;
    v7 = a4;
    v9 = a4 & 7;
    if ( (a4 & 7) != 0 )
    {
      v10 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 9u, a5, a6) ^ ~a6;
      v11 = a6 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 8u, a5, v10);
      v12 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 7u, a5, v11) ^ v10;
      v13 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 6u, a5, v12) ^ v11;
      v14 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 5u, a5, v13) ^ v12;
      v15 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 4u, a5, v14) ^ v13;
      v16 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 3u, a5, v15) ^ v14;
      v17 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 2u, a5, v16) ^ v15;
      v18 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 1u, a5, v17) ^ v16;
      v41 = 0LL;
      v19 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 0, a5, v18) ^ v17;
      memmove(&v41, Src, (unsigned int)v9);
      LODWORD(v40) = v41 ^ v18;
      HIDWORD(v40) = HIDWORD(v41) ^ v19;
      memset((char *)&v40 + (unsigned int)v9, 0, (unsigned int)(8 - v9));
      memmove(v44, &v40, (unsigned int)v9);
      a2 = Src;
      v7 = a4;
      a3 = v44;
      v20 = HIDWORD(v40);
      v21 = v40;
      v22 = HIDWORD(v41);
      v23 = v41;
    }
    else
    {
      v22 = a6;
      v21 = 0;
      v20 = 0;
      v23 = ~a6;
    }
    v24 = (int *)&a3[v9];
    v25 = v7 >> 3;
    if ( (_DWORD)v25 )
    {
      v26 = (void *)((_BYTE *)a2 - a3);
      v40 = v25;
      for ( Srca = v26; ; v26 = Srca )
      {
        v27 = *(_QWORD *)((char *)v24 + (_QWORD)v26);
        v28 = HIDWORD(v27) ^ v20;
        v29 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 9u, a5, v28) ^ v27 ^ v21;
        v30 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 8u, a5, v29) ^ v28;
        v31 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 7u, a5, v30) ^ v29;
        v32 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 6u, a5, v31) ^ v30;
        v33 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 5u, a5, v32) ^ v31;
        v34 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 4u, a5, v33) ^ v32;
        v35 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 3u, a5, v34) ^ v33;
        v36 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 2u, a5, v35) ^ v34;
        v37 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 1u, a5, v36) ^ v35;
        v38 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 0, a5, v37);
        v41 = v27;
        v20 = v22 ^ v38 ^ v36;
        v21 = v23 ^ v37;
        v39 = v40-- == 1;
        v24[1] = v20;
        *v24 = v21;
        v24 += 2;
        if ( v39 )
          break;
        v22 = HIDWORD(v41);
        v23 = v27;
      }
      a3 = v44;
    }
    *a7 = a3[a4 - 1];
  }
}
