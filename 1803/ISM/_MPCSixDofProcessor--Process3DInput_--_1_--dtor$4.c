/*
 * XREFs of _MPCSixDofProcessor::Process3DInput_::_1_::dtor$4 @ 0x1800E533F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB68 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall MPCSixDofProcessor::Process3DInput_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 168) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 168) &= ~1u;
    return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(a2 + 176));
  }
  return result;
}
