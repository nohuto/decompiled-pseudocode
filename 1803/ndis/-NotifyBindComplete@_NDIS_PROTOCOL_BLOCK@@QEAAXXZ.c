/*
 * XREFs of ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00B7C60
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C001A8FC (ndisDereferenceProtocol.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00B860C (ndisDeliverNetPnPEventSynchronously.c)
 */

void __fastcall _NDIS_PROTOCOL_BLOCK::NotifyBindComplete(_NDIS_PROTOCOL_BLOCK *this)
{
  __int64 v3; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v5[22]; // [rsp+50h] [rbp-B0h] BYREF

  memset(v5, 0, sizeof(v5));
  LODWORD(v5[21]) = 0;
  v5[20] = 0LL;
  v5[2] = 0LL;
  LODWORD(v5[3]) = 0;
  v5[0] = 11272832LL;
  LODWORD(v5[1]) = 23;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v5[4] = &Event;
  LODWORD(v5[1]) = 6;
  KeWaitForSingleObject(&this->Mutex, Executive, 0, 0, 0LL);
  ++this->MutexOwnerCount;
  this->MutexOwnerThread = KeGetCurrentThread();
  this->MutexOwner = 987331;
  ndisDeliverNetPnPEventSynchronously(this, 0LL, v5);
  this->MutexOwner = 0;
  if ( this->MutexOwnerCount-- == 1 )
    this->MutexOwnerThread = 0LL;
  KeReleaseMutex(&this->Mutex, 0);
  ndisDereferenceProtocol(this, v3, 0xCu);
}
