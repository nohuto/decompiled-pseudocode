/*
 * XREFs of KeWriteProtectProcessorState @ 0x14042572C
 * Callers:
 *     MakeGdtReadOnly @ 0x14013959C (MakeGdtReadOnly.c)
 *     KiDynamicProcessorInitialization @ 0x14020260C (KiDynamicProcessorInitialization.c)
 * Callees:
 *     MmSetPageProtection @ 0x140139650 (MmSetPageProtection.c)
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     KiShadowProcessorAllocation @ 0x14042391C (KiShadowProcessorAllocation.c)
 */

char __fastcall KeWriteProtectProcessorState(__int64 *a1)
{
  __int64 v1; // rbp
  bool v3; // di
  int v4; // eax

  v1 = *a1;
  v3 = VslVsmEnabled != 0;
  MmSetPageProtection(a1[7], 0x1000uLL, 2u);
  MmSetPageProtection(v1 - 16304, 0x1000uLL, 2u);
  LOBYTE(v4) = MmSetPageProtection(v1 - 12208 + 20480, 0x1000uLL, 2u);
  if ( v3 )
  {
    LOBYTE(v4) = MmSetPageProtection(v1 & 0xFFFFFFFFFFFFF000uLL, 0x1000uLL, 2u);
    if ( KiKvaShadow )
      LOBYTE(v4) = MmSetPageProtection(a1[1], 0x1000uLL, 2u);
  }
  if ( !*((_DWORD *)a1 + 105) )
  {
    v4 = KiShadowProcessorAllocation((__int64)(a1 + 48), v1 - 12208);
    if ( !v4 )
      KeBugCheck(0x7Du);
  }
  return v4;
}
