/*
 * XREFs of MiRelocateImagePfn @ 0x140518C20
 * Callers:
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x1400CB690 (MiValidateInPage.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     MiFillPerSessionProtos @ 0x1406BE094 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400A5B28 (MiMakeProtectionPfnCompatible.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiPerformFixups @ 0x140423820 (MiPerformFixups.c)
 */

__int64 __fastcall MiRelocateImagePfn(ULONG_PTR a1, unsigned __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 **v5; // rax
  unsigned __int64 v7; // r15
  ULONG_PTR v8; // rsi
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rbp
  ULONG_PTR v13; // rdi
  unsigned __int64 v14; // r12
  int ProtectionPfnCompatible; // eax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v18; // r9
  __int64 v19; // rax

  v5 = *(unsigned __int64 ***)(a1 + 96);
  v7 = a3;
  v8 = a2;
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
    v13 = MiReservePtes((__int64)&qword_14036D0A0, 1uLL, v10);
    if ( !v13 )
    {
      if ( !v8 )
        return 3221225626LL;
      v13 = v8;
    }
    v8 = (__int64)(v13 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v12);
    *(_QWORD *)v13 = MiMakeValidPte(v13, a4, ProtectionPfnCompatible | 0xA0000000);
    if ( MiPteInShadowRange(v13) )
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
  v18 = a5;
  if ( a5 )
  {
    v19 = v9[5];
  }
  else
  {
    v18 = v9[5];
    v19 = 0LL;
  }
  MiPerformFixups(v8, a1, v7, v18, v19, 1);
  if ( CurrentThread )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v9 + 3);
    KeAbPostRelease((ULONG_PTR)(v9 + 3));
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v13 )
  {
    if ( v13 != v14 )
    {
      MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)v13, 1u);
      return 0LL;
    }
    *(_QWORD *)v13 = 0LL;
    if ( MiPteInShadowRange(v13) )
      MiWritePteShadow();
    KeFlushSingleTb(v8, 0, 1u);
  }
  return 0LL;
}
