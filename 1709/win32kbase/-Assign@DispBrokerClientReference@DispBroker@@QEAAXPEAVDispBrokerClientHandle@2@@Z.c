/*
 * XREFs of ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C009BB88
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C0075460 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ?Init@DispBrokerClient@DispBroker@@SAJXZ @ 0x1C009A480 (-Init@DispBrokerClient@DispBroker@@SAJXZ.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_4__lambda_5b13fcf0ac89a9371e6db5f2f62461c0___ @ 0x1C00DBC10 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_4__lambda_5b13fcf0ac89a9371e6db5f2f62461c0___.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_d57ae092f9be341f12fc6faf2773a1ff___ @ 0x1C00DBCB8 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_5__lambda_d57ae092f9be341f12fc6faf2773a1ff___.c)
 *     ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00DBECC (-EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z.c)
 *     ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00DC1B4 (-ReferencePort@DispBrokerClient@DispBroker@@QEAA-AVDispBrokerClientReference@2@XZ.c)
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
