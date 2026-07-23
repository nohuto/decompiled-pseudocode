/*
 * XREFs of sub_180106250 @ 0x180106250
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x180105CA0 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     sub_1800102BC @ 0x1800102BC (sub_1800102BC.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlSplay @ 0x180065CB0 (RtlSplay.c)
 *     sub_180105E24 @ 0x180105E24 (sub_180105E24.c)
 */

__int64 __fastcall sub_180106250(PRTL_SPLAY_LINKS *a1, unsigned __int64 a2, void *a3)
{
  PRTL_SPLAY_LINKS v6; // rdi
  int v7; // esi
  PRTL_SPLAY_LINKS v8; // rbx
  _RTL_SPLAY_LINKS *Parent; // rax
  _RTL_SPLAY_LINKS *RightChild; // rax
  PRTL_SPLAY_LINKS *p_Parent; // rax
  PRTL_SPLAY_LINKS v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  RtlAcquireSRWLockExclusive(&stru_18015C7E8);
  v6 = Links;
  if ( Links )
  {
    while ( 1 )
    {
      v8 = v6 - 4;
      v13 = v6 - 4;
      Parent = v6[-4].Parent;
      if ( (_RTL_SPLAY_LINKS *)a2 == Parent )
        break;
      if ( a2 >= (unsigned __int64)Parent )
      {
        RightChild = v6->RightChild;
        if ( !RightChild )
        {
          v7 = sub_180105E24(&v13, a2, a3);
          v8 = v13;
          if ( !v13 )
            goto LABEL_14;
          p_Parent = &v13[4].Parent;
          v6->RightChild = v13 + 4;
          goto LABEL_13;
        }
      }
      else
      {
        RightChild = v6->LeftChild;
        if ( !RightChild )
        {
          v7 = sub_180105E24(&v13, a2, a3);
          v8 = v13;
          if ( !v13 )
            goto LABEL_14;
          p_Parent = &v13[4].Parent;
          v6->LeftChild = v13 + 4;
LABEL_13:
          *p_Parent = v6;
          goto LABEL_14;
        }
      }
      v6 = RightChild;
    }
    v7 = sub_1800102BC(a3, (__int64)&v8->LeftChild, (__int64)v8[3].LeftChild);
    if ( v7 >= 0 )
      ++LODWORD(v8[3].RightChild);
  }
  else
  {
    v7 = sub_180105E24(&v13, a2, a3);
    v8 = v13;
  }
LABEL_14:
  if ( v8 && Links != &v8[4] )
    Links = RtlSplay(v8 + 4);
  RtlReleaseSRWLockExclusive(&stru_18015C7E8);
  *a1 = v8;
  return (unsigned int)v7;
}
