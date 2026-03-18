/*
 * XREFs of PipInitializeCoreDriversByGroup @ 0x1408B5658
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x1408B556C (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x1400C8910 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1400C89A8 (PnpLockDeviceActionQueue.c)
 *     PnpRequestDeviceAction @ 0x140145AE4 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopGetDriverNameFromKeyNode @ 0x1405F76D4 (IopGetDriverNameFromKeyNode.c)
 *     IopOpenRegistryKeyEx @ 0x1406343E4 (IopOpenRegistryKeyEx.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x140634424 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x140634450 (PnpWaitForEmptyDeviceActionQueue.c)
 *     PipApplyFunctionToServiceInstances @ 0x140646158 (PipApplyFunctionToServiceInstances.c)
 *     HdlspKernelAddLogEntry @ 0x1408397F8 (HdlspKernelAddLogEntry.c)
 *     PnpInitializeBootStartDriver @ 0x1408B65A4 (PnpInitializeBootStartDriver.c)
 */

void __fastcall PipInitializeCoreDriversByGroup(int a1, __int64 a2)
{
  int v2; // r15d
  __int64 v4; // rax
  UNICODE_STRING **v5; // rdi
  UNICODE_STRING *v6; // rbx
  UNICODE_STRING *v7; // rbp
  int DriverNameFromKeyNode; // esi
  __int64 v9; // r14
  void *v10; // rcx
  ULONG v11; // r8d
  char v12; // r9
  HANDLE KeyHandle; // [rsp+20h] [rbp-68h]
  _DWORD *P; // [rsp+30h] [rbp-58h]
  UNICODE_STRING Destination; // [rsp+50h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+20h]

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
                                      v2);
            if ( DriverNameFromKeyNode >= 0 )
            {
              v9 = v17;
              if ( v17 )
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
