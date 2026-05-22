/*
 * XREFs of ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18001E85C
 * Callers:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180019168 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18001A690 (-Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgSco.c)
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z @ 0x180022894 (--0InputSystem@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
struct Microsoft::Bamo::BamoConnection **__fastcall InputSystemServerConnection::Create(
        struct Microsoft::Bamo::BamoConnection **a1,
        __int64 a2)
{
  const char *v4; // r9
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rbx
  char *v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  int v11; // ebx
  void (__fastcall ***v12)(_QWORD); // rax
  InputSystem *v13; // rax
  InputSystem *v14; // rbx
  struct Microsoft::Bamo::BamoConnection *v15; // rdi
  InputSystem *v16; // rcx
  __int64 v17; // rcx
  InputSystem *v19; // [rsp+38h] [rbp-28h]
  __int128 v20; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v22; // [rsp+A0h] [rbp+40h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+A8h] [rbp+48h] BYREF

  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)(A;;0x001F0003;;;S-1-15-3-1024-1502825166-1963708345-261"
           "6377461-2562897074-4192028372-3968301570-1997628692-1435953622)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x1B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\inputsystemserverconnection.cpp",
      v4);
LABEL_18:
    wil::details::in1diag3::FailFast_Hr(
      v6,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\inputsystemserverconnection.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v22 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, PSECURITY_DESCRIPTOR, __int64 *))(*(_QWORD *)a2 + 56LL))(
         a2,
         SecurityDescriptor,
         &v22);
  v6 = retaddr;
  if ( v5 < 0 )
    goto LABEL_18;
  DWORD2(v20) = 1;
  *(_QWORD *)&v20 = 0LL;
  v7 = v22;
  *a1 = 0LL;
  v8 = (char *)operator new(0xA0uLL);
  memset_0(v8, 0, 0xA0uLL);
  *(_QWORD *)v8 = &ISMBamosBamoConnection::`vftable';
  *((_DWORD *)v8 + 4) = 1;
  *((_QWORD *)v8 + 1) = &Microsoft::BamoImpl::BamoConnectionImpl::`vftable';
  *((_QWORD *)v8 + 3) = v8;
  *((_QWORD *)v8 + 4) = 0LL;
  *((_DWORD *)v8 + 10) = 0;
  *((_QWORD *)v8 + 6) = 0LL;
  *((_QWORD *)v8 + 7) = 0LL;
  *((_QWORD *)v8 + 8) = 0LL;
  *((_QWORD *)v8 + 9) = 0LL;
  *((_QWORD *)v8 + 10) = 0LL;
  *((_QWORD *)v8 + 11) = 0LL;
  v8[96] = 0;
  *((_QWORD *)v8 + 18) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)(v8 + 104));
  *((_QWORD *)v8 + 1) = &BamoImpl::dataproviderBamoConnectionImpl::`vftable';
  *(_QWORD *)v8 = &InputSystemServerConnection::`vftable';
  *((_QWORD *)v8 + 19) = 0LL;
  v9 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v8 + 40LL))(v8);
  v10 = Microsoft::BamoImpl::BamoConnectionImpl::Join(v9, a2, v7, &v20, L"System\\InputSystemConversation", 1);
  v11 = v10;
  if ( v10 >= 0 )
  {
    *a1 = (struct Microsoft::Bamo::BamoConnection *)v8;
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F4,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v10);
    v12 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v8 + 40LL))(v8);
    (**v12)(v12);
  }
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\inputsystemserverconnection.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v19 = (InputSystem *)operator new(0x70uLL);
  v13 = InputSystem::InputSystem(v19, *a1);
  v14 = v13;
  v15 = *a1;
  v16 = (InputSystem *)*((_QWORD *)*a1 + 19);
  if ( v16 != v13 )
  {
    if ( v13 )
    {
      (**(void (__fastcall ***)(InputSystem *))v13)(v13);
      v16 = (InputSystem *)*((_QWORD *)v15 + 19);
    }
    *((_QWORD *)v15 + 19) = v14;
    if ( v16 )
      (*(void (__fastcall **)(InputSystem *))(*(_QWORD *)v16 + 8LL))(v16);
  }
  v17 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return a1;
}
