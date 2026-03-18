/*
 * XREFs of MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60
 * Callers:
 *     MiLockDownWorkingSet @ 0x140001538 (MiLockDownWorkingSet.c)
 *     MiFinishLastForkPageTable @ 0x140002EB4 (MiFinishLastForkPageTable.c)
 *     MiSwapStackPage @ 0x14002BD10 (MiSwapStackPage.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140034DA0 (MiUnlockNestedProtoPoolPage.c)
 *     MiUnlockPagedAddress @ 0x140038DB8 (MiUnlockPagedAddress.c)
 *     MiJumpStackTarget @ 0x140040A00 (MiJumpStackTarget.c)
 *     MiReturnPfnReferenceCount @ 0x14005EAC8 (MiReturnPfnReferenceCount.c)
 *     MiMakeDriverPagesPrivate @ 0x14006C72C (MiMakeDriverPagesPrivate.c)
 *     MiUnlockCodePage @ 0x14006D068 (MiUnlockCodePage.c)
 *     MiLockProtoPage @ 0x140078790 (MiLockProtoPage.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 *     MiProbeLockFrame @ 0x1400B3EF0 (MiProbeLockFrame.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x140105DB0 (MiResolveProtoCombine.c)
 *     MiFinishMdlForMappedFileFault @ 0x140107260 (MiFinishMdlForMappedFileFault.c)
 *     MiInitializeImageProtos @ 0x14010A158 (MiInitializeImageProtos.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x1401180BC (MiWaitForCollidedFaultComplete.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140164FB4 (MmDbgMarkPfnModifiedWorker.c)
 *     MiCaptureProtectionFromProto @ 0x14021C6BC (MiCaptureProtectionFromProto.c)
 *     MiDeletePerSessionProtos @ 0x140221048 (MiDeletePerSessionProtos.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x140222D1C (MiMakeImagePageOk.c)
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiIsPfnCommitNotCharged @ 0x1400CCF10 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLockedPageChargeAndDecRef(__int64 a1)
{
  __int16 v1; // dx
  __int16 v3; // dx
  __int16 v4; // di
  unsigned __int64 v5; // r11
  __int64 v6; // rax
  int v7; // esi
  unsigned __int64 v8; // r8
  BOOL v9; // ebp
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // r10d
  __int64 v13; // r11
  __int64 v14; // rdi

  v1 = *(_WORD *)(a1 + 32);
  if ( !v1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, *(unsigned __int16 *)(a1 + 32));
  v3 = v1 - 1;
  v4 = v3;
  *(_WORD *)(a1 + 32) = v3;
  if ( !v3 && (unsigned int)MiIsPfnFileOnly(a1) )
    goto LABEL_28;
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 0x10000000000000LL) != 0 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( v6 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
        goto LABEL_7;
    }
    else if ( v3 == 2 && v6 && (*(_BYTE *)(a1 + 34) & 8) != 0 )
    {
      goto LABEL_7;
    }
    return 0LL;
  }
LABEL_7:
  v7 = 0;
  v8 = 0xFFFFF68000000000uLL;
  v9 = v3 == 0;
  v10 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v11 = 0x3FFFFFFF78LL;
  if ( (v10 > 0xFFFFF6BFFFFFFF78uLL || v10 < 0xFFFFF68000000000uLL) && ((*(unsigned __int8 *)(a1 + 35) >> 5) & 1) != 0 )
  {
    *(_BYTE *)(a1 + 35) &= ~0x20u;
  }
  else
  {
    if ( (v5 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
      || (unsigned int)MiIsPfnCommitNotCharged(a1)
      || !v4 && v12 )
    {
      v7 = 1;
    }
    v13 = (v5 >> 40) & 0x3FF;
    v14 = *(_QWORD *)(qword_14036C8F8 + 8 * v13);
    if ( v7 == 1 )
      MiReturnCommit(*(_QWORD *)(qword_14036C8F8 + 8 * v13), 1LL);
    if ( (ULONG_PTR *)v14 == &MiSystemPartition )
      MiReturnResidentAvailable(1LL, v11, v8);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 5824), 1uLL);
  }
  if ( !v9 )
    return 0LL;
LABEL_28:
  MiPfnReferenceCountIsZero(a1, (a1 + 0x58000000000LL) / 48);
  return 1LL;
}
