/*
 * XREFs of MiExtendSection @ 0x140492FCC
 * Callers:
 *     MmExtendSection @ 0x140492D14 (MmExtendSection.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     MiSetSubsectionBase @ 0x140039EF0 (MiSetSubsectionBase.c)
 *     MiAppendSubsectionChain @ 0x14005E4A0 (MiAppendSubsectionChain.c)
 *     MiControlAreaUsingExtents @ 0x14005EB50 (MiControlAreaUsingExtents.c)
 *     MiIncrementSubsectionViewCount @ 0x14009A170 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8E30 (MiDecrementSubsectionViewCount.c)
 *     MiDeleteSubsectionPages @ 0x1400C4590 (MiDeleteSubsectionPages.c)
 *     MiGetControlAreaPartition @ 0x140118AE8 (MiGetControlAreaPartition.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiSubsectionNeedsExtents @ 0x140216160 (MiSubsectionNeedsExtents.c)
 *     MiGetSubsectionCharges @ 0x14022129C (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiInitializePrototypePtes @ 0x14054AFA8 (MiInitializePrototypePtes.c)
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
  __int64 v28; // rsi
  int v29; // eax
  __int64 v30; // rbx
  __int16 v31; // cx
  _WORD *v32; // rdx
  __int16 v33; // cx
  unsigned int v34; // r15d
  int appended; // eax
  __int16 v36; // r8
  unsigned __int64 v37; // rdx
  PPRIVILEGE_SET v39; // rdi
  int v40; // r12d
  __int64 v41; // rsi
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // r15
  unsigned int v44; // eax
  unsigned __int64 v45; // r12
  PVOID v46; // rax
  int v47; // ebx
  int SubsectionCharges; // ebx
  __int64 ControlAreaPartition; // rax
  __int64 v50; // r15
  struct _PRIVILEGE_SET *v51; // rsi
  void *Luid; // rcx
  __int64 v53; // [rsp+28h] [rbp-91h]
  unsigned __int64 v54; // [rsp+30h] [rbp-89h]
  unsigned __int64 v55; // [rsp+38h] [rbp-81h]
  __int64 v56; // [rsp+40h] [rbp-79h]
  __int64 v57; // [rsp+48h] [rbp-71h]
  __int128 v58; // [rsp+58h] [rbp-61h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+68h] [rbp-51h]
  __int128 v60; // [rsp+78h] [rbp-41h]
  __int128 v61; // [rsp+88h] [rbp-31h]
  __int128 v62; // [rsp+98h] [rbp-21h]
  __int128 v63; // [rsp+A8h] [rbp-11h]
  __int128 v64; // [rsp+B8h] [rbp-1h]
  __int64 v65; // [rsp+118h] [rbp+5Fh] BYREF
  _QWORD *v66; // [rsp+120h] [rbp+67h]
  unsigned int v67; // [rsp+128h] [rbp+6Fh]
  __int64 v68; // [rsp+130h] [rbp+77h]

  v68 = a4;
  v67 = a3;
  v66 = a2;
  v53 = *(_QWORD *)a1;
  v6 = *(_DWORD **)a1;
  *a5 = 0LL;
  v56 = *(_QWORD *)v6;
  _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v6 + 24LL), -1LL, -1LL);
  v9 = (__int64 *)&v58;
  v10 = *(_OWORD *)(a1 + 16);
  v11 = v6[14] & 0x40000000;
  v58 = *(_OWORD *)a1;
  v12 = *(_OWORD *)(a1 + 32);
  *(_OWORD *)Privileges = v10;
  v13 = *(_OWORD *)(a1 + 48);
  v14 = (8 * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v60 = v12;
  v15 = *(_OWORD *)(a1 + 64);
  v61 = v13;
  v16 = *(_OWORD *)(a1 + 80);
  v17 = 0LL;
  v18 = (-(__int64)(v11 != 0) & 0x100000) + 0x100000;
  v62 = v15;
  v19 = 0LL;
  v20 = *(_OWORD *)(a1 + 96);
  LODWORD(v65) = 0;
  v55 = v14;
  v64 = v20;
  v54 = v18;
  v63 = v16;
  if ( a3 )
  {
    HIDWORD(v60) += a3;
    DWORD1(v61) ^= (DWORD1(v61) ^ (DWORD1(v61) - a3)) & 0x3FFFFFFF;
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
      v39 = Privileges[0];
LABEL_48:
      LOBYTE(v40) = v65;
      SubsectionCharges = -1073741670;
      goto LABEL_49;
    }
    memset(PoolWithTag, 0, 0x70uLL);
    v25 = v68;
    v24[11] = (__int64)(v24 + 10);
    v24[10] = (__int64)(v24 + 10);
    v17 += v22;
    v26 = v22 >> 3;
    v9[2] = (__int64)v24;
    *v24 = v53;
    *((_DWORD *)v24 + 11) = v22 >> 3;
    if ( v17 > 8 * v25 )
    {
      v27 = (v17 >> 3) - v25;
      *((_DWORD *)v24 + 11) = v26 - v27;
      *((_DWORD *)v24 + 13) ^= (v27 ^ *((_DWORD *)v24 + 13)) & 0x3FFFFFFF;
    }
    v28 = v56;
    *((_WORD *)v24 + 16) = v24[4] & 0xFFC1 | (2 * ((*(_BYTE *)(v56 + 14) >> 1) & 0x1F));
    if ( v9 == (__int64 *)&v58 )
    {
      v29 = *((_DWORD *)v9 + 11);
      v30 = *((unsigned __int16 *)v9 + 16);
      *((_WORD *)v9 + 17) &= 0xFu;
      *((_DWORD *)v9 + 10) = v29;
      v21 = *((unsigned int *)v9 + 9) | ((v30 & 0xFFFFFFFFFFFFFFC0uLL) << 26);
    }
    v14 = v55;
    v21 += *((unsigned int *)v9 + 10);
    v31 = v24[4] & 0x3F | (WORD2(v21) << 6);
    *((_DWORD *)v24 + 9) = v21;
    *((_WORD *)v24 + 16) = v31;
    if ( v17 < v55 )
    {
      *((_DWORD *)v24 + 10) = v26;
    }
    else
    {
      v32 = v66;
      v33 = *((_WORD *)v24 + 17);
      *((_DWORD *)v24 + 10) = (*v66 >> 12) - v21;
      *((_WORD *)v24 + 17) = (16 * *v32) | v33 & 0xF;
    }
    v18 = v54;
    v9 = v24;
  }
  while ( v17 < v55 );
  v34 = v67;
  if ( v67 && (unsigned int)MiControlAreaUsingExtents(v53) && *(_QWORD *)(a1 + 8) )
  {
    MiSubsectionNeedsExtents((_DWORD *)a1);
    *a5 = a1;
  }
  appended = MiAppendSubsectionChain((__int64 *)a1, (__int64)&v58, 0);
  if ( !appended )
  {
LABEL_16:
    v36 = *(_WORD *)(v28 + 12);
    v37 = (*(unsigned int *)(v28 + 8) | ((unsigned __int64)(v36 & 0x3FF) << 32)) + v68 + v34;
    *(_DWORD *)(v28 + 8) += v68 + v34;
    *(_WORD *)(v28 + 12) = v36 ^ (v36 ^ WORD2(v37)) & 0x3FF;
    return 0LL;
  }
  v39 = Privileges[0];
  v40 = v65;
LABEL_18:
  v41 = (__int64)v39;
  if ( (appended & 1) != 0 )
  {
    v42 = v55;
    LODWORD(v65) = v40 | 1;
    v43 = 0LL;
    while ( 1 )
    {
      v44 = v42 - v43 > v54 ? v54 : (int)v42 - (int)v43;
      v45 = v44;
      v43 += v44;
      v46 = ExAllocatePoolWithTag((POOL_TYPE)-2147483647, v44, 0x74536D4Du);
      v57 = (__int64)v46;
      if ( !v46 )
        goto LABEL_48;
      v47 = *(_DWORD *)(v53 + 56) & 0x40000000;
      MiInitializePrototypePtes(v46, v45 >> 3, v41, v47 == 0);
      v40 = v65;
      if ( v47 )
      {
        if ( !*a5 )
          *a5 = v41;
      }
      else if ( (v65 & 2) != 0 )
      {
        MiDecrementSubsectionViewCount((_QWORD *)v41, 0);
      }
      MiSetSubsectionBase((__int64 *)v41, v57, 0xFFFFFFFF);
      v42 = v55;
      v41 = *(_QWORD *)(v41 + 16);
      if ( v43 >= v55 )
      {
        v34 = v67;
        goto LABEL_28;
      }
    }
  }
  v40 |= 2u;
  while ( 1 )
  {
    SubsectionCharges = MiGetSubsectionCharges(v41, *(unsigned int *)(v41 + 44));
    if ( SubsectionCharges < 0 )
      break;
    if ( (int)MiIncrementSubsectionViewCount((_QWORD *)v41, 56LL) <= 1 )
    {
      v19 += *(unsigned int *)(v41 + 44);
      break;
    }
    v41 = *(_QWORD *)(v41 + 16);
    if ( !v41 )
    {
      if ( v34 )
      {
        SubsectionCharges = MiGetSubsectionCharges(a1, v34);
        if ( SubsectionCharges < 0 )
          break;
        v19 += v34;
      }
LABEL_28:
      appended = MiAppendSubsectionChain((__int64 *)a1, (__int64)&v58, v40);
      if ( appended )
        goto LABEL_18;
      v28 = v56;
      goto LABEL_16;
    }
  }
LABEL_49:
  ControlAreaPartition = MiGetControlAreaPartition(v53);
  a5 = (_QWORD *)ControlAreaPartition;
  v50 = ControlAreaPartition;
  if ( v19 )
  {
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, 1, v19);
    v19 = 0LL;
  }
  if ( v39 )
  {
    do
    {
      v51 = *(struct _PRIVILEGE_SET **)&v39->Privilege[0].Attributes;
      if ( (*(_DWORD *)(v53 + 56) & 0x40000000) != 0 )
      {
        if ( v39->Privilege[0].Luid )
        {
          v65 = 0LL;
          MiDeleteSubsectionPages(v39, &v65);
        }
      }
      else
      {
        if ( (v40 & 2) != 0 && (v39[2].Privilege[0].Luid.LowPart & 0x3FFFFFFF) != 0 )
          v19 += MiDecrementSubsectionViewCount(v39, 24);
        Luid = (void *)v39->Privilege[0].Luid;
        if ( Luid )
          ExFreePoolWithTag(Luid, 0);
      }
      MiDeleteSubsection(v39);
      v39 = v51;
    }
    while ( v51 );
    v50 = (__int64)a5;
  }
  if ( v19 )
    MiReturnCrossPartitionSectionCharges(v50, 1, v19);
  return (unsigned int)SubsectionCharges;
}
