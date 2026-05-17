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

unsigned __int64 __fastcall RtlGuardCheckImageBase(unsigned __int64 a1, char a2)
{
  unsigned __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  result = LdrControlFlowGuardEnforced();
  if ( (_DWORD)result )
  {
    if ( a1 < *((_QWORD *)&xmmword_18016F4D0 + 1)
      || (result = *((_QWORD *)&xmmword_18016F4D0 + 1) + (unsigned int)qword_18016F4E0, a1 >= result) )
    {
      result = RtlpxLookupFunctionTable(a1, (__int64)&v5);
    }
    else
    {
      v5 = xmmword_18016F4D0;
    }
    if ( *((_QWORD *)&v5 + 1) != a1 )
    {
      if ( !a2 || (result = LdrIsEnclaveAddress(a1), !(_BYTE)result) )
        __fastfail(0x18u);
    }
  }
  return result;
}
