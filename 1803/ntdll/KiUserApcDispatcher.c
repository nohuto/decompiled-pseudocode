/*
 * XREFs of KiUserApcDispatcher @ 0x18009E6D0
 * Callers:
 *     KiUserApcDispatcher @ 0x18009E6D0 (KiUserApcDispatcher.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwContinue @ 0x18009B320 (ZwContinue.c)
 *     sub_18009E680 @ 0x18009E680 (sub_18009E680.c)
 */

void __noreturn KiUserApcDispatcher()
{
  unsigned __int64 v0; // rcx
  NTSTATUS v1; // eax
  NTSTATUS v2; // esi
  unsigned __int64 v3; // rcx
  __int64 retaddr; // [rsp+0h] [rbp+0h] BYREF
  __int64 v5; // [rsp+8h] [rbp+8h]
  __int64 v6; // [rsp+10h] [rbp+10h]
  __int64 v7; // [rsp+18h] [rbp+18h]

  while ( 1 )
  {
    v0 = __ROL8__(-(v7 >> 2), 32);
    if ( (_DWORD)v0 )
    {
      sub_18009E680(retaddr, v5, v6, (__int64)&retaddr);
    }
    else
    {
      v3 = (unsigned int)retaddr | v0;
      if ( qword_18016F228 )
      {
        qword_18016F228(v3, v5, v6, &retaddr);
        v2 = -1073741811;
        goto LABEL_7;
      }
    }
    v1 = ZwContinue((PCONTEXT)&retaddr, 1u);
    if ( v1 )
    {
      if ( v1 == -1073740278 )
        __fastfail(0x30u);
      v2 = v1;
LABEL_7:
      RtlRaiseStatus(v2);
    }
  }
}
