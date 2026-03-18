/*
 * XREFs of ExpSetTimer2 @ 0x1400389A4
 * Callers:
 *     NtSetTimer2 @ 0x140038B1C (NtSetTimer2.c)
 *     NtCancelTimer2 @ 0x1400D0BD8 (NtCancelTimer2.c)
 *     NtSetIRTimer @ 0x1400D2C58 (NtSetIRTimer.c)
 * Callees:
 *     ExpSetTimerObject2 @ 0x140038A8C (ExpSetTimerObject2.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpSetTimer2(HANDLE Handle, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  NTSTATUS result; // eax
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  __int128 v6; // [rsp+48h] [rbp-20h]

  if ( a2 )
  {
    if ( KeGetCurrentThread()->PreviousMode )
    {
      v3 = a3;
      if ( a3 )
      {
        if ( a3 >= 0x7FFFFFFF0000LL )
          v3 = 0x7FFFFFFF0000LL;
        v6 = *(_OWORD *)v3;
      }
    }
  }
  result = ObReferenceObjectByHandle(Handle, 2u, ExpIRTimerObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
    return ExpSetTimerObject2(Object);
  return result;
}
