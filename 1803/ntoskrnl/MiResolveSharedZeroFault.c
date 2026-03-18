/*
 * XREFs of MiResolveSharedZeroFault @ 0x14001E1D0
 * Callers:
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiFillPteWithProto @ 0x14003C58C (MiFillPteWithProto.c)
 *     MiAdvanceFaultList @ 0x140056E8C (MiAdvanceFaultList.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiMakePrototypePteDirect @ 0x1401A6614 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x1401A6634 (MiMakePrototypePteVadLookup.c)
 */

char __fastcall MiResolveSharedZeroFault(__int64 a1)
{
  unsigned int v2; // r11d
  unsigned __int64 v3; // rdi
  __int64 v4; // r14
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 Process; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  unsigned __int64 PrototypePteDirect; // rax
  unsigned __int64 v21; // r10
  __int64 v22; // r14
  int v23; // edx
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int128 *v30; // rax
  __m128i v31; // xmm2
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm0
  __int64 v35; // xmm1_8
  unsigned __int64 v36; // xmm2_8
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rdi
  _QWORD *v39; // rcx
  __int128 v41; // [rsp+30h] [rbp-89h] BYREF
  __m128i v42; // [rsp+40h] [rbp-79h]
  __int128 v43; // [rsp+50h] [rbp-69h]
  __int128 v44; // [rsp+60h] [rbp-59h]
  __int128 v45; // [rsp+70h] [rbp-49h]
  __int64 v46; // [rsp+80h] [rbp-39h]
  unsigned __int64 v47; // [rsp+90h] [rbp-29h] BYREF
  __int64 v48; // [rsp+98h] [rbp-21h]
  unsigned __int64 v49; // [rsp+A0h] [rbp-19h]
  unsigned __int64 v50; // [rsp+A8h] [rbp-11h]
  unsigned __int64 v51; // [rsp+B0h] [rbp-9h]
  __int64 v52; // [rsp+B8h] [rbp-1h]
  char v53[24]; // [rsp+C0h] [rbp+7h] BYREF
  unsigned int v54; // [rsp+120h] [rbp+67h]
  int v55; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v56; // [rsp+130h] [rbp+77h] BYREF
  unsigned __int64 v57; // [rsp+138h] [rbp+7Fh]

  v2 = *(_DWORD *)(a1 + 32);
  v3 = ((**(_QWORD **)(a1 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = *(_QWORD *)(a1 + 24);
  v54 = v2;
  v5 = 0LL;
  v6 = 0x7FFFFFFEFFFFLL;
  Process = (__int64)(v3 << 25) >> 16;
  v8 = 0LL;
  v9 = Process;
  v57 = 0LL;
  v10 = 0LL;
  while ( v9 > 0x7FFFFFFEFFFFLL )
  {
    v10 = (unsigned int)(v10 + 1);
    v9 = (__int64)(v9 << 25) >> 16;
    if ( (unsigned int)v10 >= 3 )
      goto LABEL_48;
  }
  v5 = ((Process >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v11 = *(_QWORD *)v5;
  if ( v5 >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(v10, v11, v5, 0x7FFFFFFEFFFFLL)
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    v12 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 8 * ((v5 >> 3) & 0x1FF));
      v5 = v11 | 0x20;
      if ( (v13 & 0x20) == 0 )
        v5 = v11;
      v11 = v5;
      if ( (v13 & 0x42) != 0 )
        v11 = v5 | 0x42;
    }
  }
  v56 = v11;
  if ( (unsigned __int64)&v56 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v56 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(&v56, v11, v5, v6)
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    v5 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v5 )
    {
      v14 = *(_QWORD *)(v5 + 8 * (((unsigned __int64)&v56 >> 3) & 0x1FF));
      v5 = v11 | 0x20;
      if ( (v14 & 0x20) == 0 )
        v5 = v11;
      v11 = v5;
      if ( (v14 & 0x42) != 0 )
        v11 = v5 | 0x42;
    }
  }
  Process = (v11 >> 12) & 0xFFFFFFFFFLL;
  v15 = 48 * Process - 0x58000000000LL;
  v55 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v55);
      while ( *(__int64 *)(v15 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) );
    v2 = v54;
  }
  *(_QWORD *)(v15 + 16) ^= ((unsigned int)*(_QWORD *)(v15 + 16) ^ ((unsigned int)*(_QWORD *)(v15 + 16) + 0x10000)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (__int64)(*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) >> 47 == -1
    || (__int64)(*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) >> 47 == 0 )
  {
    Process = 0xFFFFF68000000000uLL;
    v49 = (((*(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v50 = ((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v51 = ((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = 4LL;
    v52 = ((v51 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v5 = *(&v48 + v6--);
      v16 = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(Process + 640) != 1 )
        {
          if ( (v16 & 1) == 0 )
            break;
          if ( (v16 & 0x20) == 0 || (v16 & 0x42) == 0 )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v17 = *(_QWORD *)(Process + 1544);
            if ( v17 )
            {
              v18 = *(_QWORD *)(v17 + 8 * ((v5 >> 3) & 0x1FF));
              v5 = v16 | 0x20;
              Process = (unsigned __int8)v18;
              LOBYTE(Process) = v18 & 0x20;
              if ( (v18 & 0x20) == 0 )
                v5 = v16;
              LOBYTE(v16) = v5;
              if ( (v18 & 0x42) != 0 )
                LOBYTE(v16) = v5 | 0x42;
            }
          }
        }
      }
    }
    while ( (v16 & 1) != 0 && (v16 & 0x80u) == 0LL && v6 );
  }
LABEL_48:
  v19 = 256LL;
  if ( v2 == 256 )
    PrototypePteDirect = MiMakePrototypePteDirect(v4, Process, v5, v6);
  else
    PrototypePteDirect = MiMakePrototypePteVadLookup(v2);
  *(_QWORD *)v3 = PrototypePteDirect;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
    LOBYTE(PrototypePteDirect) = MiWritePteShadow(v3, PrototypePteDirect);
  v22 = *(_QWORD *)(a1 + 64);
  if ( v22 )
  {
    v23 = *(_DWORD *)(v22 + 48);
    LOBYTE(PrototypePteDirect) = v23 & 7;
    if ( (v23 & 7) != 2 )
    {
      v24 = *(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32);
      v25 = *(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32);
      if ( (v23 & 0x20000) != 0 )
      {
        v26 = v21 & 0xFFFFFFFFFFFF0000uLL;
        v48 = 0x10000LL;
        v47 = v26;
        PrototypePteDirect = v26 >> 12;
        if ( v26 >> 12 < v24 )
          return PrototypePteDirect;
        PrototypePteDirect = (v26 + 0xFFFF) >> 12;
        if ( PrototypePteDirect > v25 )
          return PrototypePteDirect;
        v27 = 1LL;
        LOWORD(v41) = 2;
        v42 = (__m128i)1uLL;
        v28 = 0LL;
        *((_QWORD *)&v41 + 1) = &v47;
        v29 = v26 - 4096;
        v19 = 16LL;
        *(_QWORD *)&v43 = 0LL;
      }
      else
      {
        LODWORD(PrototypePteDirect) = *(_DWORD *)a1;
        if ( (*(_DWORD *)a1 & 2) == 0 )
          return PrototypePteDirect;
        v30 = *(__int128 **)(a1 + 56);
        v29 = v21 - 4096;
        v31 = (__m128i)v30[1];
        v32 = v30[3];
        v41 = *v30;
        v27 = v31.m128i_i64[0];
        v33 = v30[2];
        v42 = v31;
        v43 = v33;
        v34 = v30[4];
        v44 = v32;
        v35 = *((_QWORD *)v30 + 10);
        PrototypePteDirect = v25 - (v21 >> 12) + 1;
        v36 = _mm_srli_si128(v31, 8).m128i_u64[0];
        v28 = v36;
        v45 = v34;
        if ( PrototypePteDirect < 0x100 )
          v19 = PrototypePteDirect;
        v46 = v35;
        v42.m128i_i64[1] = v36;
        if ( v36 >= v27 )
          return PrototypePteDirect;
      }
      LOBYTE(PrototypePteDirect) = 8;
      v37 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
      if ( v19 )
      {
        while ( (v37 & 0xFFF) != 0 )
        {
          v38 = *(_QWORD *)(*((_QWORD *)&v41 + 1) + 16 * v28) + ((_QWORD)v43 << 12);
          PrototypePteDirect = (v38 & 0xFFFFFFFFFFFFF000uLL) - 4096;
          if ( PrototypePteDirect != (v29 & 0xFFFFFFFFFFFFF000uLL) )
            break;
          if ( !MI_READ_PTE_LOCK_FREE(v37) )
          {
            PrototypePteDirect = MiGetProtoPteAddress(v22, v38 >> 12, 0LL, v53);
            if ( !PrototypePteDirect )
              return PrototypePteDirect;
            v39 = *(_QWORD **)(v22 + 120);
            if ( (__int64)v39 < 0 && (v38 >> 12) - v24 > (unsigned __int64)(*v39 - 1LL) >> 12 )
              return PrototypePteDirect;
            MiFillPteWithProto(v37, PrototypePteDirect, v54);
            v8 = v57;
          }
          v37 += 8LL;
          LOBYTE(PrototypePteDirect) = MiAdvanceFaultList(&v41);
          v28 = v42.m128i_u64[1];
          if ( v42.m128i_i64[1] != v27 )
          {
            ++v8;
            v29 = v38;
            v57 = v8;
            if ( v8 < v19 )
              continue;
          }
          return PrototypePteDirect;
        }
      }
    }
  }
  return PrototypePteDirect;
}
