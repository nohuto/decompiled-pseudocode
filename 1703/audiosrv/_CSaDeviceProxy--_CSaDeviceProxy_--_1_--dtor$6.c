/*
 * XREFs of _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$6 @ 0x180059C65
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18007CCF8 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 */

__int64 __fastcall CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 56) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    return std::_Func_class<void,>::~_Func_class<void,>(a2 + 96);
  }
  return result;
}
