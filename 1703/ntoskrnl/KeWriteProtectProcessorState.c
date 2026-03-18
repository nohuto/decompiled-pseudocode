/*
 * XREFs of KeWriteProtectProcessorState @ 0x140412AB0
 * Callers:
 *     MakeGdtReadOnly @ 0x140164E58 (MakeGdtReadOnly.c)
 *     KiDynamicProcessorInitialization @ 0x1401FC84C (KiDynamicProcessorInitialization.c)
 * Callees:
 *     MmSetPageProtection @ 0x140135210 (MmSetPageProtection.c)
 *     KeBugCheck @ 0x140181870 (KeBugCheck.c)
 *     KiShadowProcessorAllocation @ 0x140403934 (KiShadowProcessorAllocation.c)
 */

char __fastcall KeWriteProtectProcessorState(__int64 *a1)
{
  __int64 v1; // rsi
  bool v3; // bl
  int v4; // eax

  v1 = *a1;
  v3 = VslVsmEnabled != 0;
  LOBYTE(v4) = MmSetPageProtection(a1[7], 0x1000uLL);
  if ( v3 )
  {
    LOBYTE(v4) = MmSetPageProtection(v1 & 0xFFFFFFFFFFFFF000uLL, 0x1000uLL);
    if ( KiKvaShadow )
      LOBYTE(v4) = MmSetPageProtection(a1[1], 0x1000uLL);
  }
  if ( !*((_DWORD *)a1 + 105) )
  {
    v4 = KiShadowProcessorAllocation((__int64)(a1 + 48), v1 - 12208);
    if ( !v4 )
      KeBugCheck(0x7Du);
  }
  return v4;
}
