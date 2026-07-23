/*
 * XREFs of RtlGuardCheckImageBase @ 0x18007981C
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180026850 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveProcedureAddress @ 0x180029014 (LdrpResolveProcedureAddress.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     LdrIsEnclaveAddress @ 0x1800D01C0 (LdrIsEnclaveAddress.c)
 */

char __fastcall RtlGuardCheckImageBase(PVOID BaseAddress, char a2)
{
  unsigned __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  LOBYTE(v4) = LdrControlFlowGuardEnforced();
  if ( (_DWORD)v4 )
  {
    if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_18016F4D0 + 1)
      || (v4 = *((_QWORD *)&xmmword_18016F4D0 + 1) + (unsigned int)qword_18016F4E0, (unsigned __int64)BaseAddress >= v4) )
    {
      LOBYTE(v4) = RtlpxLookupFunctionTable(BaseAddress, (__int64)&v6);
    }
    else
    {
      v6 = xmmword_18016F4D0;
    }
    if ( *((PVOID *)&v6 + 1) != BaseAddress )
    {
      if ( !a2 || (LOBYTE(v4) = LdrIsEnclaveAddress(BaseAddress), !(_BYTE)v4) )
        __fastfail(0x18u);
    }
  }
  return v4;
}
