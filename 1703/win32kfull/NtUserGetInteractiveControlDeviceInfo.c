/*
 * XREFs of NtUserGetInteractiveControlDeviceInfo @ 0x1C01D92E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0108804 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1C021A378 (-GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveControlDeviceInfo(unsigned int a1, _OWORD *Address)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v14; // rax
  _BYTE v16[40]; // [rsp+48h] [rbp-30h] BYREF

  memset(v16, 0, sizeof(v16));
  EnterSharedCrit(0LL, 1LL);
  v8 = 0;
  if ( Address )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, v4, v6, v7);
    ProbeForWrite(Address, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v14 = InteractiveControlManager::Instance();
    if ( (int)InteractiveControlManager::GetDeviceInfo(v14, a1, (struct tagINTERACTIVECTRL_DEVICE_INFO *)v16) >= 0 )
    {
      if ( (unsigned __int64)Address >= W32UserProbeAddress )
        Address = (_OWORD *)W32UserProbeAddress;
      *Address = *(_OWORD *)v16;
      Address[1] = *(_OWORD *)&v16[16];
      *((_QWORD *)Address + 4) = *(_QWORD *)&v16[32];
      v8 = 1;
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v8;
}
