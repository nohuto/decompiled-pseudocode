/*
 * XREFs of MiProbeLeafFrame @ 0x1400B44D0
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1400266C0 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x1400B2BF0 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockPages @ 0x1400B3C60 (MiProbeAndLockPages.c)
 * Callees:
 *     MiUnlockProbePacketWorkingSet @ 0x140026948 (MiUnlockProbePacketWorkingSet.c)
 *     MiLockProbePacketWorkingSet @ 0x14002A578 (MiLockProbePacketWorkingSet.c)
 *     MiCanPageMove @ 0x14007507C (MiCanPageMove.c)
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     MiVaToPfn @ 0x1400B2D70 (MiVaToPfn.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiClearPfnImageVerified @ 0x1400C7700 (MiClearPfnImageVerified.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiSplitDriverPage @ 0x14020D2B4 (MiSplitDriverPage.c)
 *     MiDeliverPicoExceptionForProbedPage @ 0x14020E504 (MiDeliverPicoExceptionForProbedPage.c)
 *     MiSplitReducedCommitClonePage @ 0x14020E7A4 (MiSplitReducedCommitClonePage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiProbeLeafFrame(__int64 a1)
{
  unsigned __int64 v1; // r15
  unsigned int v2; // r12d
  unsigned __int64 v4; // r13
  unsigned int v5; // ebp
  unsigned int v6; // r9d
  __int16 v7; // ax
  __int64 v8; // rdx
  int v9; // r9d
  __int64 v10; // rbx
  unsigned __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // r10
  unsigned int v14; // r11d
  unsigned __int64 v15; // r14
  _QWORD *v16; // rcx
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // rcx
  _QWORD *CloneAddress; // rax
  __int64 v23; // rcx
  int v24; // ebx
  ULONG_PTR v25; // r10
  unsigned __int64 v26; // rax
  bool v27; // zf
  unsigned __int64 v28; // rbx
  unsigned __int64 i; // r9
  __int64 v30; // r11
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r9
  __int64 v36; // r10
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  __int64 v39; // r10
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r8
  __int64 v43; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v45[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v46; // [rsp+50h] [rbp-B8h]
  _QWORD *v47; // [rsp+58h] [rbp-B0h]
  __int64 v48; // [rsp+60h] [rbp-A8h]
  __int64 v49; // [rsp+68h] [rbp-A0h]
  __int64 v50; // [rsp+70h] [rbp-98h]
  unsigned __int64 v51; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v52; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v53; // [rsp+C0h] [rbp-48h]
  __int64 v54; // [rsp+C8h] [rbp-40h]

  v1 = *(_QWORD *)a1;
  v2 = *(_DWORD *)(a1 + 72);
  v4 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v51 = v4;
  v52 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v53 = ((v52 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v54 = ((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = 3;
        do
        {
          v7 = MI_READ_PTE_LOCK_FREE(*(&v51 + v6));
          if ( (v7 & 1) == 0 )
            goto LABEL_77;
          if ( (v7 & 0x80u) != 0 )
          {
            if ( v2 != 1 || (v7 & 0x800) != 0 )
            {
              *(_QWORD *)(a1 + 112) = MiVaToPfn(v1);
              return 0LL;
            }
            ++dword_14036C9D4;
            return 3221225477LL;
          }
          v6 = v9 - 1;
        }
        while ( v6 );
        if ( *(_BYTE *)(a1 + 53) )
        {
          v10 = *(_QWORD *)v4;
          v4 = v51;
        }
        else
        {
          v10 = MI_READ_PTE_LOCK_FREE(v4);
        }
        v43 = v10;
        if ( (v10 & 1) == 0 )
          goto LABEL_77;
        if ( (v10 & 4) == 0 && *(_DWORD *)(a1 + 48) == 1 )
        {
          ++dword_14036C9D8;
          return 3221225477LL;
        }
        v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v43) >> 12) & 0xFFFFFFFFFLL;
        if ( v15 > qword_14036C290
          || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v15 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
        {
          v17 = 0LL;
        }
        else
        {
          v16 = (_QWORD *)qword_14036C298;
          v17 = 48 * v15 - 0x58000000000LL;
          if ( qword_14036C298 )
          {
            if ( ((*(_QWORD *)(v17 + 40) >> 54) & 7) == 1 )
            {
              v18 = (__int64)(48 * v15) / 48;
              if ( qword_14036C298 )
              {
                do
                {
                  v11 = v16[3];
                  if ( v18 < v11 )
                  {
                    v16 = (_QWORD *)*v16;
                  }
                  else
                  {
                    if ( v18 - v11 < v16[4] )
                    {
                      ++dword_14036CA04;
                      return 3221225477LL;
                    }
                    v16 = (_QWORD *)v16[1];
                  }
                }
                while ( v16 );
              }
            }
          }
        }
        v8 = 0LL;
        if ( v12 == 5 && (unsigned int)MiGetSystemRegionType(v1) == 12 )
          v8 = v14;
        if ( v2 == 3 )
          break;
        if ( v2 )
          goto LABEL_33;
        if ( !(_DWORD)v8 )
          goto LABEL_61;
        if ( !v17 )
          goto LABEL_97;
        if ( (v13 & *(_QWORD *)(v17 + 40)) == 0
          || (unsigned int)MiCanPageMove(v17) != 1 && (unsigned int)MiIsPfnFileOnly(v17) != 1 )
        {
          goto LABEL_61;
        }
        if ( *(_BYTE *)(a1 + 55) )
        {
          result = MiSplitDriverPage(v4, *(unsigned __int8 *)(a1 + 52));
          v13 = 0x200000000000000LL;
          v14 = 1;
          if ( (int)result < 0 )
          {
            if ( (_DWORD)result != -1073741799 )
            {
              ++dword_14036CA00;
              return result;
            }
            goto LABEL_61;
          }
        }
        else
        {
LABEL_58:
          MiUnlockProbePacketWorkingSet(a1, v8);
          *(_BYTE *)(a1 + 55) = 1;
          MiLockProbePacketWorkingSet(a1);
        }
      }
      if ( v1 > 0x7FFFFFFEFFFFLL )
        return 3221225477LL;
      if ( v10 < 0 && (v10 & 0x800) != 0 )
        return 3221225496LL;
LABEL_33:
      if ( (v10 & 0x800) == 0 )
        break;
      if ( (v10 & 0x42) == 0 && v12 == 1 && (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 772LL) & 0x8000) != 0 )
      {
        MiUnlockProbePacketWorkingSet(a1, v8);
        v24 = MmAccessFault(2uLL, v1);
        MiLockProbePacketWorkingSet(a1);
        if ( v24 < 0 )
        {
          ++dword_14036C9D0;
          return (unsigned int)v24;
        }
      }
      else
      {
LABEL_61:
        if ( !v17 )
          goto LABEL_97;
        if ( ((*(_QWORD *)(v17 + 40) >> 54) & 7) == 1 || *(__int64 *)(v17 + 8) < 0 )
        {
          if ( v2 )
            goto LABEL_97;
          if ( (*(_QWORD *)(v17 + 40) & v13) == 0 )
            goto LABEL_97;
          v21 = *(_QWORD *)(a1 + 64);
          if ( !v21 )
            goto LABEL_97;
          if ( !*(_BYTE *)(a1 + 54) )
            goto LABEL_97;
          CloneAddress = MiLocateCloneAddress(v21, *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL);
          if ( !CloneAddress )
            goto LABEL_97;
          if ( *(_QWORD *)(*(_QWORD *)(v23 + 1296) + 240LL) <= CloneAddress[9] )
            goto LABEL_39;
          result = MiSplitReducedCommitClonePage(a1, &v51);
          if ( (int)result < 0 )
          {
            ++dword_14036C9FC;
            return result;
          }
          v4 = v51;
        }
        else
        {
LABEL_39:
          if ( *(_BYTE *)(a1 + 55) != 1 )
            goto LABEL_58;
          if ( v2 == 3 )
          {
            if ( v10 < 0 )
              return 3221225541LL;
            if ( (v13 & *(_QWORD *)(v17 + 40)) != 0 && (v10 & 0x200) == 0 )
            {
              ++*(_QWORD *)(a1 + 88);
              v5 = v14;
            }
          }
          if ( (unsigned int)MiCopyOnWriteEx(v1, 0) )
          {
            v5 = 0;
          }
          else
          {
            if ( v5 )
              --*(_QWORD *)(a1 + 88);
            if ( *(_BYTE *)(a1 + 52) == 2 || (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 1740LL) & 0xC) != 0 )
            {
              ++dword_14036CA00;
              return 3221225495LL;
            }
            v5 = 0;
          }
        }
      }
    }
    if ( v2 == 3 || v12 == 5 && (_DWORD)v8 )
      break;
LABEL_77:
    MiUnlockProbePacketWorkingSet(a1, v8);
    v46 = 2;
    v1 = (__int64)(v4 << 25) >> 16;
    v25 = 0LL;
    v26 = *(_QWORD *)(a1 + 8) - v1;
    v45[0] = v1;
    v45[1] = v26;
    v47 = v45;
    v48 = 1LL;
    v49 = 0LL;
    v50 = 0LL;
    if ( v2 )
    {
      v25 = 2LL;
      if ( v2 == 3 )
      {
        v25 = 0LL;
      }
      else if ( *(_DWORD *)(a1 + 48) == 5 && (unsigned int)MiGetSystemRegionType((__int64)(v4 << 25) >> 16) == 12 )
      {
        v25 = 0LL;
      }
    }
    v24 = MmAccessFault(v25, (__int64)(v4 << 25) >> 16);
    if ( v24 < 0 && *(_DWORD *)(a1 + 48) == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1808LL) )
      v24 = MiDeliverPicoExceptionForProbedPage((__int64)(v4 << 25) >> 16, v2);
    MiLockProbePacketWorkingSet(a1);
    if ( v24 < 0 )
    {
      ++dword_14036C9CC;
      return (unsigned int)v24;
    }
  }
  if ( !v17 )
    goto LABEL_39;
  v19 = *(_QWORD *)(v17 + 40);
  if ( (v19 & v13) != 0 )
    goto LABEL_39;
  if ( (MiFlags & 0x8000) != 0 && ((v19 >> 54) & 7) == 3 )
    MiClearPfnImageVerified(v17, 8LL, v11);
LABEL_97:
  v27 = *(_DWORD *)(a1 + 48) == 1;
  *(_QWORD *)(a1 + 112) = v15;
  if ( v27 && !*(_BYTE *)(a1 + 53) && v17 && v2 != 3 )
  {
    *(_QWORD *)(a1 + 128) = 0LL;
    v28 = v10 & 0xF0FF000000000FFFuLL;
    for ( i = v4 + 8; (i & 0xFFF) != 0; i = v35 + 8 )
    {
      if ( i > *(_QWORD *)(a1 + 24) )
        break;
      v44 = MI_READ_PTE_LOCK_FREE(i);
      if ( (v30 & v44) != v28 )
        break;
      v31 = MI_GET_PAGE_FRAME_FROM_PTE(&v44);
      if ( !(unsigned int)MiIsPfnInline(v31, v32, v33, v34) )
        break;
      v37 = 48 * v36;
      v38 = (_QWORD *)qword_14036C298;
      v39 = 48 * v36 - 0x58000000000LL;
      if ( qword_14036C298 )
      {
        if ( ((*(_QWORD *)(v39 + 40) >> 54) & 7) == 1 )
        {
          v40 = (__int64)((unsigned __int128)(v37 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
          v41 = (v40 >> 63) + v40;
          if ( qword_14036C298 )
          {
            do
            {
              v42 = v38[3];
              if ( v41 < v42 )
              {
                v38 = (_QWORD *)*v38;
              }
              else
              {
                if ( v41 - v42 < v38[4] )
                  return 0LL;
                v38 = (_QWORD *)v38[1];
              }
            }
            while ( v38 );
          }
        }
      }
      if ( !v2
        && (((*(_QWORD *)(v39 + 40) >> 54) & 7) != 1 && *(__int64 *)(v39 + 8) >= 0
         || (*(_QWORD *)(v39 + 40) & 0x200000000000000LL) != 0 && *(_BYTE *)(a1 + 54)) )
      {
        break;
      }
      ++*(_QWORD *)(a1 + 128);
    }
  }
  return 0LL;
}
