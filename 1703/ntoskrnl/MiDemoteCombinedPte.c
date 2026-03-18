/*
 * XREFs of MiDemoteCombinedPte @ 0x1400D7830
 * Callers:
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiEmptyWorkingSetHelper @ 0x14007C56C (MiEmptyWorkingSetHelper.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14007F294 (MiDeprioritizeVirtualAddresses.c)
 *     MiAgePte @ 0x1400D5440 (MiAgePte.c)
 *     NtUnlockVirtualMemory @ 0x1400FA8B0 (NtUnlockVirtualMemory.c)
 *     MiTrimThisWsle @ 0x1400FF1A0 (MiTrimThisWsle.c)
 *     MiResetAccessBitPte @ 0x14013F480 (MiResetAccessBitPte.c)
 * Callees:
 *     MiUnlockPageTableCharges @ 0x14001769C (MiUnlockPageTableCharges.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiFreeCombineBlock @ 0x140079210 (MiFreeCombineBlock.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     MiIdentifyPfn @ 0x1400DBC70 (MiIdentifyPfn.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     MiLockAndDecrementShareCount @ 0x140102090 (MiLockAndDecrementShareCount.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x140103108 (MiUpdateWorkingSetPrivateSize.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogCombinedPteDelete @ 0x140223CE4 (MiLogCombinedPteDelete.c)
 */

__int64 __fastcall MiDemoteCombinedPte(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r9
  bool v6; // cc
  __int64 v7; // r14
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rdi
  _KPROCESS *Process; // rsi
  __int64 v13; // r10
  char WsleContents; // bl
  __int64 v15; // r11
  int v16; // r9d
  int v17; // eax
  unsigned __int8 v18; // al
  __int16 v19; // cx
  unsigned __int8 v20; // bp
  __int64 v21; // rcx
  __int64 v22; // r13
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned int v25; // r8d
  int v26; // [rsp+30h] [rbp-98h]
  unsigned __int64 v27; // [rsp+38h] [rbp-90h] BYREF
  __int64 v28; // [rsp+40h] [rbp-88h]
  __int64 v29; // [rsp+48h] [rbp-80h]
  __int64 v30; // [rsp+50h] [rbp-78h]
  _QWORD v31[3]; // [rsp+58h] [rbp-70h] BYREF
  _QWORD v32[2]; // [rsp+70h] [rbp-58h] BYREF

  v29 = a1;
  v30 = a3;
  v4 = MI_READ_PTE_LOCK_FREE(a2);
  v6 = *(_QWORD *)(v5 - 16) <= 1uLL;
  v7 = v5 - 48;
  v27 = v4;
  if ( !v6 )
    return 0LL;
  v9 = *(_QWORD *)((v7 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v11 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v27) - 0x58000000000LL;
  Process = 0LL;
  if ( (*(_BYTE *)(v13 + 192) & 7) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].Affinity.Bitmap[10] )
      return 0LL;
  }
  WsleContents = MiGetWsleContents(v10, (__int64)(a2 << 25) >> 16);
  v28 = MI_GET_PAGE_FRAME_FROM_PTE(v15 + ((a2 >> 9) & 0x7FFFFFFFF8LL));
  v17 = v16;
  LOBYTE(v17) = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
  v26 = v17;
  v18 = MiLockPageInline(v11);
  v19 = *(_WORD *)(v11 + 32);
  v20 = v18;
  if ( (v19 == 1 || v19 == 2 && (*(_BYTE *)(v11 + 34) & 8) != 0)
    && (_UNKNOWN *)v9 != &unk_14036C718
    && _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 32), 0LL, 1LL) == 1 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 384), 0xFFFFFFFF);
    v21 = *(_QWORD *)(v11 + 40);
    *(_QWORD *)(v11 + 8) = a2;
    v21 &= ~0x200000000000000uLL;
    v22 = v21 & 0xFFFFFFFFFLL;
    v23 = v21 ^ (v28 ^ v21) & 0xFFFFFFFFFLL;
    v24 = *(_QWORD *)(v11 + 16);
    *(_QWORD *)(v11 + 40) = v23;
    if ( ((v24 >> 5) & 5) == 5 )
      *(_QWORD *)(v11 + 16) = v24 & 0xFFFFFFFFFFFFFC1FuLL | (32 * ((v24 >> 5) & 0x1E));
    if ( v26 )
    {
      memset(v31, 0, sizeof(v31));
      MiIdentifyPfn(v11, v31);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v20);
    if ( (v27 & 0x200) != 0 )
    {
      v27 = v27 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
      MiWriteValidPteNewProtection(a2, v27);
    }
    if ( (WsleContents & 0xF) == 8 )
      MiUnlockPageTableCharges(48 * v22 - 0x58000000000LL, 1);
    MiLockAndDecrementShareCount(48 * v22 - 0x58000000000LL, 0LL);
    MiUpdateWorkingSetPrivateSize(v29, (__int64)(a2 << 25) >> 16, 1LL);
    if ( Process )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], v25);
    if ( v26 )
    {
      MiLogCombinedPteDelete(v30);
      v32[1] = 24LL;
      v32[0] = v31;
      EtwTraceKernelEvent((int)v32, 1, 0x28000001u, 630, 289413890);
    }
    MiFreeCombineBlock(v7);
    return 1LL;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v18);
    return 0LL;
  }
}
