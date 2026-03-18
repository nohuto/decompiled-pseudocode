/*
 * XREFs of CcSetVacbLargeOffset @ 0x1400F7750
 * Callers:
 *     CcUnmapVacbArray @ 0x140062A30 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400A3D50 (CcGetVacbMiss.c)
 *     CcAdjustVacbLevelLockCount @ 0x1400F767C (CcAdjustVacbLevelLockCount.c)
 *     SetVacb @ 0x1401E2070 (SetVacb.c)
 * Callees:
 *     CcGetBcbListHeadLargeOffset @ 0x1400F3910 (CcGetBcbListHeadLargeOffset.c)
 *     VacbLevelReference @ 0x1400F7A78 (VacbLevelReference.c)
 *     CcAllocateVacbLevel @ 0x1400F7B28 (CcAllocateVacbLevel.c)
 *     CcFreeUnusedVacbLevels @ 0x1400F7BA8 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevels @ 0x1400F7C00 (CcAllocateVacbLevels.c)
 *     CcDeallocateVacbLevel @ 0x1400F7CA4 (CcDeallocateVacbLevel.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall CcSetVacbLargeOffset(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v5; // rbp
  __int64 v6; // rsi
  _QWORD *v7; // r15
  _QWORD *v8; // r11
  __int64 v9; // rdx
  unsigned int v10; // ebx
  int v11; // ecx
  char v12; // di
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 VacbLevel; // r14
  __int64 *v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  _DWORD *v19; // rax
  _QWORD *v20; // r11
  int v21; // r10d
  _DWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // r10d
  int v29; // eax
  BOOL v30; // r14d
  _QWORD *v31; // r9
  __int64 BcbListHeadLargeOffset; // r8
  __int64 v33; // rdx
  _QWORD *v34; // rdx
  __int64 v35; // r8
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  _DWORD *v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp+20h] [rbp-D8h]
  _QWORD *v44; // [rsp+28h] [rbp-D0h]
  _QWORD v45[3]; // [rsp+30h] [rbp-C8h] BYREF
  int v46; // [rsp+48h] [rbp-B0h]
  __int64 v47; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v48; // [rsp+58h] [rbp-A0h]
  _DWORD v49[22]; // [rsp+60h] [rbp-98h]

  v47 = a2;
  v44 = a4;
  v5 = 0LL;
  v48 = a3;
  v6 = a2;
  LODWORD(v43) = 0;
  v7 = *(_QWORD **)(a1 + 88);
  v8 = a4;
  v9 = *(_QWORD *)(a1 + 32);
  v10 = 0;
  v11 = 25;
  do
  {
    v12 = v11;
    v11 += 7;
    ++v10;
  }
  while ( v9 > 1LL << v11 );
  do
  {
    v13 = v10;
    v14 = v6 >> v12;
    --v10;
    if ( (unsigned int)v5 >= 7 )
      return 0;
    VacbLevel = v7[(unsigned int)v14];
    v16 = &v7[(unsigned int)v14];
    v49[v5] = v14;
    *(_QWORD *)&v49[2 * v5 + 8] = v7;
    v5 = (unsigned int)(v5 + 1);
    if ( !VacbLevel )
    {
      v29 = *(_DWORD *)(a1 + 152) & 0x200;
      v30 = v29 && !v10;
      HIDWORD(v43) = v30;
      if ( !v8 )
      {
        v45[2] = 0LL;
        v45[1] = v45;
        v46 = 0;
        v45[0] = v45;
        LOBYTE(v14) = v29 != 0;
        if ( !(unsigned __int8)CcAllocateVacbLevels((unsigned int)v13, v14, v45) )
          return 0;
        v8 = v45;
        v44 = v45;
      }
      VacbLevel = CcAllocateVacbLevel(v8, v30, a3, v13, v43);
      if ( HIDWORD(v43) )
      {
        BcbListHeadLargeOffset = CcGetBcbListHeadLargeOffset(a1, v47, 0);
        v33 = BcbListHeadLargeOffset + 8;
        if ( *(_WORD *)(*(_QWORD *)(BcbListHeadLargeOffset + 8) - 16LL) == 765 )
        {
          do
          {
            BcbListHeadLargeOffset = *(_QWORD *)v33;
            v42 = *(_QWORD *)(*(_QWORD *)v33 + 8LL);
            v33 = *(_QWORD *)v33 + 8LL;
          }
          while ( *(_WORD *)(v42 - 16) == 765 );
        }
        v31 = *(_QWORD **)(BcbListHeadLargeOffset + 8);
        v34 = (_QWORD *)(VacbLevel + 1024);
        *(_QWORD *)(BcbListHeadLargeOffset + 8) = VacbLevel + 1024;
        *(_QWORD *)(VacbLevel + 1024) = BcbListHeadLargeOffset;
        v35 = 63LL;
        do
        {
          v36 = v34 + 2;
          v37 = v34;
          v34[1] = v34 + 2;
          v34 = v36;
          *v36 = v37;
          --v35;
        }
        while ( v35 );
        v36[1] = v31;
        *v31 = v36;
      }
      *v16 = VacbLevel;
      v38 = (_DWORD *)VacbLevelReference(a1, v7, v10 + 1, v31);
      v8 = v44;
      ++*v38;
    }
    v17 = 1LL << v12;
    v12 -= 7;
    v7 = (_QWORD *)VacbLevel;
    v6 &= v17 - 1;
  }
  while ( v10 );
  v18 = v48;
  if ( v48 >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    if ( v48 == -2LL )
      goto LABEL_15;
  }
  else
  {
    *(_QWORD *)(VacbLevel + 8LL * (unsigned int)(v6 >> v12)) = v48;
  }
  if ( !v18 )
  {
LABEL_15:
    while ( 1 )
    {
      v23 = (_DWORD *)VacbLevelReference(a1, v7, v10, v13);
      if ( v28 )
        --v23[1];
      else
        --*v23;
      if ( *(_QWORD *)VacbLevelReference(v25, v24, v26, v27) || !(_DWORD)v5 )
        break;
      v39 = v10;
      v5 = (unsigned int)(v5 - 1);
      ++v10;
      if ( !v39 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        v40 = v7[128];
        v41 = (_QWORD *)v7[255];
        *(_QWORD *)(v40 + 8) = v41;
        *v41 = v40;
      }
      CcDeallocateVacbLevel(v7);
      v7 = *(_QWORD **)&v49[2 * v5 + 8];
      v7[v49[v5]] = 0LL;
    }
    v20 = v44;
    goto LABEL_11;
  }
  v19 = (_DWORD *)VacbLevelReference(a1, VacbLevel, 0LL, v13);
  if ( v21 )
    ++v19[1];
  else
    ++*v19;
LABEL_11:
  if ( v20 == v45 )
    CcFreeUnusedVacbLevels(v20);
  return 1;
}
