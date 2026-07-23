/*
 * XREFs of DbgkLkmdRegisterCallback @ 0x1405CC0E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x1400A5550 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1400A5610 (ExDereferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x1400A5660 (ExGetCallBackBlockRoutine.c)
 *     ExCompareExchangeCallBack @ 0x14014990C (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocateCallBack @ 0x1405CC5FC (ExAllocateCallBack.c)
 */

__int64 __fastcall DbgkLkmdRegisterCallback(__int64 a1, __int64 a2, int a3)
{
  unsigned int i; // ebx
  _RTL_RUN_ONCE *v7; // rsi
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rdi
  struct _EX_RUNDOWN_REF *v10; // rsi
  unsigned int j; // ebx
  __int64 result; // rax

  if ( (a3 & 3) == 3 )
    return 3221225485LL;
  for ( i = 0; i < 8; ++i )
  {
    v7 = &RunOnce + 2 * i;
    v8 = ExReferenceCallBackBlock((signed __int64 *)v7);
    v9 = v8;
    if ( v8 )
    {
      if ( a1 == ExGetCallBackBlockRoutine((__int64)v8) )
      {
        ExDereferenceCallBackBlock((signed __int64 *)v7, v9);
        return 3221227288LL;
      }
      ExDereferenceCallBackBlock((signed __int64 *)v7, v9);
    }
  }
  v10 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, a2);
  if ( !v10 )
    return 3221225495LL;
  for ( j = 0; j < 8; ++j )
  {
    if ( ExCompareExchangeCallBack((signed __int64 *)&RunOnce + 2 * j, v10, 0LL) )
    {
      result = 0LL;
      *((_DWORD *)&RunOnce + 4 * j + 2) = a3;
      return result;
    }
  }
  ExFreePoolWithTag(v10, 0);
  return 3221226539LL;
}
