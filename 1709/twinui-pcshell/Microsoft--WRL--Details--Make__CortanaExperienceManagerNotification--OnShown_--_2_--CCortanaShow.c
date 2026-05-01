/*
 * XREFs of Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&___ptr64_ @ 0x1800A8270
 * Callers:
 *     ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x1800A4B60 (-OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A52A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int64 **__fastcall Microsoft::WRL::Details::Make__CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_____ptr64_(
        volatile signed __int64 **a1,
        const __m128i *a2)
{
  __m128i *v4; // rax
  __m128i *v5; // rbx
  __m128i v6; // xmm6

  *a1 = 0LL;
  v4 = (__m128i *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = _mm_loadu_si128(a2);
    v4[1].m128i_i64[1] = 1LL;
    v4->m128i_i64[0] = (__int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::`vftable'{for `Windows::Internal::Shell::Experience::ICortanaShownEventArgs'};
    v4->m128i_i64[1] = (__int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v5->m128i_i64[0] = (__int64)off_180202938;
    v5->m128i_i64[1] = (__int64)off_180202978;
    v5[2] = v6;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(*a1);
    *a1 = (volatile signed __int64 *)v5;
  }
  return a1;
}
