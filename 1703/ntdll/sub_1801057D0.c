/*
 * XREFs of sub_1801057D0 @ 0x1801057D0
 * Callers:
 *     sub_180105B94 @ 0x180105B94 (sub_180105B94.c)
 *     sub_180105C14 @ 0x180105C14 (sub_180105C14.c)
 * Callees:
 *     RtlDecodePointer @ 0x1800508D0 (RtlDecodePointer.c)
 */

LONG __fastcall sub_1801057D0(_EXCEPTION_POINTERS *a1)
{
  __int64 (__fastcall *v2)(_EXCEPTION_POINTERS *); // rax

  v2 = (__int64 (__fastcall *)(_EXCEPTION_POINTERS *))RtlDecodePointer(Ptr);
  if ( v2 )
    return v2(a1);
  else
    return RtlUnhandledExceptionFilter2(a1, (ULONG)&dword_1801150C2);
}
