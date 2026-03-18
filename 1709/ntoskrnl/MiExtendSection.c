/*
 * XREFs of MiExtendSection @ 0x14056BC80
 * Callers:
 *     MmExtendSection @ 0x14056BA18 (MmExtendSection.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     MiGetControlAreaPartition @ 0x1400148E4 (MiGetControlAreaPartition.c)
 *     MiDeleteSubsectionPages @ 0x14004C770 (MiDeleteSubsectionPages.c)
 *     MiIncrementSubsectionViewCount @ 0x1400A1430 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A1FF0 (MiDecrementSubsectionViewCount.c)
 *     MiControlAreaUsingExtents @ 0x1400B7938 (MiControlAreaUsingExtents.c)
 *     MiAppendSubsectionChain @ 0x140110780 (MiAppendSubsectionChain.c)
 *     MiSetSubsectionBase @ 0x140110918 (MiSetSubsectionBase.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiSubsectionNeedsExtents @ 0x14021F908 (MiSubsectionNeedsExtents.c)
 *     MiGetSubsectionCharges @ 0x14022DF48 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x14048DF98 (MiInitializePrototypePtes.c)
 */

__int64 __fastcall MiExtendSection(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  _DWORD *v6; // r10
  __int64 *v9; // r15
  __int128 v10; // xmm1
  int v11; // eax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  unsigned __int64 v14; // r8
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r14
  __int128 v20; // xmm0
  unsigned __int64 v21; // rbx
  unsigned int v22; // esi
  __int64 *PoolWithTag; // rax
  __int64 *v24; // rdi
  __int64 v25; // r11
  unsigned int v26; // edx
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  __int64 v30; // rsi
  int v31; // eax
  __int64 v32; // rbx
  __int16 v33; // cx
  _WORD *v34; // rdx
  __int16 v35; // cx
  unsigned int v36; // r15d
  int appended; // eax
  __int16 v38; // r8
  unsigned __int64 v39; // rdx
  PPRIVILEGE_SET v41; // rdi
  int v42; // r12d
  ULONG_PTR v43; // rsi
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // r15
  unsigned int v46; // eax
  unsigned __int64 v47; // r12
  char *v48; // rax
  int v49; // ebx
  int SubsectionCharges; // ebx
  __int64 ControlAreaPartition; // rax
  __int64 v52; // r8
  unsigned __int64 v53; // r9
  __int64 v54; // r15
  struct _PRIVILEGE_SET *v55; // rsi
  void *Luid; // rcx
  __int64 v57; // [rsp+28h] [rbp-91h]
  unsigned __int64 v58; // [rsp+30h] [rbp-89h]
  unsigned __int64 v59; // [rsp+38h] [rbp-81h]
  __int64 v60; // [rsp+40h] [rbp-79h]
  unsigned __int64 v61; // [rsp+48h] [rbp-71h]
  __int128 v62; // [rsp+58h] [rbp-61h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+68h] [rbp-51h]
  __int128 v64; // [rsp+78h] [rbp-41h]
  __int128 v65; // [rsp+88h] [rbp-31h]
  __int128 v66; // [rsp+98h] [rbp-21h]
  __int128 v67; // [rsp+A8h] [rbp-11h]
  __int128 v68; // [rsp+B8h] [rbp-1h]
  __int64 v69; // [rsp+118h] [rbp+5Fh] BYREF
  _QWORD *v70; // [rsp+120h] [rbp+67h]
  unsigned int v71; // [rsp+128h] [rbp+6Fh]
  __int64 v72; // [rsp+130h] [rbp+77h]

  v72 = a4;
  v71 = a3;
  v70 = a2;
  v57 = *(_QWORD *)a1;
  v6 = *(_DWORD **)a1;
  *a5 = 0LL;
  v60 = *(_QWORD *)v6;
  _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v6 + 24LL), -1LL, -1LL);
  v9 = (__int64 *)&v62;
  v10 = *(_OWORD *)(a1 + 16);
  v11 = v6[14] & 0x40000000;
  v62 = *(_OWORD *)a1;
  v12 = *(_OWORD *)(a1 + 32);
  *(_OWORD *)Privileges = v10;
  v13 = *(_OWORD *)(a1 + 48);
  v14 = (8 * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v64 = v12;
  v15 = *(_OWORD *)(a1 + 64);
  v65 = v13;
  v16 = *(_OWORD *)(a1 + 80);
  v17 = 0LL;
  v18 = (-(__int64)(v11 != 0) & 0x100000) + 0x100000;
  v66 = v15;
  v19 = 0LL;
  v20 = *(_OWORD *)(a1 + 96);
  LODWORD(v69) = 0;
  v59 = v14;
  v68 = v20;
  v58 = v18;
  v67 = v16;
  if ( a3 )
  {
    HIDWORD(v64) += a3;
    DWORD1(v65) ^= (DWORD1(v65) ^ (DWORD1(v65) - a3)) & 0x3FFFFFFF;
    v18 = (-(__int64)(v11 != 0) & 0x100000) + 0x100000;
  }
  v21 = 0LL;
  do
  {
    if ( v14 - v17 > v18 )
      v22 = v18;
    else
      v22 = v14 - v17;
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x64536D4Du);
    v24 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v41 = Privileges[0];
LABEL_48:
      LOBYTE(v42) = v69;
      SubsectionCharges = -1073741670;
      goto LABEL_49;
    }
    memset(PoolWithTag, 0, 0x70uLL);
    v25 = v72;
    v24[11] = (__int64)(v24 + 10);
    v24[10] = (__int64)(v24 + 10);
    v17 += v22;
    v26 = v22 >> 3;
    v9[2] = (__int64)v24;
    *v24 = v57;
    *((_DWORD *)v24 + 11) = v22 >> 3;
    if ( v17 > 8 * v25 )
    {
      v27 = (v17 >> 3) - v25;
      v28 = v26 - v27;
      v29 = (*((_DWORD *)v24 + 13) ^ v27) & 0x3FFFFFFF;
      *((_DWORD *)v24 + 11) = v28;
      *((_DWORD *)v24 + 13) ^= v29;
    }
    v30 = v60;
    *((_WORD *)v24 + 16) = v24[4] & 0xFFC1 | (2 * ((*(_BYTE *)(v60 + 14) >> 1) & 0x1F));
    if ( v9 == (__int64 *)&v62 )
    {
      v31 = *((_DWORD *)v9 + 11);
      v32 = *((unsigned __int16 *)v9 + 16);
      *((_WORD *)v9 + 17) &= 0xFu;
      *((_DWORD *)v9 + 10) = v31;
      v21 = *((unsigned int *)v9 + 9) | ((v32 & 0xFFFFFFFFFFFFFFC0uLL) << 26);
    }
    v14 = v59;
    v21 += *((unsigned int *)v9 + 10);
    v33 = v24[4] & 0x3F | (WORD2(v21) << 6);
    *((_DWORD *)v24 + 9) = v21;
    *((_WORD *)v24 + 16) = v33;
    if ( v17 < v59 )
    {
      *((_DWORD *)v24 + 10) = v26;
    }
    else
    {
      v34 = v70;
      v35 = *((_WORD *)v24 + 17);
      *((_DWORD *)v24 + 10) = (*v70 >> 12) - v21;
      *((_WORD *)v24 + 17) = (16 * *v34) | v35 & 0xF;
    }
    v18 = v58;
    v9 = v24;
  }
  while ( v17 < v59 );
  v36 = v71;
  if ( v71 && (unsigned int)MiControlAreaUsingExtents(v57) && *(_QWORD *)(a1 + 8) )
  {
    MiSubsectionNeedsExtents((_DWORD *)a1);
    *a5 = a1;
  }
  appended = MiAppendSubsectionChain(a1, (__int64)&v62, 0);
  if ( !appended )
  {
LABEL_16:
    v38 = *(_WORD *)(v30 + 12);
    v39 = (*(unsigned int *)(v30 + 8) | ((unsigned __int64)(v38 & 0x3FF) << 32)) + v72 + v36;
    *(_DWORD *)(v30 + 8) += v72 + v36;
    *(_WORD *)(v30 + 12) = v38 ^ (v38 ^ WORD2(v39)) & 0x3FF;
    return 0LL;
  }
  v41 = Privileges[0];
  v42 = v69;
LABEL_18:
  v43 = (ULONG_PTR)v41;
  if ( (appended & 1) != 0 )
  {
    v44 = v59;
    LODWORD(v69) = v42 | 1;
    v45 = 0LL;
    while ( 1 )
    {
      v46 = v44 - v45 > v58 ? v58 : (int)v44 - (int)v45;
      v47 = v46;
      v45 += v46;
      v48 = (char *)ExAllocatePoolWithTag((POOL_TYPE)-2147483647, v46, 0x74536D4Du);
      v61 = (unsigned __int64)v48;
      if ( !v48 )
        goto LABEL_48;
      v49 = *(_DWORD *)(v57 + 56) & 0x40000000;
      MiInitializePrototypePtes(v48, v47 >> 3, (unsigned __int16 *)v43, v49 == 0);
      v42 = v69;
      if ( v49 )
      {
        if ( !*a5 )
          *a5 = v43;
      }
      else if ( (v69 & 2) != 0 )
      {
        MiDecrementSubsectionViewCount(v43, 0);
      }
      MiSetSubsectionBase((__int64 *)v43, v61, 0xFFFFFFFF);
      v44 = v59;
      v43 = *(_QWORD *)(v43 + 16);
      if ( v45 >= v59 )
      {
        v36 = v71;
        goto LABEL_28;
      }
    }
  }
  v42 |= 2u;
  while ( 1 )
  {
    SubsectionCharges = MiGetSubsectionCharges(v43, *(unsigned int *)(v43 + 44));
    if ( SubsectionCharges < 0 )
      break;
    if ( (int)MiIncrementSubsectionViewCount((_QWORD *)v43, 56LL) <= 1 )
    {
      v19 += *(unsigned int *)(v43 + 44);
      break;
    }
    v43 = *(_QWORD *)(v43 + 16);
    if ( !v43 )
    {
      if ( v36 )
      {
        SubsectionCharges = MiGetSubsectionCharges(a1, v36);
        if ( SubsectionCharges < 0 )
          break;
        v19 += v36;
      }
LABEL_28:
      appended = MiAppendSubsectionChain(a1, (__int64)&v62, v42);
      if ( appended )
        goto LABEL_18;
      v30 = v60;
      goto LABEL_16;
    }
  }
LABEL_49:
  ControlAreaPartition = MiGetControlAreaPartition(v57);
  a5 = (_QWORD *)ControlAreaPartition;
  v54 = ControlAreaPartition;
  if ( v19 )
  {
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, 1u, v19);
    v19 = 0LL;
  }
  if ( v41 )
  {
    do
    {
      v55 = *(struct _PRIVILEGE_SET **)&v41->Privilege[0].Attributes;
      if ( (*(_DWORD *)(v57 + 56) & 0x40000000) != 0 )
      {
        if ( v41->Privilege[0].Luid )
        {
          v69 = 0LL;
          MiDeleteSubsectionPages((__int64 **)v41, &v69, v52, v53);
        }
      }
      else
      {
        if ( (v42 & 2) != 0 && (v41[2].Privilege[0].Luid.LowPart & 0x3FFFFFFF) != 0 )
          v19 += MiDecrementSubsectionViewCount((ULONG_PTR)v41, 24);
        Luid = (void *)v41->Privilege[0].Luid;
        if ( Luid )
          ExFreePoolWithTag(Luid, 0);
      }
      MiDeleteSubsection(v41);
      v41 = v55;
    }
    while ( v55 );
    v54 = (__int64)a5;
  }
  if ( v19 )
    MiReturnCrossPartitionSectionCharges(v54, 1u, v19);
  return (unsigned int)SubsectionCharges;
}
