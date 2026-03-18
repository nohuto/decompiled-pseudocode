/*
 * XREFs of MiInitializeTbFlush @ 0x140802CC8
 * Callers:
 *     MiInitializeTbFlushing @ 0x140802C7C (MiInitializeTbFlushing.c)
 * Callees:
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

char __fastcall MiInitializeTbFlush(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR v4; // rax
  ULONG_PTR v5; // r13
  unsigned __int64 ValidPte; // rdx
  unsigned __int64 v7; // r14
  unsigned __int64 *v8; // r10
  unsigned __int64 v9; // rbx
  __int64 v10; // r10
  int v11; // esi
  __int64 v12; // rbx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r15
  _KPROCESS *v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r15
  __int64 v24; // rax
  signed __int32 v26[8]; // [rsp+8h] [rbp-100h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-E0h]
  __int64 v28; // [rsp+30h] [rbp-D8h]
  __int64 v29; // [rsp+38h] [rbp-D0h]
  __int128 v30; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v31; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v32; // [rsp+60h] [rbp-A8h]
  _QWORD *v33; // [rsp+68h] [rbp-A0h]
  __int128 v34; // [rsp+78h] [rbp-90h]
  int v35; // [rsp+88h] [rbp-80h] BYREF
  __int16 v36; // [rsp+8Ch] [rbp-7Ch]
  int v37; // [rsp+90h] [rbp-78h]
  int v38; // [rsp+94h] [rbp-74h]
  __int64 v39; // [rsp+98h] [rbp-70h]
  __int64 v40; // [rsp+A0h] [rbp-68h]

  v30 = 0uLL;
  v4 = MiReservePtes((__int64)&qword_14036D0A0, (unsigned int)a1, a3);
  v33 = (_QWORD *)v4;
  v5 = v4;
  if ( !v4 )
    return v4;
  v38 = 0;
  v35 = 0;
  v36 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v37 = 20;
  ValidPte = MiMakeValidPte(v4, qword_14036CEC8, 1);
  v7 = (__int64)(v5 << 25) >> 16;
  if ( a1 )
  {
    v8 = (unsigned __int64 *)v5;
    v9 = a1;
    do
    {
      *v8 = ValidPte;
      if ( MiPteInShadowRange((unsigned __int64)v8) )
        MiWritePteShadow();
      v8 = (unsigned __int64 *)(v10 + 8);
      --v9;
    }
    while ( v9 );
  }
  v11 = 0;
  v12 = 0LL;
  v29 = 0LL;
  if ( !a1 )
    goto LABEL_24;
  while ( 1 )
  {
    v28 = 4LL;
    v31 = v7 + (v12 << 12);
    v13 = 0LL;
    v27 = a1 - v12;
    v14 = 0LL;
    v32 = (a1 - v12) >> 1;
    do
    {
      v27 = __rdtsc();
      _InterlockedOr(v26, 0);
      if ( v12 )
      {
        MiInsertTbFlushEntry((__int64)&v35, v7, v12, 0);
        MiFlushTbList((__int64)&v35, v15);
      }
      else
      {
        KeFlushTb(0, 2u);
      }
      _InterlockedOr(v26, 0);
      v16 = v31;
      v13 += __rdtsc() - v27;
      v17 = __rdtsc();
      _InterlockedOr(v26, 0);
      if ( v32 )
      {
        v18 = v16;
        v19 = ((a1 - v12) << 12) + v16 - 4096;
        v20 = v32;
        do
        {
          v18 += 4096LL;
          v19 -= 4096LL;
          --v20;
        }
        while ( v20 );
      }
      _InterlockedOr(v26, 0);
      v21 = __rdtsc();
      v14 += (((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) - v17;
      --v28;
    }
    while ( v28 );
    v5 = (ULONG_PTR)v33;
    v22 = v13 >> 2;
    v23 = v14 >> 2;
    *(_QWORD *)&v34 = v22;
    *((_QWORD *)&v34 + 1) = v23;
    if ( v12 )
      break;
    v30 = v34;
LABEL_28:
    if ( ++v12 >= a1 )
      goto LABEL_23;
  }
  if ( v23 + v22 < *((_QWORD *)&v30 + 1) + (_QWORD)v30 )
  {
    v11 = 0;
    goto LABEL_28;
  }
  v24 = v12 - 1;
  if ( v11 )
    v24 = v29;
  ++v11;
  v29 = v24;
  if ( v11 != 3 )
    goto LABEL_28;
  qword_14036C218 = v24;
LABEL_23:
  if ( v11 != 3 )
LABEL_24:
    qword_14036C218 = v12;
  LOBYTE(v4) = MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)v5, a1);
  return v4;
}
