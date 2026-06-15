/*
 * XREFs of _lambda_5ce815ae0cdec547ed542fdaed3a7314_::_lambda_invoker_cdecl_ @ 0x180010BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000B31C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall lambda_5ce815ae0cdec547ed542fdaed3a7314_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  void *v4; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(Context + 568);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (void *)*((_QWORD *)Context + 76);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)Context + 76) = 0LL;
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
}
