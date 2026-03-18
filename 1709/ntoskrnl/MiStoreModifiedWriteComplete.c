/*
 * XREFs of MiStoreModifiedWriteComplete @ 0x14022CA98
 * Callers:
 *     SmIoRequestComplete @ 0x140275C28 (SmIoRequestComplete.c)
 * Callees:
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiStoreLogWriteCompleteFailure @ 0x14022C5F8 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreModifiedWriteDereference @ 0x14022CB28 (MiStoreModifiedWriteDereference.c)
 */

__int64 __fastcall MiStoreModifiedWriteComplete(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned __int8 v4; // al

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 192LL);
  if ( *(int *)(a1 + 16) < 0 )
  {
    MiStoreLogWriteCompleteFailure();
    v3 = 48LL * *(_QWORD *)(a1 + 112) - 0x58000000000LL;
    v4 = MiLockPageInline(v3);
    *(_BYTE *)(v3 + 34) |= 0x10u;
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v4);
    *(_DWORD *)(v2 + 1156) = 32;
  }
  return MiStoreModifiedWriteDereference(*(_QWORD *)(a1 + 56));
}
