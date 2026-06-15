/*
 * XREFs of ??$_Destroy_range@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@PEAVWeakRef@WRL@Microsoft@@@std@@YAXPEAVWeakRef@WRL@Microsoft@@0AEAU?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@0@@Z @ 0x180091F0C
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::WeakRef_____ptr64_Microsoft::WRL::WeakRef_____ptr64_std::allocator_Microsoft::WRL::WeakRef____::_1_::catch$4 @ 0x180039FD1 (_std--_Uninitialized_move_al_unchecked_Microsoft--WRL--WeakRef_____ptr64_Microsoft--WRL--WeakRef.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::WeakRef>,Microsoft::WRL::WeakRef *>(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 **v3; // rbx
  volatile signed __int32 *v4; // rcx
  void (*v5)(void); // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
        if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v4);
        else
          v5();
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
}
