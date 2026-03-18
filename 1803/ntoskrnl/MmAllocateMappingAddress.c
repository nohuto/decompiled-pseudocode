/*
 * XREFs of MmAllocateMappingAddress @ 0x140572870
 * Callers:
 *     SmFpPreAllocate @ 0x140182C9C (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x14022D040 (HvlpInitializeHvCrashdump.c)
 *     PnprInitializeMappingReserve @ 0x140734594 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x1407B9DC4 (EtwpSavePersistedLogger.c)
 *     PspInitPhase0 @ 0x1408A0D54 (PspInitPhase0.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiInsertMappingNode @ 0x1400C5508 (MiInsertMappingNode.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiInsertPteTracker @ 0x14026CEA4 (MiInsertPteTracker.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  __int64 v2; // rbp
  SIZE_T v3; // rbx
  PVOID PoolWithTag; // rdi
  ULONG_PTR v5; // rax
  _QWORD *v6; // r10
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r10
  int v12; // r11d
  _BYTE v14[16]; // [rsp+30h] [rbp-58h] BYREF
  SIZE_T v15; // [rsp+40h] [rbp-48h]
  __int64 v16; // [rsp+48h] [rbp-40h]
  __int64 v17; // [rsp+50h] [rbp-38h]
  int v18; // [rsp+5Ch] [rbp-2Ch]
  __int64 v19; // [rsp+60h] [rbp-28h]
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
  v5 = MiReservePtes((__int64)&qword_1403CC5E0, v3);
  v6 = (_QWORD *)v5;
  if ( !v5 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
  *((_QWORD *)PoolWithTag + 4) = v3;
  v7 = (__int64)(v5 << 25) >> 16;
  *((_QWORD *)PoolWithTag + 3) = v7;
  *((_DWORD *)PoolWithTag + 10) = v2;
  do
  {
    *v6 = ZeroPte;
    if ( MiPteInShadowRange((unsigned __int64)v6) )
      MiWritePteShadow(v9, v8, v10);
    v6 = (_QWORD *)(v11 + 8);
  }
  while ( (unsigned int)(v12 + 1) < v3 );
  if ( (dword_14044B16C & 1) != 0 )
  {
    v18 = 0;
    v19 = 0LL;
    v16 = v7;
    v17 = v2;
    v15 = v3 << 12;
    MiInsertPteTracker((__int64)v14, 2, 0, 1);
  }
  MiInsertMappingNode((__int64)PoolWithTag);
  return (PVOID)v7;
}
