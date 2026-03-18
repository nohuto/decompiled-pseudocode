/*
 * XREFs of BcpDisplayCriticalCharacter @ 0x1402909DC
 * Callers:
 *     BcpDisplayErrorInformation @ 0x140290DF8 (BcpDisplayErrorInformation.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1402917C8 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x140290668 (BgpDisplayCharacterEx.c)
 */

__int64 __fastcall BcpDisplayCriticalCharacter(__int16 a1, int a2)
{
  int v2; // esi
  unsigned int v3; // r8d
  int v4; // edi
  unsigned int v5; // r9d
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 result; // rax
  unsigned __int64 v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF

  LOWORD(v10) = a1;
  v2 = BcpCursor;
  v3 = BcpCursor;
  v4 = HIDWORD(BcpCursor);
  v5 = HIDWORD(BcpCursor);
  v11 = 0;
  v6 = *(_QWORD *)(qword_14038CD70 + 24);
  v10 = 0;
  v7 = dword_140387EC8;
  *(_DWORD *)(v6 + 56) = a2;
  *(_DWORD *)(qword_14038CD70 + 8) = a2;
  result = BgpDisplayCharacterEx(0x20u, (__int64 *)qword_14038CD70, v3, v5, *(_DWORD *)(v6 + 40), -1, &v11, &v10, v9);
  if ( (int)result >= 0 )
  {
    HIDWORD(BcpCursor) = v4;
    if ( v7 < v4 + v10 )
      v7 = v4 + v10;
    dword_140387EC8 = v7;
    LODWORD(BcpCursor) = v2 + v11;
  }
  return result;
}
