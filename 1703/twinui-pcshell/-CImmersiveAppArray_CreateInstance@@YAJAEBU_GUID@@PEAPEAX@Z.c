/*
 * XREFs of ?CImmersiveAppArray_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18002C144
 * Callers:
 *     ?GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationArray@@@Z @ 0x18000B8E0 (-GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationA.c)
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x18000E760 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x18002ECF0 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180023B20 (-CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$Make@VCImmersiveAppArray@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveAppArray@@@12@XZ @ 0x18002C320 (--$Make@VCImmersiveAppArray@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveAppArray@@@12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveAppArray_CreateInstance(const struct _GUID *a1, void **a2)
{
  const struct _GUID *v3; // rcx
  const struct _GUID *v4; // rbx
  signed int Instance; // edi
  const struct _GUID *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1;
  *a2 = 0LL;
  Microsoft::WRL::Details::Make<CImmersiveAppArray>(&v7);
  v4 = v7;
  Instance = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
  {
    Instance = CEnumerableObjectCollection::CreateInstance(v3, (void **)&v7[1]);
    if ( Instance >= 0 )
      Instance = (**(__int64 (__fastcall ***)(const struct _GUID *, GUID *, void **))&v4->Data1)(
                   v4,
                   &GUID_05581915_c410_44c8_819a_f310f6c0ffee,
                   a2);
  }
  if ( v4 )
    (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v4->Data1 + 16LL))(v4);
  return (unsigned int)Instance;
}
