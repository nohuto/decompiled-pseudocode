/*
 * XREFs of EtwpUpdateFilterData @ 0x140554514
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140552860 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140554260 (EtwpUpdateGuidEnableInfo.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1400229D0 (KeGenericCallDpc.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1405D2714 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpUpdateEventNameFilter @ 0x1405D3F6C (EtwpUpdateEventNameFilter.c)
 *     EtwpFreeEventNameFilter @ 0x140712F20 (EtwpFreeEventNameFilter.c)
 *     EtwpUpdatePerfectHashFunction @ 0x140712F50 (EtwpUpdatePerfectHashFunction.c)
 *     EtwpUpdatePidFilterData @ 0x140712F78 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateStringFilterData @ 0x14071301C (EtwpUpdateStringFilterData.c)
 */

__int64 __fastcall EtwpUpdateFilterData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r10d
  char v7; // bp
  __int64 v9; // rcx
  PVOID PoolWithTag; // rax
  PVOID v12; // rsi
  __int32 v13; // esi
  __int64 v14; // r14
  __int32 v15; // ebp
  unsigned int v16; // eax
  int v17; // edx
  __int64 v18; // rcx
  void *v19; // rbp
  __int64 v20; // r14
  __int32 v21; // esi
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // [rsp+20h] [rbp-78h]
  __int64 v25; // [rsp+28h] [rbp-70h]
  PVOID updated; // [rsp+30h] [rbp-68h]
  PVOID P; // [rsp+38h] [rbp-60h]
  PVOID v28; // [rsp+40h] [rbp-58h]
  __int64 v29; // [rsp+48h] [rbp-50h] BYREF
  int v30; // [rsp+50h] [rbp-48h]
  int v31; // [rsp+54h] [rbp-44h]
  __int64 v33; // [rsp+B0h] [rbp+18h]
  char v34; // [rsp+B8h] [rbp+20h]

  v33 = a3;
  v5 = 0;
  v6 = a2;
  v34 = 0;
  v7 = a4;
  P = 0LL;
  updated = 0LL;
  LOBYTE(a4) = 0;
  v25 = 0LL;
  v28 = 0LL;
  if ( !a3 || !*(_DWORD *)(a3 + 116) )
    v7 = 1;
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 368);
    if ( v9 )
    {
      v20 = 80LL * a2;
      LOBYTE(a4) = v7;
      v21 = _InterlockedExchange((volatile __int32 *)(v20 + v9), 0);
      EtwpUpdateSchematizedFilterData(v20 + *(_QWORD *)(a1 + 368), 0LL, 0LL, a4);
      if ( (v21 & 0x80000004) == 0x80000004 )
      {
        LOBYTE(v22) = v7;
        EtwpUpdatePidFilterData(v20 + *(_QWORD *)(a1 + 368), 0LL, v22, v23);
      }
      if ( (v21 & 0x80000008) == 0x80000008 )
      {
        LOBYTE(v22) = v7;
        EtwpUpdateStringFilterData(v20 + *(_QWORD *)(a1 + 368) + 16LL, 0LL, v22, v23);
      }
      if ( (v21 & 0x80000010) == 0x80000010 )
      {
        LOBYTE(v22) = v7;
        EtwpUpdateStringFilterData(v20 + *(_QWORD *)(a1 + 368) + 24LL, 0LL, v22, v23);
      }
      if ( (v21 & 0x80000020) == 0x80000020 )
      {
        LOBYTE(v22) = v7;
        EtwpUpdateStringFilterData(v20 + *(_QWORD *)(a1 + 368) + 32LL, 0LL, v22, v23);
      }
      if ( (v21 & 0x80001000) == 0x80001000 )
      {
        LOBYTE(v22) = v7;
        P = (PVOID)EtwpUpdatePerfectHashFunction(v20 + *(_QWORD *)(a1 + 368) + 40LL, 0LL, v22, v23);
      }
      if ( (v21 & 0x80000200) == 0x80000200 )
      {
        LOBYTE(v22) = v7;
        updated = (PVOID)EtwpUpdatePerfectHashFunction(v20 + *(_QWORD *)(a1 + 368) + 48LL, 0LL, v22, v23);
      }
      if ( (v21 & 0x80000400) == 0x80000400 )
      {
        LOBYTE(v22) = v7;
        v25 = EtwpUpdateEventNameFilter(v20 + *(_QWORD *)(a1 + 368) + 72LL, 0LL, v22, v23);
      }
      if ( (v21 & 0x80000100) == 0x80000100 )
      {
        LOBYTE(v22) = v7;
        v19 = (void *)EtwpUpdatePerfectHashFunction(v20 + *(_QWORD *)(a1 + 368) + 56LL, 0LL, v22, v23);
      }
      else
      {
        v19 = 0LL;
      }
      goto LABEL_32;
    }
    return v5;
  }
  if ( !*(_QWORD *)(a1 + 368) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x280uLL, 0x46777445u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    memset(PoolWithTag, 0, 0x280uLL);
    a3 = v33;
    LOBYTE(a4) = 0;
    v6 = a2;
    *(_QWORD *)(a1 + 368) = v12;
  }
  v13 = 0;
  v24 = 0;
  v14 = 80LL * v6;
  v15 = _InterlockedExchange((volatile __int32 *)(v14 + *(_QWORD *)(a1 + 368)), 0);
  v16 = 0;
  if ( !*(_DWORD *)(a3 + 116) )
    goto LABEL_21;
  do
  {
    v17 = *(_DWORD *)(v33 + 16LL * v16 + 132);
    v18 = v33 + *(_QWORD *)(v33 + 16LL * v16 + 120);
    v30 = *(_DWORD *)(v33 + 16LL * v16 + 128);
    v31 = v17;
    v29 = v18;
    switch ( v17 )
    {
      case -2147483648:
        EtwpUpdateSchematizedFilterData(v14 + *(_QWORD *)(a1 + 368), v6, &v29, 0LL);
        LOBYTE(a4) = 1;
        v34 = 1;
        goto LABEL_67;
      case -2147483644:
        EtwpUpdatePidFilterData(v14 + *(_QWORD *)(a1 + 368), &v29, 0LL, a4);
        v13 |= 0x80000004;
        goto LABEL_63;
      case -2147483640:
        EtwpUpdateStringFilterData(v14 + *(_QWORD *)(a1 + 368) + 16LL, a5, 0LL, a4);
        v13 |= 0x80000008;
        goto LABEL_63;
      case -2147483632:
        EtwpUpdateStringFilterData(v14 + *(_QWORD *)(a1 + 368) + 24LL, a5 + 8, 0LL, a4);
        v13 |= 0x80000010;
        goto LABEL_63;
      case -2147483616:
        EtwpUpdateStringFilterData(v14 + *(_QWORD *)(a1 + 368) + 32LL, a5 + 16, 0LL, a4);
        v13 |= 0x80000020;
LABEL_63:
        LOBYTE(a4) = v34;
LABEL_67:
        v6 = a2;
        break;
      case -2147482624:
        v25 = EtwpUpdateEventNameFilter(v14 + *(_QWORD *)(a1 + 368) + 72LL, a5 + 40, 0LL, a4);
        v13 |= 0x80000400;
LABEL_18:
        LOBYTE(a4) = v34;
        break;
      case -2147483392:
        v28 = (PVOID)EtwpUpdatePerfectHashFunction(v14 + *(_QWORD *)(a1 + 368) + 56LL, a5 + 48, 0LL, a4);
        v13 |= 0x80000100;
        goto LABEL_18;
      case -2147483136:
        updated = (PVOID)EtwpUpdatePerfectHashFunction(v14 + *(_QWORD *)(a1 + 368) + 48LL, a5 + 24, 0LL, a4);
        v13 |= 0x80000200;
        goto LABEL_18;
      case -2147479552:
        P = (PVOID)EtwpUpdatePerfectHashFunction(v14 + *(_QWORD *)(a1 + 368) + 40LL, a5 + 32, 0LL, a4);
        v13 |= 0x80001000;
        goto LABEL_18;
    }
    v16 = v24 + 1;
    v24 = v16;
  }
  while ( v16 < *(_DWORD *)(v33 + 116) );
  v5 = 0;
  if ( !(_BYTE)a4 )
  {
LABEL_21:
    LOBYTE(a4) = 1;
    EtwpUpdateSchematizedFilterData(v14 + *(_QWORD *)(a1 + 368), 0LL, 0LL, a4);
  }
  if ( (v15 & 0x80000004) == 0x80000004 && (v13 & 0x80000004) != 0x80000004 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdatePidFilterData(v14 + *(_QWORD *)(a1 + 368), 0LL, a3, a4);
  }
  if ( (v15 & 0x80000008) == 0x80000008 && (v13 & 0x80000008) != 0x80000008 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v14 + *(_QWORD *)(a1 + 368) + 16LL, 0LL, a3, a4);
  }
  if ( (v15 & 0x80000010) == 0x80000010 && (v13 & 0x80000010) != 0x80000010 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v14 + *(_QWORD *)(a1 + 368) + 24LL, 0LL, a3, a4);
  }
  if ( (v15 & 0x80000020) == 0x80000020 && (v13 & 0x80000020) != 0x80000020 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v14 + *(_QWORD *)(a1 + 368) + 32LL, 0LL, a3, a4);
  }
  if ( (v15 & 0x80001000) == 0x80001000 && (v13 & 0x80001000) != 0x80001000 )
  {
    LOBYTE(a3) = 1;
    P = (PVOID)EtwpUpdatePerfectHashFunction(v14 + *(_QWORD *)(a1 + 368) + 40LL, 0LL, a3, a4);
  }
  if ( (v15 & 0x80000200) == 0x80000200 && (v13 & 0x80000200) != 0x80000200 )
  {
    LOBYTE(a3) = 1;
    updated = (PVOID)EtwpUpdatePerfectHashFunction(v14 + *(_QWORD *)(a1 + 368) + 48LL, 0LL, a3, a4);
  }
  if ( (v15 & 0x80000400) == 0x80000400 && (v13 & 0x80000400) != 0x80000400 )
  {
    LOBYTE(a3) = 1;
    v25 = EtwpUpdateEventNameFilter(v14 + *(_QWORD *)(a1 + 368) + 72LL, 0LL, a3, a4);
  }
  if ( (v15 & 0x80000100) != 0x80000100 || (v13 & 0x80000100) == 0x80000100 )
  {
    v19 = v28;
  }
  else
  {
    LOBYTE(a3) = 1;
    v19 = (void *)EtwpUpdatePerfectHashFunction(v14 + *(_QWORD *)(a1 + 368) + 56LL, 0LL, a3, a4);
  }
  _InterlockedExchange((volatile __int32 *)(v14 + *(_QWORD *)(a1 + 368)), v13);
LABEL_32:
  if ( P || updated || v25 || v19 )
  {
    KeGenericCallDpc((__int64)EtwpSynchronizationDpc, 0LL);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( updated )
      ExFreePoolWithTag(updated, 0);
    if ( v25 )
      EtwpFreeEventNameFilter(v25);
    if ( v19 && _InterlockedExchangeAdd((volatile signed __int32 *)v19, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(v19, 0);
  }
  return v5;
}
