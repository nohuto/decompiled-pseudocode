/*
 * XREFs of ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x18001F330
 * Callers:
 *     ?Release@CSaDeviceProxy@@W7EAAKXZ @ 0x180065DA0 (-Release@CSaDeviceProxy@@W7EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBA@EAAKXZ @ 0x180065DB0 (-Release@CSaDeviceProxy@@WBA@EAAKXZ.c)
 *     ?Release@CSaDeviceProxy@@WBI@EAAKXZ @ 0x180065DC0 (-Release@CSaDeviceProxy@@WBI@EAAKXZ.c)
 *     ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180099C1C (--1-$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x1800463A0 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaDeviceProxy::Release(CSaDeviceProxy *this)
{
  __int64 v2; // rcx
  _QWORD *(__fastcall *v3)(__int64, LPCRITICAL_SECTION *); // rax
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  signed __int64 v5; // rax
  unsigned int v6; // ebx
  signed __int64 v7; // rtt
  void *(__fastcall *v8)(CSaDeviceProxy *__hidden, unsigned int); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 14);
  v3 = *(_QWORD *(__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v2 + 72LL);
  if ( (char *)v3 == (char *)CDeviceGraphObjectsStore::Lock )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)(v2 + 24);
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 24));
    lpCriticalSection = v4;
  }
  else
  {
    v3(v2, &lpCriticalSection);
  }
  v5 = *((_QWORD *)this + 5);
  while ( v5 >= 0 )
  {
    if ( (_DWORD)v5 == 0x7FFFFFFF )
    {
      v6 = 2147483646;
      goto LABEL_17;
    }
    v6 = v5 - 1;
    v7 = v5;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v5 - 1, v5);
    if ( v7 == v5 )
      goto LABEL_11;
  }
  v6 = ATL::SafeDecrementReferenceMultiThread((int *)(2 * v5 + 16));
LABEL_11:
  if ( !v6 )
  {
    v8 = *(void *(__fastcall **)(CSaDeviceProxy *__hidden, unsigned int))(*(_QWORD *)this + 48LL);
    if ( v8 == CSaDeviceProxy::`vector deleting destructor' )
      CSaDeviceProxy::`vector deleting destructor'(this, 1u);
    else
      v8(this, 1u);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
LABEL_17:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
