/*
 * XREFs of _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$0 @ 0x18005B804
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ @ 0x18007B524 (--1-$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::shared_ptr<SaDeviceReevaluationContext>::~shared_ptr<SaDeviceReevaluationContext>(*(_QWORD *)(a2 + 104));
  }
  return result;
}
