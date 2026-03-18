/*
 * XREFs of SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x1405EE4F0
 * Callers:
 *     SepRmCommandServerThread @ 0x1406316F0 (SepRmCommandServerThread.c)
 * Callees:
 *     SepBlockAccessForLogonSession @ 0x1405EE51C (SepBlockAccessForLogonSession.c)
 */

__int64 __fastcall SepRmInteractiveLogoffLogonSessionCompletedWrkr(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 44);
  result = SepBlockAccessForLogonSession(&v4);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
