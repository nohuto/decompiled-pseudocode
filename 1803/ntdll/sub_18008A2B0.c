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

_BOOL8 __fastcall sub_18008A2B0(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  PWSTR NtSystemRoot; // rax
  int v4; // ebx
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+58h] [rbp+20h] BYREF

  Handle[0] = 0LL;
  NtSystemRoot = RtlGetNtSystemRoot();
  v4 = sub_18008A3C0(NtSystemRoot, Handle);
  if ( v4 >= 0 )
  {
    v4 = sub_18008A314(Handle[0], &v7);
    if ( v4 >= 0 )
    {
      v4 = 0;
      dword_1801596E0 = v7;
    }
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return v4 >= 0;
}
