/*
 * XREFs of TpSetDefaultPoolStackInformation @ 0x1800856A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018928 @ 0x180018928 (sub_180018928.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     TpSetPoolStackInformation @ 0x1800857C0 (TpSetPoolStackInformation.c)
 *     sub_1800857E8 @ 0x1800857E8 (sub_1800857E8.c)
 */

__int64 __fastcall TpSetDefaultPoolStackInformation(_QWORD *a1)
{
  _QWORD *Heap; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  int v6; // [rsp+20h] [rbp-18h]
  char v7; // [rsp+40h] [rbp+8h]

  v7 = 0;
  v6 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !qword_18015BFF8 || *(_QWORD *)(qword_18015BFF8 + 8) < a1[1] || *(_QWORD *)qword_18015BFF8 < *a1 )
  {
    RtlAcquireSRWLockExclusive(&qword_18015C380);
    Heap = (_QWORD *)qword_18015BFF8;
    if ( qword_18015BFF8
      || (Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 786432) | 8u, 16LL),
          (qword_18015BFF8 = (__int64)Heap) != 0) )
    {
      v3 = a1[1];
      if ( Heap[1] < v3 )
      {
        Heap[1] = v3;
        v7 = 1;
      }
      if ( *Heap < *a1 )
      {
        *Heap = *a1;
        v7 = 1;
      }
    }
    else
    {
      v6 = -1073741801;
    }
    RtlReleaseSRWLockExclusive(&qword_18015C380);
  }
  if ( v7 && v6 >= 0 )
  {
    v4 = sub_1800857E8();
    if ( v4 )
    {
      v6 = TpSetPoolStackInformation(v4);
      sub_180018928((const void **)&qword_18015C378, (__int64)&qword_18015C380);
    }
  }
  return (unsigned int)v6;
}
