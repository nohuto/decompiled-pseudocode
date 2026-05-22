/*
 * XREFs of ?Create@MPCManagerClient@@SAJPEAPEAV1@@Z @ 0x1800264A0
 * Callers:
 *     ?ActivateInstance@MPCManagerClientFactory@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180026C30 (-ActivateInstance@MPCManagerClientFactory@@UEAAJPEAPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0MPCManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z @ 0x180026800 (--0MPCManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z.c)
 *     ??$CreateClient@VMPCManagerClientConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x18002701C (--$CreateClient@VMPCManagerClientConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSess.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A150 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCM_ea_18002A150.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall MPCManagerClient::Create(struct MPCManagerClient **a1)
{
  const char *v2; // r9
  char v3; // si
  struct MPCManagerClient *v4; // rdi
  int v5; // eax
  __int64 v6; // r8
  const char *v7; // r9
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  MPCManagerClient *v10; // rax
  struct MPCManagerClientConnection *v11; // rbx
  void (__fastcall ***v12)(_QWORD); // rax
  wil::details::in1diag3 *v13; // rcx
  MPCManagerClient *v15; // [rsp+40h] [rbp-18h] BYREF
  int v16; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]
  __int64 v18; // [rsp+98h] [rbp+40h] BYREF
  struct MPCManagerClientConnection *v19; // [rsp+A0h] [rbp+48h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+A8h] [rbp+50h]

  EnterCriticalSection(&MPCManagerClient::s_creationLock);
  v20 = &MPCManagerClient::s_creationLock;
  if ( !a1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v2);
    goto LABEL_17;
  }
  *a1 = 0LL;
  v3 = 0;
  v4 = MPCManagerClient::s_instance;
  if ( MPCManagerClient::s_instance )
    goto LABEL_12;
  v18 = 0LL;
  v5 = CoreUICreate(&v18);
  v8 = retaddr;
  if ( v5 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::FailFast_Hr(
      v8,
      (void *)0x28,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  if ( !v18 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v7);
    __debugbreak();
  }
  v3 = 1;
  v16 = 1;
  v15 = 0LL;
  v19 = 0LL;
  v9 = Microsoft::Bamo::BamoConnection::CreateClient<MPCManagerClientConnection>(v18, &v15, v6, &v19, -2LL);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x30,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_20;
  }
  v10 = (MPCManagerClient *)operator new(0x458uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v19;
  if ( v10 )
  {
    v15 = v10;
    v4 = MPCManagerClient::MPCManagerClient(v10, v19);
  }
  MPCManagerClient::s_instance = v4;
  if ( v11 )
  {
    v12 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct MPCManagerClientConnection *))(*(_QWORD *)v11 + 40LL))(v11);
    (**v12)(v12);
    v4 = MPCManagerClient::s_instance;
  }
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v4 = MPCManagerClient::s_instance;
  }
LABEL_12:
  v13 = retaddr;
  if ( !v4 )
  {
LABEL_20:
    wil::details::in1diag3::_FailFast_Unexpected(
      v13,
      (void *)0x39,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v2);
    JUMPOUT(0x180026685LL);
  }
  *a1 = v4;
  if ( !v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient>::AddRef(v4);
  LeaveCriticalSection(&MPCManagerClient::s_creationLock);
  return 0LL;
}
