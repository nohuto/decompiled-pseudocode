/*
 * XREFs of MiReservePageFileSpace @ 0x140053430
 * Callers:
 *     MiWsleFlush @ 0x140027EB0 (MiWsleFlush.c)
 *     MiFillNoReservationCluster @ 0x1400BC0FC (MiFillNoReservationCluster.c)
 * Callees:
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiReservePageFileSpaceForPage @ 0x140053840 (MiReservePageFileSpaceForPage.c)
 *     MiFindFreePageFileSpace @ 0x14009CC84 (MiFindFreePageFileSpace.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400B8750 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiReleasePageFileSectionInfo @ 0x140150C04 (MiReleasePageFileSectionInfo.c)
 *     MiGetPageFileSectionForReservation @ 0x140150C40 (MiGetPageFileSectionForReservation.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 */

unsigned __int64 __fastcall MiReservePageFileSpace(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // r12
  unsigned int v5; // ebx
  signed __int32 v6; // esi
  __int64 v7; // r10
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r14
  __int64 v12; // r11
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  unsigned __int64 v15; // r14
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // ebx
  unsigned __int64 v22; // r13
  __int64 v23; // rdi
  int v24; // esi
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r8
  unsigned int v27; // r15d
  unsigned int v28; // r13d
  unsigned int v29; // r14d
  __int64 PteTimeStamp; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rdi
  int v36; // r9d
  __int64 v37; // r10
  int FreePageFileSpace; // eax
  int v39; // edx
  unsigned int v40; // r14d
  unsigned int v41; // r14d
  unsigned int v42; // ebx
  unsigned __int64 v43; // rsi
  unsigned __int64 i; // r12
  int v45; // eax
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 updated; // [rsp+20h] [rbp-58h] BYREF
  int v49; // [rsp+28h] [rbp-50h]
  unsigned __int64 v50; // [rsp+30h] [rbp-48h] BYREF
  __int64 v51; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v52[16]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v53; // [rsp+50h] [rbp-28h]
  unsigned __int64 v54; // [rsp+58h] [rbp-20h]
  __int64 v57; // [rsp+D0h] [rbp+58h]
  signed __int32 v58; // [rsp+D8h] [rbp+60h]

  v57 = a3;
  result = *(unsigned int *)(a1 + 856);
  v4 = a2;
  v58 = *(_DWORD *)(a1 + 856);
  v5 = v58 & 0x3FF;
  v6 = v58;
  if ( v5 >= 0x10 )
  {
    v7 = 0LL;
    v49 = 0;
    v8 = 0LL;
    if ( !a3 )
    {
      result = MiGetPageFileSectionForReservation(a2, v52, 1LL);
      v7 = 0LL;
      if ( !(_DWORD)result )
        return result;
      v9 = v53;
      v10 = v54;
      v49 = 1;
      goto LABEL_17;
    }
    if ( (*(_BYTE *)(a3 + 184) & 7) != 0 )
    {
      v9 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v10 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      goto LABEL_18;
    }
    v11 = a2 << 25 >> 16;
    result = MiLocateAddress(v11);
    v8 = result;
    if ( result )
    {
      result = *(unsigned int *)(result + 48);
      if ( (result & 0x20000000) == 0 && (result & 0x4000) != 0 && (result & 7) == 0 )
      {
        v13 = v11 & 0xFFFFFFFFFFE00000uLL;
        if ( v13 >= (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 12 )
          v14 = (v13 >> 9) & 0x7FFFFFFFF8LL;
        else
          v14 = 8
              * ((*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) & 0xFFFFFFFFFLL);
        v9 = v14 + v12;
        v15 = v13 + 2093056;
        if ( v15 <= (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) << 12 )
          v10 = v12 + ((v15 >> 9) & 0x7FFFFFFFF8LL);
        else
          v10 = v12
              + 8
              * ((*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) & 0xFFFFFFFFFLL);
LABEL_17:
        a3 = v57;
LABEL_18:
        v50 = v10;
        v16 = ((__int64)(v10 - v9) >> 3) + 1;
        if ( v16 > v5 )
        {
          v17 = v16 - v5;
          v18 = (__int64)(v10 - v4) >> 3;
          v19 = (unsigned int)v18 - v17;
          v20 = (__int64)(v4 - v9) >> 3;
          if ( (unsigned int)v18 < v17 )
            LODWORD(v20) = v19 + v20;
          v9 = v4 - 8LL * (unsigned int)v20;
          if ( (unsigned int)v18 < v17 )
            v19 = (unsigned int)v7;
          v10 = v4 + 8 * v19;
          v50 = v10;
        }
        v21 = a3 != 0 ? 129 : 1;
        if ( v8 && *(_DWORD *)(v8 + 52) < (int)v7 )
          v21 |= (*(_DWORD *)(v8 + 48) & 0xF8 | 4u) >> 1;
        v22 = v4 - 8;
        v51 = v7;
        LODWORD(updated) = v7;
        v23 = v7;
        if ( v4 - 8 >= v9 )
        {
          v24 = v7;
          do
          {
            if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v22, v21, &v51) )
              break;
            ++v24;
            v22 -= 8LL;
          }
          while ( v22 >= v9 );
          v23 = v51;
          v7 = 0LL;
          v10 = v50;
          v4 = a2;
          LODWORD(updated) = v24;
          v6 = v58;
        }
        v25 = v4 + 8;
        v50 = v7;
        v26 = v7;
        v27 = v7;
        if ( v4 + 8 <= v10 )
        {
          do
          {
            if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v25, v21, &v50) )
              break;
            ++v27;
            v25 += 8LL;
          }
          while ( v25 <= v10 );
          v26 = v50;
          v7 = 0LL;
          v6 = v58;
          v4 = a2;
        }
        v28 = updated;
        v29 = v27 + updated + 1;
        if ( v23 )
        {
          PteTimeStamp = MiGetPteTimeStamp(v23);
          v31 = v23;
          v32 = PteTimeStamp + 1;
        }
        else
        {
          if ( !v26 || (v33 = MiGetPteTimeStamp(v26), v29 >= v33) )
          {
            updated = v7;
            v34 = 16LL;
LABEL_43:
            v35 = a1;
            result = MI_IS_PTE_IN_WS_SWAP_SET(a1, &updated, v26, v34);
            if ( (_DWORD)result )
            {
              updated = v37;
              v36 = 16;
            }
            if ( v29 == 1 )
            {
              if ( v36 )
                goto LABEL_57;
              v36 = 64;
            }
            FreePageFileSpace = MiFindFreePageFileSpace(a1, &updated, v29, v36 | 1u);
            LODWORD(v37) = 0;
            v39 = FreePageFileSpace;
            if ( FreePageFileSpace == v29 )
              goto LABEL_53;
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)(a1 + 856),
                                     v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)FreePageFileSpace) & 0x3FF,
                                     v6);
            if ( v39 )
            {
              v40 = v29 - v39;
              if ( v27 < v40 )
              {
                v41 = v40 - v27;
                v27 = 0;
                v28 -= v41;
              }
              else
              {
                v27 -= v40;
              }
LABEL_53:
              v42 = v21 & 0xFFFFFFFE;
              v43 = v4 + 8LL * v27;
              result = 8LL * v28;
              for ( i = v4 - result; i <= v43; updated = result )
              {
                v45 = MiReservePageFileSpaceForPage(v35, i, v42, &updated);
                v46 = updated;
                if ( !v45 )
                  MiReleasePageFileInfo(a1, updated, v57 != 0);
                v47 = MiGetPteTimeStamp(v46);
                result = MiUpdatePageFileHighInPte(v46, v47 + 1);
                v35 = a1;
                i += 8LL;
              }
            }
LABEL_57:
            if ( v49 != (_DWORD)v37 )
              return MiReleasePageFileSectionInfo(v52);
            return result;
          }
          v31 = v26;
          v32 = v33 - v29;
        }
        updated = MiUpdatePageFileHighInPte(v31, v32);
        goto LABEL_43;
      }
    }
  }
  return result;
}
