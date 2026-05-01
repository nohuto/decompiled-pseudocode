/*
 * XREFs of ?InvokeCharms@CImmersiveApp@@UEAAJXZ @ 0x1800526A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::InvokeCharms(CImmersiveApp *this)
{
  __int64 result; // rax

  result = 1LL;
  if ( *((_BYTE *)this + 599) )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 208LL))(*((_QWORD *)this + 36));
  return result;
}
