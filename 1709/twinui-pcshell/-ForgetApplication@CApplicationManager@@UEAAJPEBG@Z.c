/*
 * XREFs of ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x1800093A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015FC8 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?DeleteItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z @ 0x180017360 (-DeleteItem@-$CStringHashTable@V-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micr.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByAppId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180019278 (--$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveA.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ForgetApplication(CApplicationManager *this, const unsigned __int16 *a2)
{
  char v4; // di
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  const unsigned __int16 *v9; // [rsp+58h] [rbp+10h] BYREF
  const unsigned __int16 *v10; // [rsp+60h] [rbp+18h] BYREF

  v9 = a2;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  v5 = 0LL;
  v8 = 0LL;
  v10 = a2;
  while ( 1 )
  {
    if ( v5 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppId>((char *)this - 160, &v10, &v8) < 0 )
      break;
    v4 = 1;
    CApplicationManager::_ForgetApplicationNoLock((char *)this - 160, v8, 2LL);
    v5 = v8;
  }
  CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CStringHashPolicy,CStringCompare>::DeleteItem(
    (char *)this + 720,
    &v9);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v4 == 0 ? 0x80070490 : 0;
}
