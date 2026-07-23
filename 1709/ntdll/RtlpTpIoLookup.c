/*
 * XREFs of RtlpTpIoLookup @ 0x1800900AC
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x18008FF60 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     TpBindFileToDirect @ 0x18000AB4C (TpBindFileToDirect.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlSplay @ 0x180069120 (RtlSplay.c)
 *     RtlpTpIoAlloc @ 0x1800901F4 (RtlpTpIoAlloc.c)
 */

__int64 __fastcall RtlpTpIoLookup(PRTL_SPLAY_LINKS *a1, _RTL_SPLAY_LINKS *a2, void *a3)
{
  PRTL_SPLAY_LINKS v6; // rdi
  PRTL_SPLAY_LINKS v7; // rbx
  _RTL_SPLAY_LINKS *Parent; // rax
  NTSTATUS v9; // esi
  _RTL_SPLAY_LINKS *RightChild; // rax
  PRTL_SPLAY_LINKS *p_Parent; // rax
  PRTL_SPLAY_LINKS v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  v6 = RtlpTpIoTree;
  if ( RtlpTpIoTree )
  {
    while ( 1 )
    {
      v7 = v6 - 4;
      v13 = v6 - 4;
      Parent = v6[-4].Parent;
      if ( a2 == Parent )
        break;
      if ( a2 >= Parent )
      {
        RightChild = v6->RightChild;
        if ( !RightChild )
        {
          v9 = RtlpTpIoAlloc(&v13, a2, a3);
          v7 = v13;
          if ( !v13 )
            goto LABEL_16;
          p_Parent = &v13[4].Parent;
          v6->RightChild = v13 + 4;
          goto LABEL_14;
        }
      }
      else
      {
        RightChild = v6->LeftChild;
        if ( !RightChild )
        {
          v9 = RtlpTpIoAlloc(&v13, a2, a3);
          v7 = v13;
          if ( !v13 )
            goto LABEL_16;
          p_Parent = &v13[4].Parent;
          v6->LeftChild = v13 + 4;
LABEL_14:
          *p_Parent = v6;
          goto LABEL_16;
        }
      }
      v6 = RightChild;
    }
    v9 = TpBindFileToDirect(a3, (__int64)&v7->LeftChild, (__int64)v7[3].LeftChild);
    if ( v9 >= 0 )
      ++LODWORD(v7[3].RightChild);
  }
  else
  {
    v9 = RtlpTpIoAlloc(&v13, a2, a3);
    v7 = v13;
  }
LABEL_16:
  if ( v7 && RtlpTpIoTree != &v7[4] )
    RtlpTpIoTree = RtlSplay(v7 + 4);
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  *a1 = v7;
  return (unsigned int)v9;
}
