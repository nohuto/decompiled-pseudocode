/*
 * XREFs of _CCaptureNotifier::AcquireReference_::_1_::dtor$0 @ 0x18009D69B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VCSebReference@@@std@@QEAA@XZ @ 0x18005B958 (--1-$shared_ptr@VCSebReference@@@std@@QEAA@XZ.c)
 */

void __fastcall CCaptureNotifier::AcquireReference_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::shared_ptr<CSebReference>::~shared_ptr<CSebReference>(*(_QWORD *)(a2 + 104));
  }
}
