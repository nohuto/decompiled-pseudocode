/*
 * XREFs of PpmParkRegisterParking @ 0x14015FC70
 * Callers:
 *     PpmCheckInitProcessors @ 0x1405BFD98 (PpmCheckInitProcessors.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryNodeActiveAffinity @ 0x140080330 (KeQueryNodeActiveAffinity.c)
 *     PopExecuteOnTargetProcessors @ 0x1400888B0 (PopExecuteOnTargetProcessors.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     PpmParkApplyPolicy @ 0x1401604C8 (PpmParkApplyPolicy.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PpmIdleInitializeConcurrency @ 0x1405BFF64 (PpmIdleInitializeConcurrency.c)
 *     PpmParkParkingAvailable @ 0x1405C0510 (PpmParkParkingAvailable.c)
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
  unsigned int v7; // ebx
  __int64 v8; // r13
  char *PoolWithTag; // rax
  char *v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 Prcb; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // r12d
  unsigned int v15; // r15d
  unsigned __int16 Group; // r14
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  char *v19; // rbx
  unsigned __int8 v20; // di
  __int64 v21; // r12
  __int64 v22; // rax
  unsigned __int8 *v23; // rdi
  unsigned int v24; // r14d
  unsigned __int8 *v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  unsigned __int16 v28; // cx
  __int64 v29; // rdx
  char *v30; // r8
  unsigned __int8 v31; // cl
  unsigned __int8 v32; // r8
  SIZE_T v33; // rbx
  PVOID v34; // rax
  void *v35; // r12
  void *v36; // rsi
  unsigned int *v37; // rbx
  unsigned int v38; // eax
  void *v39; // rcx
  size_t v40; // r8
  size_t v41; // rsi
  size_t v42; // rsi
  unsigned __int8 *v43; // r15
  KIRQL v44; // al
  unsigned __int64 v45; // rbx
  PVOID *v46; // r15
  PVOID v47; // r15
  PVOID *v48; // rbx
  __int64 v49; // r14
  PVOID *v50; // rdi
  __int64 v51; // rsi
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  unsigned int v55; // esi
  __int64 *v56; // r12
  unsigned __int8 v57; // al
  unsigned __int16 v58; // cx
  __int64 v59; // rdx
  char *v60; // r8
  __int64 v61; // r12
  unsigned int *v62; // r14
  unsigned int *v63; // rdi
  unsigned __int8 v64; // al
  void *v65; // rcx
  unsigned int v66; // eax
  size_t v67; // r8
  size_t v68; // rsi
  size_t v69; // rsi
  PVOID *v70; // rbx
  __int64 v71; // r14
  __int64 v72; // rsi
  PVOID *v73; // rdi
  USHORT Count[2]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v75; // [rsp+2Ch] [rbp-DCh]
  unsigned int v76; // [rsp+30h] [rbp-D8h]
  ULONG v77; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v78; // [rsp+38h] [rbp-D0h]
  __int64 v79; // [rsp+40h] [rbp-C8h]
  PVOID v80; // [rsp+48h] [rbp-C0h]
  PVOID P; // [rsp+50h] [rbp-B8h]
  PVOID v82; // [rsp+58h] [rbp-B0h]
  unsigned __int16 *v83; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v84; // [rsp+68h] [rbp-A0h]
  __int64 v85; // [rsp+70h] [rbp-98h]
  struct _GROUP_AFFINITY Affinity; // [rsp+78h] [rbp-90h] BYREF
  int v87; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v88[43]; // [rsp+8Ch] [rbp-7Ch] BYREF

  P = 0LL;
  v82 = 0LL;
  v76 = 0;
  if ( PpmParkNodes )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
    v1 = (unsigned int)PpmParkNumNodes;
    v2 = PpmParkNodes;
    v3 = v0;
    v82 = (PVOID)PpmParkHistograms;
    v76 = PpmParkNumNodes;
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
          v87 = 1310721;
          memset(v88, 0, 0xA4uLL);
          v5 = *((_WORD *)v4 - 59);
          v6 = *(_QWORD *)(v4 - 114);
          if ( v5 )
            LOWORD(v87) = v5 + 1;
          *(_QWORD *)&v88[2 * v5 + 1] |= v6;
          PopExecuteOnTargetProcessors((__int64)&v87, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
        }
        v4 += 248;
        --v1;
      }
      while ( v1 );
    }
  }
  v7 = 0;
  v8 = 0LL;
  v75 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      KeQueryNodeActiveAffinity(v7, 0LL, Count);
      if ( Count[0] )
        v8 = (unsigned int)(v8 + 1);
      ++v7;
    }
    while ( v7 < (unsigned __int16)KeNumberNodes );
    v75 = v8;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(248 * v8), 0x704D5050u);
  v79 = (__int64)PoolWithTag;
  v10 = PoolWithTag;
  v80 = 0LL;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)(248 * v8));
    PpmParkGranularity = 1;
    PpmParkCoreMask = PpmParkUseCoreGranularity != 0;
    PpmParkUnparkCores = PpmParkUseCoreGranularity == 2;
    if ( PpmParkUseCoreGranularity )
    {
      LODWORD(v11) = 0;
      v83 = PpmCheckRegistered;
      v84 = qword_140340128[0];
      LOWORD(v85) = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v77, &v83) )
      {
        Prcb = KeGetPrcb(v77);
        if ( (_DWORD)v11 )
        {
          v13 = *(_QWORD *)(Prcb + 25176) - ((*(_QWORD *)(Prcb + 25176) >> 1) & 0x5555555555555555LL);
          if ( (_DWORD)v11 != (unsigned int)((0x101010101010101LL
                                            * (((v13 & 0x3333333333333333LL)
                                              + ((v13 >> 2) & 0x3333333333333333LL)
                                              + (((v13 & 0x3333333333333333LL) + ((v13 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
            PpmParkCoreMask = 0;
        }
        else
        {
          v53 = *(_QWORD *)(Prcb + 25176) - ((*(_QWORD *)(Prcb + 25176) >> 1) & 0x5555555555555555LL);
          v11 = (0x101010101010101LL
               * (((v53 & 0x3333333333333333LL)
                 + ((v53 >> 2) & 0x3333333333333333LL)
                 + (((v53 & 0x3333333333333333LL) + ((v53 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        }
      }
      v8 = v75;
      if ( PpmParkCoreMask )
        PpmParkGranularity = v11;
    }
    v14 = 0;
    *(_DWORD *)Count = 0;
    v15 = 0;
    LODWORD(v78) = 0;
    if ( KeNumberNodes )
    {
      while ( 1 )
      {
        KeQueryNodeActiveAffinity(v15, &Affinity, 0LL);
        Group = Affinity.Group;
        if ( Affinity.Group >= PpmCheckRegistered[0] )
          v17 = 0LL;
        else
          v17 = *(_QWORD *)&PpmCheckRegistered[4 * Affinity.Group + 4];
        v18 = v17 & Affinity.Mask;
        Affinity.Mask &= v17;
        if ( Affinity.Mask )
        {
          v19 = &v10[248 * (unsigned int)v78];
          LODWORD(v78) = v78 + 1;
          v20 = 0;
          *((_WORD *)v19 + 2) = Affinity.Group;
          *((_QWORD *)v19 + 1) = v18;
          do
          {
            v21 = v20;
            if ( v20 )
              v21 = PpmHeteroPolicy != 0 ? v20 : 0;
            v83 = 0LL;
            LOWORD(v85) = Group;
            v84 = v18;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v77, &v83) )
            {
              v22 = KeGetPrcb(v77);
              if ( *(_BYTE *)(v22 + 23986) == v20 )
              {
                ++v19[v21 + 104];
                *(_QWORD *)&v19[8 * v21 + 16] |= *(_QWORD *)(v22 + 200);
              }
            }
            ++v20;
          }
          while ( v20 < 2u );
          v8 = v75;
          v23 = (unsigned __int8 *)(v19 + 104);
          if ( !v19[104] )
          {
            *v23 = v19[105];
            v54 = *((_QWORD *)v19 + 3);
            *((_QWORD *)v19 + 3) = 0LL;
            *((_QWORD *)v19 + 2) = v54;
            v19[105] = 0;
          }
          if ( !v19[105] )
            v19[122] |= 4u;
          v24 = 0;
          v25 = (unsigned __int8 *)(v19 + 104);
          v26 = 2LL;
          do
          {
            v27 = *v25;
            v25[10] = v27;
            v24 += v27;
            v25[15] = v27;
            ++v25;
            --v26;
          }
          while ( v26 );
          v87 = 1310721;
          *(_DWORD *)Count += v24 + 2 * v24 + 3;
          memset(v88, 0, 0xA4uLL);
          v28 = *((_WORD *)v19 + 2);
          v29 = *((_QWORD *)v19 + 1);
          if ( v28 )
            LOWORD(v87) = v28 + 1;
          *(_QWORD *)&v88[2 * v28 + 1] |= v29;
          if ( v15 >= v76 )
            v30 = 0LL;
          else
            v30 = (char *)P + 248 * v15 + 48;
          if ( (int)PpmIdleInitializeConcurrency(&v87, v19 + 48, v30) < 0 )
            goto LABEL_96;
          if ( v24 != *v23 )
          {
            v55 = 0;
            v56 = (__int64 *)(v19 + 16);
            while ( 1 )
            {
              v57 = *v23;
              if ( *v23 )
              {
                v87 = 1310721;
                *(_DWORD *)Count += v57 + 2 * v57 + 3;
                memset(v88, 0, 0xA4uLL);
                v58 = *((_WORD *)v19 + 2);
                v59 = *v56;
                if ( v58 )
                  LOWORD(v87) = v58 + 1;
                *(_QWORD *)&v88[2 * v58 + 1] |= v59;
                v60 = v15 >= v76 ? 0LL : (char *)P + 248 * v15 + 8 * v55 + 128;
                if ( (int)PpmIdleInitializeConcurrency(&v87, &v19[8 * v55 + 128], v60) < 0 )
                  break;
              }
              ++v56;
              ++v55;
              ++v23;
              if ( v55 >= 2 )
                goto LABEL_48;
            }
LABEL_96:
            v35 = v80;
LABEL_97:
            v46 = (PVOID *)v79;
            goto LABEL_60;
          }
LABEL_48:
          v31 = PpmParkGranularity;
          v10 = (char *)v79;
          v19[6] = v24;
          v19[111] = v24;
          v19[113] = v24;
          v32 = v24 / (PpmParkMultiparkGranularity != 0);
          if ( v32 < v31 )
            v32 = v31;
          v19[121] = v32;
        }
        if ( ++v15 >= (unsigned __int16)KeNumberNodes )
        {
          v14 = *(_DWORD *)Count;
          break;
        }
      }
    }
    v33 = 8LL * v14;
    v34 = ExAllocatePoolWithTag(NonPagedPoolNx, v33, 0x704D5050u);
    v80 = v34;
    v35 = v34;
    if ( !v34 )
      goto LABEL_97;
    memset(v34, 0, v33);
    v36 = v35;
    if ( (_DWORD)v8 )
    {
      v37 = (unsigned int *)(v10 + 96);
      v78 = v8;
      do
      {
        v38 = *((unsigned __int8 *)v37 - 90);
        *((_QWORD *)v37 - 5) = v36;
        ++v38;
        v39 = (void *)*((_QWORD *)v37 - 5);
        v40 = 8LL * v38;
        v41 = (size_t)v36 + v40;
        *v37 = v38;
        *((_QWORD *)v37 - 4) = v41;
        v42 = v40 + v41;
        *((_QWORD *)v37 - 3) = v42;
        v36 = (void *)(v40 + v42);
        memmove(v39, (const void *)(*((_QWORD *)v37 - 6) + 32LL), v40);
        memmove(*((void **)v37 - 4), (const void *)(*((_QWORD *)v37 - 6) + 32LL), 8LL * *v37);
        v43 = (unsigned __int8 *)(v37 + 2);
        *((_QWORD *)v37 - 2) = *(_QWORD *)(*((_QWORD *)v37 - 6) + 24LL);
        *((_QWORD *)v37 - 1) = *(_QWORD *)(*((_QWORD *)v37 - 6) + 24LL);
        if ( *((_BYTE *)v37 - 90) != *((_BYTE *)v37 + 8) )
        {
          v61 = 2LL;
          v62 = v37 + 8;
          v63 = v37 + 22;
          do
          {
            v64 = *v43;
            if ( *v43 )
            {
              *((_QWORD *)v63 - 5) = v36;
              v65 = (void *)*((_QWORD *)v63 - 5);
              v66 = v64 + 1;
              v67 = 8LL * v66;
              v68 = (size_t)v36 + v67;
              *v63 = v66;
              *((_QWORD *)v63 - 4) = v68;
              v69 = v67 + v68;
              *((_QWORD *)v63 - 3) = v69;
              v36 = (void *)(v67 + v69);
              memmove(v65, (const void *)(*(_QWORD *)v62 + 32LL), v67);
              memmove(*((void **)v63 - 4), (const void *)(*(_QWORD *)v62 + 32LL), 8LL * *v63);
              *((_QWORD *)v63 - 2) = *(_QWORD *)(*(_QWORD *)v62 + 24LL);
              *((_QWORD *)v63 - 1) = *(_QWORD *)(*(_QWORD *)v62 + 24LL);
            }
            v63 += 12;
            v62 += 2;
            ++v43;
            --v61;
          }
          while ( v61 );
          v8 = v78;
        }
        v37 += 62;
        v78 = --v8;
      }
      while ( v8 );
      LODWORD(v8) = v75;
      v35 = v80;
    }
    v44 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
    PpmParkNodes = v79;
    v45 = v44;
    PpmParkNumNodes = v8;
    PpmParkHistograms = (__int64)v35;
    KxReleaseSpinLock(&PpmParkStateLock);
    __writecr8(v45);
    v46 = 0LL;
    v35 = 0LL;
LABEL_60:
    if ( v46 )
    {
      if ( (_DWORD)v8 )
      {
        v70 = v46 + 6;
        v71 = (unsigned int)v8;
        do
        {
          if ( *v70 )
            ExFreePoolWithTag(*v70, 0x704D5050u);
          v72 = 2LL;
          v73 = v70 + 10;
          do
          {
            if ( *v73 )
              ExFreePoolWithTag(*v73, 0x704D5050u);
            ++v73;
            --v72;
          }
          while ( v72 );
          v70 += 31;
          --v71;
        }
        while ( v71 );
      }
      ExFreePoolWithTag(v46, 0x704D5050u);
    }
    if ( v35 )
      ExFreePoolWithTag(v35, 0x704D5050u);
  }
  v47 = P;
  if ( P )
  {
    if ( v76 )
    {
      v48 = (PVOID *)((char *)P + 48);
      v49 = v76;
      do
      {
        if ( *v48 )
          ExFreePoolWithTag(*v48, 0x704D5050u);
        v50 = v48 + 10;
        v51 = 2LL;
        do
        {
          if ( *v50 )
            ExFreePoolWithTag(*v50, 0x704D5050u);
          ++v50;
          --v51;
        }
        while ( v51 );
        v48 += 31;
        --v49;
      }
      while ( v49 );
    }
    ExFreePoolWithTag(v47, 0x704D5050u);
  }
  if ( v82 )
    ExFreePoolWithTag(v82, 0x704D5050u);
  PpmParkApplyPolicy();
  return PpmParkParkingAvailable();
}
