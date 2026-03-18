/*
 * XREFs of MiDemoteCombinedPte @ 0x1400AD310
 * Callers:
 *     MiAgePte @ 0x140012B60 (MiAgePte.c)
 *     NtUnlockVirtualMemory @ 0x14004E260 (NtUnlockVirtualMemory.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140052680 (MiDeprioritizeVirtualAddresses.c)
 *     MiWalkVaCheckCommon @ 0x1400AD024 (MiWalkVaCheckCommon.c)
 *     MiTrimPte @ 0x14012A7D0 (MiTrimPte.c)
 *     MiResetAccessBitPte @ 0x140164490 (MiResetAccessBitPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableCharges @ 0x14004ECC4 (MiUnlockPageTableCharges.c)
 *     MiFreeCombineBlock @ 0x1400AD658 (MiFreeCombineBlock.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1400AD7A8 (MiUpdateWorkingSetPrivateSize.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiIdentifyPfn @ 0x1401056D0 (MiIdentifyPfn.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiLogCombinedPteDelete @ 0x14026BDCC (MiLogCombinedPteDelete.c)
 */

__int64 __fastcall MiDemoteCombinedPte(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  bool v7; // cc
  unsigned __int64 v9; // r13
  _KPROCESS *Process; // r12
  __int64 v11; // rcx
  bool v12; // zf
  char WsleContents; // di
  __int64 v14; // r9
  int v15; // r10d
  int v16; // eax
  unsigned __int8 v17; // r8
  __int16 v18; // ax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rbx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int8 v27; // [rsp+30h] [rbp-98h]
  int v28; // [rsp+34h] [rbp-94h]
  __int64 v29; // [rsp+38h] [rbp-90h]
  __int64 v30; // [rsp+38h] [rbp-90h]
  unsigned __int64 v31; // [rsp+40h] [rbp-88h] BYREF
  __int64 v32; // [rsp+48h] [rbp-80h]
  unsigned __int64 v33; // [rsp+50h] [rbp-78h]
  __int64 v34; // [rsp+58h] [rbp-70h]
  _QWORD v35[3]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v36[2]; // [rsp+78h] [rbp-50h] BYREF

  v3 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v24 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v24 )
    {
      v25 = *(_QWORD *)(v24 + 8 * ((a2 >> 3) & 0x1FF));
      v26 = v3 | 0x20;
      if ( (v25 & 0x20) == 0 )
        v26 = v3;
      v3 = v26;
      if ( (v25 & 0x42) != 0 )
        v3 = v26 | 0x42;
    }
  }
  v7 = *(_QWORD *)(a3 - 16) <= 1uLL;
  v31 = v3;
  if ( !v7 )
    return 0LL;
  v32 = *(_QWORD *)(((a3 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v31) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  Process = 0LL;
  v11 = (*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL;
  v12 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  v34 = (__int64)(a2 << 25) >> 16;
  v29 = *(_QWORD *)(qword_1403CBD88 + 8 * v11);
  if ( v12 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].Affinity.Bitmap[10] )
      return 0LL;
  }
  WsleContents = MiGetWsleContents(v11, (__int64)(a2 << 25) >> 16);
  v33 = (unsigned __int64)MI_READ_PTE_LOCK_FREE(v14 + ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 12;
  v16 = v15;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    v16 = 1;
  v28 = v16;
  v17 = MiLockPageInline(v9);
  v27 = v17;
  v18 = *(_WORD *)(v9 + 32);
  if ( (v18 == 1 || v18 == 2 && (*(_BYTE *)(v9 + 34) & 8) != 0)
    && *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 174)) == v29
    && _InterlockedCompareExchange64((volatile signed __int64 *)(a3 - 16), 0LL, 1LL) == 1 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 384), 0xFFFFFFFF);
    v19 = *(_QWORD *)(v9 + 40);
    *(_QWORD *)(v9 + 8) = a2;
    v19 &= ~0x200000000000000uLL;
    v20 = v19 & 0xFFFFFFFFFLL;
    v30 = v19 & 0xFFFFFFFFFLL;
    v21 = v19 ^ (v33 ^ v19) & 0xFFFFFFFFFLL;
    v22 = *(_QWORD *)(v9 + 16);
    *(_QWORD *)(v9 + 40) = v21;
    if ( ((v22 >> 5) & 5) == 5 )
      *(_QWORD *)(v9 + 16) = v22 & 0xFFFFFFFFFFFFFC1FuLL | (32 * ((v22 >> 5) & 0x1E));
    if ( v28 )
    {
      memset(v35, 0, sizeof(v35));
      MiIdentifyPfn(v9, v35);
      v20 = v30;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v27);
    if ( (v3 & 0x200) != 0 )
    {
      v31 = v3 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
      MiWriteValidPteNewProtection(a2, v31);
      v20 = v30;
    }
    v23 = 48 * v20 - 0x58000000000LL;
    if ( (WsleContents & 0xF) == 8 )
      MiUnlockPageTableCharges(v23, 1);
    MiLockAndDecrementShareCount(v23, 0LL);
    MiUpdateWorkingSetPrivateSize(a1, v34, 1LL, 0LL);
    if ( Process )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
    if ( v28 )
    {
      MiLogCombinedPteDelete(a3);
      v36[1] = 24LL;
      v36[0] = v35;
      EtwTraceKernelEvent((unsigned int)v36, 1, 671088641, 630, 289413890);
    }
    MiFreeCombineBlock(a3 - 48);
    return 1LL;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v17);
    return 0LL;
  }
}
