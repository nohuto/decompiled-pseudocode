/*
 * XREFs of ?RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ @ 0x18011C020
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VXamlExplorerHostShellComponent@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18011CAE0 (-CreateInstance@-$SimpleClassFactory@VXamlExplorerHostShellComponent@@$0A@@WRL@Microsoft@@UEAAJP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180023C8C (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??0XamlExplorerHost@@QE$AAA@XZ @ 0x18011D628 (--0XamlExplorerHost@@QE$AAA@XZ.c)
 *     ?XamlTaskbarManager_CreateInstance@@YAJPE$AAVXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x18012113C (-XamlTaskbarManager_CreateInstance@@YAJPE$AAVXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlExplorerHostShellComponent::RuntimeClassInitialize(XamlExplorerHostShellComponent *this)
{
  void *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  const char *v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 *v8; // rbx
  __int64 v9; // rcx
  int Instance; // eax
  unsigned int v11; // esi
  int v13; // eax
  unsigned int v14; // ebx
  GUID v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+40h] [rbp-48h]
  __int64 v17; // [rsp+48h] [rbp-40h]
  GUID v18; // [rsp+50h] [rbp-38h]
  __int64 v19; // [rsp+60h] [rbp-28h]
  __int64 v20; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    v2 = Platform::Details::Heap::Allocate(0x58uLL, 0x70uLL);
    v3 = XamlExplorerHost::XamlExplorerHost(v2);
    v6 = v3;
    if ( v3 != *((_QWORD *)this + 20) )
    {
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      v7 = *((_QWORD *)this + 20);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      *((_QWORD *)this + 20) = v6;
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3D,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
                           v5);
  }
  v8 = (__int64 *)((char *)this + 152);
  v9 = *((_QWORD *)this + 19);
  if ( v9 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Instance = XamlTaskbarManager_CreateInstance(*((_QWORD *)this + 20), v4, (char *)this + 152);
  v11 = Instance;
  if ( Instance >= 0 )
  {
    v15 = GUID_55ae97cc_507b_4db8_88ee_e0d5b5a889e9;
    v16 = 0LL;
    v17 = 0LL;
    v18 = GUID_ea175b26_b96d_4201_9c1d_48bb4eb1892a;
    v19 = *v8;
    v20 = 0LL;
    v13 = CImmersiveShellComponent::RegisterServiceInformation(
            (XamlExplorerHostShellComponent *)((char *)this + 40),
            (__int64)&v15,
            2uLL);
    v14 = v13;
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
        (const char *)(unsigned int)v13);
    return v14;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3F,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
      (const char *)(unsigned int)Instance);
    return v11;
  }
}
