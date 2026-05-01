/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b88b1fef1c8f048fc62b8eb3823c7c67_____lambda_b88b1fef1c8f048fc62b8eb3823c7c67___ @ 0x180119240
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b88b1fef1c8f048fc62b8eb3823c7c67___ @ 0x1801194B4 (Windows--Internal--ComTaskPool--QueueTask__lambda_b88b1fef1c8f048fc62b8eb3823c7c67___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b88b1fef1c8f048fc62b8eb3823c7c67_____lambda_b88b1fef1c8f048fc62b8eb3823c7c67___(
        _QWORD *a1,
        char *a2)
{
  char *v4; // rax
  char *v5; // rbx

  *a1 = 0LL;
  v4 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    *(_QWORD *)v5 = off_180325488;
    *((_QWORD *)v5 + 2) = 0LL;
    if ( v5 + 16 != a2 )
    {
      *((_QWORD *)v5 + 2) = *(_QWORD *)a2;
      *(_QWORD *)a2 = 0LL;
    }
    *(_OWORD *)(v5 + 24) = *(_OWORD *)(a2 + 8);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
