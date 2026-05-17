/*
 * XREFs of RtlEncodePointer @ 0x180071270
 * Callers:
 *     sub_180071028 @ 0x180071028 (sub_180071028.c)
 *     RtlSetUnhandledExceptionFilter @ 0x180071250 (RtlSetUnhandledExceptionFilter.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 */

__int64 __fastcall RtlEncodePointer(__int64 a1)
{
  int v2; // eax
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = ZwQueryInformationProcess(-1LL, 36LL, &v4);
  if ( v2 < 0 )
    RtlRaiseStatus((unsigned int)v2);
  return __ROR8__(a1 ^ v4, v4 & 0x3F);
}
