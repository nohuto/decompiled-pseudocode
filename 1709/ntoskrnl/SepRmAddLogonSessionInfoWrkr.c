/*
 * XREFs of SepRmAddLogonSessionInfoWrkr @ 0x14058B2C0
 * Callers:
 *     SepRmCommandServerThread @ 0x1405A76C0 (SepRmCommandServerThread.c)
 * Callees:
 *     SepUpdateLogonSessionTrack @ 0x14058B2E4 (SepUpdateLogonSessionTrack.c)
 */

__int64 __fastcall SepRmAddLogonSessionInfoWrkr(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = SepUpdateLogonSessionTrack(a1 + 44);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
