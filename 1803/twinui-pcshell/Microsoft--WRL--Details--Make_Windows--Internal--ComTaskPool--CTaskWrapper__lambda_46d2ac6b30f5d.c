/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46d2ac6b30f5d317ef4bcc4e3f77555a__&___ptr64___lambda_46d2ac6b30f5d317ef4bcc4e3f77555a__&___ptr64_ @ 0x1802E81A8
 * Callers:
 *     ?OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z @ 0x1802E9A30 (-OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46d2ac6b30f5d317ef4bcc4e3f77555a______ptr64___lambda_46d2ac6b30f5d317ef4bcc4e3f77555a______ptr64_(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    *v5 = off_180349DE0;
    v5[2] = *(_QWORD *)a2;
    v5[3] = *(_QWORD *)(a2 + 8);
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v5 + 3);
    *((_OWORD *)v5 + 2) = *(_OWORD *)(a2 + 16);
    *((_DWORD *)v5 + 12) = *(_DWORD *)(a2 + 32);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
