/*
 * XREFs of EtwpInsertRegistration @ 0x180036BF0
 * Callers:
 *     EtwNotificationRegister @ 0x1800366A0 (EtwNotificationRegister.c)
 * Callees:
 *     EtwpRegistrationCompare @ 0x180036CAC (EtwpRegistrationCompare.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18003A130 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall EtwpInsertRegistration(PRTL_BALANCED_NODE Node)
{
  BOOLEAN v2; // bl
  PRTL_BALANCED_NODE v3; // rdi
  int v4; // esi
  _RTL_BALANCED_NODE *v5; // rax
  _RTL_BALANCED_NODE **v6; // [rsp+20h] [rbp-18h] BYREF
  __int16 v7; // [rsp+28h] [rbp-10h]

  v6 = &Node[1].Children[1];
  v7 = (__int16)Node[4].Children[0];
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v2 = 0;
  v3 = EtwpRegistrationTable;
  v4 = qword_180160410 & 1;
  if ( EtwpRegistrationTable )
  {
    while ( 1 )
    {
      if ( (int)EtwpRegistrationCompare(&v6, v3) >= 0 )
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
  RtlRbInsertNodeEx((PRTL_RB_TREE)&EtwpRegistrationTable, v3, v2, Node);
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
