/*
 * XREFs of MiContractPagingFiles @ 0x1400B866C
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1404FB9A4 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiOkToShrinkPageFiles @ 0x1400B86F8 (MiOkToShrinkPageFiles.c)
 *     MiQueuePageFileExtension @ 0x140226B10 (MiQueuePageFileExtension.c)
 */

__int64 __fastcall MiContractPagingFiles(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  __int64 v5; // r9
  _QWORD *v6; // rdx
  KIRQL v7; // al
  __int64 v8; // r8
  KIRQL v9; // bp

  result = MiOkToShrinkPageFiles(*(_QWORD *)(a1 + 6320), *(_QWORD *)(a1 + 6440));
  if ( (_DWORD)result )
  {
    v3 = *(_DWORD *)(a1 + 5784);
    v4 = 0;
    if ( v3 )
    {
      v5 = a1 + 5792;
      do
      {
        v6 = *(_QWORD **)v5;
        if ( (*(_BYTE *)(*(_QWORD *)v5 + 204LL) & 0x50) == 0 )
        {
          result = v6[2];
          if ( *v6 != result && v6[3] > 0x4000uLL )
            break;
        }
        ++v4;
        v5 += 8LL;
      }
      while ( v4 < v3 );
    }
    if ( v4 != v3 )
    {
      v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
      v9 = v7;
      if ( *(_QWORD *)(a1 + 544) == -1LL )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
        result = v9;
        __writecr8(v9);
      }
      else
      {
        *(_QWORD *)(a1 + 512) = 0LL;
        LOBYTE(v8) = v7;
        *(_BYTE *)(a1 + 591) |= 0x10u;
        *(_QWORD *)(a1 + 544) = -1LL;
        *(_QWORD *)(a1 + 536) = a1;
        return MiQueuePageFileExtension(a1 + 512, 0LL, v8);
      }
    }
  }
  return result;
}
