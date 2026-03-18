/*
 * XREFs of MiFinishCreateSection @ 0x14050CC90
 * Callers:
 *     MiCreateSection @ 0x14050C860 (MiCreateSection.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14020AC6C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x140435EB0 (MiFindEmptyAddressRangeDownTree.c)
 *     ObCheckActiveHandles @ 0x140450584 (ObCheckActiveHandles.c)
 *     MiDereferenceFailedControlArea @ 0x14045ED34 (MiDereferenceFailedControlArea.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     MiCreatePerSessionProtos @ 0x1406BDE0C (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x1406BDF80 (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiFinishCreateSection(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ecx
  unsigned int v4; // ecx
  bool v5; // zf
  int v6; // edx
  _QWORD *v7; // rdx
  char v8; // r14
  int v9; // r9d
  int v10; // ebp
  _QWORD *v11; // rdi
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int PerSessionProtos; // ebp
  unsigned __int64 v18; // rsi
  struct _KTHREAD *CurrentThread; // r14
  int EmptyAddressRangeDownTree; // r15d
  bool v21; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rax
  _QWORD *Object; // [rsp+80h] [rbp+8h]
  unsigned __int64 v27; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 120) = v1;
  v3 = *(_DWORD *)(v1 + 56);
  *(_DWORD *)(a1 + 140) &= ~0x80000000;
  v4 = v3 & 0xFFF7FFFF;
  v5 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
  *(_DWORD *)(a1 + 136) = v4;
  if ( !v5 )
  {
    v14 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x400) == 0 )
      *(_DWORD *)(a1 + 136) = v4 | 0x80000;
    if ( *(_BYTE *)(a1 + 24) <= 1u && (v14 & 0x20000) == 0 )
      *(_DWORD *)(a1 + 140) |= 0x80000000;
  }
  v6 = *(_DWORD *)(v1 + 56);
  if ( (v6 & 0x4000000) != 0 )
  {
    PerSessionProtos = MiCreatePerSessionProtos(v1, *(unsigned int *)(a1 + 168));
    if ( PerSessionProtos < 0 )
    {
      ObfDereferenceObject(*(PVOID *)(a1 + 56));
      MiDereferenceFailedControlArea(a1);
      return (unsigned int)PerSessionProtos;
    }
    *(_DWORD *)(a1 + 140) ^= (*(_DWORD *)(a1 + 140) ^ (*(_DWORD *)(a1 + 168) << 12)) & 0x7FFFF000;
  }
  else if ( !*(_QWORD *)(a1 + 48) && (*(_DWORD *)(a1 + 28) & 0x44) != 0 && (v6 & 0x20) == 0 )
  {
    if ( *(_QWORD *)(v1 + 64) )
    {
      *(_DWORD *)(a1 + 136) |= 0x8000000u;
      _InterlockedIncrement((volatile signed __int32 *)(v1 + 92));
      if ( !ObCheckActiveHandles(*(_QWORD *)(a1 + 56)) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v1 + 92));
        ObfDereferenceObject(*(PVOID *)(a1 + 56));
        MiDereferenceFailedControlArea(a1);
        return 3221225508LL;
      }
    }
  }
  v7 = *(_QWORD **)(a1 + 56);
  v8 = 0;
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7[1] + 52LL) & 0x10) != 0 )
      v8 = 1;
    else
      ObfDereferenceObject(v7);
  }
  v9 = 128;
  if ( (*(_DWORD *)(v1 + 56) & 0x20) != 0 || !*(_QWORD *)(v1 + 64) )
  {
    v13 = v1 + 128;
    do
    {
      v13 = *(_QWORD *)(v13 + 16);
      v9 += 56;
    }
    while ( v13 );
  }
  v10 = ObCreateObjectEx(
          *(unsigned __int8 *)(a1 + 72),
          (_DWORD)MmSectionObjectType,
          *(_QWORD *)(a1 + 8),
          *(unsigned __int8 *)(a1 + 72));
  if ( v10 < 0 )
  {
    if ( (*(_DWORD *)(a1 + 136) & 0x8000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v1 + 92));
    }
    else if ( (*(_DWORD *)(v1 + 56) & 0x4000000) != 0 )
    {
      MiDereferencePerSessionProtos(v1);
    }
    if ( v8 == 1 )
      ObfDereferenceObject(*(PVOID *)(a1 + 56));
    MiDereferenceFailedControlArea(a1);
    return (unsigned int)v10;
  }
  v11 = Object;
  *(_OWORD *)Object = *(_OWORD *)(a1 + 80);
  *((_OWORD *)Object + 1) = *(_OWORD *)(a1 + 96);
  *((_OWORD *)Object + 2) = *(_OWORD *)(a1 + 112);
  *((_OWORD *)Object + 3) = *(_OWORD *)(a1 + 128);
  Object[3] = 0LL;
  if ( v8 == 1 )
  {
    v15 = *(_QWORD *)(a1 + 56);
    Object[5] = v15;
    if ( (*(_DWORD *)(v1 + 56) & 0x20) != 0 )
      v16 = v15 | 1;
    else
      v16 = v15 | 2;
    Object[5] = v16;
  }
  if ( (*(_DWORD *)a1 & 0x800000) != 0 )
    MiReturnCrossPartitionControlAreaCharges(v1);
  if ( (*(_DWORD *)a1 & 1) != 0 )
    goto LABEL_18;
  *((_DWORD *)Object + 14) |= 0x10000u;
  if ( (*(_DWORD *)(a1 + 16) & 0x400000) != 0 )
    *((_DWORD *)Object + 14) |= 0x4000u;
  if ( (*(_DWORD *)(a1 + 16) & 0x200000) == 0 )
    goto LABEL_18;
  *((_DWORD *)Object + 14) |= 0x40u;
  v18 = Object[6];
  if ( v18 > qword_14036BE28 )
  {
    ObfDereferenceObject(Object);
    return 3221225495LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
  EmptyAddressRangeDownTree = MiFindEmptyAddressRangeDownTree(
                                &qword_14036BE08,
                                v18,
                                0x10000uLL,
                                0x10000uLL,
                                qword_14036BE28,
                                &v27);
  if ( EmptyAddressRangeDownTree < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)&BugCheckParameter2);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    ObfDereferenceObject(Object);
    return (unsigned int)EmptyAddressRangeDownTree;
  }
  v21 = 0;
  v22 = v27 >> 12;
  Object[3] = v27 >> 12;
  Object[4] = ((v18 + 4095) >> 12) + v22 - 1;
  v23 = qword_14036BE08;
  v24 = Object[3];
  if ( !qword_14036BE08 )
    goto LABEL_57;
  while ( v24 <= (*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32))
       && v24 < (*(unsigned int *)(v23 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32)) )
  {
    v25 = *(_QWORD *)v23;
    if ( !*(_QWORD *)v23 )
    {
      v21 = 0;
      goto LABEL_57;
    }
LABEL_62:
    v23 = v25;
  }
  v25 = *(_QWORD *)(v23 + 8);
  if ( v25 )
    goto LABEL_62;
  v21 = 1;
LABEL_57:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_14036BE08, v23, v21, (unsigned __int64)Object);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)&BugCheckParameter2);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  v11 = Object;
LABEL_18:
  *(_QWORD *)(a1 + 144) = v11;
  return (unsigned int)v10;
}
