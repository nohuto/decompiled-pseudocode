/*
 * XREFs of MiAllowGuardFault @ 0x1400B5494
 * Callers:
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiAccessCheck @ 0x14001F4F0 (MiAccessCheck.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x1400B54F4 (KeInvalidAccessAllowed.c)
 */

__int64 __fastcall MiAllowGuardFault(__int64 a1)
{
  _BYTE *v1; // rax
  bool v2; // zf

  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    return 0LL;
  v1 = (_BYTE *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a1 & 1) != 0 )
  {
    if ( *v1 == 1 )
      return 0LL;
    v2 = *v1 == 3;
  }
  else
  {
    v2 = (unsigned __int8)KeInvalidAccessAllowed(a1) == 1;
  }
  if ( !v2 )
    return ((unsigned int)~*(_BYTE *)&KeGetCurrentThread()->0 >> 5) & 1;
  return 0LL;
}
