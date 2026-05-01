/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___::Run @ 0x1801DC0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180048D24 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18006FB2C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801D9404 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvider.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___::Run(
        __int64 a1)
{
  __int64 v2; // r8
  const char *v3; // r9
  __int64 *v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  HANDLE ProcessHeap; // rax
  LPVOID v11[4]; // [rsp+48h] [rbp-9h] BYREF
  __int128 v12; // [rsp+68h] [rbp+17h] BYREF
  __int64 v13; // [rsp+78h] [rbp+27h]
  int v14; // [rsp+80h] [rbp+2Fh]
  __int64 v15; // [rsp+88h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  __int64 v17; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+6Fh] BYREF

  v2 = *(_QWORD *)(a1 + 104);
  if ( *(_DWORD *)v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v11,
      (struct wil::details::IFailureCallback *)(a1 + 56),
      (const struct wil::details::StoredCallContextInfo *)(v2 + 40));
  }
  else
  {
    memset(v11, 0, sizeof(v11));
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0;
    v15 = 0LL;
  }
  v3 = (const char *)*(unsigned int *)(a1 + 32);
  if ( (int)v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xBD,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      v3);
    goto LABEL_19;
  }
  v17 = 0LL;
  if ( !*(_QWORD *)(a1 + 48)
    || (v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v17),
        v5 = CMarshaledInterface::_Unmarshal(
               (CMarshaledInterface *)(a1 + 48),
               &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
               (void **)v4,
               1),
        v5 >= 0) )
  {
    v18 = 0LL;
    v6 = CoreQueryWindowService(
           *(_QWORD *)(a1 + 16),
           &GUID_db37659c_5741_4985_a443_dda995e92f5f,
           &GUID_c1635471_1417_4750_811f_a6122953c5a3,
           &v18);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v18 + 48LL))(
             v18,
             *(_QWORD *)(a1 + 24),
             *(_QWORD *)(a1 + 40),
             v17);
      if ( v6 >= 0 )
      {
        wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 56);
LABEL_15:
        v8 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        goto LABEL_17;
      }
      v7 = 200LL;
    }
    else
    {
      v7 = 199LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xC3,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
    (const char *)(unsigned int)v5);
LABEL_17:
  v9 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
LABEL_19:
  if ( v14 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v12);
  if ( LOBYTE(v11[3]) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v11[2]);
  }
}
