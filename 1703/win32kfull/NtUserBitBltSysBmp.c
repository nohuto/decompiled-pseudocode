/*
 * XREFs of NtUserBitBltSysBmp @ 0x1C00D65E0
 * Callers:
 *     <none>
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     FixHDCBITSBmp @ 0x1C00D6694 (FixHDCBITSBmp.c)
 */

__int64 __fastcall NtUserBitBltSysBmp(HDC a1, int a2, int a3, int a4, int a5, int a6, unsigned int a7, int a8)
{
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  EnterCrit(0LL, 1LL);
  FixHDCBITSBmp();
  v12 = (int)NtGdiBitBltInternal(a1, a2, a3, a4, a5, *(HDC *)(gpDispInfo + 56LL), a6, a7, a8, 0, 0);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v12;
}
