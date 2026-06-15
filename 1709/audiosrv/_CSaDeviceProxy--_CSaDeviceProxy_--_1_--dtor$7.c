/*
 * XREFs of _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$7 @ 0x180038191
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18005B1C8 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 */

__int64 __fastcall CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor_7(__int64 a1, __int64 a2)
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
