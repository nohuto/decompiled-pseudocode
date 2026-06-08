/*
 * XREFs of InitializeEnergyEstimationForEfficiencyClass @ 0x1C002A574
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C002A448 (InitializeEnergyEstimation.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C00091F4 (InitializeEnumerationContext.c)
 *     ResetEnumerationContext @ 0x1C0009224 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0009240 (EnumerateNextDevice.c)
 *     __security_check_cookie @ 0x1C000C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CA40 (memset.c)
 */

__int64 __fastcall InitializeEnergyEstimationForEfficiencyClass(unsigned int a1)
{
  char *v1; // rbx
  __int64 result; // rax
  __int64 v4; // rdi
  PVOID PoolWithTag; // rax
  void *v6; // rsi
  __int64 v7; // rdx
  int v8; // r14d
  __int64 v9; // rdi
  void *v10; // rsi
  unsigned int v11; // edi
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rax
  char *v16; // rax
  unsigned int v17; // edi
  unsigned int v18; // r8d
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rcx
  int *v20; // rdx
  int v21; // eax
  _QWORD *v22; // rax
  _QWORD *v23; // rsi
  int v24; // r15d
  __int64 v25; // rdi
  _QWORD *v26; // rsi
  __int64 v27; // [rsp+38h] [rbp-29h] BYREF
  __int64 v28[4]; // [rsp+40h] [rbp-21h] BYREF
  char *v29; // [rsp+60h] [rbp-1h]
  struct _GROUP_AFFINITY Affinity; // [rsp+68h] [rbp+7h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+78h] [rbp+17h] BYREF

  v1 = (char *)&unk_1C0011970 + 256 * (unsigned __int64)a1;
  v29 = v1;
  InitializeEnumerationContext((__int64)&qword_1C00113F8, 32, (__int64)v28);
  ResetEnumerationContext(v28);
  result = EnumerateNextDevice((__int64)v28, &v27);
  if ( !(_DWORD)result )
  {
    while ( 1 )
    {
      v4 = v27;
      if ( (*(_QWORD *)(v27 + 264) & 0x2000000000LL) != 0 && *(unsigned __int8 *)(v27 + 352) == a1 )
      {
        if ( !qword_1C00115A0 )
          goto LABEL_10;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x72637250u);
        v6 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_10;
        memset(PoolWithTag, 0, 0x70uLL);
        v7 = *(unsigned int *)(v4 + 56);
        *(_QWORD *)(v4 + 344) = v6;
        KeProcessorGroupAffinity(&Affinity, v7);
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        v8 = ((__int64 (*)(void))qword_1C00115A0)();
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        if ( v8 < 0 )
          break;
      }
      result = EnumerateNextDevice((__int64)v28, &v27);
      if ( (_DWORD)result )
        goto LABEL_52;
    }
    ExFreePoolWithTag(v6, 0x72637250u);
    *(_QWORD *)(v4 + 344) = 0LL;
LABEL_10:
    InitializeEnumerationContext((__int64)&qword_1C00113F8, 32, (__int64)v28);
    ResetEnumerationContext(v28);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v28, &v27) )
    {
      v9 = v27;
      if ( (*(_QWORD *)(v27 + 264) & 0x2000000000LL) != 0 && *(unsigned __int8 *)(v27 + 352) == a1 )
      {
        v10 = *(void **)(v27 + 344);
        if ( v10 )
        {
          if ( qword_1C00115A8 )
          {
            KeProcessorGroupAffinity(&PreviousAffinity, *(unsigned int *)(v27 + 56));
            KeSetSystemGroupAffinityThread(&PreviousAffinity, &Affinity);
            ((void (*)(void))qword_1C00115A8)();
            KeRevertToUserGroupAffinityThread(&Affinity);
          }
          ExFreePoolWithTag(v10, 0x72637250u);
          *(_QWORD *)(v9 + 344) = 0LL;
        }
      }
    }
    v11 = 0;
    *((_QWORD *)v1 + 31) = 0LL;
    v12 = 0;
    for ( *((_QWORD *)v1 + 30) = 0LL; v12 < *((_DWORD *)v1 + 10); ++v12 )
    {
      if ( (*(_DWORD *)&v1[12 * v12 + 48] & 1) == 0 )
      {
        if ( v12 != v11 )
        {
          v13 = 3LL * v11;
          *(_QWORD *)&v1[4 * v13 + 44] = *(_QWORD *)&v1[12 * v12 + 44];
          *(_DWORD *)&v1[4 * v13 + 52] = *(_DWORD *)&v1[12 * v12 + 52];
        }
        ++v11;
      }
    }
    result = *((unsigned int *)v1 + 10);
    if ( (_DWORD)result != v11 )
    {
      result = (__int64)memset(&v1[8 * v11 + 44 + 4 * v11], 0, 12LL * ((unsigned int)result - v11));
      *((_DWORD *)v1 + 10) = v11;
    }
    if ( v11 )
    {
      ResetEnumerationContext(v28);
      result = EnumerateNextDevice((__int64)v28, &v27);
      if ( (_DWORD)result )
      {
LABEL_41:
        if ( *((_QWORD *)v1 + 30) )
          return result;
      }
      else
      {
        while ( 1 )
        {
          v14 = v27;
          if ( (*(_QWORD *)(v27 + 264) & 0x2000000000LL) != 0 )
          {
            v15 = *(unsigned __int8 *)(v27 + 352);
            if ( (_DWORD)v15 == a1 )
              break;
          }
LABEL_40:
          result = EnumerateNextDevice((__int64)v28, &v27);
          if ( (_DWORD)result )
            goto LABEL_41;
        }
        v16 = (char *)&unk_1C0011970 + 256 * v15;
        v17 = *((_DWORD *)v16 + 10);
        if ( v17 && v17 <= 4 )
        {
          v18 = 0;
          p_PreviousAffinity = &PreviousAffinity;
          v20 = (int *)(v16 + 44);
          while ( 1 )
          {
            v21 = *v20;
            LODWORD(p_PreviousAffinity->Mask) = *v20;
            if ( (unsigned int)(v21 - 2) > 0x15 )
              break;
            ++v18;
            v20 += 3;
            p_PreviousAffinity = (struct _GROUP_AFFINITY *)((char *)p_PreviousAffinity + 4);
            if ( v18 >= v17 )
            {
              v22 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x72637250u);
              v23 = v22;
              if ( !v22 )
                break;
              memset(v22, 0, 0x70uLL);
              *(_QWORD *)(v14 + 344) = v23;
              v24 = ((__int64 (__fastcall *)(_QWORD, struct _GROUP_AFFINITY *, _QWORD, struct _GROUP_AFFINITY *))HalPrivateDispatchTable[72])(
                      *(unsigned int *)(v14 + 56),
                      &PreviousAffinity,
                      v17,
                      &Affinity);
              if ( v24 < 0 )
              {
                ExFreePoolWithTag(v23, 0x72637250u);
                *(_QWORD *)(v14 + 344) = 0LL;
              }
              else
              {
                v23[1] = Affinity.Mask;
                *(_DWORD *)v23 = v17;
              }
              if ( v24 < 0 )
                break;
              goto LABEL_40;
            }
          }
        }
      }
      InitializeEnumerationContext((__int64)&qword_1C00113F8, 32, (__int64)v28);
      ResetEnumerationContext(v28);
      result = EnumerateNextDevice((__int64)v28, &v27);
      if ( !(_DWORD)result )
      {
        do
        {
          v25 = v27;
          if ( (*(_QWORD *)(v27 + 264) & 0x2000000000LL) != 0 && *(unsigned __int8 *)(v27 + 352) == a1 )
          {
            v26 = *(_QWORD **)(v27 + 344);
            if ( v26 )
            {
              if ( v26[1] )
              {
                ((void (*)(void))HalPrivateDispatchTable[74])();
                v26[1] = 0LL;
              }
              ExFreePoolWithTag(v26, 0x72637250u);
              *(_QWORD *)(v25 + 344) = 0LL;
            }
          }
          result = EnumerateNextDevice((__int64)v28, &v27);
        }
        while ( !(_DWORD)result );
        v1 = v29;
      }
      *((_QWORD *)v1 + 31) = 0LL;
      *((_QWORD *)v1 + 30) = 0LL;
    }
  }
LABEL_52:
  if ( !*((_QWORD *)v1 + 30) )
  {
    result = (__int64)ComputeProcessorEnergy;
    *((_QWORD *)v1 + 30) = ComputeProcessorEnergy;
  }
  return result;
}
