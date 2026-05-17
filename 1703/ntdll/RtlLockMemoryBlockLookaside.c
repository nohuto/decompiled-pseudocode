/*
 * XREFs of RtlLockMemoryBlockLookaside @ 0x1800838A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlLockMemoryZone @ 0x180083910 (RtlLockMemoryZone.c)
 *     RtlUnlockMemoryZone @ 0x180083AB0 (RtlUnlockMemoryZone.c)
 *     sub_180083B74 @ 0x180083B74 (sub_180083B74.c)
 */

__int64 __fastcall RtlLockMemoryBlockLookaside(__int64 a1)
{
  int v2; // edi
  __int64 v4; // rcx

  v2 = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1);
  if ( *(_DWORD *)(a1 + 44) )
    goto LABEL_5;
  v2 = RtlLockMemoryZone(*(_QWORD *)(a1 + 8));
  if ( v2 >= 0 )
  {
    v2 = RtlLockMemoryZone(*(_QWORD *)(a1 + 16));
    if ( v2 < 0 )
    {
      v4 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      v2 = sub_180083B74();
      if ( v2 >= 0 )
      {
LABEL_5:
        ++*(_DWORD *)(a1 + 44);
        goto LABEL_6;
      }
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 8));
      v4 = *(_QWORD *)(a1 + 16);
    }
    RtlUnlockMemoryZone(v4);
  }
LABEL_6:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return (unsigned int)v2;
}
