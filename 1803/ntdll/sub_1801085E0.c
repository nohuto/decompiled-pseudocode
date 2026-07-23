/*
 * XREFs of sub_1801085E0 @ 0x1801085E0
 * Callers:
 *     sub_180108A18 @ 0x180108A18 (sub_180108A18.c)
 *     sub_180108A98 @ 0x180108A98 (sub_180108A98.c)
 * Callees:
 *     RtlDecodePointer @ 0x18006CEA0 (RtlDecodePointer.c)
 */

LONG __fastcall sub_1801085E0(_EXCEPTION_POINTERS *a1)
{
  __int64 (__fastcall *v2)(_EXCEPTION_POINTERS *); // rax

  v2 = (__int64 (__fastcall *)(_EXCEPTION_POINTERS *))RtlDecodePointer(Ptr);
  if ( v2 )
    return v2(a1);
  else
    return RtlUnhandledExceptionFilter2(a1, (ULONG)&dword_180114112);
}
