/*
 * XREFs of ??$Init@V?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@AEAV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@4@@Z @ 0x180139398
 * Callers:
 *     ??0?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@QE$AAA@XZ @ 0x180139548 (--0-$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U.c)
 * Callees:
 *     ??$make_shared@V?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@$$V@std@@YA?AV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@0@XZ @ 0x18013933C (--$make_shared@V-$vector@V-$Agile@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableSh.c)
 *     ??$make_shared@IH@std@@YA?AV?$shared_ptr@I@0@$$QEAH@Z @ 0x18013968C (--$make_shared@IH@std@@YA-AV-$shared_ptr@I@0@$$QEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Platform::Collections::Details::Init<std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // r8
  volatile signed __int32 *v8; // rbx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  volatile signed __int32 *v12; // r8
  volatile signed __int32 *v13; // rbx
  __int64 v14; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v15[3]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v16; // [rsp+40h] [rbp-48h]
  volatile signed __int32 *v17; // [rsp+48h] [rbp-40h]
  __int64 v18; // [rsp+50h] [rbp-38h]
  volatile signed __int32 *v19; // [rsp+58h] [rbp-30h]
  __int64 v20; // [rsp+60h] [rbp-28h] BYREF
  volatile signed __int32 *v21; // [rsp+68h] [rbp-20h]
  __int64 v22; // [rsp+70h] [rbp-18h] BYREF
  volatile signed __int32 *v23; // [rsp+78h] [rbp-10h]
  void *Exception; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+20h]

  v15[1] = -2LL;
  try
  {
    LODWORD(Exception) = 0;
    v4 = (__int64 *)std::make_shared<unsigned int,int>(&v20, &Exception);
    v16 = *v4;
    v5 = v16;
    v6 = v4[1];
    *v4 = 0LL;
    v4[1] = 0LL;
    v25 = v6;
    v17 = (volatile signed __int32 *)a1[1];
    v7 = v17;
    a1[1] = v6;
    *a1 = v5;
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
    v8 = v21;
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    result = (__int64)std::make_shared<std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>,>(&v22);
    v18 = *(_QWORD *)result;
    v10 = v18;
    v11 = *(_QWORD *)(result + 8);
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    v15[2] = v11;
    v19 = (volatile signed __int32 *)a2[1];
    v12 = v19;
    a2[1] = v11;
    *a2 = v10;
    if ( v12 )
    {
      result = (unsigned int)_InterlockedDecrement(v12 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        result = (unsigned int)_InterlockedDecrement(v19 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
    v13 = v23;
    if ( v23 )
    {
      result = (unsigned int)_InterlockedDecrement(v23 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        result = (unsigned int)_InterlockedDecrement(v13 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
  }
  catch ( std::bad_alloc )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::OutOfMemoryException::OutOfMemoryException(Exception);
    v14 = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::OutOfMemoryException **)&v14;
  }
  catch ( std::exception )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::FailureException::FailureException(Exception);
    v15[0] = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::FailureException **)v15;
  }
  return result;
}
