/*
 * XREFs of MiStrongCodeImage @ 0x14022FE5C
 * Callers:
 *     MiValidateSectionCreate @ 0x1404F6218 (MiValidateSectionCreate.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiStrongCodeImage(__int64 a1, unsigned int a2)
{
  KIRQL v4; // bp
  __int64 result; // rax

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( ((*(_DWORD *)(a1 + 92) >> 18) & 3u) < a2 )
    *(_DWORD *)(a1 + 92) ^= (*(_DWORD *)(a1 + 92) ^ (a2 << 18)) & 0xC0000;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  result = v4;
  __writecr8(v4);
  return result;
}
