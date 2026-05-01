/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7f0a6929dbfe8abbeb4e668c09356fe3_____lambda_7f0a6929dbfe8abbeb4e668c09356fe3___ @ 0x180219D58
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_0a797daff9b242b959bbd8d51d98a883___ @ 0x180219F20 (CreationThreadDispatcher--RunAsync__lambda_0a797daff9b242b959bbd8d51d98a883___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7f0a6929dbfe8abbeb4e668c09356fe3_____lambda_7f0a6929dbfe8abbeb4e668c09356fe3___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    *v5 = off_180433F20;
    v6 = a2 + 1;
    v5[2] = *a2;
    *a2 = 0LL;
    v5[3] = 0LL;
    if ( v5 + 3 != a2 + 1 )
    {
      v5[3] = *v6;
      *v6 = 0LL;
    }
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
