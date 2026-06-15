/*
 * XREFs of _CSebNotifier::AcquireSebReference_::_1_::dtor$0 @ 0x18005B869
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VCSebReference@@@std@@QEAA@XZ @ 0x18007C218 (--1-$shared_ptr@VCSebReference@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CSebNotifier::AcquireSebReference_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::shared_ptr<CSebReference>::~shared_ptr<CSebReference>(*(_QWORD *)(a2 + 120));
  }
  return result;
}
