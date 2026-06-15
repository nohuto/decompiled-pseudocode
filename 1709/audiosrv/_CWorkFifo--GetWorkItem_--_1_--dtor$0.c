/*
 * XREFs of _CWorkFifo::GetWorkItem_::_1_::dtor$0 @ 0x1800C0867
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ @ 0x18005AF54 (--1-$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ.c)
 */

void __fastcall CWorkFifo::GetWorkItem_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::shared_ptr<SaDeviceReevaluationContext>::~shared_ptr<SaDeviceReevaluationContext>(*(_QWORD *)(a2 + 72));
  }
}
