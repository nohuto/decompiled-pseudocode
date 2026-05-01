/*
 * XREFs of ??$Init@V?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@AEAV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@4@@Z @ 0x180175F84
 * Callers:
 *     ??0?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@QE$AAA@XZ @ 0x180174614 (--0-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInt.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Platform::Collections::Details::Init<std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rcx
  volatile signed __int32 *v6; // rbx
  __int64 result; // rax
  _QWORD *v8; // rcx
  volatile signed __int32 *v9; // rbx
  void *Exception; // rax
  void *v11; // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h]
  __int64 v15; // [rsp+60h] [rbp+18h]

  v13[1] = -2LL;
  try
  {
    v4 = operator new(0x18uLL);
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<unsigned int>::`vftable';
    v5 = v4 + 4;
    if ( v4 != (_DWORD *)-16LL )
      *v5 = 0;
    v6 = (volatile signed __int32 *)a1[1];
    a1[1] = v4;
    *a1 = v5;
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
    result = (__int64)operator new(0x28uLL);
    *(_DWORD *)(result + 8) = 1;
    *(_DWORD *)(result + 12) = 1;
    *(_QWORD *)result = &std::_Ref_count_obj<std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>>::`vftable';
    v8 = (_QWORD *)(result + 16);
    if ( result != -16 )
    {
      *v8 = 0LL;
      *(_QWORD *)(result + 24) = 0LL;
      *(_QWORD *)(result + 32) = 0LL;
    }
    v9 = (volatile signed __int32 *)a2[1];
    a2[1] = result;
    *a2 = v8;
    if ( v9 )
    {
      result = (unsigned int)_InterlockedDecrement(v9 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        result = (unsigned int)_InterlockedDecrement(v9 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
  }
  catch ( std::bad_alloc )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v14 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
    v12 = __abi_winrt_ptr_ctor(v14);
    throw (Platform::OutOfMemoryException **)&v12;
  }
  catch ( std::exception )
  {
    v11 = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v15 = Platform::FailureException::FailureException(v11);
    v13[0] = __abi_winrt_ptr_ctor(v15);
    throw (Platform::FailureException **)v13;
  }
  return result;
}
