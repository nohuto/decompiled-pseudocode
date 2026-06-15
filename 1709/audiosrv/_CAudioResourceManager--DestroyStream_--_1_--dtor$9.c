/*
 * XREFs of _CAudioResourceManager::DestroyStream_::_1_::dtor$9 @ 0x1800384D7
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18005B1C8 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 */

__int64 __fastcall CAudioResourceManager::DestroyStream_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 96) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 96) &= ~1u;
    return std::_Func_class<void,>::~_Func_class<void,>(a2 + 208);
  }
  return result;
}
