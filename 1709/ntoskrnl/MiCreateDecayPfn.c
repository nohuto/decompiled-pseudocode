/*
 * XREFs of MiCreateDecayPfn @ 0x140115CFC
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 * Callees:
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiCreateDecayPfn(unsigned int a1)
{
  __int64 v1; // rbp
  PSLIST_ENTRY result; // rax
  __int64 v3; // rsi
  unsigned __int16 *v4; // rdi
  __int64 v5; // r8
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  char v9; // al

  v1 = a1;
  result = RtlpInterlockedPopEntrySList(&stru_140388DF0);
  v3 = (__int64)result;
  if ( result )
  {
    v4 = *(unsigned __int16 **)(qword_140388AF0
                              + 8LL
                              * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 2));
    result[1].Next = (_SLIST_ENTRY *)MiMakeTransitionPte((__int64)&result[0x5800000000LL] / 48, 4LL);
    *(_QWORD *)(v3 + 40) ^= (v5 ^ *(_QWORD *)(v3 + 40)) & 0xFFFFFFFFFLL;
    v6 = MiLockPageInline(v3);
    *(_BYTE *)(v3 + 35) |= 8u;
    v7 = v6;
    v8 = *(_QWORD *)(v3 + 40) & 0x3FFFFFFFFFFFFFFLL | (v1 << 58);
    *(_QWORD *)(v3 + 40) = v8;
    v9 = *(_BYTE *)(v3 + 35) & 0xF8 | 5;
    *(_QWORD *)(v3 + 40) = v8 ^ (v8 ^ ((unsigned __int64)*v4 << 40)) & 0x3FF0000000000LL;
    *(_BYTE *)(v3 + 35) = v9;
    MiInsertPageInList(v3, 4);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v7);
    return (PSLIST_ENTRY)v3;
  }
  return result;
}
