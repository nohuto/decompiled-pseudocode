/*
 * XREFs of MmAllocateMappingAddress @ 0x1405728D0
 * Callers:
 *     SmFpPreAllocate @ 0x140168C38 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x1401EAE7C (HvlpInitializeHvCrashdump.c)
 *     PnprInitializeMappingReserve @ 0x1406A2354 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x140713EA4 (EtwpSavePersistedLogger.c)
 *     PspInitPhase0 @ 0x1407FC734 (PspInitPhase0.c)
 * Callees:
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiInsertMappingNode @ 0x140135178 (MiInsertMappingNode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiInsertPteTracker @ 0x140225958 (MiInsertPteTracker.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  __int64 v2; // r14
  SIZE_T v3; // rdi
  PVOID PoolWithTag; // rsi
  unsigned __int64 v5; // r8
  ULONG_PTR v6; // rax
  _QWORD *v7; // r10
  __int64 v9; // rbp
  __int64 v10; // r10
  int v11; // r11d
  _BYTE v12[16]; // [rsp+30h] [rbp-58h] BYREF
  SIZE_T v13; // [rsp+40h] [rbp-48h]
  __int64 v14; // [rsp+48h] [rbp-40h]
  __int64 v15; // [rsp+50h] [rbp-38h]
  int v16; // [rsp+5Ch] [rbp-2Ch]
  __int64 v17; // [rsp+60h] [rbp-28h]
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
  v6 = MiReservePtes((__int64)&qword_14036D0A0, (unsigned int)v3, v5);
  v7 = (_QWORD *)v6;
  if ( !v6 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
  *((_QWORD *)PoolWithTag + 4) = v3;
  v9 = (__int64)(v6 << 25) >> 16;
  *((_QWORD *)PoolWithTag + 3) = v9;
  *((_DWORD *)PoolWithTag + 10) = v2;
  do
  {
    *v7 = 0LL;
    if ( MiPteInShadowRange((unsigned __int64)v7) )
      MiWritePteShadow();
    v7 = (_QWORD *)(v10 + 8);
  }
  while ( (unsigned int)(v11 + 1) < v3 );
  if ( (dword_1403E310C & 1) != 0 )
  {
    v16 = 0;
    v17 = 0LL;
    v14 = v9;
    v15 = v2;
    v13 = v3 << 12;
    MiInsertPteTracker((__int64)v12, 2, 0, 1);
  }
  MiInsertMappingNode((unsigned __int64)PoolWithTag);
  return (PVOID)v9;
}
