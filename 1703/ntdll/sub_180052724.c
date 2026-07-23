/*
 * XREFs of sub_180052724 @ 0x180052724
 * Callers:
 *     sub_1800520F8 @ 0x1800520F8 (sub_1800520F8.c)
 *     EtwDeliverDataBlock @ 0x1800523B0 (EtwDeliverDataBlock.c)
 *     EtwEnumerateProcessRegGuids @ 0x180104330 (EtwEnumerateProcessRegGuids.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007B450 (RtlTryAcquireSRWLockShared.c)
 */

__int64 __fastcall sub_180052724(_RTL_SRWLOCK *a1)
{
  char v2; // si
  unsigned __int64 v3; // rbp
  unsigned __int64 Ptr; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 j; // rbx
  _QWORD *i; // rax
  _QWORD *v9; // rax
  unsigned __int64 v10; // rcx

  v2 = 0;
  v3 = 0LL;
  RtlAcquireSRWLockExclusive(&stru_18015C348);
  if ( a1 )
  {
    Ptr = (unsigned __int64)a1[1].Ptr;
    v5 = (unsigned __int64)a1;
    if ( Ptr )
    {
      for ( i = *(_QWORD **)Ptr; i; i = (_QWORD *)*i )
        Ptr = (unsigned __int64)i;
    }
    else
    {
      for ( j = (unsigned __int64)a1[2].Ptr; ; j = *(_QWORD *)(Ptr + 16) )
      {
        Ptr = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Ptr || *(_QWORD *)Ptr == v5 )
          break;
        v5 = Ptr;
      }
    }
  }
  else
  {
    Ptr = qword_18015C340 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  while ( Ptr )
  {
    v3 = Ptr;
    if ( RtlTryAcquireSRWLockShared((PRTL_SRWLOCK)(Ptr + 72)) )
    {
      v2 = 1;
      break;
    }
    v9 = *(_QWORD **)(Ptr + 8);
    v10 = Ptr;
    if ( v9 )
    {
      do
      {
        Ptr = (unsigned __int64)v9;
        v9 = (_QWORD *)*v9;
      }
      while ( v9 );
    }
    else
    {
      while ( 1 )
      {
        Ptr = *(_QWORD *)(Ptr + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Ptr || *(_QWORD *)Ptr == v10 )
          break;
        v10 = Ptr;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015C348);
  if ( a1 )
    RtlReleaseSRWLockShared(a1 + 9);
  return v3 & -(__int64)(v2 != 0);
}
