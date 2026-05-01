/*
 * XREFs of ?get_FrameworkViewType@ApplicationViewBackedViewHostItem@@UEAAJPEAH@Z @ 0x18010DA20
 * Callers:
 *     ?RaiseFrameworkViewTypeSet@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x18010E930 (-RaiseFrameworkViewTypeSet@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::get_FrameworkViewType(
        ApplicationViewBackedViewHostItem *this,
        int *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = *((_DWORD *)this + 44);
  if ( *((_DWORD *)this + 44) == 6 )
  {
    v4 = *((_QWORD *)this + 14);
    v7 = 6;
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 376LL))(v4, &v7) >= 0 )
    {
      v5 = v7;
      if ( v7 != 6 )
      {
        *a2 = v7;
        *((_DWORD *)this + 44) = v5;
      }
    }
  }
  return 0LL;
}
