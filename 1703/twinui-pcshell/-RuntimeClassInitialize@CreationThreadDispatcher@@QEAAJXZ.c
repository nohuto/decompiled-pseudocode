/*
 * XREFs of ?RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ @ 0x1800D6BE4
 * Callers:
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x1800DE390 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$Co.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180020BE8 (-Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIAsyncCallbackDispatcher@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DD310 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIAsyncCallbackDispatcher@@VNil@Details@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreationThreadDispatcher::RuntimeClassInitialize(CreationThreadDispatcher *this)
{
  volatile signed __int32 *v2; // rax
  volatile signed __int32 *v3; // rbx
  int v4; // edi
  int v5; // eax
  struct IUnknown *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  v2 = (volatile signed __int32 *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( !v2 )
  {
    v4 = -2147024882;
LABEL_6:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x39,
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v4);
    goto LABEL_9;
  }
  *((_DWORD *)v2 + 3) = 1;
  *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallbackDispatcher,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v3 = &AsyncCallbackDispatcher::`vftable';
  v4 = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAsyncCallbackDispatcher,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
         v3,
         &GUID_7702e77c_66f6_479b_af2b_e316cff5f814,
         &v9);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
  if ( v4 < 0 )
    goto LABEL_6;
  v5 = AgileGitPtr::Initialize(
         (CreationThreadDispatcher *)((char *)this + 32),
         &GUID_7702e77c_66f6_479b_af2b_e316cff5f814,
         v9);
  v4 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v5);
LABEL_9:
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  }
  return (unsigned int)v4;
}
