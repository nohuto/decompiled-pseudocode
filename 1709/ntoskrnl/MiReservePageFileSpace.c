/*
 * XREFs of MiReservePageFileSpace @ 0x14005CBF4
 * Callers:
 *     MiWsleFlush @ 0x140052AC0 (MiWsleFlush.c)
 *     MiFillNoReservationCluster @ 0x140225384 (MiFillNoReservationCluster.c)
 * Callees:
 *     MiReservePageFileSpaceForPage @ 0x14005CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiFindFreePageFileSpace @ 0x14011A4C4 (MiFindFreePageFileSpace.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14011B680 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MiGetPageFileSectionForReservation @ 0x140226494 (MiGetPageFileSectionForReservation.c)
 *     MiReleasePageFileSectionInfo @ 0x140226CE0 (MiReleasePageFileSectionInfo.c)
 */

__int64 __fastcall MiReservePageFileSpace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r12
  unsigned int v5; // ebx
  signed __int32 v6; // esi
  __int64 v7; // rdi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // r10
  unsigned __int64 v12; // r14
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  unsigned int v15; // eax
  __int64 v16; // r14
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // r14
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rdi
  unsigned __int64 v23; // r13
  int v24; // esi
  __int64 v25; // r8
  unsigned __int64 v26; // r13
  __int64 v27; // r15
  unsigned int v28; // r13d
  __int64 v29; // r9
  unsigned int v30; // r14d
  __int64 PteTimeStamp; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rdi
  int v37; // r9d
  int FreePageFileSpace; // eax
  int v39; // edx
  unsigned int v40; // r14d
  int v41; // r14d
  unsigned __int64 v42; // rsi
  unsigned int v43; // ebx
  unsigned __int64 i; // r12
  int v45; // eax
  __int64 v46; // rdi
  __int64 v47; // rax
  signed __int32 v48; // [rsp+20h] [rbp-48h]
  int v49; // [rsp+24h] [rbp-44h]
  __int64 v50; // [rsp+28h] [rbp-40h] BYREF
  __int64 v51; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v52[16]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v53; // [rsp+48h] [rbp-20h]
  unsigned __int64 v54; // [rsp+50h] [rbp-18h]
  __int64 v57; // [rsp+C0h] [rbp+58h]
  __int64 updated; // [rsp+C8h] [rbp+60h] BYREF

  v57 = a3;
  result = *(unsigned int *)(a1 + 856);
  v4 = a2;
  v48 = *(_DWORD *)(a1 + 856);
  v5 = v48 & 0x3FF;
  v6 = v48;
  if ( v5 >= 0x10 )
  {
    v7 = 0LL;
    v49 = 0;
    if ( !a3 )
    {
      result = MiGetPageFileSectionForReservation(a2, v52, 1LL);
      if ( !(_DWORD)result )
        return result;
      v8 = v53;
      v9 = v54;
      v49 = 1;
      goto LABEL_17;
    }
    if ( (*(_BYTE *)(a3 + 192) & 7) != 0 )
    {
      v8 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v9 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      goto LABEL_18;
    }
    v10 = a2 << 25 >> 16;
    result = MiLocateAddress(v10);
    v7 = result;
    if ( result )
    {
      result = *(unsigned int *)(result + 48);
      if ( (result & 0x80000) == 0 && (result & 0x8000) != 0 && (result & 7) == 0 )
      {
        v12 = v10 & 0xFFFFFFFFFFE00000uLL;
        if ( v12 >= (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12 )
          v13 = (v12 >> 9) & 0x7FFFFFFFF8LL;
        else
          v13 = 8
              * ((*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) & 0xFFFFFFFFFLL);
        v8 = v13 + v11;
        v14 = v12 + 2093056;
        if ( v14 <= (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12 )
          v9 = v11 + ((v14 >> 9) & 0x7FFFFFFFF8LL);
        else
          v9 = v11
             + 8
             * ((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) & 0xFFFFFFFFFLL);
LABEL_17:
        a3 = v57;
LABEL_18:
        v15 = ((__int64)(v9 - v8) >> 3) + 1;
        if ( v15 > v5 )
        {
          v16 = (__int64)(v9 - v4) >> 3;
          v17 = (__int64)(v4 - v8) >> 3;
          v18 = v15 - v5;
          if ( (unsigned int)v16 < v18 )
          {
            v20 = v18 - v16;
            v19 = 0LL;
            LODWORD(v17) = v17 - v20;
          }
          else
          {
            v19 = (unsigned int)v16 - v18;
          }
          v9 = v4 + 8 * v19;
          v8 = v4 - 8LL * (unsigned int)v17;
        }
        v21 = a3 != 0 ? 129 : 1;
        if ( v7 && *(int *)(v7 + 52) < 0 )
          v21 |= (*(_DWORD *)(v7 + 48) & 0xF8 | 4u) >> 1;
        v22 = 0LL;
        v23 = v4 - 8;
        LODWORD(updated) = 0;
        v50 = 0LL;
        if ( v4 - 8 >= v8 )
        {
          v24 = updated;
          do
          {
            if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v23, v21, &v50) )
              break;
            ++v24;
            v23 -= 8LL;
          }
          while ( v23 >= v8 );
          v22 = v50;
          v4 = a2;
          LODWORD(updated) = v24;
          v6 = v48;
        }
        v25 = 0LL;
        v26 = v4 + 8;
        v27 = 0LL;
        v51 = 0LL;
        if ( v4 + 8 <= v9 )
        {
          do
          {
            if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v26, v21, &v51) )
              break;
            v27 = (unsigned int)(v27 + 1);
            v26 += 8LL;
          }
          while ( v26 <= v9 );
          v25 = v51;
          v4 = a2;
        }
        v28 = updated;
        v29 = 0LL;
        v30 = v27 + updated + 1;
        if ( v22 )
        {
          PteTimeStamp = MiGetPteTimeStamp(v22);
          v32 = v22;
          v33 = PteTimeStamp + 1;
        }
        else
        {
          if ( !v25 || (v34 = MiGetPteTimeStamp(v25), v30 >= v34) )
          {
            updated &= v29;
LABEL_42:
            v36 = a1;
            result = MI_IS_PTE_IN_WS_SWAP_SET(a1, &updated);
            if ( (_DWORD)result )
            {
              updated = 0LL;
              v37 = 16;
            }
            if ( v30 == 1 )
            {
              if ( v37 )
                goto LABEL_56;
              v37 = 64;
            }
            FreePageFileSpace = MiFindFreePageFileSpace(a1, &updated, v30, v37 | 1u);
            v39 = FreePageFileSpace;
            if ( FreePageFileSpace == v30 )
              goto LABEL_52;
            result = (unsigned int)_InterlockedCompareExchange(
                                     (volatile signed __int32 *)(a1 + 856),
                                     v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)FreePageFileSpace) & 0x3FF,
                                     v6);
            if ( v39 )
            {
              v40 = v30 - v39;
              if ( (unsigned int)v27 < v40 )
              {
                v41 = v40 - v27;
                v27 = 0LL;
                v28 -= v41;
              }
              else
              {
                v27 = (unsigned int)v27 - v40;
              }
LABEL_52:
              v42 = v4 + 8 * v27;
              result = 8LL * v28;
              v43 = v21 & 0xFFFFFFFE;
              for ( i = v4 - result; i <= v42; updated = result )
              {
                v45 = MiReservePageFileSpaceForPage(v36, i, v43, &updated);
                v46 = updated;
                if ( !v45 )
                  MiReleasePageFileInfo(a1, updated, v57 != 0);
                v47 = MiGetPteTimeStamp(v46);
                result = MiUpdatePageFileHighInPte(v46, v47 + 1);
                v36 = a1;
                i += 8LL;
              }
            }
LABEL_56:
            if ( v49 )
              return MiReleasePageFileSectionInfo(v52);
            return result;
          }
          v32 = v35;
          v33 = v34 - v30;
        }
        updated = MiUpdatePageFileHighInPte(v32, v33);
        goto LABEL_42;
      }
    }
  }
  return result;
}
