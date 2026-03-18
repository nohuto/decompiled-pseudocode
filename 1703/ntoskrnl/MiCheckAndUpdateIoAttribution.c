/*
 * XREFs of MiCheckAndUpdateIoAttribution @ 0x140023948
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiValidFault @ 0x1400FCBC0 (MiValidFault.c)
 * Callees:
 *     IoReferenceIoAttributionFromThread @ 0x140023A10 (IoReferenceIoAttributionFromThread.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x1400AE074 (IoDiskIoAttributionDereference.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 */

void __fastcall MiCheckAndUpdateIoAttribution(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // [rsp+30h] [rbp+8h]

  v4 = *(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16), a2, KeGetCurrentThread(), a4);
  if ( (*(_DWORD *)(v4 + 56) & 0x20) == 0 && (int)IoReferenceIoAttributionFromThread(v5) >= 0 )
  {
    v6 = v8;
    if ( v8 == 8LL * *(_QWORD *)(v4 + 120)
      || (v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72)),
          v6 = 8LL * *(_QWORD *)(v4 + 120),
          *(_QWORD *)(v4 + 120) = (v8 >> 3) | *(_QWORD *)(v4 + 120) & 0xE000000000000000uLL,
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72)),
          __writecr8(v7),
          v6) )
    {
      IoDiskIoAttributionDereference(v6);
    }
  }
}
