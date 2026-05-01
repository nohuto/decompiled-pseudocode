/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_673908d937c0411dbdcd60700f9c4b37___ @ 0x18016D844
 * Callers:
 *     ?_CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18016C4CC (-_CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_673908d937c0411dbdcd60700f9c4b37_____lambda_673908d937c0411dbdcd60700f9c4b37___ @ 0x18016DA90 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_673908d937c04.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_673908d937c0411dbdcd60700f9c4b37___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_673908d937c0411dbdcd60700f9c4b37_____lambda_673908d937c0411dbdcd60700f9c4b37___(&v6);
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
