/*
 * XREFs of sub_180005BC4 @ 0x180005BC4
 * Callers:
 *     EtwDeliverDataBlock @ 0x180005750 (EtwDeliverDataBlock.c)
 * Callees:
 *     sub_1800242B4 @ 0x1800242B4 (sub_1800242B4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x180074F10 (RtlTryAcquireSRWLockShared.c)
 */

_RTL_SRWLOCK *__fastcall sub_180005BC4(__int64 a1, __int16 a2)
{
  unsigned __int64 Root; // rbx
  int v3; // esi
  _RTL_SRWLOCK *i; // rdi
  int v5; // eax
  unsigned __int64 v6; // rax
  _RTL_SRWLOCK **Ptr; // rax
  _RTL_SRWLOCK *v8; // rcx
  _RTL_SRWLOCK *v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int16 v12; // [rsp+28h] [rbp-10h]

  v11 = a1;
  v12 = a2;
  RtlAcquireSRWLockExclusive(&stru_18015D380);
  Root = (unsigned __int64)Tree.Root;
  if ( ((__int64)Tree.Min & 1) != 0 && Tree.Root )
    Root = (unsigned __int64)&Tree ^ (unsigned __int64)Tree.Root;
  v3 = (__int64)Tree.Min & 1;
  i = 0LL;
  while ( Root )
  {
    v5 = sub_1800242B4(&v11, Root);
    if ( v5 >= 0 )
    {
      if ( v5 > 0 )
      {
        v6 = *(_QWORD *)(Root + 8);
        goto LABEL_10;
      }
      i = (_RTL_SRWLOCK *)Root;
    }
    v6 = *(_QWORD *)Root;
LABEL_10:
    if ( v3 && v6 )
      Root ^= v6;
    else
      Root = v6;
  }
  if ( i )
  {
    while ( !RtlTryAcquireSRWLockShared(i + 9) )
    {
      Ptr = (_RTL_SRWLOCK **)i[1].Ptr;
      v8 = i;
      if ( Ptr )
      {
        v9 = *Ptr;
        for ( i = (_RTL_SRWLOCK *)i[1].Ptr; v9; v9 = (_RTL_SRWLOCK *)v9->Ptr )
          i = v9;
      }
      else
      {
        while ( 1 )
        {
          i = (_RTL_SRWLOCK *)((unsigned __int64)i[2].Ptr & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || i->Ptr == v8 )
            break;
          v8 = i;
        }
      }
      if ( !i || (unsigned int)sub_1800242B4(&v11, i) )
        goto LABEL_26;
    }
  }
  else
  {
LABEL_26:
    i = 0LL;
  }
  RtlReleaseSRWLockExclusive(&stru_18015D380);
  return i;
}
