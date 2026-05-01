/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7aef9f6174acb3d73b407d8c046faaf1_____lambda_7aef9f6174acb3d73b407d8c046faaf1___ @ 0x1801169A8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7aef9f6174acb3d73b407d8c046faaf1___ @ 0x180116AD0 (Windows--Internal--ComTaskPool--QueueTask__lambda_7aef9f6174acb3d73b407d8c046faaf1___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7aef9f6174acb3d73b407d8c046faaf1_____lambda_7aef9f6174acb3d73b407d8c046faaf1___(
        _QWORD *a1,
        _DWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    *v5 = off_180324FE8;
    v5[2] = 0LL;
    if ( v5 + 2 != (_QWORD *)a2 )
    {
      v5[2] = *(_QWORD *)a2;
      *(_QWORD *)a2 = 0LL;
    }
    *((_DWORD *)v5 + 6) = a2[2];
    *((_DWORD *)v5 + 7) = a2[3];
    *((_DWORD *)v5 + 8) = a2[4];
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
