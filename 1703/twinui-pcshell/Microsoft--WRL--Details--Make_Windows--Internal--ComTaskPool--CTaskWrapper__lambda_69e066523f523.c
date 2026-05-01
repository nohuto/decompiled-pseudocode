/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c_____lambda_69e066523f5234eeae6ba20c33bcef6c___ @ 0x18018CEFC
 * Callers:
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_69e066523f5234eeae6ba20c33bcef6c___ @ 0x18018CD28 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_69e066523f5234eeae6ba20c33bcef6c___.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c_____lambda_69e066523f5234eeae6ba20c33bcef6c___ @ 0x18018CF5C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___--CTaskW.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c_____lambda_69e066523f5234eeae6ba20c33bcef6c___(
        __int64 *a1,
        __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rdi

  *a1 = 0LL;
  v4 = operator new(0x170uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c_____lambda_69e066523f5234eeae6ba20c33bcef6c___(
           v4,
           a2);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
