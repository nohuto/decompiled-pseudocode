/*
 * XREFs of ??$_Move_impl@V?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@@_Any_small_RTTI@std@@SAXQEAX0@Z @ 0x18000EE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Any_small_RTTI::_Move_impl<Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 result; // rax

  *a1 = 0LL;
  if ( a1 != a2 )
  {
    result = *a2;
    *a1 = *a2;
    *a2 = 0LL;
  }
  return result;
}
