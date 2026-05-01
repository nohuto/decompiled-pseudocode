/*
 * XREFs of ?get_FrameworkViewType@Win32BackedViewHostItem@@UEAAJPEAH@Z @ 0x180107E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32BackedViewHostItem::get_FrameworkViewType(Win32BackedViewHostItem *this, int *a2)
{
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 6;
  if ( *((_DWORD *)this + 33) == 6 )
  {
    v4 = *((_QWORD *)this + 13);
    v6 = 6;
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 376LL))(v4, &v6) >= 0 )
      *((_DWORD *)this + 33) = v6;
  }
  *a2 = *((_DWORD *)this + 33);
  return 0LL;
}
