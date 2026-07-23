/*
 * XREFs of sub_180105FE8 @ 0x180105FE8
 * Callers:
 *     NotificationFunction @ 0x1801060E0 (NotificationFunction.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlDelete @ 0x180065F60 (RtlDelete.c)
 *     sub_180086D90 @ 0x180086D90 (sub_180086D90.c)
 */

void __fastcall sub_180105FE8(__int64 a1)
{
  PRTL_SPLAY_LINKS v2; // rbx
  PRTL_SPLAY_LINKS v3; // rcx
  PRTL_SPLAY_LINKS v4; // rdi
  unsigned __int64 Parent; // rdx
  _RTL_SPLAY_LINKS *v6; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  RtlAcquireSRWLockExclusive(&stru_18015C7E8);
  v3 = Links;
  while ( v3 )
  {
    v4 = v3 - 4;
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
      v4[4].Parent = v2;
      v2 = v4;
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015C7E8);
  while ( v2 )
  {
    v6 = v2[4].Parent;
    sub_180086D90(v2[3].LeftChild);
    RtlFreeUnicodeString((PUNICODE_STRING)&v2[5].LeftChild);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    v2 = v6;
  }
}
