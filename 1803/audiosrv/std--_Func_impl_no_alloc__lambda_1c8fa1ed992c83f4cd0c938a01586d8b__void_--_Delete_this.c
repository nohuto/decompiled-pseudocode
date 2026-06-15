/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Delete_this @ 0x180045C80
 * Callers:
 *     ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001C590 (-WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?_Destroy@?$_Ref_count_obj@V?$function@$$A6AXXZ@std@@@std@@EEAAXXZ @ 0x18001C880 (-_Destroy@-$_Ref_count_obj@V-$function@$$A6AXXZ@std@@@std@@EEAAXXZ.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800452B0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Delete_this(
        _QWORD *a1,
        char a2)
{
  int *v4; // r10
  unsigned int (__fastcall *v5)(__int64); // rax
  _DWORD *v6; // rcx
  _DWORD *v7; // r10
  Microsoft::WRL::Details::WeakReferenceImpl *(__fastcall *v8)(Microsoft::WRL::Details::WeakReferenceImpl *, char); // rax

  v4 = (int *)a1[1];
  if ( v4 )
  {
    a1[1] = 0LL;
    v5 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL);
    if ( v5 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
    {
      if ( !ATL::SafeDecrementReferenceMultiThread(v4 + 3) )
      {
        v8 = *(Microsoft::WRL::Details::WeakReferenceImpl *(__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, char))(*(_QWORD *)v7 + 32LL);
        if ( v8 == Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor' )
        {
          *(_QWORD *)v7 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
          v7[4] = -1073741823;
          *v6 = -1073741823;
          operator delete(v7, (const struct std::nothrow_t *)0x20);
        }
        else
        {
          v8((Microsoft::WRL::Details::WeakReferenceImpl *)v7, 1);
        }
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    else
    {
      v5((__int64)v4);
    }
  }
  if ( a2 )
    std::_Deallocate(a1, 1uLL, 0x10uLL);
}
