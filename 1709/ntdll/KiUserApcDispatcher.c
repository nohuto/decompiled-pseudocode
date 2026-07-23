/*
 * XREFs of KiUserApcDispatcher @ 0x1800A3C90
 * Callers:
 *     KiUserApcDispatcher @ 0x1800A3C90 (KiUserApcDispatcher.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     ZwContinue @ 0x1800A0920 (ZwContinue.c)
 *     KiUserCallForwarder @ 0x1800A3C40 (KiUserCallForwarder.c)
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
      KiUserCallForwarder(retaddr, v5, v6, (__int64)&retaddr);
    }
    else
    {
      v3 = (unsigned int)retaddr | v0;
      if ( Wow64ApcRoutine )
      {
        Wow64ApcRoutine(v3, v5, v6, &retaddr);
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
