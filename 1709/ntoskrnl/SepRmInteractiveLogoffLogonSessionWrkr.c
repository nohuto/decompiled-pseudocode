/*
 * XREFs of SepRmInteractiveLogoffLogonSessionWrkr @ 0x14072F510
 * Callers:
 *     SepRmCommandServerThread @ 0x1405A76C0 (SepRmCommandServerThread.c)
 * Callees:
 *     SepDeleteLogonSessionTrack @ 0x1405A79E0 (SepDeleteLogonSessionTrack.c)
 */

__int64 __fastcall SepRmInteractiveLogoffLogonSessionWrkr(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 44);
  result = SepDeleteLogonSessionTrack(&v4, 1);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
