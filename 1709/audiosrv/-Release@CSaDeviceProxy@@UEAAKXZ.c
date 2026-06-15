/*
 * XREFs of ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x18000E310
 * Callers:
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@$$QEAPEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x18003085C (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCh.c)
 *     ?Release@CSaDeviceProxy@@W7EAAKXZ @ 0x180037130 (-Release@CSaDeviceProxy@@W7EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBA@EAAKXZ @ 0x180037140 (-Release@CSaDeviceProxy@@WBA@EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBI@EAAKXZ @ 0x180037150 (-Release@CSaDeviceProxy@@WBI@EAAKXZ.c)
 *     ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18005C72C (--1-$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x18000E750 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x18000E930 (-Lock@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@X.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaDeviceProxy::Release(CSaDeviceProxy *this)
{
  __int64 v2; // rcx
  void (__fastcall *v3)(__int64, LPCRITICAL_SECTION *); // rax
  signed __int64 v4; // rax
  unsigned __int32 v5; // edi
  signed __int64 v7; // rtt
  void *(__fastcall *v8)(CSaDeviceProxy *__hidden, unsigned int); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 14);
  v3 = *(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v2 + 64LL);
  if ( (char *)v3 == (char *)CDeviceGraphObjectsStore::Lock )
    CDeviceGraphObjectsStore::Lock(v2, &lpCriticalSection);
  else
    v3(v2, &lpCriticalSection);
  v4 = *((_QWORD *)this + 5);
  while ( v4 >= 0 )
  {
    v5 = v4 - 1;
    v7 = v4;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v4 - 1, v4);
    if ( v7 == v4 )
      goto LABEL_6;
  }
  v5 = _InterlockedDecrement((volatile signed __int32 *)(2 * v4 + 16));
LABEL_6:
  if ( !v5 )
  {
    v8 = *(void *(__fastcall **)(CSaDeviceProxy *__hidden, unsigned int))(*(_QWORD *)this + 48LL);
    if ( v8 == CSaDeviceProxy::`vector deleting destructor' )
      CSaDeviceProxy::`vector deleting destructor'(this, 1u);
    else
      v8(this, 1u);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))();
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
