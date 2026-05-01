/*
 * XREFs of ?HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z @ 0x180030E70
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveMode::HandleActivationDeprecated(_DWORD *a1, int a2, char a3)
{
  int v6; // edi
  IUnknown *v7; // rbx
  __int64 *v8; // rax
  bool v9; // bl
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-28h] BYREF
  int v17; // [rsp+30h] [rbp-20h]
  _DWORD v18[6]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF

  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)((unsigned __int64)(a1 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 18) >> 64)));
  v6 = -1;
  if ( a2 == 1 )
  {
    v6 = 0;
  }
  else if ( a2 == 8 || a2 == 10 || a2 == 12 )
  {
    v6 = 1;
  }
  v19 = 0LL;
  v7 = (IUnknown *)*CWRLObjectWithGITSite::_GetGITSitePtr((__int64)(a1 - 12), &v20);
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v19);
  v9 = IUnknown_QueryService(
         v7,
         &IID_IImmersiveApplicationManager,
         &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
         (void **)v8) >= 0;
  v10 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v9 )
  {
    if ( v6 == -1 || (v11 = v6, !a3) )
      v11 = a1[61];
    v12 = a1[32];
    v13 = a1[54];
    v18[0] = a1[61];
    v18[1] = v11;
    v18[2] = v13;
    v18[3] = v12;
    v18[4] = a2;
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v19 + 24LL))(v19, v18);
  }
  if ( a3 && v6 != -1 && v6 != a1[61] )
    a1[61] = v6;
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( v17 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
