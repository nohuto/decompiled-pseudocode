/*
 * XREFs of sub_180005150 @ 0x180005150
 * Callers:
 *     sub_180004D3C @ 0x180004D3C (sub_180004D3C.c)
 *     sub_180106ED0 @ 0x180106ED0 (sub_180106ED0.c)
 *     sub_180107460 @ 0x180107460 (sub_180107460.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x180038060 (RtlCreateUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800D8244 @ 0x1800D8244 (sub_1800D8244.c)
 *     sub_1800D82C8 @ 0x1800D82C8 (sub_1800D82C8.c)
 */

__int64 __fastcall sub_180005150(__int64 a1, int a2, _UNICODE_STRING *a3)
{
  wchar_t *v6; // r8
  wchar_t *v7; // rdx
  __int64 result; // rax
  wchar_t Buffer[1024]; // [rsp+30h] [rbp-818h] BYREF

  RtlInitUnicodeString(a3, 0LL);
  v6 = *(wchar_t **)(a1 + 136);
  *(_DWORD *)(a1 + 100) = NtCurrentTeb()->ClientId.UniqueProcess;
  if ( a2 == 1 )
  {
    v7 = v6;
  }
  else
  {
    if ( *(_WORD *)(a1 + 130) > 0x800u )
      LODWORD(result) = sub_1800D8244(Buffer, 1024LL, v6);
    else
      LODWORD(result) = sub_1800D82C8(Buffer);
    if ( (int)result < 0 )
      return (unsigned __int16)result;
    v7 = Buffer;
  }
  if ( RtlCreateUnicodeString(a3, v7) )
    return 0LL;
  else
    return 8LL;
}
