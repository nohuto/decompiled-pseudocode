/*
 * XREFs of ?GetTitleInternal@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x180054FC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetTitleInternal(CImmersiveApp *this, unsigned __int16 **a2)
{
  __int64 result; // rax

  *a2 = 0LL;
  result = 2147943568LL;
  if ( *((_QWORD *)this + 39) )
    return (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 38) + 168LL))(**((_QWORD **)this + 38));
  return result;
}
