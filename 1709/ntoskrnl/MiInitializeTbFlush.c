/*
 * XREFs of MiInitializeTbFlush @ 0x140849448
 * Callers:
 *     MiInitializeTbFlushing @ 0x1408493FC (MiInitializeTbFlushing.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KeFlushTb @ 0x140059170 (KeFlushTb.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

ULONG_PTR __fastcall MiInitializeTbFlush(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR result; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 ValidPte; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r11
  _QWORD *v10; // r10
  unsigned __int64 v11; // rbx
  int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // r8
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r15
  _KPROCESS *v17; // rdx
  unsigned __int64 v18; // r11
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r15
  __int64 v23; // rax
  signed __int32 v24[8]; // [rsp+8h] [rbp-100h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-E0h]
  __int64 v26; // [rsp+30h] [rbp-D8h]
  __int64 v27; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v28; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v29; // [rsp+48h] [rbp-C0h]
  __int64 v30; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v31; // [rsp+58h] [rbp-B0h]
  ULONG_PTR v32; // [rsp+60h] [rbp-A8h]
  int v33; // [rsp+68h] [rbp-A0h] BYREF
  int v34; // [rsp+6Ch] [rbp-9Ch]
  __int64 v35; // [rsp+70h] [rbp-98h]
  __int64 v36; // [rsp+78h] [rbp-90h]
  __int64 v37; // [rsp+80h] [rbp-88h]

  v28 = 0LL;
  v29 = 0LL;
  result = MiReservePtes((__int64)&qword_140389360, (unsigned int)a1, a3);
  v32 = result;
  v5 = result;
  if ( !result )
    return result;
  v33 = 0;
  LOWORD(v34) = 0;
  v36 = 0LL;
  v37 = 0LL;
  v35 = 20LL;
  ValidPte = MiMakeValidPte(result, qword_140389188, 1);
  v8 = (__int64)(v5 << 25) >> 16;
  v9 = v8;
  if ( a1 )
  {
    v10 = (_QWORD *)v5;
    v11 = a1;
    do
    {
      *v10 = ValidPte;
      if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
      ++v10;
      v9 += 4096LL;
      --v11;
    }
    while ( v11 );
  }
  v12 = 0;
  v13 = 0LL;
  v27 = 0LL;
  if ( !a1 )
    goto LABEL_25;
  while ( 1 )
  {
    v26 = 4LL;
    v14 = v8 + (v13 << 12);
    v30 = v14;
    v15 = 0LL;
    v25 = a1 - v13;
    v16 = 0LL;
    v31 = (a1 - v13) >> 1;
    do
    {
      v25 = __rdtsc();
      _InterlockedOr(v24, 0);
      if ( v13 )
      {
        MiInsertTbFlushEntry(&v33, v8, v13, 0);
        MiFlushTbList((__int64)&v33, v17);
      }
      else
      {
        KeFlushTb(0LL, 2LL, v14);
      }
      _InterlockedOr(v24, 0);
      v14 = v30;
      v15 += __rdtsc() - v25;
      v18 = __rdtsc();
      _InterlockedOr(v24, 0);
      if ( v31 )
      {
        v7 = v14;
        v19 = ((a1 - v13) << 12) + v14 - 4096;
        v14 = v31;
        do
        {
          v7 += 4096LL;
          v19 -= 4096LL;
          --v14;
        }
        while ( v14 );
      }
      _InterlockedOr(v24, 0);
      v20 = __rdtsc();
      v16 += (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) - v18;
      --v26;
    }
    while ( v26 );
    v5 = v32;
    v21 = v15 >> 2;
    v22 = v16 >> 2;
    if ( v13 )
      break;
    v28 = v21;
    v29 = v22;
LABEL_29:
    if ( ++v13 >= a1 )
      goto LABEL_24;
  }
  if ( v21 + v22 < v29 + v28 )
  {
    v12 = 0;
    goto LABEL_29;
  }
  v23 = v13 - 1;
  if ( v12 )
    v23 = v27;
  ++v12;
  v27 = v23;
  if ( v12 != 3 )
    goto LABEL_29;
  qword_140388568 = v23;
LABEL_24:
  if ( v12 != 3 )
LABEL_25:
    qword_140388568 = v13;
  return MiReleasePtes((__int64)&qword_140389360, v5, a1, v7);
}
