/*
 * XREFs of KeFlushTb @ 0x140059170
 * Callers:
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiInsertCachedPte @ 0x1400753D0 (MiInsertCachedPte.c)
 *     MiFlushTbAsNeeded @ 0x14009BE70 (MiFlushTbAsNeeded.c)
 *     MiAgeWorkingSetTail @ 0x14009EF90 (MiAgeWorkingSetTail.c)
 *     MiAttachSession @ 0x1400B7BAC (MiAttachSession.c)
 *     MiGetUltraMapping @ 0x1400CD380 (MiGetUltraMapping.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400ED79C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14015B444 (MiGetWsAndMakePageTablesNx.c)
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 *     NtFreeUserPhysicalPages @ 0x1406E649C (NtFreeUserPhysicalPages.c)
 *     MiSwitchToPfns @ 0x14082A50C (MiSwitchToPfns.c)
 *     MiInitializeTbFlush @ 0x140849448 (MiInitializeTbFlush.c)
 * Callees:
 *     KiFlushViaHypervisor @ 0x140059270 (KiFlushViaHypervisor.c)
 *     KxFlushNonGlobalTb @ 0x14005B3D0 (KxFlushNonGlobalTb.c)
 *     KiFlushAddressSpaceTb @ 0x1401410A4 (KiFlushAddressSpaceTb.c)
 *     KxFlushEntireTb @ 0x140143A74 (KxFlushEntireTb.c)
 *     KiPrepareFlushParameters @ 0x1401442BC (KiPrepareFlushParameters.c)
 *     VslFlushSecureAddressSpace @ 0x1401F1DD4 (VslFlushSecureAddressSpace.c)
 *     VmFlushTb @ 0x1402781F8 (VmFlushTb.c)
 *     ExFlushTb @ 0x140287438 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushTb(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = a2;
  v4 = a1;
  if ( !(unsigned int)KiFlushViaHypervisor(a1, a2, a3) )
  {
    if ( KiKvaShadow )
    {
      if ( !v4 || v4 == 2 )
      {
LABEL_9:
        result = KxFlushNonGlobalTb(v3);
        goto LABEL_11;
      }
    }
    else if ( v4 && (int)v4 <= 2 )
    {
      goto LABEL_9;
    }
    result = KxFlushEntireTb(v3);
    goto LABEL_11;
  }
  KiPrepareFlushParameters(v4, &v9, &v8);
  LOBYTE(v5) = 1;
  result = KiFlushAddressSpaceTb(v9, v5, v8, v4 - 1 > 1);
LABEL_11:
  if ( v4 == 1 )
  {
    result = (__int64)KeGetCurrentThread();
    if ( *(_QWORD *)(*(_QWORD *)(result + 184) + 720LL) )
      result = VslFlushSecureAddressSpace();
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb(0LL, 0LL, v4);
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(0LL, 0LL, v4);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
