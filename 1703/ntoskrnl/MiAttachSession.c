/*
 * XREFs of MiAttachSession @ 0x140063AC4
 * Callers:
 *     MiAttachWorkingSet @ 0x1400B21D0 (MiAttachWorkingSet.c)
 * Callees:
 *     MiCompareTbFlushTimeStamp @ 0x140063B30 (MiCompareTbFlushTimeStamp.c)
 *     MiGetTopPteAddress @ 0x140063BE8 (MiGetTopPteAddress.c)
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

__int64 __fastcall MiAttachSession(unsigned __int64 a1)
{
  _QWORD *TopPteAddress; // rax
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // r8

  KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] = a1;
  TopPteAddress = (_QWORD *)MiGetTopPteAddress(qword_14036C178);
  *TopPteAddress = *(_QWORD *)(v2 + 7880);
  if ( (unsigned int)MiPteInShadowRange(TopPteAddress) )
    MiWritePteShadow(v3);
  result = MiCompareTbFlushTimeStamp((unsigned int)dword_14036C118, 0xFFFFFFFFLL);
  if ( (_BYTE)result )
    return KeFlushTb(1LL, 0LL, v5);
  return result;
}
