/*
 * XREFs of ?QueryObjectForWindow@CApplicationManager@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x180009D80
 * Callers:
 *     <none>
 * Callees:
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180017CC8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::QueryObjectForWindow(
        CApplicationManager *this,
        int a2,
        struct IInspectable **a3)
{
  __int64 v5; // rbx
  int First; // ebx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, struct IInspectable **); // rcx
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IInspectable **); // [rsp+50h] [rbp+8h] BYREF

  v5 = a2;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v11 = 0LL;
  v9 = v5;
  v10 = 2;
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>((char *)this - 280, &v9, &v11, 0LL);
  if ( First >= 0 )
    First = (**v11)(v11, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a3);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IInspectable **)))(*v7)[2])(v7);
  }
  return (unsigned int)First;
}
