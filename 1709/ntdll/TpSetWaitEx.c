/*
 * XREFs of TpSetWaitEx @ 0x18000F630
 * Callers:
 *     RtlpTpWaitCheckReset @ 0x18000B308 (RtlpTpWaitCheckReset.c)
 *     RtlpWnfNotificationThread @ 0x18000B950 (RtlpWnfNotificationThread.c)
 *     TpSetWait @ 0x18000C9A0 (TpSetWait.c)
 *     RtlRegisterWait @ 0x180011CC0 (RtlRegisterWait.c)
 *     RtlDeregisterWaitEx @ 0x180012A70 (RtlDeregisterWaitEx.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180013070 (EtwpRegisterTpNotificationOnce.c)
 *     EtwpNotificationThread @ 0x180063910 (EtwpNotificationThread.c)
 *     RtlpWnfRegisterTpNotification @ 0x180081420 (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     TppWaitpValidateWait @ 0x18000F748 (TppWaitpValidateWait.c)
 *     TppCancelWait @ 0x18000FF54 (TppCancelWait.c)
 *     TppSetupNextWait @ 0x180010608 (TppSetupNextWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpSetWaitEx(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout, PVOID Reserved)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  char v11; // al
  signed int v12; // ebx
  _BOOL8 v13; // rbp
  char v15; // al
  signed int v16; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)TppWaitpValidateWait(Wait, 0LL, Handle != 0LL) )
    return 0;
  if ( Reserved )
  {
    TppRaiseInvalidParameter(v9, v8);
    return 0;
  }
  v10 = *((_QWORD *)Wait + 18);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  v11 = TppCancelWait(Wait, v10 + 112, 0LL, &v16);
  v12 = v16;
  v13 = v16 != 0;
  if ( Handle && !*((_BYTE *)Wait + 355) )
  {
    if ( !v11 )
    {
      *((_BYTE *)Wait + 464) |= 1u;
      v15 = *((_BYTE *)Wait + 464);
      *((_QWORD *)Wait + 47) = Handle;
      if ( Timeout )
      {
        *((_BYTE *)Wait + 464) = v15 | 2;
        *((LARGE_INTEGER *)Wait + 48) = *Timeout;
      }
      goto LABEL_8;
    }
    if ( !*((_QWORD *)Wait + 45) )
    {
      v12 += TppSetupNextWait(Wait, Handle, Timeout);
      v16 = v12;
LABEL_8:
      if ( v12 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v12);
        v12 = 0;
        v16 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  if ( v12 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v12) == -v12 )
    (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
  return v13;
}
