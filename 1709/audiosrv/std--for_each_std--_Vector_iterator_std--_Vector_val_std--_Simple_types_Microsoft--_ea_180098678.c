/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_ff03322a3f89e5994eee42624e4a348b___ @ 0x180098678
 * Callers:
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x18009B5B0 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

_BYTE *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_ff03322a3f89e5994eee42624e4a348b___(
        _BYTE *a1,
        __int64 *a2,
        __int64 *a3,
        char a4)
{
  __int64 *i; // r14
  __int64 v8; // rcx
  __int64 (__fastcall **v10)(); // [rsp+20h] [rbp-48h] BYREF
  char v11; // [rsp+28h] [rbp-40h]
  __int64 (__fastcall ***v12)(); // [rsp+58h] [rbp-10h]

  for ( i = a2; i != a3; ++i )
  {
    v8 = *i;
    v10 = off_1800F4518;
    v11 = a4;
    v12 = &v10;
    (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)v8 + 384LL))(v8, &v10);
  }
  *a1 = a4;
  return a1;
}
