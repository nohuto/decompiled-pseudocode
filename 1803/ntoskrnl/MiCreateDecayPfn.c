/*
 * XREFs of MiCreateDecayPfn @ 0x14004DB30
 * Callers:
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 * Callees:
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiCreateDecayPfn(unsigned int a1)
{
  __int64 v1; // rbp
  PSLIST_ENTRY result; // rax
  ULONG_PTR v3; // rsi
  unsigned __int16 *v4; // rdi
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  __int64 v7; // r8
  char v8; // al

  v1 = a1;
  result = RtlpInterlockedPopEntrySList(&ListHead);
  v3 = (ULONG_PTR)result;
  if ( result )
  {
    v4 = *(unsigned __int16 **)(qword_1403CBD88
                              + 8LL
                              * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 3));
    result[1].Next = (_SLIST_ENTRY *)MiMakeTransitionPte((__int64)&result[0x5800000000LL] / 48, 4LL);
    *(_QWORD *)(v3 + 40) ^= (v5 ^ *(_QWORD *)(v3 + 40)) & 0xFFFFFFFFFLL;
    v6 = (unsigned __int8)MiLockPageInline(v3);
    *(_BYTE *)(v3 + 35) |= 8u;
    v7 = *(_QWORD *)(v3 + 40) & 0x3FFFFFFFFFFFFFFLL | (v1 << 58);
    *(_QWORD *)(v3 + 40) = v7;
    v8 = *(_BYTE *)(v3 + 35) & 0xF8 | 5;
    *(_QWORD *)(v3 + 40) = v7 ^ (v7 ^ ((unsigned __int64)*v4 << 40)) & 0x3FF0000000000LL;
    *(_BYTE *)(v3 + 35) = v8;
    MiInsertPageInList(v3, 4u);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v6);
    return (PSLIST_ENTRY)v3;
  }
  return result;
}
