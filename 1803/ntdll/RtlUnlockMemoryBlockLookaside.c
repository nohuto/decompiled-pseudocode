/*
 * XREFs of RtlUnlockMemoryBlockLookaside @ 0x180049220
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800491C0 @ 0x1800491C0 (sub_1800491C0.c)
 *     RtlUnlockMemoryZone @ 0x180049280 (RtlUnlockMemoryZone.c)
 */

__int64 __fastcall RtlUnlockMemoryBlockLookaside(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  int v5; // ecx
  unsigned int v6; // edi
  int v7; // ecx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 *v10; // r8
  __int64 v11; // r9

  RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  v5 = *(_DWORD *)(a1 + 44);
  v6 = 0;
  if ( v5 )
  {
    v7 = v5 - 1;
    *(_DWORD *)(a1 + 44) = v7;
    if ( !v7 )
    {
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 16));
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 8));
      sub_1800491C0(v9, v8, v10, v11);
    }
  }
  else
  {
    v6 = -1073741823;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v6;
}
