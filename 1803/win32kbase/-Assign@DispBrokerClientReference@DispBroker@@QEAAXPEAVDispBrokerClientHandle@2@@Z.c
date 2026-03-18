/*
 * XREFs of ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C00A0378
 * Callers:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_11c73b79c6cf466e07ba164f9ce0ac9e___ @ 0x1C00A0100 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_5__lambda_11c73b79c6cf466e07ba164f9ce0ac9e___.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_8b0911a1175fc1706a50b761e5d54d4a___ @ 0x1C00A01A8 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_6__lambda_8b0911a1175fc1706a50b761e5d54d4a___.c)
 *     ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00A03FC (-EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z.c)
 *     ?Init@DispBrokerClient@DispBroker@@SAJXZ @ 0x1C00A0618 (-Init@DispBrokerClient@DispBroker@@SAJXZ.c)
 *     ?ReferencePort@DispBrokerClient@DispBroker@@QEAA?AVDispBrokerClientReference@2@XZ @ 0x1C00A0778 (-ReferencePort@DispBrokerClient@DispBroker@@QEAA-AVDispBrokerClientReference@2@XZ.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00A96EC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     ?Release@DispBrokerClientHandle@DispBroker@@QEAAXXZ @ 0x1C00A0808 (-Release@DispBrokerClientHandle@DispBroker@@QEAAXXZ.c)
 */

void __fastcall DispBroker::DispBrokerClientReference::Assign(
        void **this,
        struct DispBroker::DispBrokerClientHandle *a2)
{
  struct DispBroker::DispBrokerClientHandle *v4; // rcx

  v4 = (struct DispBroker::DispBrokerClientHandle *)*this;
  if ( v4 != a2 )
  {
    if ( v4 )
    {
      DispBroker::DispBrokerClientHandle::Release(v4);
      *this = 0LL;
    }
    if ( a2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a2);
      *this = a2;
    }
  }
}
