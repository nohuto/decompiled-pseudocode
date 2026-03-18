/*
 * XREFs of MmUpdateSectionIoAttribution @ 0x140029EBC
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14009EF20 (CcMapAndCopyInToCache.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockSectionControlArea @ 0x140099610 (MiLockSectionControlArea.c)
 *     IoDiskIoAttributionDereference @ 0x1400AE074 (IoDiskIoAttributionDereference.c)
 */

__int64 __fastcall MmUpdateSectionIoAttribution(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdi
  unsigned __int8 v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  result = MiLockSectionControlArea(a1, 1LL, &v6);
  if ( result )
  {
    if ( a2 != 8LL * *(_QWORD *)(result + 120) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 32)) <= 1 )
        __fastfail(0xEu);
      v5 = *(_QWORD *)(result + 120) & 0x1FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(result + 120) = (a2 >> 3) | *(_QWORD *)(result + 120) & 0xE000000000000000uLL;
      v3 = 8 * v5;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(result + 72));
    result = v6;
    __writecr8(v6);
    if ( v3 )
      return IoDiskIoAttributionDereference(v3);
  }
  return result;
}
