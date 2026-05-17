/*
 * XREFs of RtlApplicationVerifierStop @ 0x1800D63D0
 * Callers:
 *     sub_18007D27C @ 0x18007D27C (sub_18007D27C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

struct _PEB *__fastcall RtlApplicationVerifierStop(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  struct _PEB *result; // rax

  result = NtCurrentPeb();
  if ( (result->NtGlobalFlag & 0x2000100) == 0x2000000 )
    sub_1800D646C(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( qword_18015BE28 )
    return (struct _PEB *)((__int64 (__fastcall *)(__int64))qword_18015BE28)(a1);
  return result;
}
