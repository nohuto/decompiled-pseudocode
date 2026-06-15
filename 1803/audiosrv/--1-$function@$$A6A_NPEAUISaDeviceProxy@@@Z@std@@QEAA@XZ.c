/*
 * XREFs of ??1?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ @ 0x180099C3C
 * Callers:
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$0 @ 0x180096B9D (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
