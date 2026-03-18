/*
 * XREFs of NtUserGetInteractiveControlDeviceInfo @ 0x1C01E5B60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1C021B5D0 (-GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveControlDeviceInfo(unsigned int a1, _OWORD *Address)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v10; // rax
  _BYTE v12[40]; // [rsp+48h] [rbp-30h] BYREF

  memset(v12, 0, sizeof(v12));
  EnterSharedCrit(0LL, 1LL);
  v6 = 0;
  if ( Address )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
    ProbeForWrite(Address, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v10 = InteractiveControlManager::Instance();
    if ( (int)InteractiveControlManager::GetDeviceInfo(v10, a1, (struct tagINTERACTIVECTRL_DEVICE_INFO *)v12) >= 0 )
    {
      v8 = MmUserProbeAddress;
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        Address = (_OWORD *)MmUserProbeAddress;
      *Address = *(_OWORD *)v12;
      Address[1] = *(_OWORD *)&v12[16];
      *((_QWORD *)Address + 4) = *(_QWORD *)&v12[32];
      v6 = 1;
    }
  }
  else
  {
    UserSetLastError(87LL, v4);
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v6;
}
