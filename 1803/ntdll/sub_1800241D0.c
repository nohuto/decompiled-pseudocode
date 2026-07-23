/*
 * XREFs of sub_1800241D0 @ 0x1800241D0
 * Callers:
 *     EtwNotificationRegister @ 0x1800296B0 (EtwNotificationRegister.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180021C90 (RtlRbInsertNodeEx.c)
 *     sub_1800242B4 @ 0x1800242B4 (sub_1800242B4.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_1800241D0(PRTL_BALANCED_NODE Node)
{
  unsigned __int64 Root; // rdi
  BOOLEAN v3; // bl
  int v4; // esi
  unsigned __int64 v5; // rax
  _RTL_BALANCED_NODE **v6; // [rsp+20h] [rbp-18h] BYREF
  __int16 v7; // [rsp+28h] [rbp-10h]

  v6 = &Node[1].Children[1];
  v7 = (__int16)Node[4].Children[0];
  RtlAcquireSRWLockExclusive(&stru_18015D380);
  Root = (unsigned __int64)Tree.Root;
  v3 = 0;
  if ( ((__int64)Tree.Min & 1) != 0 )
  {
    if ( Tree.Root )
      Root = (unsigned __int64)&Tree ^ (unsigned __int64)Tree.Root;
    else
      Root = 0LL;
  }
  v4 = (__int64)Tree.Min & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (int)sub_1800242B4(&v6, Root) < 0 )
      {
        v5 = *(_QWORD *)Root;
        if ( v4 )
        {
          if ( !v5 )
            break;
          v5 ^= Root;
        }
        if ( !v5 )
          break;
      }
      else
      {
        v5 = *(_QWORD *)(Root + 8);
        if ( v4 )
        {
          if ( !v5 )
            goto LABEL_11;
          v5 ^= Root;
        }
        if ( !v5 )
        {
LABEL_11:
          v3 = 1;
          break;
        }
      }
      Root = v5;
    }
  }
  RtlRbInsertNodeEx(&Tree, (PRTL_BALANCED_NODE)Root, v3, Node);
  RtlReleaseSRWLockExclusive(&stru_18015D380);
}
