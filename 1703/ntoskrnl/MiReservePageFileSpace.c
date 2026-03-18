/*
 * XREFs of MiReservePageFileSpace @ 0x140104518
 * Callers:
 *     MiFillNoReservationCluster @ 0x14002DC7C (MiFillNoReservationCluster.c)
 *     MiWsleFlush @ 0x1400D7070 (MiWsleFlush.c)
 * Callees:
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400224C0 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiUpdateReserveClusterInfo @ 0x14003C70C (MiUpdateReserveClusterInfo.c)
 *     MiFindFreePageFileSpace @ 0x14007DD54 (MiFindFreePageFileSpace.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiReservePageFileSpaceForPage @ 0x1401048E0 (MiReservePageFileSpaceForPage.c)
 *     MiReleasePageFileSectionInfo @ 0x14013A480 (MiReleasePageFileSectionInfo.c)
 *     MiGetPageFileSectionForReservation @ 0x14013A4BC (MiGetPageFileSectionForReservation.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiReservePageFileSpace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r15
  unsigned __int32 v5; // ebx
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  __int64 v10; // r10
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rsi
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rdi
  unsigned __int64 v22; // r12
  unsigned int v23; // r13d
  __int64 v24; // r8
  unsigned __int64 v25; // r12
  __int64 v26; // r14
  __int64 v27; // r9
  unsigned int v28; // esi
  __int64 PteTimeStamp; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  int v34; // r9d
  int FreePageFileSpace; // eax
  int v36; // r8d
  unsigned int v37; // esi
  int v38; // esi
  unsigned __int64 v39; // rsi
  unsigned int v40; // ebx
  unsigned __int64 i; // r15
  int v42; // eax
  unsigned __int64 v43; // rdi
  __int64 v44; // rax
  int v45; // [rsp+20h] [rbp-58h]
  unsigned __int64 updated; // [rsp+28h] [rbp-50h] BYREF
  __int64 v47; // [rsp+30h] [rbp-48h] BYREF
  __int64 v48; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v49[16]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v50; // [rsp+50h] [rbp-28h]
  unsigned __int64 v51; // [rsp+58h] [rbp-20h]
  __int64 v54; // [rsp+D0h] [rbp+58h]
  signed __int32 v55; // [rsp+D8h] [rbp+60h] BYREF

  v54 = a3;
  result = *(unsigned int *)(a1 + 904);
  v4 = a2;
  v55 = *(_DWORD *)(a1 + 904);
  v5 = v55 & 0x3FF;
  if ( v5 >= 0x10 )
  {
    v6 = 0LL;
    v45 = 0;
    if ( !a3 )
    {
      result = MiGetPageFileSectionForReservation(a2, v49, 1LL);
      if ( !(_DWORD)result )
        return result;
      v7 = v50;
      v8 = v51;
      v45 = 1;
      goto LABEL_17;
    }
    if ( (*(_BYTE *)(a3 + 192) & 7) != 0 )
    {
      v7 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v8 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      goto LABEL_18;
    }
    v9 = a2 << 25 >> 16;
    result = MiLocateAddress(v9);
    v6 = result;
    if ( result )
    {
      result = *(unsigned int *)(result + 48);
      if ( (result & 0x80000) == 0 && (result & 0x8000) != 0 && (result & 7) == 0 )
      {
        v11 = v9 & 0xFFFFFFFFFFE00000uLL;
        if ( v11 >= (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) << 12 )
          v12 = (v11 >> 9) & 0x7FFFFFFFF8LL;
        else
          v12 = 8
              * ((*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) & 0xFFFFFFFFFLL);
        v7 = v12 + v10;
        v13 = v11 + 2093056;
        if ( v13 <= (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) << 12 )
          v8 = v10 + ((v13 >> 9) & 0x7FFFFFFFF8LL);
        else
          v8 = v10
             + 8
             * ((*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) & 0xFFFFFFFFFLL);
LABEL_17:
        a3 = v54;
LABEL_18:
        v14 = ((__int64)(v8 - v7) >> 3) + 1;
        if ( v14 > v5 )
        {
          v15 = (__int64)(v8 - v4) >> 3;
          v16 = (__int64)(v4 - v7) >> 3;
          v17 = v14 - v5;
          if ( (unsigned int)v15 < v17 )
          {
            v19 = v17 - v15;
            v18 = 0LL;
            LODWORD(v16) = v16 - v19;
          }
          else
          {
            v18 = (unsigned int)v15 - v17;
          }
          v8 = v4 + 8 * v18;
          v7 = v4 - 8LL * (unsigned int)v16;
        }
        v20 = a3 != 0 ? 129 : 1;
        if ( v6 && *(_DWORD *)(v6 + 52) >= 0x80000000 )
          v20 |= (*(_DWORD *)(v6 + 48) & 0xF8 | 4u) >> 1;
        v21 = 0LL;
        v22 = v4 - 8;
        v23 = 0;
        v47 = 0LL;
        if ( v4 - 8 >= v7 )
        {
          do
          {
            if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v22, v20, &v47) )
              break;
            ++v23;
            v22 -= 8LL;
          }
          while ( v22 >= v7 );
          v21 = v47;
          v4 = a2;
        }
        v24 = 0LL;
        v25 = v4 + 8;
        v26 = 0LL;
        v48 = 0LL;
        if ( v4 + 8 <= v8 )
        {
          do
          {
            if ( !(unsigned int)MiReservePageFileSpaceForPage(a1, v25, v20, &v48) )
              break;
            v26 = (unsigned int)(v26 + 1);
            v25 += 8LL;
          }
          while ( v25 <= v8 );
          v24 = v48;
          v4 = a2;
        }
        v27 = 0LL;
        v28 = v26 + v23 + 1;
        if ( v21 )
        {
          PteTimeStamp = MiGetPteTimeStamp(v21);
          v30 = v21;
          v31 = PteTimeStamp + 1;
        }
        else
        {
          if ( !v24 || (v32 = MiGetPteTimeStamp(v24), v28 >= v32) )
          {
            updated &= v27;
LABEL_41:
            result = MI_IS_PTE_IN_WS_SWAP_SET(a1, &updated);
            if ( (_DWORD)result )
            {
              updated = 0LL;
              v34 |= 0x10u;
            }
            if ( v28 == 1 )
            {
              if ( v34 )
                goto LABEL_55;
              v34 = 64;
            }
            FreePageFileSpace = MiFindFreePageFileSpace(a1, &updated, v28, v34 | 1u);
            if ( FreePageFileSpace == v28 )
              goto LABEL_51;
            result = MiUpdateReserveClusterInfo(a1, &v55, FreePageFileSpace);
            if ( v36 )
            {
              v37 = v28 - v36;
              if ( (unsigned int)v26 < v37 )
              {
                v38 = v37 - v26;
                v26 = 0LL;
                v23 -= v38;
              }
              else
              {
                v26 = (unsigned int)v26 - v37;
              }
LABEL_51:
              v39 = v4 + 8 * v26;
              result = 8LL * v23;
              v40 = v20 & 0xFFFFFFFE;
              for ( i = v4 - result; i <= v39; updated = result )
              {
                v42 = MiReservePageFileSpaceForPage(a1, i, v40, &updated);
                v43 = updated;
                if ( !v42 )
                  MiReleasePageFileInfo((struct _KEVENT *)a1, updated, v54 != 0);
                v44 = MiGetPteTimeStamp(v43);
                result = MiUpdatePageFileHighInPte(v43, v44 + 1);
                i += 8LL;
              }
            }
LABEL_55:
            if ( v45 )
              return MiReleasePageFileSectionInfo(v49);
            return result;
          }
          v30 = v33;
          v31 = v32 - v28;
        }
        updated = MiUpdatePageFileHighInPte(v30, v31);
        goto LABEL_41;
      }
    }
  }
  return result;
}
