/*
 * XREFs of TpSetWaitEx @ 0x180025710
 * Callers:
 *     sub_180005610 @ 0x180005610 (sub_180005610.c)
 *     TpSetWait @ 0x1800247C0 (TpSetWait.c)
 *     sub_180049F90 @ 0x180049F90 (sub_180049F90.c)
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 *     InitFn @ 0x1800571C0 (InitFn.c)
 *     RtlDeregisterWaitEx @ 0x180058270 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x180058640 (RtlRegisterWait.c)
 *     sub_180077048 @ 0x180077048 (sub_180077048.c)
 * Callees:
 *     sub_180025954 @ 0x180025954 (sub_180025954.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180028788 @ 0x180028788 (sub_180028788.c)
 *     sub_180076198 @ 0x180076198 (sub_180076198.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

NTSTATUS __cdecl TpSetWaitEx(PTP_WAIT Wait, HANDLE Handle, PLARGE_INTEGER Timeout, PVOID Reserved)
{
  __int64 v8; // rbx
  char v9; // al
  signed int v10; // ebx
  _BOOL8 v11; // rbp
  char v13; // al
  signed int v14; // [rsp+48h] [rbp+10h] BYREF

  if ( !(unsigned int)sub_180025954(Wait, 0LL, Handle != 0LL) )
    return 0;
  if ( Reserved )
  {
    sub_1801086C8();
    return 0;
  }
  v8 = *((_QWORD *)Wait + 18);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  v9 = sub_180028788(Wait, v8 + 112, 0LL, &v14);
  v10 = v14;
  v11 = v14 != 0;
  if ( Handle && !*((_BYTE *)Wait + 355) )
  {
    if ( !v9 )
    {
      v13 = *((_BYTE *)Wait + 464) | 1;
      *((_QWORD *)Wait + 47) = Handle;
      *((_BYTE *)Wait + 464) = v13;
      if ( Timeout )
      {
        *((_BYTE *)Wait + 464) = v13 | 2;
        *((LARGE_INTEGER *)Wait + 48) = *Timeout;
      }
      goto LABEL_10;
    }
    if ( !*((_QWORD *)Wait + 45) )
    {
      v10 += sub_180076198(Wait, Handle, Timeout);
      v14 = v10;
LABEL_10:
      if ( v10 > 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v10);
        v10 = 0;
        v14 = 0;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  if ( v10 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v10) == -v10 )
    (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
  return v11;
}
