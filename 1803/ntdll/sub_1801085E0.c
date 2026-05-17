/*
 * XREFs of sub_1801085E0 @ 0x1801085E0
 * Callers:
 *     sub_180108A18 @ 0x180108A18 (sub_180108A18.c)
 *     sub_180108A98 @ 0x180108A98 (sub_180108A98.c)
 * Callees:
 *     RtlDecodePointer @ 0x18006CEA0 (RtlDecodePointer.c)
 */

__int64 __fastcall sub_1801085E0(__int64 *a1)
{
  __int64 (__fastcall *v2)(__int64 *); // rax

  v2 = (__int64 (__fastcall *)(__int64 *))RtlDecodePointer(qword_18015C2F0);
  if ( v2 )
    return v2(a1);
  else
    return RtlUnhandledExceptionFilter2(a1);
}
