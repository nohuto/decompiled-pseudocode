/*
 * XREFs of MiMakeImagePageOk @ 0x14026A8A4
 * Callers:
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiComputeImagePteIndex @ 0x1400484D0 (MiComputeImagePteIndex.c)
 *     MiDereferenceControlAreaProbe @ 0x14004B034 (MiDereferenceControlAreaProbe.c)
 *     MiReturnPfnReferenceCount @ 0x14004CD68 (MiReturnPfnReferenceCount.c)
 *     MiReleaseFaultState @ 0x140057E38 (MiReleaseFaultState.c)
 *     MiObtainProtoReference @ 0x140057FC0 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiRelockProtoPoolPage @ 0x140059A10 (MiRelockProtoPoolPage.c)
 *     MiRelockFaultState @ 0x140059A7C (MiRelockFaultState.c)
 *     MiIsFaultPteIntact @ 0x140059B20 (MiIsFaultPteIntact.c)
 *     MiGetSessionIdForVa @ 0x140059D3C (MiGetSessionIdForVa.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiValidateImagePfn @ 0x1405BA580 (MiValidateImagePfn.c)
 */

__int64 __fastcall MiMakeImagePageOk(unsigned __int64 *a1, __int64 a2, __int64 a3, ULONG_PTR a4, __int64 a5)
{
  __int64 v5; // r13
  unsigned __int64 v6; // rbx
  __int64 v9; // rax
  __int64 PrototypePteDirect; // rax
  __int64 v12; // r9
  __int64 *v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _KPROCESS *Process; // rsi
  unsigned int SessionIdForVa; // eax
  int v21; // edi
  int v22; // eax
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // [rsp+40h] [rbp-68h]
  unsigned __int64 v28; // [rsp+50h] [rbp-58h]
  char v29; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v30; // [rsp+B8h] [rbp+10h]
  __int64 v31; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+20h]

  v31 = a3;
  v30 = a2;
  v5 = (__int64)(a1 + 7);
  v6 = a1[7];
  v27 = *a1;
  v9 = *(_QWORD *)(a4 + 24) >> 62;
  v32 = 0LL;
  v28 = v6;
  if ( (v9 & 1) != 0 )
    return 3221226548LL;
  PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(a4 + 16), a2, a3, a4);
  v13 = (__int64 *)PrototypePteDirect;
  v14 = *(_QWORD *)PrototypePteDirect;
  if ( (MiFlags & 0x8000) == 0
    || (*(_DWORD *)(v14 + 92) & 0xC0000) == 0
    || (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 && (*(_DWORD *)(v14 + 56) & 0x4000000) != 0 )
  {
    return 3221226536LL;
  }
  if ( (*(_BYTE *)(v12 + 34) & 7) == 2 && !*(_WORD *)(v12 + 32) )
  {
    if ( !(unsigned int)MiUnlinkPageFromList(a4, 0LL) )
    {
      MiDiscardTransitionPte(a4);
      return 3221226548LL;
    }
    *(_QWORD *)(a4 + 24) &= 0xC000000000000000uLL;
  }
  MiAddLockedPageCharge(a4, 1);
  _InterlockedAdd64((volatile signed __int64 *)(v14 + 112), 1uLL);
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v15 = a5;
  MiObtainProtoReference(a5, 0);
  LOBYTE(v16) = 17;
  MiUnlockProtoPoolPage(v15, v16, v17, v18);
  if ( v6 )
    v32 = MiReleaseFaultState(v5, 1u, &v29);
  else
    __writecr8(1uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SessionIdForVa = MiGetSessionIdForVa(v27);
  v21 = MiStartingOffset(v13, v30, SessionIdForVa);
  v22 = MiComputeImagePteIndex(a4);
  v23 = MiValidateImagePfn(v14, v21, (_DWORD)Process, v22);
  MiDereferenceControlAreaProbe((volatile signed __int64 *)v14, 0);
  if ( v28 )
  {
    MiRelockFaultState(v5, v32);
  }
  else
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  MiRelockProtoPoolPage(v15, 0LL);
  MiReturnPfnReferenceCount(v15);
  MiLockPageAtDpcInline(a4);
  if ( v23 >= 0
    && ((*(_QWORD *)(a4 + 24) & 0x4000000000000000LL) != 0
     || !(unsigned int)MiIsFaultPteIntact((__int64)a1, *a1, v30, &v31)) )
  {
    v23 = -1073740748;
  }
  MiRemoveLockedPageChargeAndDecRef(a4, v24, v25, v26);
  return (unsigned int)v23;
}
