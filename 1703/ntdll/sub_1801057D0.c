/*
 * XREFs of sub_1801057D0 @ 0x1801057D0
 * Callers:
 *     sub_180105B94 @ 0x180105B94 (sub_180105B94.c)
 *     sub_180105C14 @ 0x180105C14 (sub_180105C14.c)
 * Callees:
 *     RtlDecodePointer @ 0x1800508D0 (RtlDecodePointer.c)
 */

__int64 __fastcall sub_1801057D0(const void **a1)
{
  __int64 (__fastcall *v2)(const void **); // rax

  v2 = (__int64 (__fastcall *)(const void **))RtlDecodePointer(qword_18015B2C0);
  if ( v2 )
    return v2(a1);
  else
    return RtlUnhandledExceptionFilter2(a1);
}
