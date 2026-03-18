/*
 * XREFs of PpmParkRegisterParking @ 0x14017F43C
 * Callers:
 *     PpmCheckInitProcessors @ 0x14063F434 (PpmCheckInitProcessors.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     PopExecuteOnTargetProcessors @ 0x140038E58 (PopExecuteOnTargetProcessors.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryNodeActiveAffinity @ 0x14007ED60 (KeQueryNodeActiveAffinity.c)
 *     PpmParkApplyPolicy @ 0x14017FB78 (PpmParkApplyPolicy.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PpmParkParkingAvailable @ 0x14063F8D0 (PpmParkParkingAvailable.c)
 *     PpmIdleInitializeConcurrency @ 0x140640180 (PpmIdleInitializeConcurrency.c)
 */

__int64 PpmParkRegisterParking()
{
  KIRQL v0; // al
  __int64 v1; // rdi
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  _BYTE *v4; // rbx
  unsigned int v5; // r12d
  unsigned int v6; // ebx
  char *PoolWithTag; // rax
  char *v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v11; // rdx
  unsigned int v12; // r13d
  unsigned int v13; // r15d
  unsigned __int16 Group; // r14
  __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  char *v17; // rbx
  unsigned __int8 v18; // si
  __int64 v19; // r13
  __int64 v20; // rax
  unsigned __int8 *v21; // r14
  char v22; // al
  unsigned int v23; // edi
  _BYTE *v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  unsigned __int16 v27; // cx
  __int64 v28; // rdx
  char *v29; // r8
  unsigned __int8 v30; // cl
  unsigned __int8 v31; // r8
  SIZE_T v32; // rbx
  PVOID v33; // rax
  void *v34; // r13
  void *v35; // rdi
  __int64 v36; // r13
  unsigned int *v37; // rbx
  void *v38; // r9
  unsigned int v39; // ecx
  size_t v40; // rax
  size_t v41; // rdi
  size_t v42; // rdi
  _BYTE *v43; // r15
  KIRQL v44; // al
  unsigned __int64 v45; // rbx
  PVOID *v46; // r15
  PVOID v47; // r15
  char *v48; // rbx
  __int64 v49; // r14
  void *v50; // rcx
  PVOID *v51; // rdi
  __int64 v52; // rsi
  unsigned __int16 v54; // cx
  __int64 v55; // rdx
  __int64 v56; // rax
  unsigned int v57; // esi
  __int64 *v58; // r13
  unsigned __int8 v59; // al
  unsigned __int16 v60; // cx
  __int64 v61; // rdx
  char *v62; // r8
  __int64 v63; // r12
  unsigned int *v64; // r14
  unsigned int *v65; // rsi
  void *v66; // r9
  unsigned int v67; // ecx
  size_t v68; // rax
  size_t v69; // rdi
  size_t v70; // rdi
  PVOID *v71; // rbx
  __int64 v72; // r14
  void *v73; // rcx
  __int64 v74; // rsi
  PVOID *v75; // rdi
  USHORT Count[2]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v77; // [rsp+2Ch] [rbp-DCh]
  unsigned int v78; // [rsp+30h] [rbp-D8h]
  ULONG v79; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v80; // [rsp+38h] [rbp-D0h]
  __int64 v81; // [rsp+40h] [rbp-C8h]
  PVOID v82; // [rsp+48h] [rbp-C0h]
  PVOID P; // [rsp+50h] [rbp-B8h]
  PVOID v84; // [rsp+58h] [rbp-B0h]
  unsigned __int16 *v85; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v86; // [rsp+68h] [rbp-A0h]
  __int64 v87; // [rsp+70h] [rbp-98h]
  struct _GROUP_AFFINITY Affinity; // [rsp+78h] [rbp-90h] BYREF
  int v89; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v90[43]; // [rsp+8Ch] [rbp-7Ch] BYREF

  P = 0LL;
  v84 = 0LL;
  v78 = 0;
  if ( PpmParkNodes )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
    v1 = (unsigned int)PpmParkNumNodes;
    v2 = PpmParkNodes;
    v3 = v0;
    v84 = (PVOID)PpmParkHistograms;
    v78 = PpmParkNumNodes;
    P = (PVOID)PpmParkNodes;
    PpmParkNumNodes = 0;
    PpmParkNodes = 0LL;
    PpmParkHistograms = 0LL;
    KxReleaseSpinLock(&PpmParkStateLock);
    __writecr8(v3);
    if ( (_DWORD)v1 )
    {
      v4 = (_BYTE *)(v2 + 122);
      do
      {
        if ( *(_QWORD *)(v4 - 74) && (*v4 & 8) != 0 )
        {
          v89 = 1310721;
          memset(v90, 0, 0xA4uLL);
          v54 = *((_WORD *)v4 - 59);
          v55 = *(_QWORD *)(v4 - 114);
          if ( v54 )
            LOWORD(v89) = v54 + 1;
          *(_QWORD *)&v90[2 * v54 + 1] |= v55;
          PopExecuteOnTargetProcessors((__int64)&v89, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
        }
        v4 += 248;
        --v1;
      }
      while ( v1 );
    }
  }
  v5 = 0;
  v77 = 0;
  v6 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      KeQueryNodeActiveAffinity(v6, 0LL, Count);
      if ( Count[0] )
        ++v5;
      ++v6;
    }
    while ( v6 < (unsigned __int16)KeNumberNodes );
    v77 = v5;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 248 * v5, 0x704D5050u);
  v81 = (__int64)PoolWithTag;
  v8 = PoolWithTag;
  v82 = 0LL;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 248 * v5);
    PpmParkGranularity = 1;
    PpmParkCoreMask = PpmParkUseCoreGranularity != 0;
    PpmParkUnparkCores = PpmParkUseCoreGranularity == 2;
    if ( PpmParkUseCoreGranularity )
    {
      LODWORD(v9) = 0;
      v85 = PpmCheckRegistered;
      v86 = qword_14039BD78[0];
      LOWORD(v87) = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v79, &v85) )
      {
        Prcb = KeGetPrcb(v79);
        v11 = *(_QWORD *)(Prcb + 24920) - ((*(_QWORD *)(Prcb + 24920) >> 1) & 0x5555555555555555LL);
        if ( (_DWORD)v9 )
        {
          if ( (_DWORD)v9 != (unsigned int)((0x101010101010101LL
                                           * (((v11 & 0x3333333333333333LL)
                                             + ((v11 >> 2) & 0x3333333333333333LL)
                                             + (((v11 & 0x3333333333333333LL) + ((v11 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
            PpmParkCoreMask = 0;
        }
        else
        {
          v9 = (0x101010101010101LL
              * (((v11 & 0x3333333333333333LL)
                + ((v11 >> 2) & 0x3333333333333333LL)
                + (((v11 & 0x3333333333333333LL) + ((v11 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        }
      }
      v5 = v77;
      if ( PpmParkCoreMask )
        PpmParkGranularity = v9;
    }
    v12 = 0;
    *(_DWORD *)Count = 0;
    v13 = 0;
    LODWORD(v80) = 0;
    if ( KeNumberNodes )
    {
      while ( 1 )
      {
        KeQueryNodeActiveAffinity(v13, &Affinity, 0LL);
        Group = Affinity.Group;
        if ( Affinity.Group >= PpmCheckRegistered[0] )
          v15 = 0LL;
        else
          v15 = *(_QWORD *)&PpmCheckRegistered[4 * Affinity.Group + 4];
        v16 = v15 & Affinity.Mask;
        Affinity.Mask &= v15;
        if ( !Affinity.Mask )
          goto LABEL_47;
        v17 = &v8[248 * (unsigned int)v80];
        LODWORD(v80) = v80 + 1;
        v18 = 0;
        *((_WORD *)v17 + 2) = Affinity.Group;
        *((_QWORD *)v17 + 1) = v16;
        do
        {
          v19 = v18;
          if ( v18 )
            v19 = PpmHeteroPolicy != 0 ? v18 : 0;
          v85 = 0LL;
          LOWORD(v87) = Group;
          v86 = v16;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v79, &v85) )
          {
            v20 = KeGetPrcb(v79);
            if ( *(_BYTE *)(v20 + 23858) == v18 )
            {
              ++v17[v19 + 104];
              *(_QWORD *)&v17[8 * v19 + 16] |= *(_QWORD *)(v20 + 200);
            }
          }
          ++v18;
        }
        while ( v18 < 2u );
        v5 = v77;
        v21 = (unsigned __int8 *)(v17 + 104);
        v22 = v17[105];
        if ( v17[104] )
        {
          if ( v22 )
            goto LABEL_36;
        }
        else
        {
          *v21 = v22;
          v56 = *((_QWORD *)v17 + 3);
          *((_QWORD *)v17 + 3) = 0LL;
          *((_QWORD *)v17 + 2) = v56;
          v17[105] = 0;
        }
        v17[122] |= 4u;
LABEL_36:
        v23 = 0;
        v24 = v17 + 114;
        v25 = 2LL;
        do
        {
          v26 = (unsigned __int8)*(v24 - 10);
          *v24 = v26;
          v23 += v26;
          v24[5] = v26;
          ++v24;
          --v25;
        }
        while ( v25 );
        v89 = 1310721;
        *(_DWORD *)Count += v23 + 2 * v23 + 3;
        memset(v90, 0, 0xA4uLL);
        v27 = *((_WORD *)v17 + 2);
        v28 = *((_QWORD *)v17 + 1);
        if ( v27 )
          LOWORD(v89) = v27 + 1;
        *(_QWORD *)&v90[2 * v27 + 1] |= v28;
        if ( v13 >= v78 )
          v29 = 0LL;
        else
          v29 = (char *)P + 248 * v13 + 48;
        if ( (int)PpmIdleInitializeConcurrency(&v89, v17 + 48, v29) < 0 )
          goto LABEL_95;
        if ( v23 != *v21 )
        {
          v57 = 0;
          v58 = (__int64 *)(v17 + 16);
          while ( 1 )
          {
            v59 = *v21;
            if ( *v21 )
            {
              v89 = 1310721;
              *(_DWORD *)Count += v59 + 2 * v59 + 3;
              memset(v90, 0, 0xA4uLL);
              v60 = *((_WORD *)v17 + 2);
              v61 = *v58;
              if ( v60 )
                LOWORD(v89) = v60 + 1;
              *(_QWORD *)&v90[2 * v60 + 1] |= v61;
              v62 = v13 >= v78 ? 0LL : (char *)P + 248 * v13 + 8 * v57 + 128;
              if ( (int)PpmIdleInitializeConcurrency(&v89, &v17[8 * v57 + 128], v62) < 0 )
                break;
            }
            ++v58;
            ++v57;
            ++v21;
            if ( v57 >= 2 )
              goto LABEL_44;
          }
LABEL_95:
          v34 = v82;
LABEL_96:
          v46 = (PVOID *)v81;
          goto LABEL_56;
        }
LABEL_44:
        v30 = PpmParkGranularity;
        v17[6] = v23;
        v17[111] = v23;
        v17[113] = v23;
        v8 = (char *)v81;
        v31 = v23 / (PpmParkMultiparkGranularity != 0);
        if ( v31 < v30 )
          v31 = v30;
        v17[121] = v31;
LABEL_47:
        if ( ++v13 >= (unsigned __int16)KeNumberNodes )
        {
          v12 = *(_DWORD *)Count;
          break;
        }
      }
    }
    v32 = 8LL * v12;
    v33 = ExAllocatePoolWithTag(NonPagedPoolNx, v32, 0x704D5050u);
    v82 = v33;
    v34 = v33;
    if ( !v33 )
      goto LABEL_96;
    memset(v33, 0, v32);
    v35 = v34;
    if ( v5 )
    {
      v36 = v5;
      v37 = (unsigned int *)(v8 + 96);
      v80 = v5;
      do
      {
        v38 = v35;
        v39 = *((unsigned __int8 *)v37 - 90) + 1;
        *((_QWORD *)v37 - 5) = v35;
        v40 = 8LL * v39;
        v41 = (size_t)v35 + v40;
        *v37 = v39;
        *((_QWORD *)v37 - 4) = v41;
        v42 = v40 + v41;
        *((_QWORD *)v37 - 3) = v42;
        v35 = (void *)(v40 + v42);
        memmove(v38, (const void *)(*((_QWORD *)v37 - 6) + 32LL), v40);
        memmove(*((void **)v37 - 4), (const void *)(*((_QWORD *)v37 - 6) + 32LL), 8LL * *v37);
        v43 = v37 + 2;
        *((_QWORD *)v37 - 2) = *(_QWORD *)(*((_QWORD *)v37 - 6) + 24LL);
        *((_QWORD *)v37 - 1) = *(_QWORD *)(*((_QWORD *)v37 - 6) + 24LL);
        if ( *((_BYTE *)v37 - 90) != *((_BYTE *)v37 + 8) )
        {
          v63 = 2LL;
          v64 = v37 + 8;
          v65 = v37 + 22;
          do
          {
            v66 = v35;
            if ( *v43 )
            {
              v67 = (unsigned __int8)*v43 + 1;
              *((_QWORD *)v65 - 5) = v35;
              v68 = 8LL * v67;
              v69 = (size_t)v35 + v68;
              *v65 = v67;
              *((_QWORD *)v65 - 4) = v69;
              v70 = v68 + v69;
              *((_QWORD *)v65 - 3) = v70;
              v35 = (void *)(v68 + v70);
              memmove(v66, (const void *)(*(_QWORD *)v64 + 32LL), v68);
              memmove(*((void **)v65 - 4), (const void *)(*(_QWORD *)v64 + 32LL), 8LL * *v65);
              *((_QWORD *)v65 - 2) = *(_QWORD *)(*(_QWORD *)v64 + 24LL);
              *((_QWORD *)v65 - 1) = *(_QWORD *)(*(_QWORD *)v64 + 24LL);
            }
            v65 += 12;
            v64 += 2;
            ++v43;
            --v63;
          }
          while ( v63 );
          v36 = v80;
        }
        v37 += 62;
        v80 = --v36;
      }
      while ( v36 );
      v5 = v77;
      v34 = v82;
    }
    v44 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
    PpmParkNodes = v81;
    v45 = v44;
    PpmParkNumNodes = v5;
    PpmParkHistograms = (__int64)v34;
    KxReleaseSpinLock(&PpmParkStateLock);
    __writecr8(v45);
    v46 = 0LL;
    v34 = 0LL;
LABEL_56:
    if ( v46 )
    {
      if ( v5 )
      {
        v71 = v46 + 16;
        v72 = v5;
        do
        {
          v73 = *(v71 - 10);
          if ( v73 )
            ExFreePoolWithTag(v73, 0x704D5050u);
          v74 = 2LL;
          v75 = v71;
          do
          {
            if ( *v75 )
              ExFreePoolWithTag(*v75, 0x704D5050u);
            ++v75;
            --v74;
          }
          while ( v74 );
          v71 += 31;
          --v72;
        }
        while ( v72 );
      }
      ExFreePoolWithTag(v46, 0x704D5050u);
    }
    if ( v34 )
      ExFreePoolWithTag(v34, 0x704D5050u);
  }
  v47 = P;
  if ( P )
  {
    if ( v78 )
    {
      v48 = (char *)P + 128;
      v49 = v78;
      do
      {
        v50 = (void *)*((_QWORD *)v48 - 10);
        if ( v50 )
          ExFreePoolWithTag(v50, 0x704D5050u);
        v51 = (PVOID *)v48;
        v52 = 2LL;
        do
        {
          if ( *v51 )
            ExFreePoolWithTag(*v51, 0x704D5050u);
          ++v51;
          --v52;
        }
        while ( v52 );
        v48 += 248;
        --v49;
      }
      while ( v49 );
    }
    ExFreePoolWithTag(v47, 0x704D5050u);
  }
  if ( v84 )
    ExFreePoolWithTag(v84, 0x704D5050u);
  PpmParkApplyPolicy();
  return PpmParkParkingAvailable();
}
