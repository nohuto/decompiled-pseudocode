/*
 * XREFs of ?Initialize@InputStateManager@@IEAAJXZ @ 0x1800063BC
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x1800040D8 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180009460 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ??0TestCommandHost@@AEAA@XZ @ 0x1800099B8 (--0TestCommandHost@@AEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180009C58 (--1-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessage.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18003A84C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003A87C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputStateManager::Initialize(InputStateManager *this, __int64 a2)
{
  int v3; // ebx
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  TestCommandHost *v11; // rax
  __int64 *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  HKEY v15; // rcx
  DWORD TickCount; // eax
  __int64 v17; // rcx
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  char v20; // [rsp+40h] [rbp-10h]
  __int64 v21; // [rsp+88h] [rbp+38h] BYREF
  TestCommandHost *v22; // [rsp+90h] [rbp+40h]

  v19 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v3 = InputSecurityDescriptor::QueryDescriptor(&v19, a2, c_wszMessagePortNames);
  if ( v3 < 0 )
    goto LABEL_33;
  v4 = (_QWORD *)((char *)this + 48);
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v3 = CoreUICreate((char *)this + 48);
  if ( v3 < 0 )
    goto LABEL_33;
  v6 = *v4;
  v7 = (_QWORD *)((char *)this + 56);
  v8 = *((_QWORD *)this + 7);
  if ( v8 )
  {
    *v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v6 + 56LL))(v6, v19, (char *)this + 56);
  if ( v3 < 0 )
    goto LABEL_33;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *, void *, int), InputStateManager *, _QWORD, char *))(*(_QWORD *)*v4 + 80LL))(
         *v4,
         InputStateManager::OnDeviceCommandStatic,
         this,
         *v7,
         (char *)this + 64);
  if ( v3 < 0 )
    goto LABEL_33;
  v9 = *v4;
  v10 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 24LL))(v9, &v21);
  if ( v3 < 0
    || (v3 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v21 + 40LL))(
               v21,
               L"System\\Input\\DeviceCommandEndpoint",
               *((_QWORD *)this + 8),
               1LL),
        v3 < 0) )
  {
LABEL_33:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  else
  {
    if ( !TestCommandHost::m_instance )
    {
      v22 = (TestCommandHost *)operator new(0x88uLL);
      v11 = TestCommandHost::TestCommandHost(v22);
      v12 = (__int64 *)TestCommandHost::m_instance;
      TestCommandHost::m_instance = v11;
      if ( v12 )
      {
        std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::~_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>(v12 + 9);
        v13 = v12[2];
        if ( v13 )
        {
          v12[2] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v14 = *v12;
        if ( *v12 )
        {
          *v12 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        operator delete(v12);
      }
    }
    v15 = (HKEY)*((_QWORD *)this + 1036);
    if ( v15 )
    {
      *((_QWORD *)this + 1036) = 0LL;
      (*(void (__fastcall **)(HKEY))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v3 = RegistryWatcher::Create(
           v15,
           L"System\\Input",
           this,
           (void (*)(void *, HKEY))InputStateManager::OnInputRegistryKeyChangeStatic,
           (struct RegistryWatcher **)this + 1036);
    if ( v3 < 0 )
    {
      *((_DWORD *)this + 2074) = 6;
      *((_DWORD *)this + 2075) = -1;
      v3 = 0;
    }
    TickCount = GetTickCount();
    MITUpdateInputGlobals(TickCount, 0LL, 0LL, 0xFFFFFFFFLL, 0);
  }
  v17 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v19);
  return (unsigned int)v3;
}
