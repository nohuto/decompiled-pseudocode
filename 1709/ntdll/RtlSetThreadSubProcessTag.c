/*
 * XREFs of RtlSetThreadSubProcessTag @ 0x18000F400
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000C060 (RtlpWnfWalkUserSubscriptionList.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18000CEA0 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppAlpcpExecuteCallback @ 0x18000F0A0 (TppAlpcpExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x180010840 (RtlpTpWorkCallback.c)
 *     RtlpTpIoCallback @ 0x18010B2C0 (RtlpTpIoCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

void *__fastcall RtlSetThreadSubProcessTag(void *a1)
{
  struct _TEB *v1; // rax
  __int64 v3; // rbx
  void *SubProcessTag; // rdi
  _DWORD *SharedData; // rcx
  __int64 v6; // rcx
  char v8[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+26h] [rbp-32h]
  int v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+44h] [rbp-14h]

  v1 = NtCurrentTeb();
  v3 = 2147353488LL;
  SubProcessTag = v1->SubProcessTag;
  v1->SubProcessTag = a1;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v6 = (__int64)NtCurrentPeb()->SharedData + 566;
  else
    v6 = 2147353488LL;
  if ( *(_BYTE *)v6 && a1 != SubProcessTag )
  {
    v10 = (int)SubProcessTag;
    v9 = 1349;
    v11 = (int)a1;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v6, a1) )
      v3 = (__int64)NtCurrentPeb()->SharedData + 566;
    NtTraceEvent(*(unsigned __int8 *)v3, 1026LL, 8LL, v8);
  }
  return SubProcessTag;
}
