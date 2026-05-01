/*
 * XREFs of ?GetApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplication@@@Z @ 0x18000BA70
 * Callers:
 *     <none>
 * Callees:
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByAppId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018094 (--$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveA.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetApplication(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        struct IImmersiveApplication **a3)
{
  int First; // ebx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, struct IImmersiveApplication **); // rcx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, struct IImmersiveApplication **); // [rsp+40h] [rbp+8h] BYREF
  const unsigned __int16 *v10; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = 0LL;
  v10 = a2;
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppId>((char *)this - 136, &v10, &v9);
  if ( First >= 0 )
    First = (**v9)(v9, &GUID_8b14e88b_5663_4caf_b196_c31479262831, a3);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IImmersiveApplication **)))(*v7)[2])(v7);
  }
  return (unsigned int)First;
}
