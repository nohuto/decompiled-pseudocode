/*
 * XREFs of sub_18008CDE0 @ 0x18008CDE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetNtSystemRoot @ 0x18003BA70 (RtlGetNtSystemRoot.c)
 *     sub_18008CE44 @ 0x18008CE44 (sub_18008CE44.c)
 *     sub_18008CEF0 @ 0x18008CEF0 (sub_18008CEF0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

_BOOL8 sub_18008CDE0()
{
  __int64 NtSystemRoot; // rax
  int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+58h] [rbp+20h] BYREF

  v3[0] = 0LL;
  NtSystemRoot = RtlGetNtSystemRoot();
  v1 = sub_18008CEF0(NtSystemRoot, v3);
  if ( v1 >= 0 )
  {
    v1 = sub_18008CE44(v3[0], &v4);
    if ( v1 >= 0 )
    {
      v1 = 0;
      dword_18015868C = v4;
    }
  }
  if ( v3[0] )
    ZwClose(v3[0]);
  return v1 >= 0;
}
