/*
 * XREFs of MiRelocateImagePfn @ 0x140495F60
 * Callers:
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x1400CCA70 (MiValidateInPage.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiFillPerSessionProtos @ 0x1406EB4D0 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400CD358 (MiMakeProtectionPfnCompatible.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiPerformFixups @ 0x140509B50 (MiPerformFixups.c)
 */

__int64 __fastcall MiRelocateImagePfn(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 **v5; // rax
  unsigned __int64 v7; // r15
  __int64 *v9; // r14
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // rbp
  ULONG_PTR v13; // rdi
  ULONG_PTR v14; // r13
  struct _KTHREAD *CurrentThread; // rbp
  int ProtectionPfnCompatible; // eax
  __int64 v18; // rax
  unsigned __int64 v19; // r9

  v5 = *(__int64 ***)(a1 + 96);
  v7 = a3;
  v9 = *v5;
  v10 = **v5;
  if ( v7 >= (*v5)[7] )
    return 0LL;
  v11 = 0;
  while ( !*(_QWORD *)(v10 + 8LL * (unsigned int)(v11 + v7)) )
  {
    if ( ++v11 )
    {
      if ( v11 != 5 )
        return 0LL;
      break;
    }
  }
  v12 = 48 * a4 - 0x58000000000LL;
  if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v13 = 0LL;
    v14 = 0LL;
  }
  else
  {
    v14 = a2;
    v13 = MiReservePtes((__int64)&qword_140389360, 1uLL, v10);
    if ( !v13 )
    {
      if ( !a2 )
        return 3221225626LL;
      v13 = a2;
    }
    a2 = (__int64)(v13 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v12);
    *(_QWORD *)v13 = MiMakeValidPte(v13, a4, ProtectionPfnCompatible | 0xA0000000);
    if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
  }
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)v9[1] == CurrentThread )
  {
    CurrentThread = 0LL;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(v9 + 3), 0LL);
  }
  if ( a5 )
    v18 = v9[5];
  else
    v18 = 0LL;
  MiPerformFixups(a2, a1, v18, 1);
  if ( CurrentThread )
  {
    if ( _InterlockedCompareExchange64(v9 + 3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v9 + 3);
    KeAbPostRelease((ULONG_PTR)(v9 + 3));
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v13 )
  {
    if ( v13 != v14 )
    {
      MiReleasePtes((__int64)&qword_140389360, v13, 1u, v19);
      return 0LL;
    }
    *(_QWORD *)v13 = 0LL;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    KeFlushSingleTb(a2, 0, 1u);
  }
  return 0LL;
}
