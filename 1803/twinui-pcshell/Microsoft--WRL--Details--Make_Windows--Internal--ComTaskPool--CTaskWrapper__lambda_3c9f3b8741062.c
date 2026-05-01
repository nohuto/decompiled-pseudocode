/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c9f3b8741062b29cb4eaa4663372faf_____lambda_3c9f3b8741062b29cb4eaa4663372faf___ @ 0x180143604
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3c9f3b8741062b29cb4eaa4663372faf___ @ 0x1801437DC (Windows--Internal--ComTaskPool--QueueTask__lambda_3c9f3b8741062b29cb4eaa4663372faf___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c9f3b8741062b29cb4eaa4663372faf_____lambda_3c9f3b8741062b29cb4eaa4663372faf___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax

  *a1 = 0LL;
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    *v5 = off_180327A10;
    v5[2] = *(_QWORD *)a2;
    v5[3] = *(_QWORD *)(a2 + 8);
    *((_BYTE *)v5 + 32) = *(_BYTE *)(a2 + 16);
    v6 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = 0LL;
    v5[5] = v6;
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
