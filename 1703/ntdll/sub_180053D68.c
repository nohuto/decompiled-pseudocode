/*
 * XREFs of sub_180053D68 @ 0x180053D68
 * Callers:
 *     sub_180050C68 @ 0x180050C68 (sub_180050C68.c)
 *     sub_18005395C @ 0x18005395C (sub_18005395C.c)
 *     sub_180104D80 @ 0x180104D80 (sub_180104D80.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x180046500 (RtlCreateUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800DE9E4 @ 0x1800DE9E4 (sub_1800DE9E4.c)
 *     sub_1800DEA5C @ 0x1800DEA5C (sub_1800DEA5C.c)
 */

__int64 __fastcall sub_180053D68(__int64 a1, int a2, _UNICODE_STRING *a3)
{
  wchar_t *v6; // rdx
  __int64 result; // rax
  wchar_t Buffer[1024]; // [rsp+30h] [rbp-818h] BYREF

  RtlInitUnicodeString(a3, 0LL);
  *(_DWORD *)(a1 + 100) = NtCurrentTeb()->ClientId.UniqueProcess;
  if ( a2 == 1 )
  {
    v6 = *(wchar_t **)(a1 + 136);
  }
  else
  {
    if ( *(_WORD *)(a1 + 130) > 0x800u )
      LODWORD(result) = sub_1800DE9E4(Buffer, 1024LL, *(_QWORD *)(a1 + 136));
    else
      LODWORD(result) = sub_1800DEA5C(Buffer);
    if ( (int)result < 0 )
      return (unsigned __int16)result;
    v6 = Buffer;
  }
  if ( RtlCreateUnicodeString(a3, v6) )
    return 0LL;
  else
    return 8LL;
}
