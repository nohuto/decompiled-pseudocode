/*
 * XREFs of SepRmAddLogonSessionInfoWrkr @ 0x140577900
 * Callers:
 *     SepRmCommandServerThread @ 0x1406316F0 (SepRmCommandServerThread.c)
 * Callees:
 *     SepUpdateLogonSessionTrack @ 0x140577924 (SepUpdateLogonSessionTrack.c)
 */

__int64 __fastcall SepRmAddLogonSessionInfoWrkr(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = SepUpdateLogonSessionTrack(a1 + 44);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
