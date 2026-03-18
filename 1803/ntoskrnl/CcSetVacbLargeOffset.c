/*
 * XREFs of CcSetVacbLargeOffset @ 0x1400DA8B8
 * Callers:
 *     CcAdjustVacbLevelLockCount @ 0x1400DABA0 (CcAdjustVacbLevelLockCount.c)
 *     CcUnmapVacbArray @ 0x1400DCE30 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400DD440 (CcGetVacbMiss.c)
 *     SetVacb @ 0x14015C474 (SetVacb.c)
 * Callees:
 *     CcGetBcbListHeadLargeOffset @ 0x1400AE3C0 (CcGetBcbListHeadLargeOffset.c)
 *     CcFreeUnusedVacbLevels @ 0x1400C4D50 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevels @ 0x1400C4E1C (CcAllocateVacbLevels.c)
 *     CcAllocateVacbLevel @ 0x1400C4EC0 (CcAllocateVacbLevel.c)
 *     CcDeallocateVacbLevel @ 0x1400C4F40 (CcDeallocateVacbLevel.c)
 *     VacbLevelReference @ 0x1400DAC48 (VacbLevelReference.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char __fastcall CcSetVacbLargeOffset(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v6; // r12
  int v7; // ecx
  unsigned int v8; // ebx
  _QWORD *v9; // rdi
  int v10; // r10d
  unsigned int v11; // r11d
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *VacbLevel; // r14
  char v15; // cl
  int v16; // r13d
  _DWORD *v17; // rax
  _QWORD *v18; // r9
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // r13d
  _DWORD *v28; // rax
  __int64 BcbListHeadLargeOffset; // rax
  __int64 i; // rcx
  _QWORD *v31; // r9
  _QWORD *v32; // rdx
  __int64 v33; // r10
  _QWORD *v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  int v38; // [rsp+20h] [rbp-89h]
  unsigned int v39; // [rsp+24h] [rbp-85h]
  _QWORD *v40; // [rsp+30h] [rbp-79h]
  __int64 v41; // [rsp+38h] [rbp-71h]
  _QWORD v42[3]; // [rsp+40h] [rbp-69h] BYREF
  int v43; // [rsp+58h] [rbp-51h]
  __int64 v44; // [rsp+60h] [rbp-49h]
  __int64 v45; // [rsp+68h] [rbp-41h]
  _DWORD v46[22]; // [rsp+70h] [rbp-39h]

  v40 = a4;
  v41 = a2;
  v44 = a2;
  LODWORD(v6) = 0;
  v7 = 25;
  v8 = 0;
  v9 = *(_QWORD **)(a1 + 88);
  do
  {
    v10 = v7;
    v38 = v7;
    v7 += 7;
    ++v8;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v7 );
  do
  {
    v39 = v8;
    v11 = v8;
    v12 = a2 >> v10;
    --v8;
    if ( (unsigned int)v6 >= 7 )
      return 0;
    v13 = (unsigned int)v6;
    LODWORD(v6) = v6 + 1;
    v46[v13] = v12;
    *(_QWORD *)&v46[2 * v13 + 8] = v9;
    v45 = (unsigned int)v12;
    VacbLevel = (_QWORD *)v9[(unsigned int)v12];
    if ( !VacbLevel )
    {
      v26 = *(_DWORD *)(a1 + 152) & 0x200;
      if ( !v26 || (v27 = 1, v8) )
        v27 = 0;
      if ( !a4 )
      {
        v42[2] = 0LL;
        v42[1] = v42;
        v43 = 0;
        v42[0] = v42;
        if ( !CcAllocateVacbLevels(v11, v26 != 0, (__int64)v42) )
          return 0;
        a4 = v42;
        v40 = v42;
      }
      VacbLevel = CcAllocateVacbLevel((__int64)a4, v27);
      if ( v27 )
      {
        BcbListHeadLargeOffset = CcGetBcbListHeadLargeOffset(a1, v44, 0);
        for ( i = *(_QWORD *)(BcbListHeadLargeOffset + 8); *(_WORD *)(i - 16) == 765; i = *(_QWORD *)(i + 8) )
          BcbListHeadLargeOffset = i;
        v31 = *(_QWORD **)(BcbListHeadLargeOffset + 8);
        v32 = VacbLevel + 128;
        *(_QWORD *)(BcbListHeadLargeOffset + 8) = VacbLevel + 128;
        v33 = 63LL;
        VacbLevel[128] = BcbListHeadLargeOffset;
        do
        {
          v34 = v32 + 2;
          v35 = v32;
          v32[1] = v32 + 2;
          v32 = v34;
          *v34 = v35;
          --v33;
        }
        while ( v33 );
        v34[1] = v31;
        *v31 = v34;
      }
      v9[v45] = VacbLevel;
      v28 = (_DWORD *)VacbLevelReference(a1, v9, v39);
      a4 = v40;
      v10 = v38;
      ++*v28;
    }
    v15 = v10;
    v10 -= 7;
    v9 = VacbLevel;
    v38 = v10;
    a2 = ((1LL << v15) - 1) & v41;
    v41 = a2;
  }
  while ( v8 );
  if ( a3 >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v16 = 1;
    if ( a3 == -2LL )
      a3 = 0LL;
  }
  else
  {
    v16 = 0;
    VacbLevel[(unsigned int)(a2 >> v10)] = a3;
  }
  if ( a3 )
  {
    v17 = (_DWORD *)VacbLevelReference(a1, VacbLevel, 0LL);
    if ( v16 )
      ++v17[1];
    else
      ++*v17;
  }
  else
  {
    while ( 1 )
    {
      v20 = (_DWORD *)VacbLevelReference(a1, v9, v8);
      if ( v16 )
        --v20[1];
      else
        --*v20;
      v16 = a3;
      if ( *(_QWORD *)VacbLevelReference(v22, v21, v23) || !(_DWORD)v6 )
        break;
      v24 = v8;
      v6 = (unsigned int)(v6 - 1);
      ++v8;
      v25 = a3;
      if ( !v24 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        v36 = v9[128];
        v25 = 1;
        v37 = (_QWORD *)v9[255];
        *(_QWORD *)(v36 + 8) = v37;
        *v37 = v36;
      }
      CcDeallocateVacbLevel(v9, v25);
      v9 = *(_QWORD **)&v46[2 * v6 + 8];
      v9[v46[v6]] = a3;
    }
    v18 = v40;
  }
  if ( v18 == v42 )
    CcFreeUnusedVacbLevels((__int64)v18);
  return 1;
}
