/*
 * XREFs of MiSetVaAge @ 0x14009E9C0
 * Callers:
 *     MiTrimThisWsle @ 0x1400110FC (MiTrimThisWsle.c)
 *     MiAgePte @ 0x14009DA30 (MiAgePte.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiUnlockWsle @ 0x14010C8E0 (MiUnlockWsle.c)
 *     MiClearPteAccessed @ 0x140121C30 (MiClearPteAccessed.c)
 *     MiUpdateWsleAge @ 0x140124820 (MiUpdateWsleAge.c)
 *     MiAgePteWorker @ 0x14021CBF0 (MiAgePteWorker.c)
 *     MiResetAccessBitPteWorker @ 0x14021E03C (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiVolunteerForTrimFirst @ 0x140125ACC (MiVolunteerForTrimFirst.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

signed __int64 __fastcall MiSetVaAge(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  volatile signed __int64 *v6; // rsi
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r10
  int v9; // r12d
  __int64 v10; // rax
  char v11; // bl
  __int64 v12; // r9
  _BYTE *v13; // r14
  unsigned __int8 v14; // r9
  unsigned __int64 v15; // rax
  char v16; // r9
  __int64 *v17; // r8
  __int64 PteShadow; // rax
  __int64 *v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  volatile signed __int64 v24; // rax
  signed __int64 result; // rax
  signed __int64 v26; // rtt
  __int64 *v27; // r8
  __int64 v28; // rax
  unsigned __int64 *v29; // r8
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdi
  __int64 v35; // rax
  unsigned __int64 *v36; // r10
  unsigned __int64 v37; // r11
  __int64 v38; // r9
  unsigned __int64 v39; // rdi
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int8 v42; // al
  unsigned __int8 v43; // cl
  int v44; // edx
  char v45; // [rsp+20h] [rbp-88h]
  __int64 v46; // [rsp+28h] [rbp-80h] BYREF
  __int64 v47; // [rsp+30h] [rbp-78h] BYREF
  __int64 v48; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v49[4]; // [rsp+40h] [rbp-68h] BYREF

  v6 = (volatile signed __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = 0xFFFFF6FB7DBED000uLL;
  v8 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = 0;
    v10 = MI_GET_PAGE_FRAME_FROM_PTE(v6);
    v11 = v45;
    v13 = (_BYTE *)(v12 + 48 * v10);
    v14 = (*v13 >> 1) & 7;
    if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
      goto LABEL_25;
LABEL_12:
    if ( a2 >= 0xFFFFF68000000000uLL && a2 <= v8 )
      goto LABEL_23;
    v17 = (__int64 *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    PteShadow = *v17;
    if ( (unsigned __int64)v17 >= v7 && (unsigned __int64)v17 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, *v17);
    v46 = PteShadow;
    v19 = (__int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v46) - 0x58000000000LL);
    v20 = *v19;
    v21 = (unsigned __int64)*v19 >> 4;
    if ( (v21 & 0x3FF) == 0 )
      goto LABEL_23;
    v22 = (v20 >> 14) & 7;
    if ( v14 == v22 )
    {
      v23 = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)(16 * (v21 - 1))) & 0x3FF0;
    }
    else
    {
      if ( v14 <= v22 )
        goto LABEL_23;
      v23 = v20 ^ ((unsigned int)v20 ^ (v14 << 14)) & 0x1C000 | 0x3FF0;
    }
    *v19 = v23;
LABEL_23:
    --*(_QWORD *)(a1 + 8LL * v14 + 40);
    if ( v14 == 7 )
    {
      MiVolunteerForTrimFirst(a1, -1LL);
      v7 = 0xFFFFF6FB7DBED000uLL;
    }
    goto LABEL_25;
  }
  v15 = *v6;
  v9 = 1;
  v13 = 0LL;
  if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
    v15 = MiReadPteShadow(v6, *v6);
  if ( (v15 & 1) != 0 )
    v16 = HIBYTE(v15) & 0xF | (16 * ((v15 >> 60) & 7));
  else
    v16 = 10;
  v11 = v16;
  v14 = v16 & 0xF;
  if ( v14 != 8 )
    goto LABEL_12;
LABEL_25:
  if ( (unsigned __int8)(a3 - 1) <= 5u )
  {
    v24 = *v6;
    if ( (unsigned __int64)v6 >= v7 && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
      LOBYTE(v24) = MiReadPteShadow(v6, *v6);
    if ( (v24 & 0x20) != 0 && (a2 > 0x7FFFFFFEFFFFLL || (*(_BYTE *)(a1 + 192) & 7) != 0 || !*(_QWORD *)(a1 + 584)) )
      a3 = 0;
  }
  if ( v13 )
  {
    result = (*(_DWORD *)v13 ^ (2 * a3)) & 0xE;
    *(_QWORD *)v13 ^= result;
  }
  else
  {
    result = *v6;
    do
    {
      v26 = result;
      result = _InterlockedCompareExchange64(
                 v6,
                 ((unsigned __int64)((((unsigned __int8)v11 ^ a3) & 0xF ^ (unsigned __int8)v11) & 0x7F) << 56) | result & 0x80FFFFFFFFFFFFFFuLL,
                 result);
    }
    while ( v26 != result );
  }
  if ( a3 < 8u )
  {
    if ( !v9 && (*(_BYTE *)(a1 + 192) & 7) != 0 )
      return result;
    if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_52;
    v27 = (__int64 *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v28 = *v27;
    if ( (unsigned __int64)v27 >= v7 && (unsigned __int64)v27 <= 0xFFFFF6FB7DBED7F8uLL )
      v28 = MiReadPteShadow(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, *v27);
    v47 = v28;
    v29 = (unsigned __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v47) - 0x58000000000LL);
    v30 = *v29;
    v31 = *v29 >> 4;
    if ( (v31 & 0x3FF) == 0 )
      goto LABEL_52;
    v32 = (v30 >> 14) & 7;
    if ( a3 == v32 )
    {
      v33 = v30 ^ ((unsigned __int16)v30 ^ (unsigned __int16)(16 * (v31 + 1))) & 0x3FF0;
    }
    else
    {
      if ( a3 <= v32 )
        goto LABEL_52;
      v33 = v30 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)(a3 & 7) << 14) | 0x10;
    }
    *v29 = v33;
LABEL_52:
    result = a3;
    ++*(_QWORD *)(a1 + 8LL * a3 + 40);
    if ( a3 == 7 )
      result = MiVolunteerForTrimFirst(a1, 1LL);
  }
  if ( v9 )
  {
    v34 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v35 = *(_QWORD *)v34;
    if ( v34 >= 0xFFFFF6FB7DBED000uLL && v34 <= 0xFFFFF6FB7DBED7F8uLL )
      v35 = MiReadPteShadow(v34, *(_QWORD *)v34);
    v48 = v35;
    v36 = (unsigned __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v48) - 0x58000000000LL);
    result = (unsigned __int64)*(unsigned int *)v36 >> 4;
    if ( (result & 0x3FF) == 0 )
    {
      v38 = 0LL;
      v39 = (__int64)(v34 << 25) >> 16;
      memset(v49, 0, sizeof(v49));
      do
      {
        v40 = *(_QWORD *)v39;
        v41 = v37;
        if ( v39 >= v37 )
        {
          v41 = 0xFFFFF6FB7DBED7F8uLL;
          if ( v39 <= 0xFFFFF6FB7DBED7F8uLL )
            LOBYTE(v40) = MiReadPteShadow(v39, *(_QWORD *)v39);
        }
        if ( (v40 & 1) != 0 )
        {
          v42 = MiGetWsleContents(v41, (__int64)((v39 << 25) - v38) >> 16) & 0xF;
          if ( (unsigned __int8)(v42 - 8) > 2u )
            ++*((_DWORD *)v49 + v42);
        }
        v39 += 8LL;
      }
      while ( (v39 & 0xFFF) != 0 );
      v43 = 8;
      while ( 1 )
      {
        result = --v43;
        v44 = *((_DWORD *)v49 + v43);
        if ( v44 )
          break;
        if ( !v43 )
          return result;
      }
      result = *v36 & 0xFFFFFFFFFFFE000FuLL;
      *v36 = result | (16 * (v44 & 0x3FF | ((unsigned __int64)(v43 & 7) << 10)));
    }
  }
  return result;
}
