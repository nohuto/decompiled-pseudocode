/*
 * XREFs of ACPIWriteGpeStatusRegister @ 0x1C0034ADC
 * Callers:
 *     ACPIGpeClearRegisters @ 0x1C0027948 (ACPIGpeClearRegisters.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002A900 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIInterruptDispatchEvents @ 0x1C002AD48 (ACPIInterruptDispatchEvents.c)
 *     ACPIVectorClear @ 0x1C003F810 (ACPIVectorClear.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C00417F8 (ACPIWakeRemoveDevicesAndUpdate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIWriteGpeStatusRegister(unsigned int a1, char a2)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 result; // rax
  __int64 v5; // rcx
  char v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v2 = a1;
  v3 = *(__int64 (__fastcall **)(__int64))(PmHalDispatchTable + 120);
  if ( a1 >= *((unsigned __int16 *)AcpiInformation + 43) )
  {
    result = v3(7LL);
    if ( (int)result < 0 )
      return result;
    v5 = 7LL;
    v2 -= *((unsigned __int16 *)AcpiInformation + 43);
  }
  else
  {
    result = v3(6LL);
    if ( (int)result < 0 )
      return result;
    v5 = 6LL;
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD, char *, __int64, _QWORD))(PmHalDispatchTable + 136))(
           v5,
           v2,
           &v6,
           1LL,
           0LL);
}
