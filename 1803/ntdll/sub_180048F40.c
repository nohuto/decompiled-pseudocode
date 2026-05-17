/*
 * XREFs of sub_180048F40 @ 0x180048F40
 * Callers:
 *     sub_180048388 @ 0x180048388 (sub_180048388.c)
 *     sub_1800ED18C @ 0x1800ED18C (sub_1800ED18C.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall sub_180048F40(__int64 a1, int a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  volatile signed __int64 *v5; // rcx

  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    if ( a2 )
    {
      v3 = (_QWORD *)(a1 + 136);
      *(_DWORD *)(a1 + 64) = NtCurrentTeb()->ClientId.UniqueThread;
      *(_WORD *)(a1 + 62) = 1;
      *(_QWORD *)(a1 + 608) = 1LL;
      *(_QWORD *)(a1 + 392) = 1LL;
      v4 = 2LL;
      do
      {
        *v3 = 1LL;
        v3 += 15;
        --v4;
      }
      while ( v4 );
      v5 = (volatile signed __int64 *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = 1LL;
    }
    else
    {
      v5 = (volatile signed __int64 *)(a1 + 72);
    }
    if ( (*(_WORD *)(a1 + 62))-- == 1 )
    {
      *(_DWORD *)(a1 + 64) = 0;
      if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(v5);
        if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
        {
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 136));
          if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
          {
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 256));
            if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
              RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 392));
          }
        }
      }
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 608));
    }
  }
}
