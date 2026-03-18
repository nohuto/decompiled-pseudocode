/*
 * XREFs of ?ResetSystemColors@@YAXXZ @ 0x1C00701C0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C006FC00 (xxxResetDisplayDevice.c)
 * Callees:
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0042180 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     xxxSetSysColors @ 0x1C0058C04 (xxxSetSysColors.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

void ResetSystemColors(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  _BYTE v2[16]; // [rsp+30h] [rbp-128h] BYREF
  char v3[128]; // [rsp+40h] [rbp-118h] BYREF
  char v4[128]; // [rsp+C0h] [rbp-98h] BYREF

  v0 = 0;
  memmove(v3, (char *)gpsi + 4836, 0x7CuLL);
  v1 = 0LL;
  do
  {
    *(_DWORD *)&v4[v1] = v0;
    v1 += 4LL;
    ++v0;
  }
  while ( v0 < 0x1F );
  LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation + 1;
  v2[0] = 0;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)v2);
  xxxSetSysColors(0LL, v0, v4, v3, 6u);
  if ( !v2[0] )
  {
    LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v2);
  }
}
