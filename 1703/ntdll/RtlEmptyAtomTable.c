/*
 * XREFs of RtlEmptyAtomTable @ 0x1800E95A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_18007210C @ 0x18007210C (sub_18007210C.c)
 *     sub_1800729B0 @ 0x1800729B0 (sub_1800729B0.c)
 */

__int64 __fastcall RtlEmptyAtomTable(__int64 a1, char a2)
{
  unsigned int v5; // ebp
  unsigned __int64 *i; // r14
  unsigned __int64 *v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx

  if ( !sub_1800729B0(a1) )
    return 3221225485LL;
  v5 = 0;
  for ( i = (unsigned __int64 *)(a1 + 72); v5 < *(_DWORD *)(a1 + 64); ++v5 )
  {
    v7 = i++;
    while ( 1 )
    {
      v9 = *v7;
      if ( !*v7 )
        break;
      if ( a2 || (*(_BYTE *)(v9 + 14) & 1) == 0 )
      {
        v8 = *v7;
        *v7 = *(_QWORD *)v9;
        *(_QWORD *)v9 = 0LL;
        sub_18007210C(a1, v8);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
      }
      else
      {
        v7 = (unsigned __int64 *)*v7;
      }
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  return 0LL;
}
