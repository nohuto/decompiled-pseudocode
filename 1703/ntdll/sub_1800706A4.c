/*
 * XREFs of sub_1800706A4 @ 0x1800706A4
 * Callers:
 *     sub_180070388 @ 0x180070388 (sub_180070388.c)
 *     sub_1800F0D88 @ 0x1800F0D88 (sub_1800F0D88.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall sub_1800706A4(__int64 a1, int a2)
{
  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    if ( a2 )
    {
      *(_DWORD *)(a1 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
      *(_WORD *)(a1 + 38) = 1;
      *(_QWORD *)(a1 + 336) = 1LL;
      *(_QWORD *)(a1 + 176) = 1LL;
      *(_QWORD *)(a1 + 88) = 1LL;
      *(_QWORD *)(a1 + 48) = 1LL;
    }
    if ( (*(_WORD *)(a1 + 38))-- == 1 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 48));
      if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 88));
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 176));
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 336));
    }
  }
}
