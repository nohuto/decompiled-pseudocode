/*
 * XREFs of ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x180009E60
 * Callers:
 *     <none>
 * Callees:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015400 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ?DeleteItem@?$CStringHashTable@UPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z @ 0x1800164D0 (-DeleteItem@-$CStringHashTable@UPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@@@QEA.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ForgetApplicationsInPackage(
        CApplicationManager *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // r8
  __int64 i; // rsi
  __int64 v6; // rbx
  IUnknown **GITSitePtr; // rbx
  void *v8; // rcx
  bool v9; // bl
  __int64 v10; // rcx
  void *v11; // rcx
  void *ppvOut; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  for ( i = *((_QWORD *)this + 57); i; --i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 56) + 8 * i - 8);
    v14 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    LOBYTE(v4) = 1;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, const unsigned __int16 *, __int64))(*(_QWORD *)v6 + 320LL))(
           v6,
           a2,
           v4) )
    {
      CApplicationManager::_ForgetApplicationNoLock((char *)this - 120, v6, 2LL);
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
      CStringHashTable<PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare>::DeleteItem((char *)this + 680, &v14);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ppvOut = 0LL;
  GITSitePtr = (IUnknown **)CWRLObjectWithGITSite::_GetGITSitePtr((char *)this - 80, &v14);
  v8 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = IUnknown_QueryService(
         *GITSitePtr,
         &GUID_b70e7ce8_5eb0_4e5a_af6c_05e57f1e87a3,
         &GUID_b70e7ce8_5eb0_4e5a_af6c_05e57f1e87a3,
         &ppvOut) >= 0;
  v10 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v9 )
    (*(void (__fastcall **)(void *, const unsigned __int16 *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, a2);
  v11 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return 0LL;
}
