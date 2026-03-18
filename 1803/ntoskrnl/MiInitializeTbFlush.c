/*
 * XREFs of MiInitializeTbFlush @ 0x14089D77C
 * Callers:
 *     MiInitializeTbFlushing @ 0x14089D730 (MiInitializeTbFlushing.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char __fastcall MiInitializeTbFlush(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdi
  ULONG_PTR v2; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // r15
  unsigned __int64 ValidPte; // rdx
  unsigned __int64 v6; // r14
  _QWORD *v7; // r10
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r10
  int v12; // esi
  __int64 v13; // rbx
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r13
  __int64 v27; // rax
  signed __int32 v29[8]; // [rsp+8h] [rbp-100h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v31; // [rsp+38h] [rbp-D0h]
  __int64 v32; // [rsp+40h] [rbp-C8h]
  __int64 v33; // [rsp+48h] [rbp-C0h]
  __int128 v34; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v35; // [rsp+68h] [rbp-A0h]
  ULONG_PTR v36; // [rsp+70h] [rbp-98h]
  __int128 v37; // [rsp+78h] [rbp-90h]
  int v38; // [rsp+88h] [rbp-80h] BYREF
  __int16 v39; // [rsp+8Ch] [rbp-7Ch]
  __int64 v40; // [rsp+90h] [rbp-78h]
  __int64 v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h]

  v35 = a1;
  v1 = a1;
  v34 = 0uLL;
  v2 = MiReservePtes((__int64)&qword_1403CC5E0, a1);
  v36 = v2;
  v4 = v2;
  if ( v2 )
  {
    v40 = 20LL;
    v38 = 0;
    v39 = 0;
    v41 = 0LL;
    v42 = 0LL;
    ValidPte = MiMakeValidPte(v2, qword_1403CC408, 1LL, v3);
    v6 = (__int64)(v4 << 25) >> 16;
    if ( v1 )
    {
      v7 = (_QWORD *)v4;
      v8 = v1;
      do
      {
        *v7 = ValidPte;
        if ( MiPteInShadowRange((unsigned __int64)v7) )
          MiWritePteShadow(v9, ValidPte, v10);
        v7 = (_QWORD *)(v11 + 8);
        --v8;
      }
      while ( v8 );
    }
    v33 = 0LL;
    v12 = 0;
    v13 = 0LL;
    if ( !v1 )
      goto LABEL_30;
    while ( 1 )
    {
      v30 = 0LL;
      v14 = 0LL;
      v32 = 4LL;
      v31 = v1 - v13;
      v15 = (v1 - v13) >> 1;
      v16 = v31;
      do
      {
        v31 = __rdtsc();
        _InterlockedOr(v29, 0);
        if ( v13 )
        {
          MiInsertTbFlushEntry((__int64)&v38, v6, v13, 0);
          MiFlushTbList((__int64)&v38, v17, v18);
        }
        else
        {
          KeFlushTb(0, 2u);
        }
        _InterlockedOr(v29, 0);
        v19 = __rdtsc() - v31 + v30;
        v30 = v19;
        v20 = __rdtsc();
        _InterlockedOr(v29, 0);
        if ( v15 )
        {
          v21 = v6 + (v13 << 12);
          v22 = v15;
          v23 = v21 + (v16 << 12) - 4096;
          do
          {
            v21 += 4096LL;
            v23 -= 4096LL;
            --v22;
          }
          while ( v22 );
          v19 = v30;
        }
        _InterlockedOr(v29, 0);
        v24 = __rdtsc();
        v14 += (((unsigned __int64)HIDWORD(v24) << 32) | (unsigned int)v24) - v20;
        --v32;
      }
      while ( v32 );
      v1 = v35;
      v4 = v36;
      v25 = v19 >> 2;
      v26 = v14 >> 2;
      *(_QWORD *)&v37 = v25;
      *((_QWORD *)&v37 + 1) = v26;
      if ( v13 )
      {
        if ( v25 + v26 >= *((_QWORD *)&v34 + 1) + (_QWORD)v34 )
        {
          v27 = v13 - 1;
          if ( v12 )
            v27 = v33;
          ++v12;
          v33 = v27;
          if ( v12 == 3 )
          {
            qword_1403CB708 = v27;
LABEL_26:
            if ( v12 == 3 )
            {
LABEL_27:
              LOBYTE(v2) = MiReleasePtes((__int64)&qword_1403CC5E0, v4, (unsigned int)v1);
              return v2;
            }
LABEL_30:
            qword_1403CB708 = v13;
            goto LABEL_27;
          }
        }
        else
        {
          v12 = 0;
        }
      }
      else
      {
        v34 = v37;
      }
      if ( ++v13 >= v35 )
        goto LABEL_26;
    }
  }
  return v2;
}
