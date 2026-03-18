/*
 * XREFs of MiAllowGuardFault @ 0x140027A0C
 * Callers:
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x140027A64 (KeInvalidAccessAllowed.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 */

__int64 __fastcall MiAllowGuardFault(__int64 a1)
{
  if ( (unsigned __int8)KeIsAttachedProcess()
    || (a1 & 1) != 0 && ((*(_BYTE *)(a1 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) == 0
    || (a1 & 1) == 0 && (unsigned __int8)KeInvalidAccessAllowed(a1) == 1 )
  {
    return 0LL;
  }
  else
  {
    return ((unsigned int)~*(_BYTE *)&KeGetCurrentThread()->0 >> 5) & 1;
  }
}
