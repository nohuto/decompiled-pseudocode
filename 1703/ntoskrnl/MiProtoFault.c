/*
 * XREFs of MiProtoFault @ 0x14006B9C4
 * Callers:
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiRetainSubsection @ 0x14006BC58 (MiRetainSubsection.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiFaultPteIntact @ 0x14006D764 (MiFaultPteIntact.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiResolveDemandZeroFault @ 0x1400BA780 (MiResolveDemandZeroFault.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiProtoFault(
        __int64 AnyMultiplexedVm,
        char *a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR a5,
        char a6,
        _QWORD *a7)
{
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned int v9; // edi
  ULONG_PTR v11; // r10
  char *v12; // r14
  __int64 v13; // rbx
  int v14; // ebp
  __int64 SharedVm; // rbx
  KIRQL v16; // al
  __int64 v17; // rbp
  __int16 v18; // ax
  __int64 v19; // rdx
  __int64 v20; // rbx
  int v21; // eax
  unsigned __int64 v23; // rcx
  unsigned __int64 *v24; // rdx
  __int64 v25; // r8
  char v26; // al
  __int64 v27; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v28[3]; // [rsp+48h] [rbp-70h] BYREF

  BugCheckParameter4 = a5;
  v9 = 0;
  v11 = a3;
  v12 = a2;
  *a7 = 0LL;
  if ( (*(_BYTE *)(AnyMultiplexedVm + 192) & 7) == 0 && a4 != qword_14036C1A8 )
  {
    if ( !a5 )
    {
      BugCheckParameter4 = MiLocateAddress(a3);
      if ( !BugCheckParameter4 )
      {
        v9 = -1073741801;
        goto LABEL_26;
      }
    }
    if ( (*(_DWORD *)(BugCheckParameter4 + 48) & 0x8000) != 0 )
      KeBugCheckEx(0x1Au, 0x61944uLL, v11, a4, BugCheckParameter4);
    MiGetProtoPteAddress(BugCheckParameter4, v11 >> 12, 0LL, &v27);
    v13 = v27;
    MiRetainSubsection(v27);
    *a7 = v13;
  }
  LOBYTE(a2) = *v12;
  MiUnlockWorkingSetExclusive(AnyMultiplexedVm, a2);
  v14 = 2;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  *v12 = v16;
  if ( a6 == 1 )
  {
    v23 = ((a4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v24 = v28;
    v25 = 3LL;
    do
    {
      *v24 = v23;
      v23 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v24;
      --v25;
    }
    while ( v25 );
    ExAcquireSpinLockSharedAtDpcLevel(&dword_14036C59C);
    while ( 1 )
    {
      v26 = MI_READ_PTE_LOCK_FREE(v28[v14]);
      if ( (v26 & 1) == 0 || v26 < 0 )
        goto LABEL_31;
      if ( !v14 )
        break;
      --v14;
    }
    if ( (unsigned int)MiGetSystemRegionType(a4) - 6 > 1 )
    {
LABEL_31:
      ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
      goto LABEL_26;
    }
    v17 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v20 = MI_READ_PTE_LOCK_FREE(v17);
    ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
    if ( (v20 & 1) == 0 )
    {
      if ( (unsigned int)MiFaultPteIntact(v20) )
        goto LABEL_8;
      v9 = -1073741819;
      goto LABEL_26;
    }
    if ( (v20 & 0x200) == 0 )
      goto LABEL_26;
    goto LABEL_25;
  }
  v17 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = MI_READ_PTE_LOCK_FREE(v17);
  LOWORD(v20) = v18;
  if ( (v18 & 1) != 0 )
  {
    if ( (v18 & 0x200) == 0 )
      goto LABEL_26;
LABEL_25:
    MiCopyOnWriteEx(a4, 0);
    goto LABEL_26;
  }
LABEL_8:
  if ( (v20 & 0x402) != 0x402 )
    return 3221225494LL;
  v21 = MiResolveDemandZeroFault(a4, v17, 0, AnyMultiplexedVm, 0LL, 0LL, *v12);
  if ( v21 >= 0 )
    return 3221225494LL;
  v9 = v21;
LABEL_26:
  LOBYTE(v19) = *v12;
  MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v19);
  return v9;
}
