/*
 * XREFs of MmAllocateMappingAddress @ 0x140583480
 * Callers:
 *     HvlpInitializeHvCrashdump @ 0x1401F0038 (HvlpInitializeHvCrashdump.c)
 *     SmFpPreAllocate @ 0x140272FBC (SmFpPreAllocate.c)
 *     PnprInitializeMappingReserve @ 0x1406CCBF4 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x140753024 (EtwpSavePersistedLogger.c)
 *     PspInitPhase0 @ 0x1408413C0 (PspInitPhase0.c)
 * Callees:
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiInsertMappingNode @ 0x140125C94 (MiInsertMappingNode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiInsertPteTracker @ 0x1402345EC (MiInsertPteTracker.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  __int64 v2; // r14
  SIZE_T v3; // rdi
  PVOID PoolWithTag; // rsi
  __int64 v5; // r8
  ULONG_PTR v6; // rax
  _QWORD *v7; // r10
  unsigned int v9; // r11d
  __int64 v10; // rbp
  _BYTE v11[16]; // [rsp+30h] [rbp-58h] BYREF
  SIZE_T v12; // [rsp+40h] [rbp-48h]
  __int64 v13; // [rsp+48h] [rbp-40h]
  __int64 v14; // [rsp+50h] [rbp-38h]
  int v15; // [rsp+5Ch] [rbp-2Ch]
  __int64 v16; // [rsp+60h] [rbp-28h]
  ULONG_PTR BugCheckParameter4; // [rsp+88h] [rbp+0h]

  v2 = PoolTag;
  v3 = (NumberOfBytes + 4095) >> 12;
  if ( !v3 )
    KeBugCheckEx(0xDAu, 0x100uLL, 0LL, PoolTag, BugCheckParameter4);
  if ( !PoolTag )
    return 0LL;
  if ( v3 >= 0x100000000LL )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6D72694Du);
  if ( !PoolWithTag )
    return 0LL;
  v6 = MiReservePtes((__int64)&qword_140389360, (unsigned int)v3, v5);
  v7 = (_QWORD *)v6;
  if ( !v6 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
  v9 = 0;
  *((_QWORD *)PoolWithTag + 4) = v3;
  v10 = (__int64)(v6 << 25) >> 16;
  *((_QWORD *)PoolWithTag + 3) = v10;
  *((_DWORD *)PoolWithTag + 10) = v2;
  do
  {
    *v7 = 0LL;
    if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    ++v9;
    ++v7;
  }
  while ( v9 < v3 );
  if ( (dword_14040010C & 1) != 0 )
  {
    v15 = 0;
    v16 = 0LL;
    v13 = v10;
    v14 = v2;
    v12 = v3 << 12;
    MiInsertPteTracker((__int64)v11, 2, 0, 1);
  }
  MiInsertMappingNode((unsigned __int64)PoolWithTag);
  return (PVOID)v10;
}
