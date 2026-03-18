/*
 * XREFs of EtwpUpdateFilterData @ 0x14058CE40
 * Callers:
 *     EtwpUpdateGuidEnableInfo @ 0x14058CED4 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140591B34 (EtwpClearSessionAndUnreferenceEntry.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140004B40 (KeGenericCallDpc.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpFreeEventNameFilter @ 0x1407B1D2C (EtwpFreeEventNameFilter.c)
 *     EtwpUpdateEventFilter @ 0x1407B1D5C (EtwpUpdateEventFilter.c)
 *     EtwpUpdateLevelKwFilter @ 0x1407B1D84 (EtwpUpdateLevelKwFilter.c)
 *     EtwpUpdatePidFilterData @ 0x1407B1E2C (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1407B1ED0 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpUpdateStringFilterData @ 0x1407B1F94 (EtwpUpdateStringFilterData.c)
 */

__int64 __fastcall EtwpUpdateFilterData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r10d
  char v7; // bp
  char *v9; // r15
  __int64 v11; // r14
  __int32 v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rbp
  char *PoolWithTag; // rax
  __int32 v17; // esi
  unsigned int v18; // eax
  __int64 v19; // r14
  __int32 v20; // ebp
  unsigned int v21; // edx
  __int64 v22; // rcx
  unsigned int v23; // [rsp+20h] [rbp-78h]
  PVOID v24; // [rsp+28h] [rbp-70h]
  PVOID v25; // [rsp+30h] [rbp-68h]
  PVOID updated; // [rsp+38h] [rbp-60h]
  PVOID P; // [rsp+40h] [rbp-58h]
  __int64 v28; // [rsp+48h] [rbp-50h]
  __int64 v29; // [rsp+50h] [rbp-48h] BYREF
  int v30; // [rsp+58h] [rbp-40h]
  unsigned int v31; // [rsp+5Ch] [rbp-3Ch]
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
  v24 = 0LL;
  v28 = 0LL;
  if ( !a3 || !*(_DWORD *)(a3 + 116) )
    v7 = 1;
  v9 = *(char **)(a1 + 368);
  if ( v7 )
  {
    if ( v9 )
    {
      v11 = 96LL * a2;
      LOBYTE(a4) = v7;
      v12 = _InterlockedExchange((volatile __int32 *)&v9[v11], 0);
      EtwpUpdateSchematizedFilterData(v11 + *(_QWORD *)(a1 + 368), 0LL, 0LL, a4);
      if ( (v12 & 0x80000004) == 0x80000004 )
      {
        LOBYTE(v13) = v7;
        EtwpUpdatePidFilterData(v11 + *(_QWORD *)(a1 + 368), 0LL, v13, v14);
      }
      if ( (v12 & 0x80000008) == 0x80000008 )
      {
        LOBYTE(v13) = v7;
        EtwpUpdateStringFilterData(v11 + *(_QWORD *)(a1 + 368) + 16LL, 0LL, v13, v14);
      }
      if ( (v12 & 0x80000010) == 0x80000010 )
      {
        LOBYTE(v13) = v7;
        EtwpUpdateStringFilterData(v11 + *(_QWORD *)(a1 + 368) + 24LL, 0LL, v13, v14);
      }
      if ( (v12 & 0x80000020) == 0x80000020 )
      {
        LOBYTE(v13) = v7;
        EtwpUpdateStringFilterData(v11 + *(_QWORD *)(a1 + 368) + 32LL, 0LL, v13, v14);
      }
      if ( (v12 & 0x80001000) == 0x80001000 )
      {
        LOBYTE(v13) = v7;
        P = (PVOID)EtwpUpdateEventFilter(v11 + *(_QWORD *)(a1 + 368) + 40LL, 0LL, v13, v14);
      }
      if ( (v12 & 0x80000200) == 0x80000200 )
      {
        LOBYTE(v13) = v7;
        updated = (PVOID)EtwpUpdateEventFilter(v11 + *(_QWORD *)(a1 + 368) + 64LL, 0LL, v13, v14);
      }
      if ( (v12 & 0x80000400) == 0x80000400 )
      {
        LOBYTE(v13) = v7;
        v25 = (PVOID)EtwpUpdateEventFilter(v11 + *(_QWORD *)(a1 + 368) + 88LL, 0LL, v13, v14);
      }
      if ( (v12 & 0x80002000) == 0x80002000 )
      {
        LOBYTE(v13) = v7;
        v24 = (PVOID)EtwpUpdateEventFilter(v11 + *(_QWORD *)(a1 + 368) + 48LL, 0LL, v13, v14);
      }
      if ( (v12 & 0x80004000) == 0x80004000 )
      {
        LOBYTE(v13) = v7;
        EtwpUpdateLevelKwFilter(v11 + *(_QWORD *)(a1 + 368), 0LL, v13);
      }
      if ( (v12 & 0x80000100) == 0x80000100 )
      {
        LOBYTE(v13) = v7;
        v15 = (void *)EtwpUpdateEventFilter(v11 + *(_QWORD *)(a1 + 368) + 72LL, 0LL, v13, v14);
      }
      else
      {
        v15 = 0LL;
      }
      goto LABEL_93;
    }
    return v5;
  }
  if ( !v9 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x300uLL, 0x46777445u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    memset(PoolWithTag, 0, 0x300uLL);
    a3 = v33;
    v6 = a2;
    *(_QWORD *)(a1 + 368) = v9;
  }
  v17 = 0;
  v23 = 0;
  v18 = 0;
  v19 = 96LL * v6;
  v20 = _InterlockedExchange((volatile __int32 *)&v9[v19], 0);
  if ( !*(_DWORD *)(a3 + 116) )
    goto LABEL_59;
  do
  {
    v21 = *(_DWORD *)(v33 + 16LL * v18 + 132);
    v22 = v33 + *(_QWORD *)(v33 + 16LL * v18 + 120);
    v30 = *(_DWORD *)(v33 + 16LL * v18 + 128);
    v31 = v21;
    v29 = v22;
    if ( v21 > 0x80000100 )
    {
      switch ( v21 )
      {
        case 0x80000200:
          updated = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 64LL, a5 + 24, 0LL, a4);
          v17 |= 0x80000200;
          break;
        case 0x80000400:
          v25 = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 88LL, a5 + 40, 0LL, a4);
          v17 |= 0x80000400;
          break;
        case 0x80001000:
          P = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 40LL, a5 + 32, 0LL, a4);
          v17 |= 0x80001000;
          break;
        case 0x80002000:
          v24 = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 48LL, a5 + 48, 0LL, a4);
          v17 |= 0x80002000;
          break;
        case 0x80004000:
          EtwpUpdateLevelKwFilter(v19 + *(_QWORD *)(a1 + 368), &v29, 0LL);
          v17 |= 0x80004000;
          goto LABEL_40;
      }
    }
    else
    {
      switch ( v21 )
      {
        case 0x80000100:
          v28 = EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 72LL, a5 + 64, 0LL, a4);
          v17 |= 0x80000100;
          break;
        case 0x80000000:
          EtwpUpdateSchematizedFilterData(v19 + *(_QWORD *)(a1 + 368), v6, &v29, 0LL);
          v6 = a2;
          LOBYTE(a4) = 1;
          v34 = 1;
          goto LABEL_57;
        case 0x80000004:
          EtwpUpdatePidFilterData(v19 + *(_QWORD *)(a1 + 368), &v29, 0LL, a4);
          v17 |= 0x80000004;
          goto LABEL_40;
        case 0x80000008:
          EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 16LL, a5, 0LL, a4);
          v17 |= 0x80000008;
          goto LABEL_40;
        case 0x80000010:
          EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 24LL, a5 + 8, 0LL, a4);
          v17 |= 0x80000010;
          goto LABEL_40;
        case 0x80000020:
          EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 32LL, a5 + 16, 0LL, a4);
          v17 |= 0x80000020;
LABEL_40:
          v6 = a2;
          break;
      }
    }
    LOBYTE(a4) = v34;
LABEL_57:
    v18 = v23 + 1;
    v23 = v18;
  }
  while ( v18 < *(_DWORD *)(v33 + 116) );
  v5 = 0;
  if ( !(_BYTE)a4 )
  {
LABEL_59:
    LOBYTE(a4) = 1;
    EtwpUpdateSchematizedFilterData(v19 + *(_QWORD *)(a1 + 368), 0LL, 0LL, a4);
  }
  if ( (v20 & 0x80000004) == 0x80000004 && (v17 & 0x80000004) != 0x80000004 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdatePidFilterData(v19 + *(_QWORD *)(a1 + 368), 0LL, a3, a4);
  }
  if ( (v20 & 0x80000008) == 0x80000008 && (v17 & 0x80000008) != 0x80000008 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 16LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000010) == 0x80000010 && (v17 & 0x80000010) != 0x80000010 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 24LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000020) == 0x80000020 && (v17 & 0x80000020) != 0x80000020 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 32LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80001000) == 0x80001000 && (v17 & 0x80001000) != 0x80001000 )
  {
    LOBYTE(a3) = 1;
    P = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 40LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000200) == 0x80000200 && (v17 & 0x80000200) != 0x80000200 )
  {
    LOBYTE(a3) = 1;
    updated = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 64LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000400) == 0x80000400 && (v17 & 0x80000400) != 0x80000400 )
  {
    LOBYTE(a3) = 1;
    v25 = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 88LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80002000) == 0x80002000 && (v17 & 0x80002000) != 0x80002000 )
  {
    LOBYTE(a3) = 1;
    v24 = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 48LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80004000) == 0x80004000 && (v17 & 0x80004000) != 0x80004000 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateLevelKwFilter(v19 + *(_QWORD *)(a1 + 368), 0LL, a3);
  }
  if ( (v20 & 0x80000100) != 0x80000100 || (v17 & 0x80000100) == 0x80000100 )
  {
    v15 = (void *)v28;
  }
  else
  {
    LOBYTE(a3) = 1;
    v15 = (void *)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 72LL, 0LL, a3, a4);
  }
  _InterlockedExchange((volatile __int32 *)(v19 + *(_QWORD *)(a1 + 368)), v17);
LABEL_93:
  if ( P || updated || v25 || v24 || v15 )
  {
    KeGenericCallDpc((__int64)EtwpSynchronizationDpc, 0LL);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( updated )
      ExFreePoolWithTag(updated, 0);
    if ( v25 )
      EtwpFreeEventNameFilter(v25);
    if ( v24 )
      EtwpFreeEventNameFilter(v24);
    if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)v15, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(v15, 0);
  }
  return v5;
}
