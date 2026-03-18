/*
 * XREFs of MiAcquireProperVm @ 0x14006BF58
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MiTranslatePageForCopy @ 0x1402105E8 (MiTranslatePageForCopy.c)
 *     MiDbgCopyMemory @ 0x14021AE1C (MiDbgCopyMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiFaultPteIntact @ 0x14006D764 (MiFaultPteIntact.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiRecheckVaWorkingSet @ 0x1400B1B38 (MiRecheckVaWorkingSet.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiAcquireProperVm(unsigned __int64 a1, KIRQL *a2)
{
  __int64 v3; // r8
  unsigned __int64 *v4; // rdx
  int v5; // ebx
  unsigned __int64 v6; // rcx
  KIRQL v7; // r12
  __int64 v8; // rdi
  int v9; // ebp
  char v10; // al
  int SystemRegionType; // eax
  __int64 v12; // rcx
  unsigned __int64 AnyMultiplexedVm; // rsi
  __int64 SharedVm; // rbx
  KIRQL v15; // al
  char v16; // al
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  _KPROCESS *Process; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  _QWORD v25[3]; // [rsp+28h] [rbp-60h] BYREF

  *a2 = 17;
  v3 = 3LL;
  v4 = v25;
  v5 = 3;
  v6 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  do
  {
    *v4 = v6;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    ++v4;
    --v3;
  }
  while ( v3 );
  v7 = ExAcquireSpinLockShared(&dword_14036C59C);
  v8 = 0LL;
  v9 = 3;
  do
  {
    v10 = MI_READ_PTE_LOCK_FREE(v25[--v5]);
    if ( (v10 & 1) == 0 )
      goto LABEL_29;
    if ( v10 < 0 )
    {
      v8 = 1LL;
      goto LABEL_29;
    }
  }
  while ( v5 );
  SystemRegionType = MiGetSystemRegionType(a1);
  if ( SystemRegionType == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].ActiveProcessors.Bitmap[2] && Process != PsInitialSystemProcess )
    {
      AnyMultiplexedVm = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
      goto LABEL_11;
    }
LABEL_29:
    ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
    __writecr8(v7);
    return v8;
  }
  if ( SystemRegionType == 8 )
  {
    v12 = 0LL;
  }
  else
  {
    v12 = 1LL;
    if ( (unsigned int)(SystemRegionType - 6) <= 1 )
      v12 = 2LL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(v12);
LABEL_11:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
  __writecr8(v7);
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  *a2 = v15;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_14036C59C);
  while ( 1 )
  {
    v16 = MI_READ_PTE_LOCK_FREE(v25[--v9]);
    if ( (v16 & 1) == 0 )
      break;
    if ( v16 < 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
      LOBYTE(v22) = *a2;
      MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v22);
      return 1LL;
    }
    if ( !v9 )
    {
      v17 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( (v17 & 1) != 0 || (unsigned int)MiFaultPteIntact(v17) )
      {
        v18 = MiRecheckVaWorkingSet(AnyMultiplexedVm, a1);
        v19 = v18;
        if ( v18 )
        {
          if ( ((*(_BYTE *)(AnyMultiplexedVm + 192) ^ *(_BYTE *)(v18 + 192)) & 7) == 0 )
          {
            ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
            return v19;
          }
        }
      }
      break;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
  LOBYTE(v23) = *a2;
  MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v23);
  return 0LL;
}
