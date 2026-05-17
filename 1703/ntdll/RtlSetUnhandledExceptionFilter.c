/*
 * XREFs of RtlSetUnhandledExceptionFilter @ 0x180077820
 * Callers:
 *     <none>
 * Callees:
 *     RtlEncodePointer @ 0x180077840 (RtlEncodePointer.c)
 */

__int64 __fastcall RtlSetUnhandledExceptionFilter(__int64 a1)
{
  __int64 result; // rax

  result = RtlEncodePointer(a1);
  qword_18015B2C0 = result;
  return result;
}
