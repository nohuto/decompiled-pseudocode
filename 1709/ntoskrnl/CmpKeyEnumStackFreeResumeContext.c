/*
 * XREFs of CmpKeyEnumStackFreeResumeContext @ 0x14069B148
 * Callers:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140472EE4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDeleteKeyObject @ 0x1404A97C0 (CmpDeleteKeyObject.c)
 *     CmpEnumerateLayeredKey @ 0x14068E764 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140478AA0 (CmpDelayDerefKeyControlBlock.c)
 */

void __fastcall CmpKeyEnumStackFreeResumeContext(PPRIVILEGE_SET Privileges, char a2)
{
  ULONG *p_Attributes; // rdi
  __int64 v5; // rsi
  ULONG_PTR v6; // rcx

  if ( SLOWORD(Privileges->PrivilegeCount) >= 0 )
  {
    p_Attributes = &Privileges->Privilege[0].Attributes;
    v5 = (unsigned __int16)(LOWORD(Privileges->PrivilegeCount) + 1);
    do
    {
      v6 = *(_QWORD *)p_Attributes;
      if ( *(_QWORD *)p_Attributes )
      {
        if ( a2 )
          CmpDelayDerefKeyControlBlock(v6);
        else
          CmpDereferenceKeyControlBlock(v6);
      }
      p_Attributes += 6;
      --v5;
    }
    while ( v5 );
  }
  MiDeleteSubsection(Privileges);
}
