/*
 * XREFs of PpmInstallNewIdleStates @ 0x14015F2A0
 * Callers:
 *     PpmIdleInstallDefaultStates @ 0x14015F280 (PpmIdleInstallDefaultStates.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     PpmDeepestHardwareIdleState @ 0x14015F7DC (PpmDeepestHardwareIdleState.c)
 *     PpmResetIdlePolicy @ 0x14015F818 (PpmResetIdlePolicy.c)
 *     PpmUpdateProcessorIdleAccounting @ 0x14015F998 (PpmUpdateProcessorIdleAccounting.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmInstallNewIdleStates(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r15
  __int64 v6; // rbp
  int v7; // esi
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // r12d
  unsigned int v12; // r13d
  unsigned int v13; // ecx
  _QWORD *PoolWithTag; // rax
  _DWORD *v15; // rdi
  char *v16; // rdx
  char *v17; // rsi
  char *v18; // r13
  unsigned int *v19; // r12
  __int64 v20; // r14
  char *v21; // rsi
  unsigned int v22; // r15d
  _DWORD *v23; // rdi
  char *v24; // rsi
  _DWORD *v25; // r14
  unsigned int v26; // eax
  __int64 v27; // rbp
  __int64 v28; // r13
  __int64 v29; // rcx
  __int64 v31; // rdx
  unsigned int v32; // r8d
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  char *v36; // rcx
  char v37; // [rsp+20h] [rbp-138h]
  size_t Size; // [rsp+28h] [rbp-130h]
  size_t Sizea; // [rsp+28h] [rbp-130h]
  unsigned int v40; // [rsp+34h] [rbp-124h]
  _QWORD *v43; // [rsp+48h] [rbp-110h]
  __int64 v44; // [rsp+50h] [rbp-108h]
  _DWORD v45[44]; // [rsp+60h] [rbp-F8h] BYREF

  v3 = 0;
  v4 = a1 + 23936;
  v44 = a1 + 23936;
  if ( a3 == 1 )
  {
    if ( *(_QWORD *)v4 )
      return v3;
    goto LABEL_3;
  }
  if ( !*(_QWORD *)v4 )
  {
LABEL_3:
    v37 = 0;
    goto LABEL_4;
  }
  v37 = *(_BYTE *)(*(_QWORD *)v4 + 1LL);
  PpmUpdateProcessorIdleAccounting(a1 + 23936);
LABEL_4:
  v6 = *(unsigned int *)(a2 + 116);
  if ( (_DWORD)v6 )
  {
    v7 = 0;
    if ( *(_BYTE *)(a2 + 18) == 1 )
    {
      v8 = (_DWORD *)(a2 + 120);
      v9 = (unsigned int)v6;
      do
      {
        v10 = v7 + 1;
        if ( (*v8 & 0x100) != 0 )
          v10 = v7;
        v8 += 8;
        v7 = v10;
        --v9;
      }
      while ( v9 );
    }
    v11 = (248 * v6 + 819) & 0xFFFFFFFC;
    v12 = (v11 + 8 * *(_DWORD *)(a2 + 112) + 7) & 0xFFFFFFF8;
    v40 = (v12 + 7 + 24 * v7) & 0xFFFFFFF8;
    v13 = (((v40 + 1000 * v6 + 47) & 0xFFFFFFF8) + 4 * v6 + 15) & 0xFFFFFFF8;
    if ( PpmIdleVetoList )
      v13 += (*(_DWORD *)PpmIdleVetoList * (_DWORD)v6) << 6;
    Size = v13;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x694D5050u);
    v43 = PoolWithTag;
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, Size);
      v15[8] = a3;
      *((_QWORD *)v15 + 5) = *(_QWORD *)(a2 + 72);
      *(_BYTE *)v15 = *(_BYTE *)(a2 + 18);
      *((_BYTE *)v15 + 2) = *(_BYTE *)(a2 + 16);
      v15[16] = 0;
      v15[7] = v6;
      *((_QWORD *)v15 + 51) = *(_QWORD *)(a2 + 24);
      *((_QWORD *)v15 + 54) = *(_QWORD *)(a2 + 40);
      *((_QWORD *)v15 + 55) = *(_QWORD *)(a2 + 48);
      *((_QWORD *)v15 + 56) = *(_QWORD *)(a2 + 56);
      *((_QWORD *)v15 + 53) = *(_QWORD *)(a2 + 80);
      *((_QWORD *)v15 + 52) = *(_QWORD *)(a2 + 64);
      *((_QWORD *)v15 + 57) = *(_QWORD *)(a2 + 88);
      *((_QWORD *)v15 + 58) = *(_QWORD *)(a2 + 32);
      *((_QWORD *)v15 + 59) = *(_QWORD *)(a2 + 96);
      *((_QWORD *)v15 + 60) = *(_QWORD *)(a2 + 104);
      *((_QWORD *)v15 + 61) = *(_QWORD *)(a2 + 8);
      v15[136] = *(_DWORD *)(a2 + 112);
      v15[198] = 1;
      *((_QWORD *)v15 + 69) = (char *)v15 + v11;
      *((_QWORD *)v15 + 101) = v15 + 200;
      if ( v7 )
      {
        v16 = (char *)v15 + v12;
        v15[190] = v7;
        *((_QWORD *)v15 + 96) = v16;
        v17 = &v16[24 * v7];
      }
      else
      {
        v17 = 0LL;
      }
      *((_QWORD *)v15 + 9) = 1310740LL;
      memset(v15 + 20, 0, 0xA0uLL);
      v18 = (char *)v15 + ((((v40 + 1000 * (_DWORD)v6 + 47) & 0xFFFFFFF8) + 4 * (_DWORD)v6 + 15) & 0xFFFFFFF8);
      Sizea = PpmIdleVetoList;
      v19 = (unsigned int *)(v17 + 4);
      v20 = a2 + 120;
      v21 = (char *)(v15 + 246);
      v22 = 0;
      v23 = (_DWORD *)PpmIdleVetoList;
      do
      {
        *(_OWORD *)v21 = *(_OWORD *)(v20 + 16);
        *((_QWORD *)v21 - 21) = 1310721LL;
        memset(v21 - 160, 0, 0xA0uLL);
        v21[72] = (*(_DWORD *)v20 >> 3) & 0xF;
        v21[74] = *(_BYTE *)v20 & 1;
        v21[75] = (*(_DWORD *)v20 & 4) != 0;
        v21[76] = (*(_DWORD *)v20 & 2) != 0;
        if ( *(_DWORD *)v20 >= 0x80000000 )
        {
          *((_DWORD *)v21 + 7) = 1;
          v21[73] = 1;
        }
        v21[77] = (*(_DWORD *)v20 & 0x80) != 0;
        v21[78] = BYTE1(*(_DWORD *)v20) & 1;
        v21[79] = (*(_DWORD *)v20 & 0x40000000) != 0;
        *((_DWORD *)v21 + 4) = *(_DWORD *)(v20 + 4);
        *((_DWORD *)v21 + 6) = *(_DWORD *)(v20 + 12);
        *((_DWORD *)v21 + 5) = *(_DWORD *)(v20 + 8);
        *((_QWORD *)v21 + 6) = v21 + 40;
        *((_QWORD *)v21 + 5) = v21 + 40;
        if ( v23 )
        {
          *((_DWORD *)v21 + 15) = *v23;
          *((_QWORD *)v21 + 8) = v18;
          v18 += 64 * (unsigned __int64)(unsigned int)*v23;
        }
        if ( v19 != (unsigned int *)4 && (*(_DWORD *)v20 & 0x100) == 0 )
        {
          v19 -= 6;
          *((_BYTE *)v19 - 3) = 1;
          *v19 = v22;
        }
        ++v22;
        v21 += 248;
        v20 += 32LL;
      }
      while ( v22 < (unsigned int)v6 );
      v24 = (char *)v43 + v40;
      v43[93] = (char *)v43 + ((v40 + 1000 * (_DWORD)v6 + 47) & 0xFFFFFFF8);
      *(_DWORD *)v24 = v6;
      if ( Sizea )
      {
        v34 = v24 + 200;
        v35 = v6;
        v36 = (char *)(v43 + 127);
        do
        {
          *v34 = v36;
          v36 += 248;
          v34 += 125;
          --v35;
        }
        while ( v35 );
      }
      KxAcquireSpinLock(&PpmIdleVetoLock);
      v25 = *(_DWORD **)v44;
      *(_QWORD *)v44 = v43;
      KxReleaseSpinLock(&PpmIdleVetoLock);
      if ( v37 )
        *((_DWORD *)v43 + 6) = v25[6];
      if ( v25 && (v26 = v25[3], v26 < (unsigned int)v6) )
        *((_DWORD *)v43 + 3) = v26;
      else
        *((_DWORD *)v43 + 3) = 0;
      *((_BYTE *)v43 + 1) = v37;
      v27 = *(_QWORD *)(v44 + 8);
      *(_QWORD *)(v44 + 8) = v24;
      if ( v27 )
      {
        v31 = *(_QWORD *)(v27 + 24);
        v32 = 0;
        for ( *((_QWORD *)v24 + 3) = v31; v32 < *(_DWORD *)v27; *((_QWORD *)v24 + 3) = v31 )
        {
          v33 = v32++;
          v31 += *(_QWORD *)(1000 * v33 + v27 + 40);
        }
        v28 = a1;
      }
      else
      {
        v28 = a1;
        *((_QWORD *)v24 + 3) = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 24) + 652LL);
      }
      PpmResetIdlePolicy(v44);
      if ( v27 )
        *((_DWORD *)v24 + 2) = *(_DWORD *)(v27 + 8) + 1;
      v45[0] = 1310721;
      memset(&v45[1], 0, 0xA4uLL);
      KeAddProcessorAffinityEx(v45, *(_DWORD *)(v28 + 36));
      LOBYTE(v29) = PpmDeepestHardwareIdleState(v43);
      ((void (__fastcall *)(__int64, _DWORD *))off_14033B3B8[0])(v29, v45);
      if ( *((_DWORD *)v43 + 8) != 1 && *(_BYTE *)v43 == 1 )
        PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
      if ( v25 )
        ExFreePoolWithTag(v25, 0x694D5050u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
