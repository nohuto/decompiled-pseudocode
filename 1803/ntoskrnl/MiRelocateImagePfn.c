/*
 * XREFs of MiRelocateImagePfn @ 0x1404AFB00
 * Callers:
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiValidateInPage @ 0x140138DF0 (MiValidateInPage.c)
 *     MiFillPerSessionProtos @ 0x140754D84 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1401389C0 (MiMakeProtectionPfnCompatible.c)
 *     MiPerformFixups @ 0x14053DF48 (MiPerformFixups.c)
 */

__int64 __fastcall MiRelocateImagePfn(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rbp
  _QWORD *v8; // rbx
  int v9; // eax
  ULONG_PTR v11; // r15
  int ProtectionPfnCompatible; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // r13
  struct _KTHREAD *CurrentThread; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  signed __int64 *BugCheckParameter2b; // [rsp+70h] [rbp+8h]

  v6 = a2;
  v8 = *(_QWORD **)(*(_QWORD *)(BugCheckParameter2 + 96) + 32LL);
  if ( (unsigned __int64)a3 >= v8[7] )
    return 0LL;
  v9 = 0;
  while ( !*(_QWORD *)(*v8 + 8LL * (v9 + a3)) )
  {
    if ( ++v9 )
    {
      if ( v9 != 5 )
        return 0LL;
      break;
    }
  }
  if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v11 = 0LL;
    v17 = 0LL;
  }
  else
  {
    v11 = MiReservePtes((__int64)&qword_1403CC5E0, 1u);
    if ( !v11 )
    {
      if ( !v6 )
        return 3221225626LL;
      v11 = v6;
    }
    v6 = (__int64)(v11 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a4 - 0x58000000000LL);
    *(_QWORD *)v11 = MiMakeValidPte(v11, a4, ProtectionPfnCompatible | 0xA0000000, v13);
    if ( MiPteInShadowRange(v11) )
      MiWritePteShadow(v15, v14, v16);
    v17 = a2;
  }
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter2b = v8 + 3;
  if ( (struct _KTHREAD *)v8[1] == CurrentThread )
  {
    CurrentThread = 0LL;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 3), 0LL);
  }
  v19 = 0LL;
  if ( a5 )
    v19 = v8[5];
  MiPerformFixups(v6, BugCheckParameter2, v19, 1);
  if ( CurrentThread )
  {
    if ( _InterlockedCompareExchange64(BugCheckParameter2b, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(BugCheckParameter2b);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2b);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v11 )
  {
    if ( v11 == v17 )
    {
      *(_QWORD *)v11 = ZeroPte;
      if ( MiPteInShadowRange(v11) )
        MiWritePteShadow(v21, v20, v22);
      KeFlushSingleTb(v6, 0, 1u);
    }
    else
    {
      MiReleasePtes((__int64)&qword_1403CC5E0, v11, 1uLL);
    }
  }
  return 0LL;
}
