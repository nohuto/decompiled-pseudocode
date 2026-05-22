/*
 * XREFs of ?Initialize@InputStateManager@@IEAAJXZ @ 0x180006028
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004384 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180009738 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ??0TestCommandHost@@AEAA@XZ @ 0x180009C84 (--0TestCommandHost@@AEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18000A394 (--1-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessage.c)
 *     ?GetInstance@ControllerNavigationManager@@SAPEAV1@XZ @ 0x18003BFD0 (-GetInstance@ControllerNavigationManager@@SAPEAV1@XZ.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800488DC (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18004890C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputStateManager::Initialize(InputStateManager *this)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // r9d
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  TestCommandHost *v12; // rax
  __int64 *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  HKEY v16; // rcx
  int v17; // ebx
  DWORD TickCount; // eax
  __int64 v19; // rcx
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  char v22; // [rsp+40h] [rbp-10h]
  __int64 v23; // [rsp+88h] [rbp+38h] BYREF
  TestCommandHost *v24; // [rsp+90h] [rbp+40h]

  v21 = 0LL;
  v22 = 0;
  v23 = 0LL;
  v2 = InputSecurityDescriptor::QueryDescriptor(&v21, 8LL, c_wszMessagePortNames);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_5;
    v4 = 110;
    goto LABEL_4;
  }
  v5 = (_QWORD *)((char *)this + 48);
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v2 = CoreUICreate((char *)this + 48);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v4 = 112;
LABEL_4:
      McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 1, v4, v2);
      goto LABEL_5;
    }
    goto LABEL_5;
  }
  v7 = *v5;
  v8 = (_QWORD *)((char *)this + 56);
  v9 = *((_QWORD *)this + 7);
  if ( v9 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v7 + 56LL))(v7, v21, (char *)this + 56);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v4 = 116;
      goto LABEL_4;
    }
LABEL_5:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *, void *, int), InputStateManager *, _QWORD, char *))(*(_QWORD *)*v5 + 80LL))(
         *v5,
         InputStateManager::OnDeviceCommandStatic,
         this,
         *v8,
         (char *)this + 64);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v4 = 122;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v10 = *v5;
  v11 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v23);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v4 = 125;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v23 + 40LL))(
         v23,
         L"System\\Input\\DeviceCommandEndpoint",
         *((_QWORD *)this + 8),
         1LL);
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v4 = 130;
      goto LABEL_4;
    }
    goto LABEL_5;
  }
  ControllerNavigationManager::GetInstance();
  if ( !TestCommandHost::m_instance )
  {
    v24 = (TestCommandHost *)operator new(0x88uLL);
    v12 = TestCommandHost::TestCommandHost(v24);
    v13 = (__int64 *)TestCommandHost::m_instance;
    TestCommandHost::m_instance = v12;
    if ( v13 )
    {
      std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::~_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>(v13 + 9);
      v14 = v13[2];
      if ( v14 )
      {
        v13[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v15 = *v13;
      if ( *v13 )
      {
        *v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      operator delete(v13);
    }
  }
  v16 = (HKEY)*((_QWORD *)this + 1036);
  if ( v16 )
  {
    *((_QWORD *)this + 1036) = 0LL;
    (*(void (__fastcall **)(HKEY))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = RegistryWatcher::Create(
          v16,
          L"System\\Input",
          this,
          (void (*)(void *, HKEY))InputStateManager::OnInputRegistryKeyChangeStatic,
          (struct RegistryWatcher **)this + 1036);
  if ( v17 < 0 )
  {
    *((_DWORD *)this + 2074) = 6;
    *((_DWORD *)this + 2075) = -1;
    v17 = 0;
  }
  TickCount = GetTickCount();
  MITUpdateInputGlobals(TickCount, 0LL, 0LL, 0xFFFFFFFFLL, 0);
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v21);
  return (unsigned int)v17;
}
