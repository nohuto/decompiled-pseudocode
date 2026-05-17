/*
 * XREFs of RtlLockMemoryBlockLookaside @ 0x180049020
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180048CCC @ 0x180048CCC (sub_180048CCC.c)
 *     RtlLockMemoryZone @ 0x180049090 (RtlLockMemoryZone.c)
 *     RtlUnlockMemoryZone @ 0x180049280 (RtlUnlockMemoryZone.c)
 */

__int64 __fastcall RtlLockMemoryBlockLookaside(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  int v5; // edi
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  __int64 v11; // rcx

  v5 = 0;
  RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  if ( *(_DWORD *)(a1 + 44) )
    goto LABEL_5;
  v5 = RtlLockMemoryZone(*(_QWORD *)(a1 + 8));
  if ( v5 >= 0 )
  {
    v5 = RtlLockMemoryZone(*(_QWORD *)(a1 + 16));
    if ( v5 < 0 )
    {
      v11 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      v5 = sub_180048CCC(v7, v6, v8, v9);
      if ( v5 >= 0 )
      {
LABEL_5:
        ++*(_DWORD *)(a1 + 44);
        goto LABEL_6;
      }
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 8));
      v11 = *(_QWORD *)(a1 + 16);
    }
    RtlUnlockMemoryZone(v11);
  }
LABEL_6:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return (unsigned int)v5;
}
