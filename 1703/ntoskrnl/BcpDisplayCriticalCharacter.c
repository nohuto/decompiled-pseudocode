/*
 * XREFs of BcpDisplayCriticalCharacter @ 0x1402666B0
 * Callers:
 *     BcpDisplayErrorInformation @ 0x140266AE4 (BcpDisplayErrorInformation.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1402674B4 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x140266350 (BgpDisplayCharacterEx.c)
 */

__int64 __fastcall BcpDisplayCriticalCharacter(__int64 a1, int a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // edi
  unsigned int v5; // r9d
  int v6; // esi
  unsigned int v7; // r8d
  __int64 result; // rax
  unsigned __int64 v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+70h] [rbp+8h] BYREF
  int v11; // [rsp+80h] [rbp+18h] BYREF

  v11 = 0;
  v10 = 0;
  v2 = *(_QWORD *)(qword_14036EB40 + 24);
  v3 = dword_14036B980;
  v4 = HIDWORD(BcpCursor);
  v5 = HIDWORD(BcpCursor);
  v6 = BcpCursor;
  v7 = BcpCursor;
  *(_DWORD *)(v2 + 56) = a2;
  *(_DWORD *)(qword_14036EB40 + 8) = a2;
  result = BgpDisplayCharacterEx(0x20u, (__int64 *)qword_14036EB40, v7, v5, *(_DWORD *)(v2 + 40), -1, &v11, &v10, v9);
  if ( (int)result >= 0 )
  {
    HIDWORD(BcpCursor) = v4;
    if ( v3 < v4 + v10 )
      v3 = v4 + v10;
    dword_14036B980 = v3;
    LODWORD(BcpCursor) = v6 + v11;
  }
  return result;
}
