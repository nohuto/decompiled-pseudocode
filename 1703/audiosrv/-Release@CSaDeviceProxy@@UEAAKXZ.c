/*
 * XREFs of ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x180009770
 * Callers:
 *     ?Release@CSaDeviceProxy@@W7EAAKXZ @ 0x180058610 (-Release@CSaDeviceProxy@@W7EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBA@EAAKXZ @ 0x180058620 (-Release@CSaDeviceProxy@@WBA@EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBI@EAAKXZ @ 0x180058630 (-Release@CSaDeviceProxy@@WBI@EAAKXZ.c)
 *     ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18007CF74 (--1-$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x180009CD0 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x18000B410 (-Lock@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@X.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18000BD10 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaDeviceProxy::Release(CSaDeviceProxy *this)
{
  const unsigned __int16 **v1; // rax
  const unsigned __int16 *v3; // rdx
  int (*v4)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rax
  void (__fastcall *v5)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *); // rax
  signed __int64 v6; // rax
  unsigned __int32 v7; // edi
  volatile signed __int32 *v8; // rcx
  void (*v9)(void); // rax
  void *(__fastcall *v11)(CSaDeviceProxy *__hidden, unsigned int); // rax
  signed __int64 v12; // rtt
  struct IDeviceGraphObjectsStore *v13; // [rsp+48h] [rbp+10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp+18h] BYREF

  v1 = (const unsigned __int16 **)*((_QWORD *)this + 6);
  v13 = 0LL;
  v3 = *v1;
  v4 = *(int (**)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  if ( v4 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
    CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, v3, &v13);
  else
    ((void (__fastcall *)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))v4)(
      g_DeviceGraphStore,
      v3,
      &v13);
  v5 = *(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)v13 + 64LL);
  if ( (char *)v5 == (char *)CDeviceGraphObjectsStore::Lock )
    CDeviceGraphObjectsStore::Lock(v13, &lpCriticalSection);
  else
    v5(v13, &lpCriticalSection);
  v6 = *((_QWORD *)this + 5);
  while ( v6 >= 0 )
  {
    v7 = v6 - 1;
    v12 = v6;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v6 - 1, v6);
    if ( v12 == v6 )
      goto LABEL_8;
  }
  v7 = _InterlockedDecrement((volatile signed __int32 *)(2 * v6 + 16));
LABEL_8:
  if ( !v7 )
  {
    v11 = *(void *(__fastcall **)(CSaDeviceProxy *__hidden, unsigned int))(*(_QWORD *)this + 48LL);
    if ( v11 == CSaDeviceProxy::`vector deleting destructor' )
      CSaDeviceProxy::`vector deleting destructor'(this, 1u);
    else
      v11(this, 1u);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))();
  }
  if ( lpCriticalSection )
  {
    LeaveCriticalSection(lpCriticalSection);
    lpCriticalSection = 0LL;
  }
  v8 = (volatile signed __int32 *)v13;
  if ( v13 )
  {
    v13 = 0LL;
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 16LL);
    if ( (char *)v9 != (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
    {
LABEL_20:
      v9();
      return v7;
    }
    if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 120LL))(v8, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v9 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        goto LABEL_20;
      }
    }
  }
  return v7;
}
