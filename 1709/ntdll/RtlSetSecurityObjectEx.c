/*
 * XREFs of RtlSetSecurityObjectEx @ 0x180090600
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x18005A120 (RtlpSetSecurityObject.c)
 */

__int64 __fastcall RtlSetSecurityObjectEx(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4, _DWORD *a5, size_t a6)
{
  int v7; // [rsp+28h] [rbp-20h]

  return RtlpSetSecurityObject(a1, a1, a2, a3, a4, v7, a5, a6);
}
