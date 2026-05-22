/*
 * XREFs of _MPCSixDofProcessor::UpdatePoint_::_1_::dtor$0 @ 0x1800CEB37
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@QEAA@XZ @ 0x180039B24 (--1-$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall MPCSixDofProcessor::UpdatePoint_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 224) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 224) &= ~1u;
    return std::shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>::~shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>(a2 + 80);
  }
  return result;
}
