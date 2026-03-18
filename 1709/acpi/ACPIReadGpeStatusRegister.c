/*
 * XREFs of ACPIReadGpeStatusRegister @ 0x1C0013CA4
 * Callers:
 *     ACPIGpeClearRegisters @ 0x1C0013C48 (ACPIGpeClearRegisters.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C004EBB0 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIInterruptDispatchEvents @ 0x1C0050348 (ACPIInterruptDispatchEvents.c)
 *     ACPIInterruptServiceRoutine @ 0x1C0050530 (ACPIInterruptServiceRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ACPIReadGpeStatusRegister(unsigned int a1)
{
  unsigned int v1; // ebx
  int (__fastcall *v2)(__int64); // rax
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1;
  v5 = 0;
  v2 = *(int (__fastcall **)(__int64))(PmHalDispatchTable + 120);
  if ( a1 >= *((unsigned __int16 *)AcpiInformation + 43) )
  {
    if ( v2(7LL) < 0 )
      return v5;
    v3 = 7LL;
    v1 -= *((unsigned __int16 *)AcpiInformation + 43);
    goto LABEL_4;
  }
  if ( v2(6LL) >= 0 )
  {
    v3 = 6LL;
LABEL_4:
    (*(void (__fastcall **)(__int64, _QWORD, char *, __int64, _QWORD))(PmHalDispatchTable + 128))(v3, v1, &v5, 1LL, 0LL);
  }
  return v5;
}
