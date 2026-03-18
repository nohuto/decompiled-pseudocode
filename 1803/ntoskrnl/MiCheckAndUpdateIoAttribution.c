/*
 * XREFs of MiCheckAndUpdateIoAttribution @ 0x1401379B4
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiValidFault @ 0x14001ECF0 (MiValidFault.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14008E6C8 (IoDiskIoAttributionDereference.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     IoReferenceIoAttributionFromThread @ 0x140137A70 (IoReferenceIoAttributionFromThread.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 */

void __fastcall MiCheckAndUpdateIoAttribution(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r8
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16));
  if ( (*(_DWORD *)(v1 + 56) & 0x20) == 0 && (int)IoReferenceIoAttributionFromThread(v2, &v6) >= 0 )
  {
    v3 = v6;
    if ( v6 == 8LL * *(_QWORD *)(v1 + 120)
      || (v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 72)),
          v5 = (v3 >> 3) | *(_QWORD *)(v1 + 120) & 0xE000000000000000uLL,
          v3 = 8LL * *(_QWORD *)(v1 + 120),
          *(_QWORD *)(v1 + 120) = v5,
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72)),
          __writecr8(v4),
          v3) )
    {
      IoDiskIoAttributionDereference(v3);
    }
  }
}
