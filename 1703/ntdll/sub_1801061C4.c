/*
 * XREFs of sub_1801061C4 @ 0x1801061C4
 * Callers:
 *     NotificationFunction @ 0x1801060E0 (NotificationFunction.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_1801060F4 @ 0x1801060F4 (sub_1801060F4.c)
 */

void __fastcall sub_1801061C4(__int64 a1)
{
  PRTL_SPLAY_LINKS v2; // r8
  unsigned __int64 Parent; // rcx

  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015C7E8);
    v2 = Links;
    while ( v2 )
    {
      Parent = (unsigned __int64)v2[-4].Parent;
      if ( Parent < *(_QWORD *)(a1 + 24) )
        goto LABEL_8;
      if ( Parent < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
      {
        sub_1801060F4(a1, (__int64)&v2[-4]);
        break;
      }
      if ( Parent >= *(_QWORD *)(a1 + 24) )
        v2 = v2->LeftChild;
      else
LABEL_8:
        v2 = v2->RightChild;
    }
    RtlReleaseSRWLockExclusive(&stru_18015C7E8);
  }
}
