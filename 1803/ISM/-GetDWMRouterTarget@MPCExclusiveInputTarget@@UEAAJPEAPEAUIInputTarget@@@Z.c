/*
 * XREFs of ?GetDWMRouterTarget@MPCExclusiveInputTarget@@UEAAJPEAPEAUIInputTarget@@@Z @ 0x180087790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCExclusiveInputTarget::GetDWMRouterTarget(MPCExclusiveInputTarget *this, struct IInputTarget **a2)
{
  struct IInputTarget *v4; // rcx
  __int64 result; // rax

  v4 = (struct IInputTarget *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct IInputTarget *)*((_QWORD *)this + 6);
  }
  result = 0LL;
  *a2 = v4;
  return result;
}
