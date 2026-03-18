/*
 * XREFs of MiProtoFault @ 0x1401269B8
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiResolveDemandZeroFault @ 0x140044CE0 (MiResolveDemandZeroFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     ExReleaseSpinLockExclusive @ 0x140110B40 (ExReleaseSpinLockExclusive.c)
 *     MiRetainSubsection @ 0x140126D3C (MiRetainSubsection.c)
 *     MiFaultPteIntact @ 0x140126DB4 (MiFaultPteIntact.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MiProtoFault(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        ULONG_PTR a4,
        ULONG_PTR a5,
        char a6,
        ULONG_PTR *a7)
{
  unsigned __int64 BugCheckParameter4; // rcx
  ULONG_PTR v10; // r10
  unsigned __int8 *v11; // r14
  __int64 v12; // rdx
  ULONG_PTR v14; // rbx
  int v15; // esi
  char *AnyMultiplexedVm; // rdi
  LONG *SharedVm; // rbx
  KIRQL v18; // al
  KIRQL v19; // r11
  unsigned __int64 v20; // rcx
  unsigned __int64 *v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r9
  _QWORD *v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // r10
  __int64 *v29; // rsi
  __int64 PteShadow; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int8 v34; // r9
  KIRQL v35; // bl
  LONG *v36; // rax
  KIRQL v37; // bl
  LONG *v38; // rax
  int v39; // esi
  KIRQL v40; // bl
  LONG *v41; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v43[3]; // [rsp+48h] [rbp-60h] BYREF

  BugCheckParameter4 = a5;
  v10 = a3;
  v11 = (unsigned __int8 *)a2;
  *a7 = 0LL;
  if ( (*(_BYTE *)(a1 + 192) & 7) == 0 && a4 != qword_1403884E8 )
  {
    if ( !a5 )
    {
      BugCheckParameter4 = MiLocateAddress(a3);
      if ( !BugCheckParameter4 )
      {
        LOBYTE(v12) = *v11;
        MiUnlockWorkingSetExclusive(a1, v12);
        return 3221225495LL;
      }
    }
    if ( (*(_DWORD *)(BugCheckParameter4 + 48) & 0x8000) != 0 )
      KeBugCheckEx(0x1Au, 0x61944uLL, v10, a4, BugCheckParameter4);
    MiGetProtoPteAddress(BugCheckParameter4, v10 >> 12, 0, &BugCheckParameter2);
    v14 = BugCheckParameter2;
    MiRetainSubsection(BugCheckParameter2);
    *a7 = v14;
  }
  LOBYTE(a2) = *v11;
  MiUnlockWorkingSetExclusive(a1, a2);
  v15 = 2;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v18 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v19 = v18;
  *v11 = v18;
  if ( a6 == 1 )
  {
    v20 = ((a4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v21 = v43;
    v22 = 3LL;
    do
    {
      *v21 = v20;
      v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v21;
      --v22;
    }
    while ( v22 );
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140388924);
    v23 = 0xFFFFF6FB7DBED000uLL;
    v24 = 0xFFFFF6FB7DBED7F8uLL;
    while ( 1 )
    {
      v25 = (_QWORD *)v43[v15];
      v26 = *v25;
      if ( (unsigned __int64)v25 >= v23 && (unsigned __int64)v25 <= v24 )
        LOBYTE(v26) = MiReadPteShadow(v25, *v25);
      if ( (v26 & 1) == 0 || (v26 & 0x80u) != 0LL )
        goto LABEL_29;
      if ( !v15 )
        break;
      --v15;
    }
    if ( (unsigned int)MiGetSystemRegionType(a4) - 6 > 1 )
    {
LABEL_29:
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
      goto LABEL_30;
    }
    v29 = (__int64 *)(((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v29;
    if ( (unsigned __int64)v29 >= v28 && (unsigned __int64)v29 <= v27 )
      PteShadow = MiReadPteShadow(v29, *v29);
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
    if ( (PteShadow & 1) != 0 )
    {
      if ( (PteShadow & 0x200) == 0 )
        goto LABEL_30;
      v34 = *v11;
      goto LABEL_26;
    }
    if ( (unsigned int)MiFaultPteIntact(PteShadow, v31, v32, v33) )
      goto LABEL_37;
    v35 = *v11;
    MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, *v11);
    v36 = MiGetSharedVm((__int64)AnyMultiplexedVm);
    ExReleaseSpinLockExclusive(v36, v35);
    return 3221225477LL;
  }
  else
  {
    v29 = (__int64 *)(((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v29;
    if ( (unsigned __int64)v29 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v29 <= 0xFFFFF6FB7DBED7F8uLL )
      LOWORD(PteShadow) = MiReadPteShadow(((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v29);
    if ( (PteShadow & 1) != 0 )
    {
      if ( (PteShadow & 0x200) == 0 )
        goto LABEL_30;
      v34 = v19;
LABEL_26:
      MiCopyOnWriteEx(a4, v29, -1LL, v34, 0);
LABEL_30:
      v37 = *v11;
      MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, *v11);
      v38 = MiGetSharedVm((__int64)AnyMultiplexedVm);
      ExReleaseSpinLockExclusive(v38, v37);
      return 0LL;
    }
LABEL_37:
    if ( (PteShadow & 0x402) == 0x402
      && (v39 = MiResolveDemandZeroFault(a4, (unsigned __int64)v29, 0LL, (__int64)AnyMultiplexedVm, 0LL, 0LL, *v11),
          v39 < 0) )
    {
      v40 = *v11;
      MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, *v11);
      v41 = MiGetSharedVm((__int64)AnyMultiplexedVm);
      ExReleaseSpinLockExclusive(v41, v40);
      return (unsigned int)v39;
    }
    else
    {
      return 3221225494LL;
    }
  }
}
