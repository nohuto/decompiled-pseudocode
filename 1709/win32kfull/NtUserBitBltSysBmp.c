/*
 * XREFs of NtUserBitBltSysBmp @ 0x1C01118E0
 * Callers:
 *     <none>
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     FixHDCBITSBmpEx @ 0x1C0112F44 (FixHDCBITSBmpEx.c)
 */

__int64 __fastcall NtUserBitBltSysBmp(HDC a1, LONG a2, int a3, int a4, int a5, int a6, unsigned int a7, int a8)
{
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx

  EnterCrit(0LL, 1LL);
  FixHDCBITSBmpEx(0LL);
  v12 = (int)NtGdiBitBltInternal(a1, a2, a3, a4, a5, *(HDC *)(gpDispInfo + 56LL), a6, a7, a8, 0, 0);
  UserSessionSwitchLeaveCrit(v14, v13);
  return v12;
}
