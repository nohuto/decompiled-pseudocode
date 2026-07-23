/*
 * XREFs of AVrfCallAPILookupCallback @ 0x1800D9A3C
 * Callers:
 *     LdrpResolveDelayloadAddress @ 0x1800029F4 (LdrpResolveDelayloadAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x180026850 (LdrpHandleProtectedDelayload.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 * Callees:
 *     RtlGuardGrantSuppressedCallAccess @ 0x180001594 (RtlGuardGrantSuppressedCallAccess.c)
 *     LdrpFindLoadedDllByAddress @ 0x180019188 (LdrpFindLoadedDllByAddress.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AVrfCallAPILookupCallback(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  __int64 v9; // rbx
  __int64 v10; // rbx
  PVOID BaseAddress[3]; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  if ( (int)LdrpFindLoadedDllByAddress(a1, (volatile signed __int32 **)BaseAddress, 0LL) < 0 )
  {
    v9 = a1;
  }
  else
  {
    if ( BaseAddress[0] != (PVOID)LdrpNtDllDataTableEntry && (*((_DWORD *)BaseAddress[0] + 26) & 0x400) == 0 )
      v9 = *((_QWORD *)BaseAddress[0] + 6);
    LdrpDereferenceModule((char *)BaseAddress[0]);
  }
  if ( v9 )
  {
    v10 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))(__ROR8__(
                                                                         AvrfpAPILookupCallbackRoutine,
                                                                         64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
            v9,
            a2,
            a3,
            a4);
    if ( v10 != a3 )
      RtlGuardGrantSuppressedCallAccess(a3, 1u, BaseAddress);
    *a5 = v10;
  }
  else
  {
    *a5 = a3;
  }
  return 0LL;
}
