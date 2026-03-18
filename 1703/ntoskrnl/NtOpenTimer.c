/*
 * XREFs of NtOpenTimer @ 0x140718768
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1404CD2A0 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall NtOpenTimer(PHANDLE TimerHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  char PreviousMode; // di
  __int64 v6; // r8
  NTSTATUS v7; // edx
  void *v9; // [rsp+40h] [rbp-18h] BYREF

  v3 = (int)ObjectAttributes;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TimerHandle < 0x7FFFFFFF0000LL )
      v6 = (__int64)TimerHandle;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  v7 = ObOpenObjectByName(v3, (int)ExTimerObjectType, PreviousMode, 0, DesiredAccess, 0LL, (__int64)&v9);
  if ( v7 >= 0 )
    *TimerHandle = v9;
  return v7;
}
