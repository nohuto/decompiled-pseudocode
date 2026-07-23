/*
 * XREFs of sub_180108FC8 @ 0x180108FC8
 * Callers:
 *     NotificationFunction @ 0x1801090D0 (NotificationFunction.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800484B8 @ 0x1800484B8 (sub_1800484B8.c)
 *     RtlDelete @ 0x180066C00 (RtlDelete.c)
 */

void __fastcall sub_180108FC8(__int64 a1)
{
  PRTL_SPLAY_LINKS v2; // rbx
  PRTL_SPLAY_LINKS v3; // rcx
  _QWORD *p_Parent; // r14
  PRTL_SPLAY_LINKS v5; // rdi
  unsigned __int64 Parent; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _RTL_SPLAY_LINKS *v10; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  RtlAcquireSRWLockExclusive(&stru_180160910);
  v3 = Links;
  while ( 1 )
  {
    p_Parent = &v3->Parent;
    if ( !v3 )
      break;
    v5 = v3 - 4;
    Parent = (unsigned __int64)v3[-4].Parent;
    if ( Parent < *(_QWORD *)(a1 + 24) )
      goto LABEL_7;
    if ( Parent >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      if ( Parent >= *(_QWORD *)(a1 + 24) )
        v3 = v3->LeftChild;
      else
LABEL_7:
        v3 = v3->RightChild;
    }
    else
    {
      v3 = RtlDelete(v3);
      Links = v3;
      *p_Parent = v2;
      v2 = v5;
    }
  }
  RtlReleaseSRWLockExclusive(&stru_180160910);
  while ( v2 )
  {
    v10 = v2[4].Parent;
    sub_1800484B8(v2[3].LeftChild, v7, v8, v9);
    RtlFreeUnicodeString((PUNICODE_STRING)&v2[5].LeftChild);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    v2 = v10;
  }
}
