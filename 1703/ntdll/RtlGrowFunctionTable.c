/*
 * XREFs of RtlGrowFunctionTable @ 0x1800E1400
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlGrowFunctionTable(__int64 a1, unsigned int a2)
{
  int v4; // edi
  signed __int64 result; // rax
  int v6; // ecx

  if ( *(_DWORD *)(a1 + 80) != 3 || a2 < *(_DWORD *)(a1 + 84) )
    RtlRaiseStatus(-1073741811);
  if ( qword_18016B370 )
  {
    RtlAcquireSRWLockExclusive(&qword_18015AF70);
    v4 = *(_DWORD *)qword_18016B270;
    if ( !*(_DWORD *)qword_18016B270 )
      RtlProtectHeap(qword_18016B260, 0);
    if ( v4 == -1 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015AF70);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016B270 = v4 + 1;
    result = RtlReleaseSRWLockExclusive(&qword_18015AF70);
  }
  *(_DWORD *)(a1 + 84) = a2;
  if ( qword_18016B370 )
  {
    RtlAcquireSRWLockExclusive(&qword_18015AF70);
    v6 = *(_DWORD *)qword_18016B270;
    if ( !*(_DWORD *)qword_18016B270 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015AF70);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016B270 = v6 - 1;
    if ( v6 == 1 )
      RtlProtectHeap(qword_18016B260, 1);
    return RtlReleaseSRWLockExclusive(&qword_18015AF70);
  }
  return result;
}
