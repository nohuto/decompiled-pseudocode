/*
 * XREFs of MiDetachSession @ 0x1400B7C90
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14009C460 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiGetTopPteAddress @ 0x1400B7D00 (MiGetTopPteAddress.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

__int64 MiDetachSession()
{
  _QWORD *TopPteAddress; // rax
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  TopPteAddress = (_QWORD *)MiGetTopPteAddress(qword_1403884B8);
  v1 = 0LL;
  *TopPteAddress = 0LL;
  if ( (unsigned __int64)TopPteAddress >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)TopPteAddress <= 0xFFFFF6FB7DBED7F8uLL )
  {
    MiWritePteShadow(TopPteAddress, 0LL);
  }
  KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] = v1;
  _InterlockedOr(v3, v1);
  result = (unsigned int)KiTbFlushTimeStamp;
  dword_140388458 = KiTbFlushTimeStamp;
  return result;
}
