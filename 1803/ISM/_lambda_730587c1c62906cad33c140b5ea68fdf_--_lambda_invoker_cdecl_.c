/*
 * XREFs of _lambda_730587c1c62906cad33c140b5ea68fdf_::_lambda_invoker_cdecl_ @ 0x1800D43A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_730587c1c62906cad33c140b5ea68fdf_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v3; // rdi
  PVOID Ptr; // rbx
  ULONGLONG v6; // rbp
  PVOID v7; // rbx
  PVOID v8; // rcx
  struct _TP_TIMER *v9; // rcx
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp+10h] BYREF

  v3 = Context + 3;
  AcquireSRWLockExclusive(Context + 3);
  LOBYTE(Context[2].Ptr) = 0;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  Ptr = Context[12].Ptr;
  v6 = GetTickCount64() - (_QWORD)Ptr;
  v7 = Context[13].Ptr;
  if ( (unsigned __int64)v7 > v6 )
  {
    AcquireSRWLockExclusive(v3);
    if ( !LOBYTE(Context[2].Ptr) )
    {
      v9 = (struct _TP_TIMER *)Context[1].Ptr;
      LOBYTE(Context[2].Ptr) = 1;
      pftDueTime = (struct _FILETIME)(10000 * (v6 - (_QWORD)v7));
      SetThreadpoolTimer(v9, &pftDueTime, 0, 0);
    }
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
  }
  else
  {
    v8 = Context[11].Ptr;
    if ( !v8 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8 + 16LL))(v8);
  }
}
