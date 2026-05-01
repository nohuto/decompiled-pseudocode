/*
 * XREFs of ??_E?$GitInvokeHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@UEAAPEAXI@Z @ 0x180073490
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr,2>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  char *v4; // rdi
  __int64 v5; // rcx

  v4 = (char *)(Block + 7);
  Block[7] = &Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vftable';
  if ( *((_DWORD *)Block + 16) )
  {
    if ( *((int *)Block + 17) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1802BAD70 + 32LL))(qword_1802BAD70);
    *((_DWORD *)v4 + 2) = 0;
  }
  *((_DWORD *)Block + 13) = -1073741823;
  v5 = Block[5];
  if ( v5 )
  {
    Block[5] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
