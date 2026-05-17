/*
 * XREFs of sub_18006F890 @ 0x18006F890
 * Callers:
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     sub_180058BC8 @ 0x180058BC8 (sub_180058BC8.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180070068 @ 0x180070068 (sub_180070068.c)
 */

__int64 __fastcall sub_18006F890(__int64 a1, unsigned __int64 *a2)
{
  __int64 *v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax

  if ( !a2 )
    RtlAcquireSRWLockExclusive(&qword_18015C0D8);
  v4 = (__int64 *)sub_180070068(a1);
  v5 = (unsigned __int64)v4;
  if ( v4 )
  {
    v6 = *v4;
    v7 = (_QWORD *)v4[1];
    if ( *(_QWORD *)(v6 + 8) != v5 || *v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    _bittestandreset((signed __int32 *)Src, *(_DWORD *)(v5 + 64));
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&qword_18015C0D8);
  if ( !v5 )
    return 3221226021LL;
  if ( a2 )
    *a2 = v5;
  else
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0LL;
}
