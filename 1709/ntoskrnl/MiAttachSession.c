/*
 * XREFs of MiAttachSession @ 0x1400B7BAC
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14009C460 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     KeFlushTb @ 0x140059170 (KeFlushTb.c)
 *     MiCompareTbFlushTimeStamp @ 0x1400B7C30 (MiCompareTbFlushTimeStamp.c)
 *     MiGetTopPteAddress @ 0x1400B7D00 (MiGetTopPteAddress.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

__int64 __fastcall MiAttachSession(unsigned __int64 a1)
{
  _QWORD *TopPteAddress; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // r8

  KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] = a1;
  TopPteAddress = (_QWORD *)MiGetTopPteAddress(qword_1403884B8);
  v3 = *(_QWORD *)(v2 + 7880);
  *TopPteAddress = v3;
  if ( (unsigned __int64)TopPteAddress >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)TopPteAddress <= 0xFFFFF6FB7DBED7F8uLL )
  {
    MiWritePteShadow(TopPteAddress, v3);
  }
  result = MiCompareTbFlushTimeStamp((unsigned int)dword_140388458, 0xFFFFFFFFLL);
  if ( (_BYTE)result )
    return KeFlushTb(1LL, 0LL, v5);
  return result;
}
