/*
 * XREFs of ?HitTest@OneCoreUAPInputHost@@UEAAJPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180004970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OneCoreUAPInputHost::HitTest(OneCoreUAPInputHost *this, struct tagDITCALLBACKSTRUCT *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)Win32kInterop::s_pInterop + 7) + 48LL))(*((_QWORD *)Win32kInterop::s_pInterop + 7));
  if ( (int)result >= 0 )
  {
    if ( *((_QWORD *)a2 + 4) )
      *((_DWORD *)a2 + 44) |= 1u;
  }
  return result;
}
