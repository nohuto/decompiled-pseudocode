/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_2c3a81127ec11b603f32deec9cb27abe__&___ptr64_ @ 0x1800B99B0
 * Callers:
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1800B77A0 (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c3a81127ec11b603f32deec9cb27abe__&___ptr64___lambda_2c3a81127ec11b603f32deec9cb27abe__&___ptr64_ @ 0x1800B9D0C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2c3a81127ec11.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_2c3a81127ec11b603f32deec9cb27abe______ptr64_(
        _QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c3a81127ec11b603f32deec9cb27abe______ptr64___lambda_2c3a81127ec11b603f32deec9cb27abe______ptr64_(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
