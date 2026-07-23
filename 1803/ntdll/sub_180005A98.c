/*
 * XREFs of sub_180005A98 @ 0x180005A98
 * Callers:
 *     sub_180002524 @ 0x180002524 (sub_180002524.c)
 *     EtwDeliverDataBlock @ 0x180005750 (EtwDeliverDataBlock.c)
 *     EtwEnumerateProcessRegGuids @ 0x180106590 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x180074F10 (RtlTryAcquireSRWLockShared.c)
 */

__int64 __fastcall sub_180005A98(_RTL_SRWLOCK *a1)
{
  char v2; // si
  unsigned __int64 v3; // rbp
  unsigned __int64 Ptr; // rbx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rcx
  unsigned __int64 i; // rbx
  _QWORD **v8; // rax
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rcx

  v2 = 0;
  v3 = 0LL;
  RtlAcquireSRWLockExclusive(&stru_18015D380);
  if ( a1 )
  {
    Ptr = (unsigned __int64)a1[1].Ptr;
    v5 = (unsigned __int64)a1;
    if ( Ptr )
    {
      v6 = *(_QWORD **)Ptr;
      if ( *(_QWORD *)Ptr )
      {
        do
        {
          Ptr = (unsigned __int64)v6;
          v6 = (_QWORD *)*v6;
        }
        while ( v6 );
      }
    }
    else
    {
      for ( i = (unsigned __int64)a1[2].Ptr; ; i = *(_QWORD *)(Ptr + 16) )
      {
        Ptr = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Ptr || *(_QWORD *)Ptr == v5 )
          break;
        v5 = Ptr;
      }
    }
  }
  else if ( ((__int64)Tree.Min & 1) != 0 )
  {
    if ( Tree.Min == (PRTL_BALANCED_NODE)1 )
      Ptr = 0LL;
    else
      Ptr = (unsigned __int64)Tree.Min ^ ((unsigned __int64)&Tree.Root + 1);
  }
  else
  {
    Ptr = (unsigned __int64)Tree.Min;
  }
  while ( Ptr )
  {
    v3 = Ptr;
    if ( RtlTryAcquireSRWLockShared((PRTL_SRWLOCK)(Ptr + 72)) )
    {
      v2 = 1;
      break;
    }
    v8 = *(_QWORD ***)(Ptr + 8);
    v9 = Ptr;
    if ( v8 )
    {
      v10 = *v8;
      for ( Ptr = *(_QWORD *)(Ptr + 8); v10; v10 = (_QWORD *)*v10 )
        Ptr = (unsigned __int64)v10;
    }
    else
    {
      while ( 1 )
      {
        Ptr = *(_QWORD *)(Ptr + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Ptr || *(_QWORD *)Ptr == v9 )
          break;
        v9 = Ptr;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015D380);
  if ( a1 )
    RtlReleaseSRWLockShared(a1 + 9);
  return v3 & -(__int64)(v2 != 0);
}
