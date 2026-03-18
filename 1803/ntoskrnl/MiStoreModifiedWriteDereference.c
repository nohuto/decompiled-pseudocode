/*
 * XREFs of MiStoreModifiedWriteDereference @ 0x140091738
 * Callers:
 *     SmIoRequestComplete @ 0x1400914A8 (SmIoRequestComplete.c)
 *     MiStoreWriteModifiedPages @ 0x1400D6708 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     KeInsertQueueApc @ 0x140044AB0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x140132910 (KeInitializeApc.c)
 */

char __fastcall MiStoreModifiedWriteDereference(__int64 a1)
{
  signed __int32 v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rax

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 44), 0xFFFFFFFF);
  if ( v2 == 1 )
  {
    v3 = *(_QWORD *)(a1 + 192);
    v4 = *(unsigned int *)(a1 + 248);
    *(_DWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = v4;
    KeInitializeApc(a1 + 48, *(_QWORD *)(v3 + 928), 0, (unsigned int)MiStoreWriteModifiedCompleteApc, 0LL, 0LL, 0, 0LL);
    LOBYTE(v2) = KeInsertQueueApc(a1 + 48, a1, 0LL, 0);
  }
  return v2;
}
