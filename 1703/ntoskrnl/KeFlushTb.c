/*
 * XREFs of KeFlushTb @ 0x140063C74
 * Callers:
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiAttachSession @ 0x140063AC4 (MiAttachSession.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140063C1C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiInsertCachedPte @ 0x1400A2790 (MiInsertCachedPte.c)
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiAgeWorkingSetTail @ 0x1400D7E80 (MiAgeWorkingSetTail.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     MiFlushTbAsNeeded @ 0x1400F9A20 (MiFlushTbAsNeeded.c)
 *     MiGetUltraMapping @ 0x14015C940 (MiGetUltraMapping.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140167358 (MiGetWsAndMakePageTablesNx.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     NtFreeUserPhysicalPages @ 0x1406B9738 (NtFreeUserPhysicalPages.c)
 *     MiSwitchToPfns @ 0x14080053C (MiSwitchToPfns.c)
 *     MiInitializeTbFlush @ 0x140802CC8 (MiInitializeTbFlush.c)
 * Callees:
 *     KxFlushNonGlobalTb @ 0x140063D58 (KxFlushNonGlobalTb.c)
 *     KiIsSecureProcessFlush @ 0x1400D8F70 (KiIsSecureProcessFlush.c)
 *     KiFlushViaHypervisor @ 0x1400D9420 (KiFlushViaHypervisor.c)
 *     KxFlushEntireTb @ 0x1401590F4 (KxFlushEntireTb.c)
 *     VslFlushSecureAddressSpace @ 0x1401ECF64 (VslFlushSecureAddressSpace.c)
 *     KiFlushAddressSpaceTb @ 0x1402010D0 (KiFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x140201138 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x140251988 (VmFlushTb.c)
 *     ExFlushTb @ 0x14025D8F8 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushTb(unsigned int a1, unsigned int a2)
{
  __int64 v4; // r8
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  char v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  if ( (unsigned int)KiFlushViaHypervisor() )
  {
    KiPrepareFlushParameters(a1, &v8, &v7);
    LOBYTE(v4) = v7;
    KiFlushAddressSpaceTb(v8, 1LL, v4, a1 - 1 > 1);
    goto LABEL_7;
  }
  if ( KiKvaShadow )
  {
    if ( a1 && a1 != 2 )
    {
LABEL_6:
      KxFlushEntireTb(a2);
      goto LABEL_7;
    }
  }
  else if ( !a1 || (int)a1 > 2 )
  {
    goto LABEL_6;
  }
  KxFlushNonGlobalTb(a2);
LABEL_7:
  result = KiIsSecureProcessFlush(0LL, a1);
  if ( (_BYTE)result )
    result = VslFlushSecureAddressSpace();
  if ( VmTbFlushEnabled )
    result = VmFlushTb(0LL, 0LL);
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(0LL, 0LL, a1);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
