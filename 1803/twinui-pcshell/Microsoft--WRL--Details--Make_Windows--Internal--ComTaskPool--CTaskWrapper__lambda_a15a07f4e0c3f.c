/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a15a07f4e0c3f5666a19ba90306a96ee__&___ptr64___lambda_a15a07f4e0c3f5666a19ba90306a96ee__&___ptr64_ @ 0x180128CCC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a15a07f4e0c3f5666a19ba90306a96ee__&___ptr64_ @ 0x180128F20 (Windows--Internal--ComTaskPool--QueueTask__lambda_a15a07f4e0c3f5666a19ba90306a96ee__-___ptr64_.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a15a07f4e0c3f5666a19ba90306a96ee______ptr64___lambda_a15a07f4e0c3f5666a19ba90306a96ee______ptr64_(
        _QWORD *a1,
        __int64 a2)
{
  _OWORD *v4; // rax
  _OWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    *(_QWORD *)v5 = off_1803264B8;
    v5[1] = *(_OWORD *)a2;
    v5[2] = *(_OWORD *)(a2 + 16);
    *((_QWORD *)v5 + 6) = *(_QWORD *)(a2 + 32);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
