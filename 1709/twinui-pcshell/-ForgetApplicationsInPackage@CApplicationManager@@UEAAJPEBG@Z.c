/*
 * XREFs of ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x180009E90
 * Callers:
 *     <none>
 * Callees:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015FC8 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?DeleteItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z @ 0x180017360 (-DeleteItem@-$CStringHashTable@V-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micr.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::ForgetApplicationsInPackage(
        CApplicationManager *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // r8
  __int64 i; // rdi
  __int64 v6; // rbx
  void *v7; // rcx
  bool v8; // bl
  IUnknown *v9; // rcx
  void *v10; // rcx
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF
  void *ppvOut; // [rsp+70h] [rbp+40h] BYREF
  IUnknown *punk; // [rsp+78h] [rbp+48h] BYREF

  LODWORD(v12) = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  for ( i = *((_QWORD *)this + 61); i; --i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 60) + 8 * i - 8);
    v12 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    LOBYTE(v4) = 1;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, const unsigned __int16 *, __int64))(*(_QWORD *)v6 + 320LL))(
           v6,
           a2,
           v4) )
    {
      CApplicationManager::_ForgetApplicationNoLock((char *)this - 160, v6, 2LL);
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
      CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CStringHashPolicy,CStringCompare>::DeleteItem(
        (char *)this + 720,
        &v12);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ppvOut = 0LL;
  punk = 0LL;
  LODWORD(v12) = 1;
  (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 13) + 32LL))(
    (char *)this - 104,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  v7 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = IUnknown_QueryService(
         punk,
         &GUID_b70e7ce8_5eb0_4e5a_af6c_05e57f1e87a3,
         &GUID_b70e7ce8_5eb0_4e5a_af6c_05e57f1e87a3,
         &ppvOut) >= 0;
  v9 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v9->lpVtbl->Release)(v9);
  }
  if ( v8 )
    (*(void (__fastcall **)(void *, const unsigned __int16 *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, a2);
  v10 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
