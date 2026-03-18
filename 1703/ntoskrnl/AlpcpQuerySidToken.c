/*
 * XREFs of AlpcpQuerySidToken @ 0x1404440BC
 * Callers:
 *     AlpcpQuerySidMessage @ 0x140444048 (AlpcpQuerySidMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     SeQueryUserSidToken @ 0x1404F1B24 (SeQueryUserSidToken.c)
 */

__int64 __fastcall AlpcpQuerySidToken(__int64 a1, void *a2, unsigned int a3, unsigned int *a4)
{
  int v7; // edi
  unsigned int Size; // [rsp+20h] [rbp-88h]
  _BYTE Src[80]; // [rsp+30h] [rbp-78h] BYREF

  SeQueryUserSidToken(a1, Src, 68LL);
  v7 = 0;
  if ( Size > a3 )
    v7 = -1073741789;
  if ( a4 )
    *a4 = Size;
  if ( v7 >= 0 )
    memmove(a2, Src, Size);
  return (unsigned int)v7;
}
