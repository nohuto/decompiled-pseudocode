/*
 * XREFs of std::_Remove_if_unchecked_CProcessAttributionManager::Record_____ptr64_____ptr64__lambda_25a6e35ac28882ed86e8364a912a7bf9___ @ 0x180145BC4
 * Callers:
 *     ?NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z @ 0x180145F34 (-NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z.c)
 * Callees:
 *     _lambda_25a6e35ac28882ed86e8364a912a7bf9_::operator() @ 0x180145EB4 (_lambda_25a6e35ac28882ed86e8364a912a7bf9_--operator().c)
 */

_QWORD *__fastcall std::_Remove_if_unchecked_CProcessAttributionManager::Record_____ptr64_____ptr64__lambda_25a6e35ac28882ed86e8364a912a7bf9___(
        _QWORD *a1,
        unsigned __int64 a2)
{
  _QWORD *i; // rbx
  _QWORD *v4; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rbp

  for ( i = a1; i != (_QWORD *)a2; ++i )
  {
    if ( (unsigned __int8)lambda_25a6e35ac28882ed86e8364a912a7bf9_::operator()(a1, *i) )
      break;
  }
  if ( i != (_QWORD *)a2 )
  {
    v4 = i + 1;
    v5 = 0LL;
    v6 = (a2 - (unsigned __int64)(i + 1) + 7) >> 3;
    if ( (unsigned __int64)(i + 1) > a2 )
      v6 = 0LL;
    if ( v6 )
    {
      do
      {
        if ( !(unsigned __int8)lambda_25a6e35ac28882ed86e8364a912a7bf9_::operator()(a1, *v4) )
        {
          a1 = (_QWORD *)*v4;
          *i++ = *v4;
        }
        ++v4;
        ++v5;
      }
      while ( v5 != v6 );
    }
  }
  return i;
}
