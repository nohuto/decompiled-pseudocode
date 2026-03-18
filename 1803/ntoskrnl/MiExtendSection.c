/*
 * XREFs of MiExtendSection @ 0x1404BE298
 * Callers:
 *     MmExtendSection @ 0x1404BDFD0 (MmExtendSection.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     MiControlAreaUsingExtents @ 0x1400093B8 (MiControlAreaUsingExtents.c)
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14004B350 (MiUpdateSystemProtoPtesTree.c)
 *     MiAppendSubsectionChain @ 0x14004D030 (MiAppendSubsectionChain.c)
 *     MiGetControlAreaPartition @ 0x14006278C (MiGetControlAreaPartition.c)
 *     MiSetSubsectionBase @ 0x1400CD53C (MiSetSubsectionBase.c)
 *     MiDecrementSubsectionViewCount @ 0x1400E5400 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x1400E5E20 (MiIncrementSubsectionViewCount.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiSubsectionNeedsExtents @ 0x14025B1F0 (MiSubsectionNeedsExtents.c)
 *     MiGetSubsectionCharges @ 0x140268104 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x1404BD1E0 (MiInitializePrototypePtes.c)
 */

__int64 MiExtendSection(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, ...)
{
  __int64 v4; // r10
  __int64 *v5; // r13
  __int64 v6; // r12
  __int128 v9; // xmm1
  int v10; // eax
  unsigned __int64 v11; // r8
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r15
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  unsigned __int64 v21; // rbx
  unsigned int v22; // r14d
  __int64 *PoolWithTag; // rax
  __int64 *v24; // rdi
  unsigned int v25; // edx
  __int64 v26; // r14
  __int16 v27; // cx
  unsigned int v28; // r8d
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  __int16 v32; // cx
  unsigned int v33; // ebx
  int appended; // eax
  __int16 v35; // r8
  unsigned __int64 v36; // rdx
  __int64 v38; // rdi
  int v39; // r13d
  __int64 v40; // r14
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // r15
  unsigned int v43; // eax
  unsigned __int64 v44; // r12
  char *v45; // r13
  int v46; // ebx
  __int64 v47; // r8
  unsigned __int64 v48; // r15
  int SubsectionCharges; // ebx
  __int64 ControlAreaPartition; // rax
  __int64 v51; // r8
  __int64 v52; // r15
  __int64 v53; // r14
  int v54; // [rsp+28h] [rbp-B1h]
  __int64 v55; // [rsp+30h] [rbp-A9h]
  unsigned __int64 v56; // [rsp+38h] [rbp-A1h]
  unsigned __int64 v57; // [rsp+40h] [rbp-99h]
  __int64 v58; // [rsp+48h] [rbp-91h]
  __int128 v59; // [rsp+58h] [rbp-81h] BYREF
  __int128 Privileges; // [rsp+68h] [rbp-71h]
  __int128 v61; // [rsp+78h] [rbp-61h]
  __int128 v62; // [rsp+88h] [rbp-51h]
  __int128 v63; // [rsp+98h] [rbp-41h]
  __int128 v64; // [rsp+A8h] [rbp-31h]
  __int128 v65; // [rsp+B8h] [rbp-21h]
  __int128 v66; // [rsp+C8h] [rbp-11h]
  __int128 v67; // [rsp+D8h] [rbp-1h]
  __int64 v72; // [rsp+150h] [rbp+77h]
  __int64 *v73; // [rsp+158h] [rbp+7Fh] BYREF
  va_list va; // [rsp+158h] [rbp+7Fh]
  va_list va1; // [rsp+160h] [rbp+87h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v73 = va_arg(va1, __int64 *);
  v5 = (__int64 *)&v59;
  v6 = a1;
  v55 = *(_QWORD *)a1;
  v4 = *(_QWORD *)a1;
  *v73 = 0LL;
  v9 = *(_OWORD *)(a1 + 16);
  v58 = *(_QWORD *)v4;
  v10 = *(_DWORD *)(v4 + 56);
  v11 = (8 * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v59 = *(_OWORD *)a1;
  v12 = *(_OWORD *)(a1 + 32);
  v56 = v11;
  Privileges = v9;
  v13 = *(_OWORD *)(a1 + 48);
  v14 = 0LL;
  LOBYTE(v54) = 0;
  v15 = (-(__int64)((v10 & 0x40000000) != 0) & 0x100000) + 0x100000;
  v61 = v12;
  v16 = 0LL;
  v57 = v15;
  v17 = *(_OWORD *)(a1 + 64);
  v62 = v13;
  v18 = *(_OWORD *)(a1 + 80);
  v63 = v17;
  v19 = *(_OWORD *)(a1 + 96);
  v64 = v18;
  v20 = *(_OWORD *)(a1 + 128);
  v65 = v19;
  v66 = *(_OWORD *)(a1 + 112);
  v67 = v20;
  if ( a3 )
    DWORD1(v62) ^= (DWORD1(v62) ^ (DWORD1(v62) - a3)) & 0x3FFFFFFF;
  v21 = 0LL;
  do
  {
    if ( v11 - v16 > v15 )
      v22 = v15;
    else
      v22 = v11 - v16;
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x64536D4Du);
    v24 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v38 = Privileges;
LABEL_49:
      LOBYTE(v39) = v54;
      SubsectionCharges = -1073741670;
      goto LABEL_50;
    }
    memset(PoolWithTag, 0, 0x90uLL);
    v24[11] = (__int64)(v24 + 10);
    v24[10] = (__int64)(v24 + 10);
    v16 += v22;
    v25 = v22 >> 3;
    v5[2] = (__int64)v24;
    *v24 = v55;
    *((_DWORD *)v24 + 11) = v22 >> 3;
    if ( v16 > 8 * a4 )
      *((_DWORD *)v24 + 13) ^= (*((_DWORD *)v24 + 13) ^ ((v16 >> 3) - a4)) & 0x3FFFFFFF;
    v26 = v58;
    v27 = v24[4] & 0xFFC1 | (2 * ((*(_BYTE *)(v58 + 14) >> 1) & 0x1F));
    *((_WORD *)v24 + 16) = v27;
    if ( v5 == (__int64 *)&v59 )
    {
      *((_WORD *)v5 + 17) &= 0xFu;
      v28 = *((_DWORD *)v5 + 11);
      v29 = *((unsigned int *)v5 + 9);
      v30 = (unsigned __int64)((_WORD)v5[4] & 0xFFC0) << 26;
      *((_DWORD *)v5 + 10) = v28;
      v21 = v29 | v30;
      v27 = *((_WORD *)v24 + 16);
    }
    else
    {
      v28 = *((_DWORD *)v5 + 10);
    }
    v31 = v28;
    v11 = v56;
    v21 += v31;
    *((_DWORD *)v24 + 9) = v21;
    *((_WORD *)v24 + 16) = v27 & 0x3F | (WORD2(v21) << 6);
    if ( v16 < v56 )
    {
      *((_DWORD *)v24 + 10) = v25;
    }
    else
    {
      v32 = *((_WORD *)v24 + 17);
      *((_DWORD *)v24 + 10) = (*a2 >> 12) - v21;
      *((_WORD *)v24 + 17) = (16 * *(_WORD *)a2) | v32 & 0xF;
    }
    v15 = v57;
    v5 = v24;
  }
  while ( v16 < v56 );
  v33 = a3;
  if ( a3 && (unsigned int)MiControlAreaUsingExtents(v55) && *(_QWORD *)(v6 + 8) )
  {
    MiSubsectionNeedsExtents((_DWORD *)v6);
    *v73 = v6;
  }
  appended = MiAppendSubsectionChain((__int64 *)v6, (__int64)&v59, 0);
  if ( !appended )
  {
LABEL_16:
    v35 = *(_WORD *)(v26 + 12);
    v36 = (*(unsigned int *)(v26 + 8) | ((unsigned __int64)(v35 & 0x3FF) << 32)) + a4 + v33;
    *(_DWORD *)(v26 + 8) += a4 + v33;
    *(_WORD *)(v26 + 12) = v35 ^ (v35 ^ WORD2(v36)) & 0x3FF;
    return 0LL;
  }
  v38 = Privileges;
  v39 = 0;
LABEL_18:
  v40 = v38;
  if ( (appended & 1) != 0 )
  {
    v41 = v56;
    v54 = v39 | 1;
    v42 = 0LL;
    while ( 1 )
    {
      v43 = v41 - v42 > v57 ? v57 : (int)v41 - (int)v42;
      v44 = v43;
      v42 += v43;
      v45 = (char *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, v43, 0x74536D4Du);
      if ( !v45 )
        goto LABEL_49;
      v46 = *(_DWORD *)(v55 + 56) & 0x40000000;
      MiInitializePrototypePtes(v45, v44 >> 3, (unsigned __int16 *)v40, v46 == 0);
      if ( v46 )
      {
        if ( !*v73 )
          *v73 = v40;
      }
      else if ( (v54 & 2) != 0 )
      {
        MiDecrementSubsectionViewCount((_QWORD *)v40, 0LL, v47);
      }
      MiSetSubsectionBase((__int64 *)v40, (__int64)v45, 0xFFFFFFFF);
      MiUpdateSystemProtoPtesTree(v40 + 112, 1);
      v41 = v56;
      v40 = *(_QWORD *)(v40 + 16);
      if ( v42 >= v56 )
      {
        v6 = a1;
        v39 = v54;
        goto LABEL_28;
      }
    }
  }
  v39 |= 2u;
  while ( 1 )
  {
    v48 = *(_DWORD *)(v40 + 44) - (*(_DWORD *)(v40 + 52) & 0x3FFFFFFFu);
    SubsectionCharges = MiGetSubsectionCharges(v40, v48);
    if ( SubsectionCharges < 0 )
      break;
    if ( (int)MiIncrementSubsectionViewCount((_QWORD *)v40, 56LL) <= 1 )
    {
      v14 += v48;
      break;
    }
    v40 = *(_QWORD *)(v40 + 16);
    if ( !v40 )
    {
      if ( a3 )
      {
        SubsectionCharges = MiGetSubsectionCharges(v6, a3);
        if ( SubsectionCharges < 0 )
          break;
        v14 += a3;
      }
LABEL_28:
      appended = MiAppendSubsectionChain((__int64 *)v6, (__int64)&v59, v39);
      if ( appended )
        goto LABEL_18;
      v33 = a3;
      v26 = v58;
      goto LABEL_16;
    }
  }
LABEL_50:
  ControlAreaPartition = MiGetControlAreaPartition(v55);
  v72 = ControlAreaPartition;
  v52 = ControlAreaPartition;
  if ( v14 )
  {
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, 1u, v14);
    v14 = 0LL;
  }
  if ( v38 )
  {
    do
    {
      v53 = *(_QWORD *)(v38 + 16);
      if ( (*(_DWORD *)(v55 + 56) & 0x40000000) != 0 )
      {
        if ( *(_QWORD *)(v38 + 8) )
        {
          v73 = 0LL;
          MiDeleteSubsectionPages((__int64 **)v38, (__int64 **)va);
        }
      }
      else
      {
        if ( (v39 & 2) != 0 && (*(_DWORD *)(v38 + 48) & 0x3FFFFFFF) != 0 )
          v14 += MiDecrementSubsectionViewCount((_QWORD *)v38, 24LL, v51);
        if ( *(_QWORD *)(v38 + 8) )
        {
          MiUpdateSystemProtoPtesTree(v38 + 112, 0);
          ExFreePoolWithTag(*(PVOID *)(v38 + 8), 0);
        }
      }
      CmSiFreeMemory((PPRIVILEGE_SET)v38);
      v38 = v53;
    }
    while ( v53 );
    v52 = v72;
  }
  if ( v14 )
    MiReturnCrossPartitionSectionCharges(v52, 1u, v14);
  return (unsigned int)SubsectionCharges;
}
