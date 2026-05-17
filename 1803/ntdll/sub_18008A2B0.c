/*
 * XREFs of sub_18008A2B0 @ 0x18008A2B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetNtSystemRoot @ 0x18003FAD0 (RtlGetNtSystemRoot.c)
 *     sub_18008A314 @ 0x18008A314 (sub_18008A314.c)
 *     sub_18008A3C0 @ 0x18008A3C0 (sub_18008A3C0.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

_BOOL8 sub_18008A2B0()
{
  __int64 NtSystemRoot; // rax
  int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+58h] [rbp+20h] BYREF

  v3[0] = 0LL;
  NtSystemRoot = RtlGetNtSystemRoot();
  v1 = sub_18008A3C0(NtSystemRoot, v3);
  if ( v1 >= 0 )
  {
    v1 = sub_18008A314(v3[0], &v4);
    if ( v1 >= 0 )
    {
      v1 = 0;
      dword_1801596E0 = v4;
    }
  }
  if ( v3[0] )
    ZwClose(v3[0]);
  return v1 >= 0;
}
