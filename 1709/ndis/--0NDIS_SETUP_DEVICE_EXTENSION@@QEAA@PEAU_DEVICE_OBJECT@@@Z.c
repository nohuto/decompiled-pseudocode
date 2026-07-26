/*
 * XREFs of ??0NDIS_SETUP_DEVICE_EXTENSION@@QEAA@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00AC8E8
 * Callers:
 *     ?ndisSetupDeviceAdd@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00AC5C4 (-ndisSetupDeviceAdd@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 */

NDIS_SETUP_DEVICE_EXTENSION *__fastcall NDIS_SETUP_DEVICE_EXTENSION::NDIS_SETUP_DEVICE_EXTENSION(
        struct NDIS_SETUP_DEVICE_EXTENSION *DeferredContext,
        struct _DEVICE_OBJECT *a2)
{
  KLockHolder v4; // [rsp+30h] [rbp-28h] BYREF

  DeferredContext->Next = 0LL;
  *(_DWORD *)&DeferredContext->IsDeviceInterfaceActive = 0;
  DeferredContext->Pdo = 0LL;
  DeferredContext->NextDeviceObject = 0LL;
  DeferredContext->LowPowerRequestSucceeded = 0;
  *(_QWORD *)&DeferredContext->SymbolicName.Length = 0LL;
  DeferredContext->SymbolicName.Buffer = 0LL;
  DeferredContext->Header = (_NDIS_OBJECT_HEADER)14680343;
  DeferredContext->Fdo = a2;
  KeInitializeTimer(&DeferredContext->IdleTimer);
  KeInitializeDpc(&DeferredContext->IdleDpc, (PKDEFERRED_ROUTINE)ndisSetupDeviceIdle, DeferredContext);
  IoInitializeRemoveLockEx(&DeferredContext->RemoveLock, 0x4453444Eu, 1u, 0, 0x20u);
  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)&ndisSetupDeviceListLock;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  DeferredContext->Next = ndisSetupDeviceList;
  ndisSetupDeviceList = DeferredContext;
  KLockHolder::~KLockHolder(&v4);
  return DeferredContext;
}
