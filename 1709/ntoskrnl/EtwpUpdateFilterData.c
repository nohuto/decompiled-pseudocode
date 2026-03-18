/*
 * XREFs of EtwpUpdateFilterData @ 0x1404EEF40
 * Callers:
 *     EtwpUpdateGuidEnableInfo @ 0x1404EEC8C (EtwpUpdateGuidEnableInfo.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404EF2A8 (EtwpClearSessionAndUnreferenceEntry.c)
 * Callees:
 *     KeGenericCallDpc @ 0x14012F0C0 (KeGenericCallDpc.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpFreeEventNameFilter @ 0x140750FEC (EtwpFreeEventNameFilter.c)
 *     EtwpUpdateEventFilter @ 0x14075101C (EtwpUpdateEventFilter.c)
 *     EtwpUpdateLevelKwFilter @ 0x140751044 (EtwpUpdateLevelKwFilter.c)
 *     EtwpUpdatePidFilterData @ 0x1407510EC (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x140751190 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpUpdateStringFilterData @ 0x140751254 (EtwpUpdateStringFilterData.c)
 */

__int64 __fastcall EtwpUpdateFilterData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r10d
  char v7; // bp
  __int64 v9; // rcx
  __int64 v11; // r14
  __int32 v12; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rbp
  PVOID PoolWithTag; // rax
  PVOID v17; // rsi
  __int32 v18; // esi
  __int64 v19; // r14
  __int32 v20; // ebp
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rcx
  unsigned int v24; // [rsp+20h] [rbp-78h]
  PVOID v25; // [rsp+28h] [rbp-70h]
  PVOID v26; // [rsp+30h] [rbp-68h]
  PVOID updated; // [rsp+38h] [rbp-60h]
  PVOID P; // [rsp+40h] [rbp-58h]
  __int64 v29; // [rsp+48h] [rbp-50h]
  __int64 v30; // [rsp+50h] [rbp-48h] BYREF
  int v31; // [rsp+58h] [rbp-40h]
  unsigned int v32; // [rsp+5Ch] [rbp-3Ch]
  __int64 v34; // [rsp+B0h] [rbp+18h]
  char v35; // [rsp+B8h] [rbp+20h]

  v34 = a3;
  v5 = 0;
  v6 = a2;
  v35 = 0;
  v7 = a4;
  P = 0LL;
  updated = 0LL;
  LOBYTE(a4) = 0;
  v26 = 0LL;
  v25 = 0LL;
  v29 = 0LL;
  if ( !a3 || !*(_DWORD *)(a3 + 116) )
    v7 = 1;
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 368);
    if ( v9 )
    {
      v11 = 96LL * a2;
      LOBYTE(a4) = v7;
      v12 = _InterlockedExchange((volatile __int32 *)(v11 + v9), 0);
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
        v26 = (PVOID)EtwpUpdateEventFilter(v11 + *(_QWORD *)(a1 + 368) + 88LL, 0LL, v13, v14);
      }
      if ( (v12 & 0x80002000) == 0x80002000 )
      {
        LOBYTE(v13) = v7;
        v25 = (PVOID)EtwpUpdateEventFilter(v11 + *(_QWORD *)(a1 + 368) + 48LL, 0LL, v13, v14);
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
  if ( !*(_QWORD *)(a1 + 368) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x300uLL, 0x46777445u);
    v17 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    memset(PoolWithTag, 0, 0x300uLL);
    a3 = v34;
    v6 = a2;
    *(_QWORD *)(a1 + 368) = v17;
  }
  v18 = 0;
  v24 = 0;
  v19 = 96LL * v6;
  v20 = _InterlockedExchange((volatile __int32 *)(v19 + *(_QWORD *)(a1 + 368)), 0);
  v21 = 0;
  if ( !*(_DWORD *)(a3 + 116) )
    goto LABEL_59;
  do
  {
    v22 = *(_DWORD *)(v34 + 16LL * v21 + 132);
    v23 = v34 + *(_QWORD *)(v34 + 16LL * v21 + 120);
    v31 = *(_DWORD *)(v34 + 16LL * v21 + 128);
    v32 = v22;
    v30 = v23;
    if ( v22 > 0x80000100 )
    {
      switch ( v22 )
      {
        case 0x80000200:
          updated = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 64LL, a5 + 24, 0LL, a4);
          v18 |= 0x80000200;
          break;
        case 0x80000400:
          v26 = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 88LL, a5 + 40, 0LL, a4);
          v18 |= 0x80000400;
          break;
        case 0x80001000:
          P = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 40LL, a5 + 32, 0LL, a4);
          v18 |= 0x80001000;
          break;
        case 0x80002000:
          v25 = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 48LL, a5 + 48, 0LL, a4);
          v18 |= 0x80002000;
          break;
        case 0x80004000:
          EtwpUpdateLevelKwFilter(v19 + *(_QWORD *)(a1 + 368), &v30, 0LL);
          v18 |= 0x80004000;
          goto LABEL_40;
      }
    }
    else
    {
      switch ( v22 )
      {
        case 0x80000100:
          v29 = EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 72LL, a5 + 64, 0LL, a4);
          v18 |= 0x80000100;
          break;
        case 0x80000000:
          EtwpUpdateSchematizedFilterData(v19 + *(_QWORD *)(a1 + 368), v6, &v30, 0LL);
          v6 = a2;
          LOBYTE(a4) = 1;
          v35 = 1;
          goto LABEL_57;
        case 0x80000004:
          EtwpUpdatePidFilterData(v19 + *(_QWORD *)(a1 + 368), &v30, 0LL, a4);
          v18 |= 0x80000004;
          goto LABEL_40;
        case 0x80000008:
          EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 16LL, a5, 0LL, a4);
          v18 |= 0x80000008;
          goto LABEL_40;
        case 0x80000010:
          EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 24LL, a5 + 8, 0LL, a4);
          v18 |= 0x80000010;
          goto LABEL_40;
        case 0x80000020:
          EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 32LL, a5 + 16, 0LL, a4);
          v18 |= 0x80000020;
LABEL_40:
          v6 = a2;
          break;
      }
    }
    LOBYTE(a4) = v35;
LABEL_57:
    v21 = v24 + 1;
    v24 = v21;
  }
  while ( v21 < *(_DWORD *)(v34 + 116) );
  v5 = 0;
  if ( !(_BYTE)a4 )
  {
LABEL_59:
    LOBYTE(a4) = 1;
    EtwpUpdateSchematizedFilterData(v19 + *(_QWORD *)(a1 + 368), 0LL, 0LL, a4);
  }
  if ( (v20 & 0x80000004) == 0x80000004 && (v18 & 0x80000004) != 0x80000004 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdatePidFilterData(v19 + *(_QWORD *)(a1 + 368), 0LL, a3, a4);
  }
  if ( (v20 & 0x80000008) == 0x80000008 && (v18 & 0x80000008) != 0x80000008 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 16LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000010) == 0x80000010 && (v18 & 0x80000010) != 0x80000010 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 24LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000020) == 0x80000020 && (v18 & 0x80000020) != 0x80000020 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateStringFilterData(v19 + *(_QWORD *)(a1 + 368) + 32LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80001000) == 0x80001000 && (v18 & 0x80001000) != 0x80001000 )
  {
    LOBYTE(a3) = 1;
    P = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 40LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000200) == 0x80000200 && (v18 & 0x80000200) != 0x80000200 )
  {
    LOBYTE(a3) = 1;
    updated = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 64LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80000400) == 0x80000400 && (v18 & 0x80000400) != 0x80000400 )
  {
    LOBYTE(a3) = 1;
    v26 = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 88LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80002000) == 0x80002000 && (v18 & 0x80002000) != 0x80002000 )
  {
    LOBYTE(a3) = 1;
    v25 = (PVOID)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 48LL, 0LL, a3, a4);
  }
  if ( (v20 & 0x80004000) == 0x80004000 && (v18 & 0x80004000) != 0x80004000 )
  {
    LOBYTE(a3) = 1;
    EtwpUpdateLevelKwFilter(v19 + *(_QWORD *)(a1 + 368), 0LL, a3);
  }
  if ( (v20 & 0x80000100) != 0x80000100 || (v18 & 0x80000100) == 0x80000100 )
  {
    v15 = (void *)v29;
  }
  else
  {
    LOBYTE(a3) = 1;
    v15 = (void *)EtwpUpdateEventFilter(v19 + *(_QWORD *)(a1 + 368) + 72LL, 0LL, a3, a4);
  }
  _InterlockedExchange((volatile __int32 *)(v19 + *(_QWORD *)(a1 + 368)), v18);
LABEL_93:
  if ( P || updated || v26 || v25 || v15 )
  {
    KeGenericCallDpc((__int64)EtwpSynchronizationDpc, 0LL);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( updated )
      ExFreePoolWithTag(updated, 0);
    if ( v26 )
      EtwpFreeEventNameFilter(v26);
    if ( v25 )
      EtwpFreeEventNameFilter(v25);
    if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)v15, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(v15, 0);
  }
  return v5;
}
