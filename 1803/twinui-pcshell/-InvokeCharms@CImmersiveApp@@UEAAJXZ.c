/*
 * XREFs of ?InvokeCharms@CImmersiveApp@@UEAAJXZ @ 0x18012EFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::InvokeCharms(CImmersiveApp *this)
{
  __int64 result; // rax

  result = 1LL;
  if ( *((_BYTE *)this + 623) )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 208LL))(*((_QWORD *)this + 39));
  return result;
}
