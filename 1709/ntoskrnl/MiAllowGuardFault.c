/*
 * XREFs of MiAllowGuardFault @ 0x14011D07C
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiResolveProtoPteFault @ 0x140043FB0 (MiResolveProtoPteFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x14011D0D8 (KeInvalidAccessAllowed.c)
 */

__int64 __fastcall MiAllowGuardFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( KeGetCurrentThread()->ApcStateIndex == 1
    || (a1 & 1) != 0 && ((*(_BYTE *)(a1 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) == 0
    || (a1 & 1) == 0 && (unsigned __int8)KeInvalidAccessAllowed(a1, 0LL, a1, a4) == 1 )
  {
    return 0LL;
  }
  else
  {
    return ((unsigned int)~*(_BYTE *)&KeGetCurrentThread()->0 >> 5) & 1;
  }
}
