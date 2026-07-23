/*
 * XREFs of sub_18010CBC8 @ 0x18010CBC8
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18005A240 (RtlQueryResourcePolicy.c)
 * Callees:
 *     sub_18008A3C0 @ 0x18008A3C0 (sub_18008A3C0.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     sub_18010CC28 @ 0x18010CC28 (sub_18010CC28.c)
 */

__int64 __fastcall sub_18010CBC8(unsigned __int16 *a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v3 = sub_18008A3C0(a1, &Handle);
  if ( v3 >= 0 )
  {
    v3 = sub_18010CC28(Handle, a2);
    if ( v3 >= 0 )
      v3 = 0;
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v3;
}
