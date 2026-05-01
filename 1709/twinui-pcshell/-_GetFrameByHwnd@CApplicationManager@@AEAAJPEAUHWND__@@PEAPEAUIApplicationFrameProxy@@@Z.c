/*
 * XREFs of ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180016E1C
 * Callers:
 *     ?OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x180016F10 (-OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?OnTitleBarDrawnByAppUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x180017000 (-OnTitleBarDrawnByAppUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x1800170F0 (-OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018F0C (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_GetFrameByHwnd(
        CApplicationManager *this,
        HWND a2,
        struct IApplicationFrameProxy **a3)
{
  int First; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  HWND v10; // [rsp+28h] [rbp-20h] BYREF
  int v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  First = -2147467261;
  *a3 = 0LL;
  if ( *((_QWORD *)this + 77) )
  {
    v12 = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v7 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v10 = a2;
    v11 = 0;
    First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v10, &v12, 0LL);
    if ( First >= 0 )
      First = (*(__int64 (__fastcall **)(__int64, struct IApplicationFrameProxy **))(*(_QWORD *)v12 + 496LL))(v12, a3);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v8 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return (unsigned int)First;
}
