/*
 * XREFs of _lambda_5ce815ae0cdec547ed542fdaed3a7314_::_lambda_invoker_cdecl_ @ 0x1800166A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall lambda_5ce815ae0cdec547ed542fdaed3a7314_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  char *v4; // rsi
  DWORD LastError; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(Context + 576);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (char *)*((_QWORD *)Context + 77);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v4);
    SetLastError(LastError);
  }
  *((_QWORD *)Context + 77) = 0LL;
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
}
