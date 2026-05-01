/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_2647a080773a9fa4ef6a91f024d7dfff___ @ 0x18006AE34
 * Callers:
 *     ?Destroy@CFrameApplicationPresentation@@UEAAJXZ @ 0x180068BF0 (-Destroy@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2647a080773a9fa4ef6a91f024d7dfff_____lambda_2647a080773a9fa4ef6a91f024d7dfff___ @ 0x18006CC78 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2647a080773a9.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_2647a080773a9fa4ef6a91f024d7dfff___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2647a080773a9fa4ef6a91f024d7dfff_____lambda_2647a080773a9fa4ef6a91f024d7dfff___(&v6);
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
