/*
 * XREFs of PspJobIoRateVolumeEntryRemoveAll @ 0x14008A150
 * Callers:
 *     PspJobIoRateControlDisable @ 0x14052F770 (PspJobIoRateControlDisable.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PspIoRateEntryVolumeDelete @ 0x1402849D0 (PspIoRateEntryVolumeDelete.c)
 */

__int64 __fastcall PspJobIoRateVolumeEntryRemoveAll(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rbp
  unsigned __int64 *v4; // rdi
  KIRQL v5; // al
  unsigned __int64 v6; // r8
  KIRQL v7; // r14
  unsigned __int64 v8; // rcx
  int v9; // esi
  _QWORD *v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 result; // rax

  v2 = (volatile LONG *)(a1 + 1440);
  v4 = (unsigned __int64 *)(a1 + 1448);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  v6 = v4[1];
  v7 = v5;
  v8 = *v4;
  if ( (v6 & 1) != 0 && v8 )
    v8 ^= (unsigned __int64)v4;
  v9 = v6 & 1;
  if ( v8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v8 )
        {
          v10 = (_QWORD *)v8;
          if ( v9 )
            v8 ^= *(_QWORD *)v8;
          else
            v8 = *(_QWORD *)v8;
          *v10 = 0LL;
        }
        v11 = *(_QWORD *)(v8 + 8);
        if ( !v11 )
          break;
        v12 = v8;
        if ( v9 )
          v8 ^= v11;
        else
          v8 = *(_QWORD *)(v8 + 8);
        *(_QWORD *)(v12 + 8) = 0LL;
      }
      v13 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v9 && v13 )
        v13 ^= v8;
      PspIoRateEntryVolumeDelete(v8, a2);
      if ( !v13 )
        break;
      v8 = v13;
    }
    LOBYTE(v6) = *((_BYTE *)v4 + 8);
  }
  *v4 = 0LL;
  v4[1] = 0LL;
  if ( (v6 & 1) != 0 )
    *((_BYTE *)v4 + 8) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = v7;
  __writecr8(v7);
  return result;
}
