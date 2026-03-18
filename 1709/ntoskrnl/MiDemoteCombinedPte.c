/*
 * XREFs of MiDemoteCombinedPte @ 0x14009F660
 * Callers:
 *     MiWalkVaCheckCommon @ 0x140010EE4 (MiWalkVaCheckCommon.c)
 *     MiAgePte @ 0x14009DA30 (MiAgePte.c)
 *     NtUnlockVirtualMemory @ 0x1400EB680 (NtUnlockVirtualMemory.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140152114 (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140001280 (MiIdentifyPfn.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiFreeCombineBlock @ 0x1400E55B0 (MiFreeCombineBlock.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1400EACA4 (MiUpdateWorkingSetPrivateSize.c)
 *     MiLockAndDecrementShareCount @ 0x1400EACDC (MiLockAndDecrementShareCount.c)
 *     MiUnlockPageTableCharges @ 0x14010CA64 (MiUnlockPageTableCharges.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     MiLogCombinedPteDelete @ 0x1402319EC (MiLogCombinedPteDelete.c)
 */

__int64 __fastcall MiDemoteCombinedPte(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 PteShadow; // rbx
  __int64 v4; // r10
  __int64 v6; // r9
  __int64 v7; // r12
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r9
  bool v12; // zf
  _KPROCESS *Process; // r15
  char WsleContents; // di
  __int64 v15; // r10
  unsigned __int8 v16; // al
  __int16 v17; // cx
  unsigned __int8 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // r9
  int v23; // [rsp+30h] [rbp-49h]
  __int64 v24; // [rsp+38h] [rbp-41h]
  __int64 v25; // [rsp+38h] [rbp-41h]
  unsigned __int64 v26; // [rsp+40h] [rbp-39h] BYREF
  __int64 v27; // [rsp+48h] [rbp-31h]
  __int64 v28; // [rsp+50h] [rbp-29h]
  __int64 v29; // [rsp+58h] [rbp-21h]
  __int64 v30; // [rsp+60h] [rbp-19h]
  __int64 v31; // [rsp+68h] [rbp-11h]
  __int64 v32[3]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v33[2]; // [rsp+88h] [rbp+Fh] BYREF

  PteShadow = *(_QWORD *)a2;
  v4 = a3;
  v31 = a3;
  v6 = a1;
  v27 = a1;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a2, PteShadow);
  v7 = v4 - 48;
  v26 = PteShadow;
  if ( *(_QWORD *)(v4 - 48 + 32) > 1uLL )
    return 0LL;
  v24 = *(_QWORD *)((v7 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v9 = MI_GET_PFN_FROM_PTE(&v26, a2, a3, v6);
  v10 = (*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL;
  v30 = (__int64)(a2 << 25) >> 16;
  v12 = (*(_BYTE *)(v11 + 192) & 7) == 0;
  Process = 0LL;
  v28 = *(_QWORD *)(qword_140388AF0 + 8 * v10);
  if ( v12 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].Affinity.Bitmap[10] )
      return 0LL;
  }
  WsleContents = MiGetWsleContents(0LL, (__int64)(a2 << 25) >> 16);
  v29 = MI_GET_PAGE_FRAME_FROM_PTE(v15 + ((a2 >> 9) & 0x7FFFFFFFF8LL));
  v23 = DWORD1(PerfGlobalGroupMask) & 0x8000001;
  v16 = MiLockPageInline(v9);
  v17 = *(_WORD *)(v9 + 32);
  v18 = v16;
  if ( v17 != 1 && (v17 != 2 || (*(_BYTE *)(v9 + 34) & 8) == 0)
    || *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v27 + 172)) != v28
    || _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 32), 0LL, 1LL) != 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v16);
    return 0LL;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 384), 0xFFFFFFFF);
  v19 = *(_QWORD *)(v9 + 40);
  *(_QWORD *)(v9 + 8) = a2;
  v19 &= ~0x200000000000000uLL;
  v25 = v19 & 0xFFFFFFFFFLL;
  v20 = v19 ^ (v29 ^ v19) & 0xFFFFFFFFFLL;
  v21 = *(_QWORD *)(v9 + 16);
  *(_QWORD *)(v9 + 40) = v20;
  if ( ((v21 >> 5) & 5) == 5 )
    *(_QWORD *)(v9 + 16) = v21 & 0xFFFFFFFFFFFFFC1FuLL | (32 * ((v21 >> 5) & 0x1E));
  if ( v23 )
  {
    memset(v32, 0, sizeof(v32));
    MiIdentifyPfn((_OWORD *)v9, v32);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v18);
  if ( (PteShadow & 0x200) != 0 )
  {
    v26 = PteShadow & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
    MiWriteValidPteNewPage((unsigned __int64 *)a2, v26);
  }
  if ( (WsleContents & 0xF) == 8 )
    MiUnlockPageTableCharges(48 * v25 - 0x58000000000LL);
  MiLockAndDecrementShareCount(48 * v25 - 0x58000000000LL, 0LL);
  MiUpdateWorkingSetPrivateSize(v27, v30, 1LL, v22);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
  if ( v23 )
  {
    MiLogCombinedPteDelete(v31);
    v33[1] = 24LL;
    v33[0] = v32;
    EtwTraceKernelEvent((unsigned int)v33, 1, 671088641, 630, 289413890);
  }
  MiFreeCombineBlock(v7);
  return 1LL;
}
