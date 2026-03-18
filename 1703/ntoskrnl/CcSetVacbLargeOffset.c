/*
 * XREFs of CcSetVacbLargeOffset @ 0x14011C014
 * Callers:
 *     SetVacb @ 0x1400AA800 (SetVacb.c)
 *     CcUnmapVacbArray @ 0x1400AB540 (CcUnmapVacbArray.c)
 *     CcAdjustVacbLevelLockCount @ 0x14011BF6C (CcAdjustVacbLevelLockCount.c)
 * Callees:
 *     CcGetBcbListHeadLargeOffset @ 0x14009C0C0 (CcGetBcbListHeadLargeOffset.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     VacbLevelReference @ 0x14011C30C (VacbLevelReference.c)
 *     CcAllocateVacbLevel @ 0x14011CCF8 (CcAllocateVacbLevel.c)
 *     CcFreeUnusedVacbLevels @ 0x14011CD78 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevels @ 0x14011CDD0 (CcAllocateVacbLevels.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall CcSetVacbLargeOffset(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned __int64 v4; // r11
  __int64 v6; // r13
  __int64 v8; // r12
  int v9; // ecx
  unsigned int v10; // ebx
  __int64 v11; // rdi
  int v12; // r8d
  unsigned int v13; // r10d
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 VacbLevel; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // r13d
  _DWORD *v20; // rax
  _QWORD *v21; // r9
  _DWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // r11d
  void *v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  struct _NPAGED_LOOKASIDE_LIST *v33; // rcx
  int v34; // ecx
  unsigned int v35; // r14d
  __int64 v36; // r9
  __int64 BcbListHeadLargeOffset; // rcx
  __int64 *i; // rdx
  _QWORD *v39; // r8
  _QWORD *v40; // rdx
  _QWORD *v41; // rax
  _QWORD *v42; // rcx
  _DWORD *v43; // rax
  unsigned int v44; // [rsp+20h] [rbp-89h]
  int v45; // [rsp+24h] [rbp-85h]
  _QWORD *v46; // [rsp+30h] [rbp-79h]
  _QWORD v47[3]; // [rsp+38h] [rbp-71h] BYREF
  int v48; // [rsp+50h] [rbp-59h]
  __int64 v49; // [rsp+58h] [rbp-51h]
  __int64 v50; // [rsp+60h] [rbp-49h]
  _DWORD v51[22]; // [rsp+68h] [rbp-41h]

  v4 = 0LL;
  v49 = a2;
  v46 = a4;
  v6 = a2;
  LODWORD(v8) = 0;
  v9 = 25;
  v10 = 0;
  v11 = *(_QWORD *)(a1 + 88);
  do
  {
    v12 = v9;
    v45 = v9;
    v9 += 7;
    ++v10;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v9 );
  do
  {
    v13 = v10;
    v14 = v6 >> v12;
    --v10;
    if ( (unsigned int)v8 >= 7 )
      return 0;
    v15 = (unsigned int)v8;
    LODWORD(v8) = v8 + 1;
    v51[v15] = v14;
    *(_QWORD *)&v51[2 * v15 + 8] = v11;
    v50 = (unsigned int)v14;
    VacbLevel = *(_QWORD *)(v11 + 8LL * (unsigned int)v14);
    if ( !VacbLevel )
    {
      v34 = *(_DWORD *)(a1 + 152) & 0x200;
      if ( !v34 || (v35 = 1, v10) )
        v35 = v4;
      v44 = v35;
      if ( !a4 )
      {
        v47[2] = v4;
        v48 = v4;
        v47[1] = v47;
        LOBYTE(v14) = v34 != 0;
        v47[0] = v47;
        if ( !(unsigned __int8)CcAllocateVacbLevels(v13, v14, v47) )
          return 0;
        a4 = v47;
        v46 = v47;
      }
      VacbLevel = CcAllocateVacbLevel(a4, v35);
      if ( v44 )
      {
        BcbListHeadLargeOffset = CcGetBcbListHeadLargeOffset(a1, v49, 0);
        for ( i = (__int64 *)(BcbListHeadLargeOffset + 8); *(_WORD *)(*i - 16) == 765; i = (__int64 *)(*i + 8) )
          BcbListHeadLargeOffset = *i;
        v39 = *(_QWORD **)(BcbListHeadLargeOffset + 8);
        v40 = (_QWORD *)(VacbLevel + 1024);
        *(_QWORD *)(BcbListHeadLargeOffset + 8) = VacbLevel + 1024;
        v36 = 63LL;
        *(_QWORD *)(VacbLevel + 1024) = BcbListHeadLargeOffset;
        do
        {
          v41 = v40 + 2;
          v42 = v40;
          v40[1] = v40 + 2;
          v40 = v41;
          *v41 = v42;
          --v36;
        }
        while ( v36 );
        v41[1] = v39;
        *v39 = v41;
      }
      *(_QWORD *)(v11 + 8 * v50) = VacbLevel;
      v43 = (_DWORD *)VacbLevelReference(a1, v11, v10 + 1, v36);
      a4 = v46;
      v12 = v45;
      ++*v43;
    }
    v17 = 1LL << v12;
    v12 -= 7;
    v45 = v12;
    v6 &= v17 - 1;
    v11 = VacbLevel;
  }
  while ( v10 );
  if ( a3 >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v19 = 1;
    if ( a3 == -2LL )
      a3 = v4;
  }
  else
  {
    v18 = (unsigned int)(v6 >> v12);
    v19 = 0;
    *(_QWORD *)(VacbLevel + 8 * v18) = a3;
  }
  if ( a3 )
  {
    v20 = (_DWORD *)VacbLevelReference(a1, VacbLevel, 0LL, a4);
    if ( v19 )
      ++v20[1];
    else
      ++*v20;
  }
  else
  {
    while ( 1 )
    {
      v23 = (_DWORD *)VacbLevelReference(a1, v11, v10, a4);
      if ( v19 )
        --v23[1];
      else
        --*v23;
      v19 = v28;
      if ( *(_QWORD *)VacbLevelReference(v25, v24, v26, v27) || !(_DWORD)v8 )
        break;
      v30 = v10;
      v8 = (unsigned int)(v8 - 1);
      ++v10;
      if ( v30 || (*(_DWORD *)(a1 + 152) & 0x200) == 0 )
      {
        v33 = &CcVacbLevelLookasideList;
      }
      else
      {
        v31 = *(_QWORD *)(v11 + 1024);
        v32 = *(_QWORD **)(v11 + 2040);
        *(_QWORD *)(v31 + 8) = v32;
        *v32 = v31;
        v33 = &CcVacbLevelWithBcbListHeadsLookasideList;
      }
      ExFreeToNPagedLookasideList(v33, v29);
      v11 = *(_QWORD *)&v51[2 * v8 + 8];
      *(_QWORD *)(v11 + 8LL * (unsigned int)v51[v8]) = 0LL;
    }
    v21 = v46;
  }
  if ( v21 == v47 )
    CcFreeUnusedVacbLevels(v21);
  return 1;
}
