/*
 * XREFs of ?CompleteInitialization@CRotationManagerSync@@UEAAJPEAUIServiceProvider@@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1800395C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_CheckForInitialSuppression@CRotationManagerSync@@AEAAXXZ @ 0x180039CB8 (-_CheckForInitialSuppression@CRotationManagerSync@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRotationManagerSync::CompleteInitialization(
        CRotationManagerSync *this,
        struct IServiceProvider *a2,
        struct IImmersiveApplicationManagerInternal *a3)
{
  __int64 v6; // rcx
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((struct IImmersiveApplicationManagerInternal **)this + 9) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IImmersiveApplicationManagerInternal *))(*(_QWORD *)a3 + 8LL))(a3);
    v6 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = a3;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  lpVtbl = a2->lpVtbl;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 8);
  v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    CRotationManagerSync::_CheckForInitialSuppression((CRotationManagerSync *)((char *)this - 56));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xBD,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\rotationmanager.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
}
