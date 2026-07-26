/*
 * XREFs of ??1NDIS_SETUP_DEVICE_EXTENSION@@QEAA@XZ @ 0x1C00F04D0
 * Callers:
 *     ?ndisSetupDeviceAdd@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00F057C (-ndisSetupDeviceAdd@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?ndisSetupDeviceRemove@@YAJPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C00F0764 (-ndisSetupDeviceRemove@@YAJPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_SETUP_DEVICE_EXTENSION::~NDIS_SETUP_DEVICE_EXTENSION(NDIS_SETUP_DEVICE_EXTENSION *this)
{
  struct NDIS_SETUP_DEVICE_EXTENSION **p_Next; // rcx
  NDIS_SETUP_DEVICE_EXTENSION *v3; // rax
  _DEVICE_OBJECT *NextDeviceObject; // rcx
  _DEVICE_OBJECT *Fdo; // rcx
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  v6.m_Lock = (KPushLockBase *)&ndisSetupDeviceListLock;
  v6.m_State = Unlocked;
  v6.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v6);
  p_Next = &ndisSetupDeviceList;
  if ( ndisSetupDeviceList )
  {
    while ( 1 )
    {
      v3 = *p_Next;
      if ( *p_Next == this )
        break;
      p_Next = &v3->Next;
      if ( !v3->Next )
        goto LABEL_6;
    }
    *p_Next = this->Next;
    this->Next = 0LL;
  }
LABEL_6:
  KLockHolder::~KLockHolder(&v6);
  if ( this->SymbolicName.Buffer )
  {
    RtlFreeUnicodeString(&this->SymbolicName);
    this->SymbolicName.Buffer = 0LL;
  }
  NextDeviceObject = this->NextDeviceObject;
  if ( NextDeviceObject )
  {
    IoDetachDevice(NextDeviceObject);
    this->NextDeviceObject = 0LL;
  }
  Fdo = this->Fdo;
  this->Header.Size = 0;
  IoDeleteDevice(Fdo);
}
