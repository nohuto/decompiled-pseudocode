/*
 * XREFs of sub_18001B91C @ 0x18001B91C
 * Callers:
 *     EtwNotificationRegister @ 0x18001B3E0 (EtwNotificationRegister.c)
 * Callees:
 *     sub_18001B9D8 @ 0x18001B9D8 (sub_18001B9D8.c)
 *     RtlRbInsertNodeEx @ 0x18001E790 (RtlRbInsertNodeEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_18001B91C(PRTL_BALANCED_NODE Node)
{
  BOOLEAN v2; // bl
  PRTL_BALANCED_NODE v3; // rdi
  int v4; // esi
  _RTL_BALANCED_NODE *v5; // rax
  _RTL_BALANCED_NODE **v6; // [rsp+20h] [rbp-18h] BYREF
  __int16 v7; // [rsp+28h] [rbp-10h]

  v6 = &Node[1].Children[1];
  v7 = (__int16)Node[4].Children[0];
  RtlAcquireSRWLockExclusive(&stru_18015C348);
  v2 = 0;
  v3 = Parent;
  v4 = qword_18015C340 & 1;
  if ( Parent )
  {
    while ( 1 )
    {
      if ( (int)sub_18001B9D8(&v6, v3) >= 0 )
      {
        v5 = v3->Children[1];
        if ( v4 )
        {
          if ( !v5 )
          {
LABEL_8:
            v2 = 1;
            break;
          }
          v5 = (_RTL_BALANCED_NODE *)((unsigned __int64)v3 ^ (unsigned __int64)v5);
        }
        if ( !v5 )
          goto LABEL_8;
      }
      else
      {
        v5 = v3->Children[0];
        if ( v4 )
        {
          if ( !v5 )
            break;
          v5 = (_RTL_BALANCED_NODE *)((unsigned __int64)v3 ^ (unsigned __int64)v5);
        }
        if ( !v5 )
          break;
      }
      v3 = v5;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)&Parent, v3, v2, Node);
  RtlReleaseSRWLockExclusive(&stru_18015C348);
}
