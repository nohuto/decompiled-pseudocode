/*
 * XREFs of PipInitializeCoreDriversByGroup @ 0x140845614
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x1408453D8 (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 *     PnpUnlockDeviceActionQueue @ 0x14012916C (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140129204 (PnpLockDeviceActionQueue.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopGetDriverNameFromKeyNode @ 0x14051A450 (IopGetDriverNameFromKeyNode.c)
 *     IopOpenRegistryKeyEx @ 0x1405C9264 (IopOpenRegistryKeyEx.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1405C92A4 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1405C92D0 (PnpWaitForEmptyDeviceActionQueue.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405DACFC (PipApplyFunctionToServiceInstances.c)
 *     HdlspKernelAddLogEntry @ 0x1407CC800 (HdlspKernelAddLogEntry.c)
 *     PnpInitializeBootStartDriver @ 0x1408466E8 (PnpInitializeBootStartDriver.c)
 */

void __fastcall PipInitializeCoreDriversByGroup(int a1, __int64 a2)
{
  int v2; // r15d
  __int64 v4; // rax
  UNICODE_STRING **v5; // rdi
  UNICODE_STRING *v6; // rbx
  UNICODE_STRING *v7; // rbp
  NTSTATUS DriverNameFromKeyNode; // esi
  __int64 v9; // r14
  void *v10; // rcx
  ULONG v11; // r8d
  char v12; // r9
  HANDLE KeyHandle; // [rsp+20h] [rbp-68h]
  _DWORD *P; // [rsp+30h] [rbp-58h]
  int v15; // [rsp+38h] [rbp-50h]
  UNICODE_STRING Destination; // [rsp+50h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+20h] BYREF

  v2 = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = 96LL;
      v2 = 1;
    }
    else
    {
      if ( a1 != 2 )
        return;
      v4 = 112LL;
    }
  }
  else
  {
    v4 = 80LL;
  }
  v5 = (UNICODE_STRING **)(a2 + v4);
  if ( a2 + v4 )
  {
    v6 = *v5;
    PnpCoreDriverGroupLoadPhase = a1;
    while ( v6 != (UNICODE_STRING *)v5 )
    {
      v7 = v6;
      v6 = *(UNICODE_STRING **)&v6->Length;
      if ( SLODWORD(v7[3].Buffer) >= 0 )
      {
        Destination.Buffer = 0LL;
        Handle = 0LL;
        DriverNameFromKeyNode = IopOpenRegistryKeyEx(&Handle, 0LL, v7 + 2, 0x20019u);
        if ( DriverNameFromKeyNode >= 0 )
        {
          DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &Destination);
          if ( DriverNameFromKeyNode >= 0 )
          {
            DriverNameFromKeyNode = PnpInitializeBootStartDriver(
                                      (unsigned int)&Destination,
                                      (int)v7 + 32,
                                      *(_QWORD *)(*(_QWORD *)&v7[3].Length + 56LL),
                                      *(_QWORD *)&v7[3].Length,
                                      a2 + 16,
                                      0,
                                      v2,
                                      v15,
                                      (__int64)&v18);
            if ( DriverNameFromKeyNode >= 0 )
            {
              v9 = v18;
              if ( v18 )
              {
                PnpLockDeviceActionQueue();
                PipApplyFunctionToServiceInstances(
                  v10,
                  (UNICODE_STRING *)(*(_QWORD *)(v9 + 48) + 24LL),
                  v11,
                  v12,
                  KeyHandle,
                  v9,
                  P);
                PnpUnlockDeviceActionQueue();
                PnpWaitForEmptyDeviceActionQueue();
                PnpRequestDeviceAction(0LL, 7, 0, 0LL, 0LL, 0LL, 0LL);
                if ( PnpWaitForEmptyDeviceEventQueue() < 0 && HeadlessGlobals && HeadlessGlobals[1] )
                  HdlspKernelAddLogEntry(0x12u, 0LL);
              }
            }
          }
        }
        if ( Handle )
          ZwClose(Handle);
        if ( Destination.Buffer )
          ExFreePoolWithTag(Destination.Buffer, 0);
        if ( DriverNameFromKeyNode < 0 )
          *(_DWORD *)(*(_QWORD *)&v7[3].Length + 104LL) |= 0x20000u;
      }
    }
  }
}
