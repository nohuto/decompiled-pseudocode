/*
 * XREFs of RtlSetSecurityObjectEx @ 0x180090680
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004FBBC @ 0x18004FBBC (sub_18004FBBC.c)
 */

__int64 __fastcall RtlSetSecurityObjectEx(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        char a4,
        _DWORD *a5,
        __int64 a6)
{
  int v7; // [rsp+28h] [rbp-20h]

  return sub_18004FBBC(a1, a1, a2, a3, a4, v7, a5, a6);
}
