/*
 * XREFs of ??$_Copy_impl@V?$ComPtr@VBamoAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@_Any_small_RTTI@std@@SAXQEAXQEBX@Z @ 0x18000EDD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Any_small_RTTI::_Copy_impl<Microsoft::WRL::ComPtr<BamoAttachableInputObjectSampleProxy>>(
        _QWORD *a1,
        __int64 (__fastcall ****a2)(_QWORD))
{
  __int64 (__fastcall ***v2)(_QWORD); // r8
  __int64 result; // rax

  v2 = *a2;
  *a1 = *a2;
  if ( v2 )
    return (**v2)(v2);
  return result;
}
