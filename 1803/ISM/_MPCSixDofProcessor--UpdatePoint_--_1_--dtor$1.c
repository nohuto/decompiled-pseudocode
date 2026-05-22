/*
 * XREFs of _MPCSixDofProcessor::UpdatePoint_::_1_::dtor$1 @ 0x1800E537A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@QEAA@XZ @ 0x180044A9C (--1-$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall MPCSixDofProcessor::UpdatePoint_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return std::shared_ptr<ButtonProcessor::AsynchronousWorkItem>::~shared_ptr<ButtonProcessor::AsynchronousWorkItem>(a2 + 56);
  }
  return result;
}
