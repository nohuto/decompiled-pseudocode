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

_BOOL8 __fastcall sub_18008CDE0(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  PWSTR NtSystemRoot; // rax
  int v4; // ebx
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+58h] [rbp+20h] BYREF

  Handle[0] = 0LL;
  NtSystemRoot = RtlGetNtSystemRoot();
  v4 = sub_18008CEF0(NtSystemRoot, Handle);
  if ( v4 >= 0 )
  {
    v4 = sub_18008CE44(Handle[0], &v7);
    if ( v4 >= 0 )
    {
      v4 = 0;
      dword_18015868C = v7;
    }
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return v4 >= 0;
}
