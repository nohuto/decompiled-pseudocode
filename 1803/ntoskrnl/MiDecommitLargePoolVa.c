/*
 * XREFs of MiDecommitLargePoolVa @ 0x1401361A0
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x140137420 (MiDeleteNonPagedPoolPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiReturnPoolCharges @ 0x140134F8C (MiReturnPoolCharges.c)
 *     MiFreeLargePageMemory @ 0x1401363B0 (MiFreeLargePageMemory.c)
 *     MiInsertLargeTbFlushEntry @ 0x1401373A0 (MiInsertLargeTbFlushEntry.c)
 *     MiReplicatePteChange @ 0x14016B45C (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402547CC (MiLogPerfMemoryRangeEvent.c)
 */

void __fastcall MiDecommitLargePoolVa(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // ebp
  unsigned __int64 v7; // r12
  __int64 v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // rbx
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-148h] BYREF
  __int64 v20; // [rsp+28h] [rbp-140h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-138h]
  _QWORD v22[5]; // [rsp+38h] [rbp-130h] BYREF
  int v23; // [rsp+60h] [rbp-108h] BYREF
  __int16 v24; // [rsp+64h] [rbp-104h]
  __int64 v25; // [rsp+68h] [rbp-100h]
  __int64 v26; // [rsp+70h] [rbp-F8h]
  __int64 v27; // [rsp+78h] [rbp-F0h]

  memset(v22, 0, 0x20uLL);
  v6 = 0;
  v25 = 20LL;
  v23 = 0;
  v24 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v20 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v20) >> 12) & 0xFFFFFFFFFLL;
  v21 = v7;
  v8 = 48 * v7 - 0x58000000000LL;
  v9 = 0;
  if ( a3 )
  {
    v10 = v8 + 24;
    do
    {
      v19 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v19);
        while ( *(__int64 *)v10 < 0 );
      }
      *(_BYTE *)(v10 + 10) = *(_BYTE *)(v10 + 10) & 0xF8 | 5;
      _InterlockedAnd64((volatile signed __int64 *)v10, 0x7FFFFFFFFFFFFFFFuLL);
      ++v9;
      v8 += 48LL;
      v10 += 48LL;
    }
    while ( v9 < a3 );
    v7 = v21;
  }
  v11 = BYTE4(PerfGlobalGroupMask);
  *(_QWORD *)(v8 - 48LL * v9) = 0LL;
  if ( (v11 & 1) != 0 )
    MiLogPerfMemoryRangeEvent(a1, 0LL, 10LL, a3);
  *(_QWORD *)a2 = ZeroPte;
  if ( MiPteInShadowRange(a2) )
    MiWritePteShadow(v13, v12, v14);
  MiInsertLargeTbFlushEntry(&v23, 1LL, a2);
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v18 = 3LL;
    do
    {
      a2 = (__int64)(a2 << 25) >> 16;
      --v18;
    }
    while ( v18 );
    MiReplicatePteChange(a2, a2);
  }
  MiFlushTbList((__int64)&v23, v15, v16);
  v17 = MiLargePageSizes;
  do
  {
    if ( *v17 == a3 )
      break;
    ++v6;
    ++v17;
  }
  while ( v6 < 3 );
  MiFreeLargePageMemory(v7, v6);
  v22[0] = a3;
  v22[3] = a3;
  MiReturnPoolCharges(v22, 0LL);
}
