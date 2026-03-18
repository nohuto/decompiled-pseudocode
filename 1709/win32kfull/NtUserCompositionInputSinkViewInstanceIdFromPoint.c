/*
 * XREFs of NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x1C0009120
 * Callers:
 *     <none>
 * Callees:
 *     RequestInputSinkInfoFromPoint @ 0x1C0009200 (RequestInputSinkInfoFromPoint.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall NtUserCompositionInputSinkViewInstanceIdFromPoint(_QWORD *a1, _DWORD *a2)
{
  __int64 CurrentProcess; // rax
  ULONG64 v5; // rdx
  ULONG64 v6; // rcx
  int v7; // ebx
  _DWORD v9[30]; // [rsp+50h] [rbp-78h] BYREF

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDitCompositionInputSinkQuery);
  EnterCrit(0LL, 1LL);
  memset(v9, 0, 0x70uLL);
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v7 = 0;
    UserSetLastError(5LL);
  }
  else
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)&v9[1] = *a1;
    v9[0] = 8;
    v9[3] = 0;
    v7 = RequestInputSinkInfoFromPoint(v9);
    if ( v7 )
    {
      v6 = MmUserProbeAddress;
      v5 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v9[26];
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  ExReleaseResourceAndLeaveCriticalRegion(gpresDitCompositionInputSinkQuery);
  return v7;
}
