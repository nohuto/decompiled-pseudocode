/*
 * XREFs of MiCreateDecayPfn @ 0x14001B2A0
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiCreateDecayPfn(unsigned int a1)
{
  __int64 v1; // rbp
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v3; // rsi
  unsigned __int16 *v4; // rdi
  __int64 v5; // r8
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rcx

  v1 = a1;
  result = RtlpInterlockedPopEntrySList(&stru_14036CBF0);
  v3 = result;
  if ( result )
  {
    v4 = *(unsigned __int16 **)(qword_14036C8F8 + 8LL * WORD2(KeGetCurrentThread()->ApcState.Process[1].SecurePid));
    result[1].Next = (_SLIST_ENTRY *)MiMakeTransitionPte((__int64)&result[0x5800000000LL] / 48, 4LL);
    *((_QWORD *)&v3[2].Next + 1) ^= (v5 ^ *((_QWORD *)&v3[2].Next + 1)) & 0xFFFFFFFFFLL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    MiLockPageAtDpcInline(v3);
    BYTE3(v3[2].Next) |= 8u;
    v7 = (__int64)*(&v3[2].Next + 1) & 0x3FFFFFFFFFFFFFFLL | (v1 << 58);
    *((_QWORD *)&v3[2].Next + 1) = v7;
    *((_QWORD *)&v3[2].Next + 1) = v7 ^ (v7 ^ ((unsigned __int64)*v4 << 40)) & 0x3FF0000000000LL;
    BYTE3(v3[2].Next) = BYTE3(v3[2].Next) & 0xF8 | 5;
    MiInsertPageInList(v3, 4LL);
    _InterlockedAnd64((volatile signed __int64 *)&v3[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return v3;
  }
  return result;
}
