/*
 * XREFs of MiProbeLeafFrame @ 0x1400BE690
 * Callers:
 *     MiProbeAndLockPages @ 0x1400BDA70 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140100140 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x14022DB24 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiClearPfnImageVerified @ 0x140050290 (MiClearPfnImageVerified.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiVaToPfn @ 0x1400C00C4 (MiVaToPfn.c)
 *     MiCanPageMove @ 0x1400CB2A0 (MiCanPageMove.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14010030C (MiUnlockProbePacketWorkingSet.c)
 *     MiLockProbePacketWorkingSet @ 0x140125258 (MiLockProbePacketWorkingSet.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiSplitDriverPage @ 0x140214314 (MiSplitDriverPage.c)
 *     MiDeliverPicoExceptionForProbedPage @ 0x140215C80 (MiDeliverPicoExceptionForProbedPage.c)
 *     MiSplitReducedCommitClonePage @ 0x140215F00 (MiSplitReducedCommitClonePage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiProbeLeafFrame(__int64 a1)
{
  unsigned __int64 v1; // r14
  unsigned int v2; // r13d
  unsigned __int64 v4; // r12
  unsigned int v5; // ebp
  unsigned __int64 v6; // r10
  unsigned int v7; // r9d
  _QWORD *v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 PteShadow; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  unsigned int v14; // r11d
  unsigned __int64 v15; // r15
  _QWORD *v16; // rcx
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  bool v22; // zf
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // r9
  _QWORD *v29; // rcx
  __int64 v30; // r10
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  __int64 result; // rax
  __int64 v34; // rcx
  __int64 CloneAddress; // rax
  __int64 v36; // rcx
  int v37; // ebx
  int v38; // eax
  char *v39; // r9
  ULONG_PTR v40; // r10
  unsigned __int64 v41; // rax
  __int64 v42; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v44[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v45; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v46; // [rsp+58h] [rbp-B0h]
  __int64 v47; // [rsp+60h] [rbp-A8h]
  __int64 v48; // [rsp+68h] [rbp-A0h]
  __int64 v49; // [rsp+70h] [rbp-98h]
  unsigned __int64 v50; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v51; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v52; // [rsp+C0h] [rbp-48h]
  __int64 v53; // [rsp+C8h] [rbp-40h]

  v1 = *(_QWORD *)a1;
  v2 = *(_DWORD *)(a1 + 72);
  v4 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v50 = v4;
  v51 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v52 = ((v51 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v53 = ((v52 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 0;
LABEL_2:
  while ( 2 )
  {
    v6 = 0xFFFFF6FB7DBED000uLL;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = 3;
        do
        {
          v8 = (_QWORD *)*(&v50 + v7);
          v9 = *v8;
          v10 = v6;
          if ( (unsigned __int64)v8 >= v6 )
          {
            v10 = 0xFFFFF6FB7DBED7F8uLL;
            if ( (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
              LOWORD(v9) = MiReadPteShadow(v8, *v8);
          }
          if ( (v9 & 1) == 0 )
            goto LABEL_109;
          if ( (v9 & 0x80u) != 0LL )
          {
            if ( v2 == 1 && (v9 & 0x800) == 0 )
            {
              ++dword_140388BCC;
              return 3221225477LL;
            }
            *(_QWORD *)(a1 + 112) = MiVaToPfn(v1);
            return 0LL;
          }
          --v7;
        }
        while ( v7 );
        PteShadow = *(_QWORD *)v4;
        if ( *(_BYTE *)(a1 + 53) )
        {
          v4 = v50;
        }
        else if ( v4 >= v6 && v4 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          PteShadow = MiReadPteShadow(v4, *(_QWORD *)v4);
        }
        v42 = PteShadow;
        if ( (PteShadow & 1) == 0 )
        {
LABEL_109:
          MiUnlockProbePacketWorkingSet(a1, v10);
          v45 = 2;
          v39 = (char *)&v45 + 1;
          v1 = (__int64)(v4 << 25) >> 16;
          v40 = 0LL;
          v41 = *(_QWORD *)(a1 + 8) - v1;
          v44[0] = v1;
          v44[1] = v41;
          v46 = v44;
          v47 = 1LL;
          v48 = 0LL;
          v49 = 0LL;
          if ( v2 )
          {
            v40 = 2LL;
            if ( v2 == 3 )
            {
              v40 = 0LL;
            }
            else if ( *(_DWORD *)(a1 + 48) == 5 && (unsigned int)MiGetSystemRegionType((__int64)(v4 << 25) >> 16) == 12 )
            {
              v40 = 0LL;
            }
          }
          v37 = MmAccessFault(v40, (__int64)(v4 << 25) >> 16, 0LL, (ULONG_PTR)v39);
          if ( v37 < 0 && *(_DWORD *)(a1 + 48) == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1808LL) )
            v37 = MiDeliverPicoExceptionForProbedPage((__int64)(v4 << 25) >> 16, v2);
          MiLockProbePacketWorkingSet(a1);
          if ( v37 < 0 )
          {
            ++dword_140388BC4;
            return (unsigned int)v37;
          }
          goto LABEL_2;
        }
        if ( (PteShadow & 4) == 0 && *(_DWORD *)(a1 + 48) == 1 )
        {
          ++dword_140388BD0;
          return 3221225477LL;
        }
        v12 = MI_GET_PAGE_FRAME_FROM_PTE(&v42);
        v15 = v12;
        if ( v12 > qword_1403885E0
          || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v12 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
        {
          v17 = 0LL;
        }
        else
        {
          v16 = (_QWORD *)qword_1403885E8;
          v17 = 48 * v12 - 0x58000000000LL;
          if ( qword_1403885E8 )
          {
            if ( ((*(_QWORD *)(v17 + 40) >> 54) & 7) == 1 )
            {
              v18 = (__int64)(48 * v12) / 48;
              if ( qword_1403885E8 )
              {
                do
                {
                  v19 = v16[3];
                  if ( v18 < v19 )
                  {
                    v16 = (_QWORD *)*v16;
                  }
                  else
                  {
                    if ( v18 - v19 < v16[4] )
                    {
                      ++dword_140388BFC;
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
        v10 = 0LL;
        if ( (_DWORD)v13 == 5 && (unsigned int)MiGetSystemRegionType(v1) == 12 )
          v10 = v14;
        if ( v2 == 3 )
          break;
        if ( v2 )
          goto LABEL_39;
        if ( !(_DWORD)v10 )
          goto LABEL_78;
        if ( !v17 )
          goto LABEL_48;
        if ( (*(_QWORD *)(v17 + 40) & 0x200000000000000LL) == 0
          || (unsigned int)MiCanPageMove(v17) != 1 && (unsigned int)MiIsPfnFileOnly(v17) != 1 )
        {
          goto LABEL_78;
        }
        if ( !*(_BYTE *)(a1 + 55) )
          goto LABEL_75;
        result = MiSplitDriverPage(v4, *(unsigned __int8 *)(a1 + 52));
        v14 = 1;
        v6 = 0xFFFFF6FB7DBED000uLL;
        if ( (int)result < 0 )
        {
          if ( (_DWORD)result != -1073741799 )
          {
            ++dword_140388BF8;
            return result;
          }
LABEL_78:
          if ( v17 )
          {
            if ( ((*(_QWORD *)(v17 + 40) >> 54) & 7) != 1 && *(__int64 *)(v17 + 8) >= 0 )
              goto LABEL_96;
            if ( !v2 && (*(_QWORD *)(v17 + 40) & 0x200000000000000LL) != 0 )
            {
              v34 = *(_QWORD *)(a1 + 64);
              if ( v34 )
              {
                if ( *(_BYTE *)(a1 + 54) )
                {
                  CloneAddress = MiLocateCloneAddress(
                                   v34,
                                   *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL,
                                   0x8000000000000000uLL,
                                   v13);
                  if ( CloneAddress )
                  {
                    if ( *(_QWORD *)(*(_QWORD *)(v36 + 1296) + 240LL) > *(_QWORD *)(CloneAddress + 72) )
                    {
                      result = MiSplitReducedCommitClonePage(a1, &v50);
                      if ( (int)result >= 0 )
                      {
                        v4 = v50;
                        goto LABEL_2;
                      }
                      ++dword_140388BF4;
                      return result;
                    }
LABEL_96:
                    v20 = 0x200000000000000LL;
                    goto LABEL_97;
                  }
                }
              }
            }
          }
LABEL_48:
          v22 = *(_DWORD *)(a1 + 48) == 1;
          *(_QWORD *)(a1 + 112) = v15;
          if ( v22 && !*(_BYTE *)(a1 + 53) && v17 && v2 != 3 )
          {
            v23 = 0xF0FF000000000FFFuLL;
            *(_QWORD *)(a1 + 128) = 0LL;
            v24 = v4 + 8;
            v25 = PteShadow & 0xF0FF000000000FFFuLL;
            while ( (v24 & 0xFFF) != 0 && v24 <= *(_QWORD *)(a1 + 24) )
            {
              v26 = *(_QWORD *)v24;
              if ( v24 >= 0xFFFFF6FB7DBED000uLL && v24 <= 0xFFFFF6FB7DBED7F8uLL )
                v26 = MiReadPteShadow(v24, *(_QWORD *)v24);
              v43 = v26;
              if ( (v23 & v26) != v25 )
                break;
              v27 = MI_GET_PAGE_FRAME_FROM_PTE(&v43);
              if ( v27 > qword_1403885E0
                || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v27 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
              {
                break;
              }
              v29 = (_QWORD *)qword_1403885E8;
              v30 = 48 * v27 - 0x58000000000LL;
              if ( qword_1403885E8 )
              {
                if ( ((*(_QWORD *)(v30 + 40) >> 54) & 7) == 1 )
                {
                  v31 = (__int64)(48 * v27) / 48;
                  if ( qword_1403885E8 )
                  {
                    do
                    {
                      v32 = v29[3];
                      if ( v31 < v32 )
                      {
                        v29 = (_QWORD *)*v29;
                      }
                      else
                      {
                        if ( v31 - v32 < v29[4] )
                          return 0LL;
                        v29 = (_QWORD *)v29[1];
                      }
                    }
                    while ( v29 );
                  }
                }
              }
              if ( !v2
                && (((*(_QWORD *)(v30 + 40) >> 54) & 7) != 1 && *(__int64 *)(v30 + 8) >= 0
                 || (*(_QWORD *)(v30 + 40) & 0x200000000000000LL) != 0 && *(_BYTE *)(a1 + 54)) )
              {
                break;
              }
              ++*(_QWORD *)(a1 + 128);
              v24 = v28 + 8;
            }
          }
          return 0LL;
        }
      }
      if ( v1 > 0x7FFFFFFEFFFFLL )
        return 3221225477LL;
      if ( PteShadow < 0 && (PteShadow & 0x800) != 0 )
        return 3221225496LL;
LABEL_39:
      if ( (PteShadow & 0x800) != 0 )
      {
        if ( (PteShadow & 0x42) != 0
          || (_DWORD)v13 != 1
          || (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 772LL) & 0x8000) == 0 && PteShadow < 0 )
        {
          goto LABEL_78;
        }
        MiUnlockProbePacketWorkingSet(a1, v10);
        v37 = MmAccessFault(2uLL, v1, 0LL, 0LL);
        MiLockProbePacketWorkingSet(a1);
        if ( v37 >= 0 )
          goto LABEL_2;
        ++dword_140388BC8;
        return (unsigned int)v37;
      }
      if ( v2 != 3 && ((_DWORD)v13 != 5 || !(_DWORD)v10) )
        goto LABEL_109;
      v20 = 0x200000000000000LL;
      if ( v17 )
      {
        v21 = *(_QWORD *)(v17 + 40);
        if ( (v21 & 0x200000000000000LL) == 0 )
        {
          if ( (MiFlags & 0x8000) != 0 && ((v21 >> 54) & 7) == 3 )
            MiClearPfnImageVerified(v17, 8);
          goto LABEL_48;
        }
      }
LABEL_97:
      if ( *(_BYTE *)(a1 + 55) != 1 )
      {
LABEL_75:
        MiUnlockProbePacketWorkingSet(a1, v20);
        *(_BYTE *)(a1 + 55) = 1;
        MiLockProbePacketWorkingSet(a1);
        goto LABEL_2;
      }
      if ( v2 != 3 )
        goto LABEL_103;
      if ( PteShadow < 0 )
        return 3221225541LL;
      if ( (*(_QWORD *)(v17 + 40) & 0x200000000000000LL) != 0 && (PteShadow & 0x200) == 0 )
      {
        ++*(_QWORD *)(a1 + 88);
        v5 = v14;
      }
LABEL_103:
      v38 = MiCopyOnWriteEx(v1, (__int64 *)v4, -1LL, *(_BYTE *)(a1 + 52), 0);
      v6 = 0xFFFFF6FB7DBED000uLL;
      if ( !v38 )
        break;
      v5 = 0;
    }
    if ( v5 )
      --*(_QWORD *)(a1 + 88);
    if ( *(_BYTE *)(a1 + 52) != 2 && (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 1748LL) & 0xC) == 0 )
    {
      v5 = 0;
      continue;
    }
    break;
  }
  ++dword_140388BF8;
  return 3221225495LL;
}
