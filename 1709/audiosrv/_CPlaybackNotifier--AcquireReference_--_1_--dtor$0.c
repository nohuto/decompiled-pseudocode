/*
 * XREFs of _CPlaybackNotifier::AcquireReference_::_1_::dtor$0 @ 0x1800383DE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VCSebReference@@@std@@QEAA@XZ @ 0x18005B958 (--1-$shared_ptr@VCSebReference@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CPlaybackNotifier::AcquireReference_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::shared_ptr<CSebReference>::~shared_ptr<CSebReference>(*(_QWORD *)(a2 + 104));
  }
  return result;
}
