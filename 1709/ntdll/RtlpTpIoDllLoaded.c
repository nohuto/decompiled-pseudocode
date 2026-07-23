/*
 * XREFs of RtlpTpIoDllLoaded @ 0x18008FDD4
 * Callers:
 *     RtlpTpIoDllNotification @ 0x18008FDC0 (RtlpTpIoDllNotification.c)
 * Callees:
 *     TpDereferenceGlobalPool @ 0x18001359C (TpDereferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeAnsiString @ 0x18004F9F0 (RtlFreeAnsiString.c)
 *     RtlDelete @ 0x1800693C0 (RtlDelete.c)
 */

void __fastcall RtlpTpIoDllLoaded(__int64 a1)
{
  PRTL_SPLAY_LINKS v2; // rbx
  PRTL_SPLAY_LINKS v3; // rcx
  PRTL_SPLAY_LINKS v4; // rdi
  unsigned __int64 Parent; // rdx
  __int64 v6; // rdx
  _RTL_SPLAY_LINKS *v7; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  v3 = RtlpTpIoTree;
  while ( v3 )
  {
    v4 = v3 - 4;
    Parent = (unsigned __int64)v3[-4].Parent;
    if ( Parent < *(_QWORD *)(a1 + 24) )
      goto LABEL_7;
    if ( Parent < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      v3 = RtlDelete(v3);
      RtlpTpIoTree = v3;
      v4[4].Parent = v2;
      v2 = v4;
    }
    else if ( Parent < *(_QWORD *)(a1 + 24) )
    {
LABEL_7:
      v3 = v3->RightChild;
    }
    else
    {
      v3 = v3->LeftChild;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  while ( v2 )
  {
    v7 = v2[4].Parent;
    TpDereferenceGlobalPool(v2[3].LeftChild, v6);
    RtlFreeAnsiString((PUNICODE_STRING)&v2[5].LeftChild);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    v2 = v7;
  }
}
