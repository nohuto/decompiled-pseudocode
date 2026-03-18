/*
 * XREFs of MiDetachSession @ 0x140063B90
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400D8800 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiGetTopPteAddress @ 0x140063BE8 (MiGetTopPteAddress.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

__int64 MiDetachSession()
{
  _QWORD *TopPteAddress; // rax
  unsigned __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  TopPteAddress = (_QWORD *)MiGetTopPteAddress(qword_14036C178);
  *TopPteAddress = 0LL;
  if ( (unsigned int)MiPteInShadowRange(TopPteAddress) )
    MiWritePteShadow(v2);
  KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] = v1;
  _InterlockedOr(v4, v1);
  result = (unsigned int)KiTbFlushTimeStamp;
  dword_14036C118 = KiTbFlushTimeStamp;
  return result;
}
