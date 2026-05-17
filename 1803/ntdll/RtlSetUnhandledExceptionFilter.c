/*
 * XREFs of RtlSetUnhandledExceptionFilter @ 0x180071250
 * Callers:
 *     <none>
 * Callees:
 *     RtlEncodePointer @ 0x180071270 (RtlEncodePointer.c)
 */

__int64 __fastcall RtlSetUnhandledExceptionFilter(__int64 a1)
{
  __int64 result; // rax

  result = RtlEncodePointer(a1);
  qword_18015C2F0 = result;
  return result;
}
