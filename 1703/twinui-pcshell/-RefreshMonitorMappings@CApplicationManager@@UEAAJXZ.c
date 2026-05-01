/*
 * XREFs of ?RefreshMonitorMappings@CApplicationManager@@UEAAJXZ @ 0x18000A0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_040c5264cfde888b59927d935a6bda9c___ @ 0x18001818C (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___--ForEach__lam.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::RefreshMonitorMappings(CApplicationManager *this)
{
  IUnknown *v2; // rbx
  void **v3; // rax
  HRESULT Service; // r15d
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int i; // r14d
  PSRWLOCK v10; // rdi
  PVOID Ptr; // rcx
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v18; // [rsp+40h] [rbp-18h] BYREF
  __int64 v19; // [rsp+48h] [rbp-10h]
  unsigned int v20; // [rsp+90h] [rbp+38h] BYREF
  __int64 v21; // [rsp+98h] [rbp+40h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+50h] BYREF

  v23 = 0LL;
  v2 = *(IUnknown **)CWRLObjectWithGITSite::_GetGITSitePtr((char *)this - 80, &v21);
  v3 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v23);
  Service = IUnknown_QueryService(
              v2,
              (const GUID *const)&SID_ImmersiveShellHookService,
              &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
              v3);
  v5 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( Service >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v6 = *((_DWORD *)this + 160);
    v7 = *((_QWORD *)this + 47);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v18 = v6;
    v19 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_040c5264cfde888b59927d935a6bda9c___(
      (char *)this + 440,
      &v18);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v22 = 0LL;
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v22);
    (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64))(**((_QWORD **)this + 49) + 32LL))(
      *((_QWORD *)this + 49),
      0LL,
      &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
      v8);
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 47) + 32LL))(*((_QWORD *)this + 47), &v20) >= 0 )
    {
      for ( i = 0; i < v20; ++i )
      {
        v21 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 47) + 40LL))(
               *((_QWORD *)this + 47),
               i,
               &v21) >= 0 )
        {
          v10 = CApplicationManagerUtility::g_pIAMGlobals;
          Ptr = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
          if ( Ptr )
          {
            v12 = *((_DWORD *)CApplicationManagerUtility::g_pIAMGlobals[1].Ptr + (_QWORD)Ptr - 1) == 1;
          }
          else if ( LODWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr)
                 && (unsigned int)SHIsSameObject(v21, CApplicationManagerUtility::g_pIAMGlobals[6].Ptr) )
          {
            v12 = LODWORD(v10[5].Ptr) == 1;
          }
          else
          {
            v12 = HIDWORD(v10[5].Ptr) == 1;
          }
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v22 + 24LL))(
            v22,
            (unsigned int)v12 + 1,
            *((unsigned int *)this + 160),
            v21);
        }
        v13 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    v14 = *((_QWORD *)this + 44);
    if ( v14 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 40LL))(v14, v23);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v15 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v16 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)Service;
}
