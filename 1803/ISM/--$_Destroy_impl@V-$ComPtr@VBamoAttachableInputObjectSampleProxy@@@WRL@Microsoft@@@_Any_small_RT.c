/*
 * XREFs of ??$_Destroy_impl@V?$ComPtr@VBamoAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@_Any_small_RTTI@std@@SAXQEAX@Z @ 0x18000EDA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Any_small_RTTI::_Destroy_impl<Microsoft::WRL::ComPtr<BamoAttachableInputObjectSampleProxy>>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return result;
}
