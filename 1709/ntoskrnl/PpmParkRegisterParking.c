/*
 * XREFs of PpmParkRegisterParking @ 0x140137E1C
 * Callers:
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryNodeActiveAffinity @ 0x1400FC870 (KeQueryNodeActiveAffinity.c)
 *     PopExecuteOnTargetProcessors @ 0x1401173B0 (PopExecuteOnTargetProcessors.c)
 *     PpmParkApplyPolicy @ 0x140138AB4 (PpmParkApplyPolicy.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PpmIdleInitializeConcurrency @ 0x1405B5B54 (PpmIdleInitializeConcurrency.c)
 *     PpmParkParkingAvailable @ 0x1405B6230 (PpmParkParkingAvailable.c)
 */

__int64 PpmParkRegisterParking()
{
  KIRQL v0; // al
  __int64 v1; // rdi
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  _BYTE *v4; // rbx
  unsigned __int16 v5; // cx
  __int64 v6; // rdx
  unsigned int v7; // r12d
  unsigned int v8; // ebx
  char *PoolWithTag; // rax
  char *v10; // r13
  unsigned __int64 v11; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // rbx
  unsigned int v16; // r15d
  unsigned __int16 Group; // r14
  __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  char *v20; // rbx
  unsigned __int8 v21; // si
  __int64 v22; // r13
  __int64 v23; // rax
  unsigned __int8 *v24; // r14
  unsigned int v25; // esi
  _BYTE *v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  unsigned __int16 v29; // cx
  __int64 v30; // rdx
  char *v31; // r8
  unsigned __int8 v32; // cl
  unsigned int v33; // eax
  unsigned __int8 v34; // r8
  SIZE_T v35; // rbx
  PVOID v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rsi
  unsigned int *v39; // rbx
  __int64 v40; // r13
  unsigned int v41; // eax
  void *v42; // rcx
  size_t v43; // r8
  size_t v44; // rsi
  size_t v45; // rsi
  unsigned __int8 *v46; // r15
  KIRQL v47; // al
  unsigned __int64 v48; // rbx
  PVOID *v49; // r15
  void *v50; // r13
  PVOID v51; // r15
  PVOID *v52; // rbx
  __int64 v53; // r14
  __int64 v54; // rsi
  PVOID *v55; // rdi
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // edi
  __int64 *v60; // r13
  unsigned __int8 v61; // al
  unsigned __int16 v62; // cx
  __int64 v63; // rdx
  char *v64; // r8
  __int64 v65; // r12
  unsigned int *v66; // r14
  unsigned int *v67; // rdi
  unsigned __int8 v68; // al
  void *v69; // rcx
  unsigned int v70; // eax
  size_t v71; // r8
  size_t v72; // rsi
  size_t v73; // rsi
  PVOID *v74; // rbx
  __int64 v75; // r14
  __int64 v76; // rsi
  PVOID *v77; // rdi
  USHORT Count[2]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v79; // [rsp+2Ch] [rbp-DCh]
  unsigned int v80; // [rsp+30h] [rbp-D8h]
  ULONG v81; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v82; // [rsp+38h] [rbp-D0h]
  PVOID v83; // [rsp+40h] [rbp-C8h]
  __int64 v84; // [rsp+48h] [rbp-C0h]
  PVOID P; // [rsp+50h] [rbp-B8h]
  PVOID v86; // [rsp+58h] [rbp-B0h]
  unsigned __int16 *v87; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v88; // [rsp+68h] [rbp-A0h]
  __int64 v89; // [rsp+70h] [rbp-98h]
  struct _GROUP_AFFINITY Affinity; // [rsp+78h] [rbp-90h] BYREF
  int v91; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v92[43]; // [rsp+8Ch] [rbp-7Ch] BYREF

  P = 0LL;
  v86 = 0LL;
  v80 = 0;
  if ( PpmParkNodes )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
    v1 = (unsigned int)PpmParkNumNodes;
    v2 = PpmParkNodes;
    v3 = v0;
    v86 = (PVOID)PpmParkHistograms;
    v80 = PpmParkNumNodes;
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
          v91 = 1310721;
          memset(v92, 0, 0xA4uLL);
          v5 = *((_WORD *)v4 - 59);
          v6 = *(_QWORD *)(v4 - 114);
          if ( v5 )
            LOWORD(v91) = v5 + 1;
          *(_QWORD *)&v92[2 * v5 + 1] |= v6;
          PopExecuteOnTargetProcessors((__int64)&v91, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
        }
        v4 += 248;
        --v1;
      }
      while ( v1 );
    }
  }
  v7 = 0;
  v79 = 0;
  v8 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      KeQueryNodeActiveAffinity(v8, 0LL, Count);
      if ( Count[0] )
        ++v7;
      ++v8;
    }
    while ( v8 < (unsigned __int16)KeNumberNodes );
    v79 = v7;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 248 * v7, 0x704D5050u);
  v82 = (__int64)PoolWithTag;
  v10 = PoolWithTag;
  v83 = 0LL;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 248 * v7);
    PpmParkGranularity = 1;
    PpmParkCoreMask = PpmParkUseCoreGranularity != 0;
    PpmParkUnparkCores = PpmParkUseCoreGranularity == 2;
    if ( PpmParkUseCoreGranularity )
    {
      LODWORD(v11) = 0;
      v87 = PpmCheckRegistered;
      v88 = qword_140358788[0];
      LOWORD(v89) = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v81, &v87) )
      {
        Prcb = KeGetPrcb(v81);
        if ( (_DWORD)v11 )
        {
          v13 = *(_QWORD *)(Prcb + 24920) - ((*(_QWORD *)(Prcb + 24920) >> 1) & 0x5555555555555555LL);
          if ( (_DWORD)v11 != (unsigned int)((0x101010101010101LL
                                            * (((v13 & 0x3333333333333333LL)
                                              + ((v13 >> 2) & 0x3333333333333333LL)
                                              + (((v13 & 0x3333333333333333LL) + ((v13 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
            PpmParkCoreMask = 0;
        }
        else
        {
          v57 = *(_QWORD *)(Prcb + 24920) - ((*(_QWORD *)(Prcb + 24920) >> 1) & 0x5555555555555555LL);
          v11 = (0x101010101010101LL
               * (((v57 & 0x3333333333333333LL)
                 + ((v57 >> 2) & 0x3333333333333333LL)
                 + (((v57 & 0x3333333333333333LL) + ((v57 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        }
      }
      v7 = v79;
      if ( PpmParkCoreMask )
        PpmParkGranularity = v11;
    }
    v14 = 0;
    v15 = 0LL;
    v16 = 0;
    *(_DWORD *)Count = 0;
    if ( KeNumberNodes )
    {
      while ( 1 )
      {
        KeQueryNodeActiveAffinity(v16, &Affinity, 0LL);
        Group = Affinity.Group;
        if ( Affinity.Group >= PpmCheckRegistered[0] )
          v18 = 0LL;
        else
          v18 = *(_QWORD *)&PpmCheckRegistered[4 * Affinity.Group + 4];
        v19 = v18 & Affinity.Mask;
        Affinity.Mask &= v18;
        if ( Affinity.Mask )
        {
          LODWORD(v84) = v14 + 1;
          v20 = &v10[248 * v14];
          v21 = 0;
          *((_WORD *)v20 + 2) = Affinity.Group;
          *((_QWORD *)v20 + 1) = v19;
          do
          {
            v22 = v21;
            if ( v21 )
              v22 = PpmHeteroPolicy != 0 ? v21 : 0;
            v87 = 0LL;
            LOWORD(v89) = Group;
            v88 = v19;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v81, &v87) )
            {
              v23 = KeGetPrcb(v81);
              if ( *(_BYTE *)(v23 + 23858) == v21 )
              {
                ++v20[v22 + 104];
                *(_QWORD *)&v20[8 * v22 + 16] |= *(_QWORD *)(v23 + 200);
              }
            }
            ++v21;
          }
          while ( v21 < 2u );
          v7 = v79;
          v24 = (unsigned __int8 *)(v20 + 104);
          if ( !v20[104] )
          {
            *v24 = v20[105];
            v58 = *((_QWORD *)v20 + 3);
            *((_QWORD *)v20 + 3) = 0LL;
            *((_QWORD *)v20 + 2) = v58;
            v20[105] = 0;
          }
          if ( !v20[105] )
            v20[122] |= 4u;
          v25 = 0;
          v26 = v20 + 114;
          v27 = 2LL;
          do
          {
            v28 = (unsigned __int8)*(v26 - 10);
            *v26 = v28;
            v25 += v28;
            v26[5] = v28;
            ++v26;
            --v27;
          }
          while ( v27 );
          v91 = 1310721;
          *(_DWORD *)Count += v25 + 2 * v25 + 3;
          memset(v92, 0, 0xA4uLL);
          v29 = *((_WORD *)v20 + 2);
          v30 = *((_QWORD *)v20 + 1);
          if ( v29 )
            LOWORD(v91) = v29 + 1;
          *(_QWORD *)&v92[2 * v29 + 1] |= v30;
          if ( v16 >= v80 )
            v31 = 0LL;
          else
            v31 = (char *)P + 248 * v16 + 48;
          if ( (int)PpmIdleInitializeConcurrency(&v91, v20 + 48, v31) < 0 )
            goto LABEL_97;
          if ( v25 != *v24 )
          {
            v59 = 0;
            v60 = (__int64 *)(v20 + 16);
            while ( 1 )
            {
              v61 = *v24;
              if ( *v24 )
              {
                v91 = 1310721;
                *(_DWORD *)Count += v61 + 2 * v61 + 3;
                memset(v92, 0, 0xA4uLL);
                v62 = *((_WORD *)v20 + 2);
                v63 = *v60;
                if ( v62 )
                  LOWORD(v91) = v62 + 1;
                *(_QWORD *)&v92[2 * v62 + 1] |= v63;
                v64 = v16 >= v80 ? 0LL : (char *)P + 248 * v16 + 8 * v59 + 128;
                if ( (int)PpmIdleInitializeConcurrency(&v91, &v20[8 * v59 + 128], v64) < 0 )
                  break;
              }
              ++v60;
              ++v59;
              ++v24;
              if ( v59 >= 2 )
                goto LABEL_48;
            }
LABEL_97:
            v50 = v83;
LABEL_99:
            v49 = (PVOID *)v82;
            goto LABEL_60;
          }
LABEL_48:
          v32 = PpmParkGranularity;
          v33 = v25;
          v10 = (char *)v82;
          v20[6] = v25;
          v20[111] = v25;
          v20[113] = v25;
          v14 = v84;
          v34 = v33 / (PpmParkMultiparkGranularity != 0);
          if ( v34 < v32 )
            v34 = v32;
          v20[121] = v34;
        }
        if ( ++v16 >= (unsigned __int16)KeNumberNodes )
        {
          v15 = *(unsigned int *)Count;
          break;
        }
      }
    }
    v35 = 8 * v15;
    v36 = ExAllocatePoolWithTag(NonPagedPoolNx, v35, 0x704D5050u);
    v83 = v36;
    v37 = (__int64)v36;
    if ( !v36 )
    {
      v50 = 0LL;
      goto LABEL_99;
    }
    memset(v36, 0, v35);
    v38 = v37;
    if ( v7 )
    {
      v39 = (unsigned int *)(v10 + 96);
      v40 = v7;
      v84 = v7;
      do
      {
        v41 = *((unsigned __int8 *)v39 - 90);
        *((_QWORD *)v39 - 5) = v38;
        ++v41;
        v42 = (void *)*((_QWORD *)v39 - 5);
        v43 = 8LL * v41;
        v44 = v43 + v38;
        *v39 = v41;
        *((_QWORD *)v39 - 4) = v44;
        v45 = v43 + v44;
        *((_QWORD *)v39 - 3) = v45;
        v38 = v43 + v45;
        memmove(v42, (const void *)(*((_QWORD *)v39 - 6) + 32LL), v43);
        memmove(*((void **)v39 - 4), (const void *)(*((_QWORD *)v39 - 6) + 32LL), 8LL * *v39);
        v46 = (unsigned __int8 *)(v39 + 2);
        *((_QWORD *)v39 - 2) = *(_QWORD *)(*((_QWORD *)v39 - 6) + 24LL);
        *((_QWORD *)v39 - 1) = *(_QWORD *)(*((_QWORD *)v39 - 6) + 24LL);
        if ( *((_BYTE *)v39 - 90) != *((_BYTE *)v39 + 8) )
        {
          v65 = 2LL;
          v66 = v39 + 8;
          v67 = v39 + 22;
          do
          {
            v68 = *v46;
            if ( *v46 )
            {
              *((_QWORD *)v67 - 5) = v38;
              v69 = (void *)*((_QWORD *)v67 - 5);
              v70 = v68 + 1;
              v71 = 8LL * v70;
              v72 = v71 + v38;
              *v67 = v70;
              *((_QWORD *)v67 - 4) = v72;
              v73 = v71 + v72;
              *((_QWORD *)v67 - 3) = v73;
              v38 = v71 + v73;
              memmove(v69, (const void *)(*(_QWORD *)v66 + 32LL), v71);
              memmove(*((void **)v67 - 4), (const void *)(*(_QWORD *)v66 + 32LL), 8LL * *v67);
              *((_QWORD *)v67 - 2) = *(_QWORD *)(*(_QWORD *)v66 + 24LL);
              *((_QWORD *)v67 - 1) = *(_QWORD *)(*(_QWORD *)v66 + 24LL);
            }
            v67 += 12;
            v66 += 2;
            ++v46;
            --v65;
          }
          while ( v65 );
          v40 = v84;
        }
        v39 += 62;
        v84 = --v40;
      }
      while ( v40 );
      v7 = v79;
      v37 = (__int64)v83;
    }
    v47 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
    PpmParkNodes = v82;
    v48 = v47;
    PpmParkNumNodes = v7;
    PpmParkHistograms = v37;
    KxReleaseSpinLock(&PpmParkStateLock);
    __writecr8(v48);
    v49 = 0LL;
    v50 = 0LL;
LABEL_60:
    if ( v49 )
    {
      if ( v7 )
      {
        v74 = v49 + 6;
        v75 = v7;
        do
        {
          if ( *v74 )
            ExFreePoolWithTag(*v74, 0x704D5050u);
          v76 = 2LL;
          v77 = v74 + 10;
          do
          {
            if ( *v77 )
              ExFreePoolWithTag(*v77, 0x704D5050u);
            ++v77;
            --v76;
          }
          while ( v76 );
          v74 += 31;
          --v75;
        }
        while ( v75 );
      }
      ExFreePoolWithTag(v49, 0x704D5050u);
    }
    if ( v50 )
      ExFreePoolWithTag(v50, 0x704D5050u);
  }
  v51 = P;
  if ( P )
  {
    if ( v80 )
    {
      v52 = (PVOID *)((char *)P + 48);
      v53 = v80;
      do
      {
        if ( *v52 )
          ExFreePoolWithTag(*v52, 0x704D5050u);
        v54 = 2LL;
        v55 = v52 + 10;
        do
        {
          if ( *v55 )
            ExFreePoolWithTag(*v55, 0x704D5050u);
          ++v55;
          --v54;
        }
        while ( v54 );
        v52 += 31;
        --v53;
      }
      while ( v53 );
    }
    ExFreePoolWithTag(v51, 0x704D5050u);
  }
  if ( v86 )
    ExFreePoolWithTag(v86, 0x704D5050u);
  PpmParkApplyPolicy();
  return PpmParkParkingAvailable();
}
