/*
 * XREFs of RtlSetSecurityObject @ 0x18005AF70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x18005A120 (RtlpSetSecurityObject.c)
 */

__int64 __fastcall RtlSetSecurityObject(__int64 a1, __int64 a2, unsigned __int64 *a3, _DWORD *a4, size_t a5)
{
  int v6; // [rsp+28h] [rbp-20h]

  return RtlpSetSecurityObject(a1, a1, a2, a3, 0, v6, a4, a5);
}
