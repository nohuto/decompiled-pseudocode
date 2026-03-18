/*
 * XREFs of MiFinishCreateSection @ 0x1404C37A0
 * Callers:
 *     MiCreateSection @ 0x1404C32E0 (MiCreateSection.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14024FF3C (MiReturnCrossPartitionControlAreaCharges.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x140555690 (MiFindEmptyAddressRangeDownTree.c)
 *     ObCheckActiveHandles @ 0x140579D34 (ObCheckActiveHandles.c)
 *     MiDereferenceFailedControlArea @ 0x140584664 (MiDereferenceFailedControlArea.c)
 *     MiCreatePerSessionProtos @ 0x140754AFC (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x140754C70 (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiFinishCreateSection(int *a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edx
  int v4; // ecx
  bool v5; // zf
  int v6; // r8d
  _QWORD *v7; // rdx
  char v8; // r14
  int v9; // r9d
  int v10; // ebp
  _QWORD *v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  __int64 v16; // rax
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int PerSessionProtos; // edi
  unsigned __int64 v22; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v24; // r8
  __int64 v25; // r9
  int EmptyAddressRangeDownTree; // r15d
  __int64 v27; // rdx
  bool v28; // r8
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  _QWORD *Object; // [rsp+80h] [rbp+8h]
  unsigned __int64 v37; // [rsp+88h] [rbp+10h] BYREF

  v1 = *((_QWORD *)a1 + 8);
  *((_QWORD *)a1 + 15) = v1;
  v3 = *(_DWORD *)(v1 + 56) & 0xFFF7FFFF;
  v4 = a1[35] & 0x7FFFFFFF;
  a1[34] = v3;
  v5 = (a1[4] & 0x1000000) == 0;
  a1[35] = v4;
  if ( !v5 )
  {
    v17 = *a1;
    v18 = v3;
    if ( (*a1 & 0x400) == 0 )
    {
      v18 = v3 | 0x80000;
      a1[34] = v3 | 0x80000;
    }
    v3 = v18;
    if ( *((_BYTE *)a1 + 24) <= 1u && (v17 & 0x20000) == 0 )
      a1[35] = v4 | 0x80000000;
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
      a1[34] = v3 | 0x8000000;
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
    v16 = v1 + 128;
    do
    {
      v16 = *(_QWORD *)(v16 + 16);
      v9 += 56;
    }
    while ( v16 );
  }
  v10 = ObCreateObjectEx(
          *((unsigned __int8 *)a1 + 72),
          (_DWORD)MmSectionObjectType,
          *((_QWORD *)a1 + 1),
          *((unsigned __int8 *)a1 + 72));
  if ( v10 < 0 )
  {
    if ( (a1[34] & 0x8000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v1 + 92));
    }
    else if ( (*(_DWORD *)(v1 + 56) & 0x4000000) != 0 )
    {
      MiDereferencePerSessionProtos(v1);
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
    v19 = *((_QWORD *)a1 + 7);
    Object[5] = v19;
    if ( (*(_DWORD *)(v1 + 56) & 0x20) != 0 )
      v20 = v19 | 1;
    else
      v20 = v19 | 2;
    Object[5] = v20;
  }
  v12 = *a1;
  if ( (*a1 & 0x400000) != 0 )
  {
    MiReturnCrossPartitionControlAreaCharges(v1);
    v12 = *a1;
  }
  if ( (v12 & 1) != 0 )
    goto LABEL_18;
  *((_DWORD *)Object + 14) |= 0x10000u;
  v13 = a1[4];
  v14 = *((_DWORD *)Object + 14);
  if ( (v13 & 0x400000) != 0 )
  {
    v14 |= 0x4000u;
    *((_DWORD *)Object + 14) = v14;
    v13 = a1[4];
  }
  if ( (v13 & 0x200000) == 0 )
    goto LABEL_18;
  *((_DWORD *)Object + 14) = v14 | 0x40;
  v22 = Object[6];
  if ( v22 > qword_1403CB2A8 )
  {
    ObfDereferenceObject(Object);
    return 3221225495LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CB290, 0LL);
  EmptyAddressRangeDownTree = MiFindEmptyAddressRangeDownTree(
                                (unsigned int)&qword_1403CB288,
                                v22,
                                0x10000,
                                0,
                                0x10000LL,
                                qword_1403CB2A8,
                                (__int64)&v37);
  if ( EmptyAddressRangeDownTree < 0 )
  {
    v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB290, 0xFFFFFFFFFFFFFFFFuLL);
    LOBYTE(v27) = v27 & 6;
    if ( (_BYTE)v27 == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB290, v27, v24, v25);
    KeAbPostRelease((ULONG_PTR)&qword_1403CB290);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    ObfDereferenceObject(Object);
    return (unsigned int)EmptyAddressRangeDownTree;
  }
  v28 = 0;
  v29 = v37 >> 12;
  Object[3] = v37 >> 12;
  Object[4] = ((v22 + 4095) >> 12) + v29 - 1;
  v30 = qword_1403CB288;
  v31 = Object[3];
  if ( !qword_1403CB288 )
    goto LABEL_57;
  while ( v31 <= (*(unsigned int *)(v30 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v30 + 33) << 32))
       && v31 < (*(unsigned int *)(v30 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v30 + 32) << 32)) )
  {
    v32 = *(_QWORD *)v30;
    if ( !*(_QWORD *)v30 )
    {
      v28 = 0;
      goto LABEL_57;
    }
LABEL_62:
    v30 = v32;
  }
  v32 = *(_QWORD *)(v30 + 8);
  if ( v32 )
    goto LABEL_62;
  v28 = 1;
LABEL_57:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_1403CB288, v30, v28, Object);
  v35 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CB290, 0xFFFFFFFFFFFFFFFFuLL);
  LOBYTE(v35) = v35 & 6;
  if ( (_BYTE)v35 == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CB290, v35, v33, v34);
  KeAbPostRelease((ULONG_PTR)&qword_1403CB290);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  v11 = Object;
LABEL_18:
  *((_QWORD *)a1 + 18) = v11;
  return (unsigned int)v10;
}
