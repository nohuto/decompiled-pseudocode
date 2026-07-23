/*
 * XREFs of TpSetWaitEx @ 0x180017300
 * Callers:
 *     sub_180010150 @ 0x180010150 (sub_180010150.c)
 *     RtlDeregisterWaitEx @ 0x180012890 (RtlDeregisterWaitEx.c)
 *     sub_180012AB0 @ 0x180012AB0 (sub_180012AB0.c)
 *     RtlRegisterWait @ 0x180012DA0 (RtlRegisterWait.c)
 *     sub_18001327C @ 0x18001327C (sub_18001327C.c)
 *     TpSetWait @ 0x1800144B0 (TpSetWait.c)
 *     sub_180052270 @ 0x180052270 (sub_180052270.c)
 *     sub_180082FA0 @ 0x180082FA0 (sub_180082FA0.c)
 * Callees:
 *     sub_180017414 @ 0x180017414 (sub_180017414.c)
 *     sub_180017610 @ 0x180017610 (sub_180017610.c)
 *     sub_180017914 @ 0x180017914 (sub_180017914.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
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

  if ( !(unsigned int)sub_180017610(Wait, 0LL, Handle != 0LL) )
    return 0;
  if ( Reserved )
  {
    sub_1801058B8(v9, v8);
    return 0;
  }
  v10 = *((_QWORD *)Wait + 18);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
  v11 = sub_180017414(Wait, v10 + 112, 0LL, &v16);
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
      v12 += sub_180017914(Wait, Handle, Timeout);
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
