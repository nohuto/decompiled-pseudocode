/*
 * XREFs of ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C009252C
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C0067500 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ?Init@DispBrokerClient@DispBroker@@SAJXZ @ 0x1C0091BC4 (-Init@DispBrokerClient@DispBroker@@SAJXZ.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_99b5529a19237f48c5256b69adb44b46___ @ 0x1C00D5810 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_5__lambda_99b5529a19237f48c5256b69adb44b46___.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_66765588ff190360eee83c009bc300f1___ @ 0x1C00D58E4 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_6__lambda_66765588ff190360eee83c009bc300f1___.c)
 *     ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00D59F4 (-EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z.c)
 *     ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00D5A94 (-ReferencePort@DispBrokerClient@DispBroker@@QEAA-AVDispBrokerClientReference@2@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DispBroker::DispBrokerClientReference::Assign(HANDLE **this, HANDLE *a2)
{
  HANDLE *v2; // rbx

  v2 = *this;
  if ( *this != a2 )
  {
    if ( v2 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
      {
        ZwAlpcDisconnectPort(v2[1], 0LL);
        ObCloseHandle(v2[1], 0);
        ExFreePoolWithTag(v2, 0x44535042u);
      }
      *this = 0LL;
    }
    if ( a2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a2);
      *this = a2;
    }
  }
}
