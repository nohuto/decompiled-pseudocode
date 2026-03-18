/*
 * XREFs of MiAcquireProperVm @ 0x1400D5208
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MiTranslatePageForCopy @ 0x140217C58 (MiTranslatePageForCopy.c)
 *     MiDbgCopyMemory @ 0x1402276C0 (MiDbgCopyMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiRecheckVaWorkingSet @ 0x1400A4950 (MiRecheckVaWorkingSet.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiFaultPteIntact @ 0x140126DB4 (MiFaultPteIntact.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiAcquireProperVm(unsigned __int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // r8
  unsigned __int64 *v4; // rdx
  __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  KIRQL v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rbp
  _QWORD *v10; // r8
  __int64 v11; // rax
  int SystemRegionType; // eax
  _KPROCESS *Process; // rcx
  char *AnyMultiplexedVm; // rsi
  int v15; // ecx
  LONG *SharedVm; // rbx
  KIRQL v17; // al
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r10
  _QWORD *v21; // r8
  __int64 v22; // rax
  __int64 *v23; // r8
  __int64 PteShadow; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 result; // rax
  unsigned __int8 v28; // bl
  LONG *v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int8 v31; // bl
  LONG *v32; // rax
  _QWORD v34[3]; // [rsp+28h] [rbp-60h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  *a2 = 17;
  v3 = 3LL;
  v4 = v34;
  LODWORD(v5) = 3;
  v6 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  do
  {
    *v4 = v6;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    ++v4;
    --v3;
  }
  while ( v3 );
  v7 = ExAcquireSpinLockShared(&dword_140388924);
  v8 = 0LL;
  LODWORD(v9) = 3;
  do
  {
    v5 = (unsigned int)(v5 - 1);
    v10 = (_QWORD *)v34[v5];
    v11 = *v10;
    if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
      LOBYTE(v11) = MiReadPteShadow(v34[v5], *v10);
    if ( (v11 & 1) == 0 )
      goto LABEL_43;
    if ( (v11 & 0x80u) != 0LL )
    {
      v8 = 1LL;
      goto LABEL_43;
    }
  }
  while ( (_DWORD)v5 );
  SystemRegionType = MiGetSystemRegionType(a1);
  if ( SystemRegionType == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[1].ActiveProcessors.Bitmap[2] && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
      goto LABEL_19;
    }
LABEL_43:
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
    v30 = v7;
    result = v8;
    goto LABEL_44;
  }
  if ( SystemRegionType == 8 )
  {
    v15 = 0;
  }
  else
  {
    v15 = 1;
    if ( (unsigned int)(SystemRegionType - 6) <= 1 )
      v15 = 2;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(v15);
LABEL_19:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
  __writecr8(v7);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v17 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  *a2 = v17;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140388924);
  v19 = 0xFFFFF6FB7DBED7F8uLL;
  v20 = 0xFFFFF6FB7DBED000uLL;
  while ( 1 )
  {
    v9 = (unsigned int)(v9 - 1);
    v21 = (_QWORD *)v34[v9];
    v22 = *v21;
    if ( (unsigned __int64)v21 >= v20 && (unsigned __int64)v21 <= v19 )
      LOBYTE(v22) = MiReadPteShadow(v34[v9], *v21);
    if ( (v22 & 1) == 0 )
      goto LABEL_38;
    if ( (v22 & 0x80u) != 0LL )
      break;
    if ( !(_DWORD)v9 )
    {
      v23 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      PteShadow = *v23;
      if ( (unsigned __int64)v23 >= v20 && (unsigned __int64)v23 <= v19 )
        PteShadow = MiReadPteShadow(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v23);
      if ( (PteShadow & 1) != 0 || (unsigned int)MiFaultPteIntact(PteShadow, v18, v23, v19) )
      {
        v25 = MiRecheckVaWorkingSet((__int64)AnyMultiplexedVm, a1);
        v26 = v25;
        if ( v25 )
        {
          if ( (((unsigned __int8)AnyMultiplexedVm[192] ^ *(_BYTE *)(v25 + 192)) & 7) == 0 )
          {
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
            return v26;
          }
        }
      }
LABEL_38:
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
      v31 = *a2;
      MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, *a2);
      v32 = MiGetSharedVm((__int64)AnyMultiplexedVm);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v32, retaddr);
      else
        *v32 = 0;
      __writecr8(v31);
      return 0LL;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
  v28 = *a2;
  MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, *a2);
  v29 = MiGetSharedVm((__int64)AnyMultiplexedVm);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v29, retaddr);
  else
    *v29 = 0;
  v30 = v28;
  result = 1LL;
LABEL_44:
  __writecr8(v30);
  return result;
}
