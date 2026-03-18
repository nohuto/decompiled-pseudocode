/*
 * XREFs of MiInitializePageZeroing @ 0x140158C2C
 * Callers:
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 * Callees:
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     MiDereferencePageRuns @ 0x1400252E4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140025380 (MiReferencePageRuns.c)
 *     KeQueryNodeActiveAffinity @ 0x140080330 (KeQueryNodeActiveAffinity.c)
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
 */

void MiInitializePageZeroing()
{
  __int16 v0; // bp
  unsigned __int16 v1; // r14
  ULONG_PTR v2; // r8
  unsigned __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // r15
  int v6; // ebx
  PVOID PoolWithTag; // rax
  __int64 v8; // rsi
  struct _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-48h] BYREF
  USHORT Count; // [rsp+A0h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v12; // [rsp+B0h] [rbp+18h]

  v0 = KeNumberNodes;
  v1 = KeNumberNodes;
  v2 = ((qword_1403817D0 << 12) + 0x3FFFFFFF) & 0xFFFFFFFFC0000000uLL;
  if ( v2 > 0x100000000000LL )
    v2 = 0x100000000000LL;
  v3 = (v2 >> 30) / (unsigned __int16)KeNumberNodes;
  if ( !v3 )
  {
    v3 = 1LL;
    v1 = v2 >> 30;
  }
  v4 = qword_14036D840;
  if ( !(unsigned int)MiMakeZeroedPageTables(
                        (((unsigned __int64)qword_14036D840 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                        (((unsigned __int64)qword_14036D840 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL + 8 * (v2 >> 12),
                        6,
                        3) )
    return;
  v12 = MiReferencePageRuns((__int64)&MiSystemPartition, 0);
  v5 = v12;
  if ( !v0 )
    goto LABEL_17;
  do
  {
    word_140381608 = 263;
    v6 = 0;
    byte_14038160A = 6;
    dword_14038160C = 0;
    qword_140381618 = (__int64)&qword_140381610;
    qword_140381610 = (__int64)&qword_140381610;
    dword_140381600 = v1;
    if ( !v1 )
      goto LABEL_13;
    while ( 1 )
    {
      KeQueryNodeActiveAffinity(v6, &Affinity, &Count);
      if ( Count )
        break;
      if ( _InterlockedExchangeAdd(&dword_140381600, 0xFFFFFFFF) == 1 )
        goto LABEL_25;
LABEL_12:
      if ( ++v6 >= (unsigned int)v1 )
        goto LABEL_13;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB8uLL, 0x20206D4Du);
    v8 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( _InterlockedExchangeAdd(&dword_140381600, v6 - v1) != v1 - v6 )
        goto LABEL_13;
LABEL_25:
      v6 = 0;
      goto LABEL_13;
    }
    memset(PoolWithTag, 0, 0xB8uLL);
    *(_DWORD *)(v8 + 40) = v6;
    *(_QWORD *)(v8 + 32) = v3;
    *(_QWORD *)(v8 + 136) = v4;
    if ( (int)PsCreateSystemThreadEx(
                (unsigned int)&Handle,
                0x1FFFFF,
                0,
                0,
                0LL,
                (__int64)MiZeroNodePages,
                v8,
                (__int64)&Affinity,
                0LL) >= 0 )
    {
      ObCloseHandle(Handle, 0);
      goto LABEL_12;
    }
    if ( _InterlockedExchangeAdd(&dword_140381600, v6 - v1) == v1 - v6 )
      v6 = 0;
    ExFreePoolWithTag((PVOID)v8, 0);
LABEL_13:
    v0 -= v1;
    if ( v6 )
      KeWaitForGate((__int64)&word_140381608, 0);
  }
  while ( v0 );
  v5 = v12;
LABEL_17:
  MiDereferencePageRuns(v5);
}
