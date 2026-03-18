/*
 * XREFs of PspJobIoRateVolumeEntryRemoveAll @ 0x14011DC84
 * Callers:
 *     PspJobIoRateControlDisable @ 0x14054CB14 (PspJobIoRateControlDisable.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PspIoRateEntryVolumeDelete @ 0x1402396BC (PspIoRateEntryVolumeDelete.c)
 */

__int64 __fastcall PspJobIoRateVolumeEntryRemoveAll(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rbp
  KIRQL v5; // r14
  unsigned __int64 v6; // rcx
  int v7; // esi
  char v8; // al
  __int64 result; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx

  v2 = (volatile LONG *)(a1 + 1440);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  v6 = *(_QWORD *)(a1 + 1448);
  v7 = *(_BYTE *)(a1 + 1456) & 1;
  if ( v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v6 )
        {
          v10 = (_QWORD *)v6;
          if ( v7 )
            v6 ^= *(_QWORD *)v6;
          else
            v6 = *(_QWORD *)v6;
          *v10 = 0LL;
        }
        v11 = *(_QWORD *)(v6 + 8);
        if ( !v11 )
          break;
        v12 = v6;
        if ( v7 )
          v6 ^= v11;
        else
          v6 = *(_QWORD *)(v6 + 8);
        *(_QWORD *)(v12 + 8) = 0LL;
      }
      v13 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v7 && v13 )
        v13 ^= v6;
      PspIoRateEntryVolumeDelete(v6, a2);
      if ( !v13 )
        break;
      v6 = v13;
    }
  }
  v8 = *(_BYTE *)(a1 + 1456);
  *(_QWORD *)(a1 + 1448) = 0LL;
  *(_QWORD *)(a1 + 1456) = 0LL;
  if ( (v8 & 1) != 0 )
    *(_BYTE *)(a1 + 1456) |= 1u;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = v5;
  __writecr8(v5);
  return result;
}
