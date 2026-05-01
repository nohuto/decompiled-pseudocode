/*
 * XREFs of ?GetApplicationByWindowInternal@CApplicationManager@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x18000D750
 * Callers:
 *     <none>
 * Callees:
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018F0C (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetApplicationByWindowInternal(
        CApplicationManager *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  int First; // ebx
  __int64 (__fastcall ***v7)(_QWORD, const struct _GUID *, void **); // rcx
  HWND v9; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  __int64 (__fastcall ***v11)(_QWORD, const struct _GUID *, void **); // [rsp+50h] [rbp+8h] BYREF

  *a4 = 0LL;
  v11 = 0LL;
  v9 = a2;
  v10 = 2;
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>((char *)this - 248, &v9, &v11, 0LL);
  if ( First >= 0 )
    First = (**v11)(v11, a3, a4);
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v7)[2])(v7);
  }
  return (unsigned int)First;
}
