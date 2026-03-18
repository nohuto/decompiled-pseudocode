/*
 * XREFs of MiFinishCreateSection @ 0x14049B8E0
 * Callers:
 *     MiCreateSection @ 0x14049B390 (MiCreateSection.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140211AE8 (MiReturnCrossPartitionControlAreaCharges.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x14056E3C0 (MiFindEmptyAddressRangeDownTree.c)
 *     ObCheckActiveHandles @ 0x14058FE88 (ObCheckActiveHandles.c)
 *     MiDereferenceFailedControlArea @ 0x14059ECFC (MiDereferenceFailedControlArea.c)
 *     MiCreatePerSessionProtos @ 0x1406EB248 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x1406EB3BC (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiFinishCreateSection(int *a1)
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

  v1 = *((_QWORD *)a1 + 8);
  *((_QWORD *)a1 + 15) = v1;
  v3 = *(_DWORD *)(v1 + 56);
  a1[35] &= ~0x80000000;
  v4 = v3 & 0xFFF7FFFF;
  v5 = (a1[4] & 0x1000000) == 0;
  a1[34] = v4;
  if ( !v5 )
  {
    v14 = *a1;
    if ( (*a1 & 0x400) == 0 )
      a1[34] = v4 | 0x80000;
    if ( *((_BYTE *)a1 + 24) <= 1u && (v14 & 0x20000) == 0 )
      a1[35] |= 0x80000000;
  }
  v6 = *(_DWORD *)(v1 + 56);
  if ( (v6 & 0x4000000) != 0 )
  {
    PerSessionProtos = MiCreatePerSessionProtos(v1, (unsigned int)a1[42]);
    if ( PerSessionProtos < 0 )
    {
      ObfDereferenceObject(*((PVOID *)a1 + 7));
      MiDereferenceFailedControlArea(a1);
      return (unsigned int)PerSessionProtos;
    }
    a1[35] ^= (a1[35] ^ (a1[42] << 12)) & 0x7FFFF000;
  }
  else if ( !*((_QWORD *)a1 + 6) && (a1[7] & 0x44) != 0 && (v6 & 0x20) == 0 )
  {
    if ( *(_QWORD *)(v1 + 64) )
    {
      a1[34] |= 0x8000000u;
      _InterlockedIncrement((volatile signed __int32 *)(v1 + 92));
      if ( !(unsigned __int8)ObCheckActiveHandles(*((_QWORD *)a1 + 7)) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v1 + 92));
        ObfDereferenceObject(*((PVOID *)a1 + 7));
        MiDereferenceFailedControlArea(a1);
        return 3221225508LL;
      }
    }
  }
  v7 = (_QWORD *)*((_QWORD *)a1 + 7);
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
          *((unsigned __int8 *)a1 + 72),
          (_DWORD)MmSectionObjectType,
          *((_QWORD *)a1 + 1),
          *((_BYTE *)a1 + 72));
  if ( v10 < 0 )
  {
    if ( (a1[34] & 0x8000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v1 + 92));
    }
    else if ( (*(_DWORD *)(v1 + 56) & 0x4000000) != 0 )
    {
      MiDereferencePerSessionProtos(v1, ((unsigned int)a1[35] >> 12) & 0x7FFFF);
    }
    if ( v8 == 1 )
      ObfDereferenceObject(*((PVOID *)a1 + 7));
    MiDereferenceFailedControlArea(a1);
    return (unsigned int)v10;
  }
  v11 = Object;
  *(_OWORD *)Object = *((_OWORD *)a1 + 5);
  *((_OWORD *)Object + 1) = *((_OWORD *)a1 + 6);
  *((_OWORD *)Object + 2) = *((_OWORD *)a1 + 7);
  *((_OWORD *)Object + 3) = *((_OWORD *)a1 + 8);
  Object[3] = 0LL;
  if ( v8 == 1 )
  {
    v15 = *((_QWORD *)a1 + 7);
    Object[5] = v15;
    if ( (*(_DWORD *)(v1 + 56) & 0x20) != 0 )
      v16 = v15 | 1;
    else
      v16 = v15 | 2;
    Object[5] = v16;
  }
  if ( (*a1 & 0x400000) != 0 )
    MiReturnCrossPartitionControlAreaCharges(v1);
  if ( (*a1 & 1) != 0 )
    goto LABEL_18;
  *((_DWORD *)Object + 14) |= 0x10000u;
  if ( (a1[4] & 0x400000) != 0 )
    *((_DWORD *)Object + 14) |= 0x4000u;
  if ( (a1[4] & 0x200000) == 0 )
    goto LABEL_18;
  *((_DWORD *)Object + 14) |= 0x40u;
  v18 = Object[6];
  if ( v18 > qword_140388128 )
  {
    ObfDereferenceObject(Object);
    return 3221225495LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140388110, 0LL);
  EmptyAddressRangeDownTree = MiFindEmptyAddressRangeDownTree(
                                (unsigned int)&qword_140388108,
                                v18,
                                0x10000,
                                0,
                                0x10000LL,
                                qword_140388128,
                                (__int64)&v27);
  if ( EmptyAddressRangeDownTree < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388110);
    KeAbPostRelease((ULONG_PTR)&qword_140388110);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    ObfDereferenceObject(Object);
    return (unsigned int)EmptyAddressRangeDownTree;
  }
  v21 = 0;
  v22 = v27 >> 12;
  Object[3] = v27 >> 12;
  Object[4] = ((v18 + 4095) >> 12) + v22 - 1;
  v23 = qword_140388108;
  v24 = Object[3];
  if ( !qword_140388108 )
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
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140388108, v23, v21, (unsigned __int64)Object);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140388110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140388110);
  KeAbPostRelease((ULONG_PTR)&qword_140388110);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  v11 = Object;
LABEL_18:
  *((_QWORD *)a1 + 18) = v11;
  return (unsigned int)v10;
}
