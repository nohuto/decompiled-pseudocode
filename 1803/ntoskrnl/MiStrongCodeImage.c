/*
 * XREFs of MiStrongCodeImage @ 0x14026AB28
 * Callers:
 *     MiValidateSectionCreate @ 0x14053BB84 (MiValidateSectionCreate.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
