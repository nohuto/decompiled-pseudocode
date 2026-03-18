/*
 * XREFs of MmUpdateSectionIoAttribution @ 0x14000A344
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14001C320 (CcMapAndCopyInToCache.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1400079D0 (IoDiskIoAttributionDereference.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockSectionControlArea @ 0x1400A4BCC (MiLockSectionControlArea.c)
 */

void __fastcall MmUpdateSectionIoAttribution(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int8 v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = MiLockSectionControlArea(a1, 1LL, &v6);
  if ( v4 )
  {
    if ( a2 != 8LL * *(_QWORD *)(v4 + 120) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 32)) <= 1 )
        __fastfail(0xEu);
      v5 = *(_QWORD *)(v4 + 120);
      *(_QWORD *)(v4 + 120) = (a2 >> 3) | v5 & 0xE000000000000000uLL;
      v3 = 8 * v5;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    __writecr8(v6);
    if ( v3 )
      IoDiskIoAttributionDereference(v3);
  }
}
