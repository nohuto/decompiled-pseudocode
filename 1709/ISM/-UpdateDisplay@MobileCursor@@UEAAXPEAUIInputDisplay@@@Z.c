/*
 * XREFs of ?UpdateDisplay@MobileCursor@@UEAAXPEAUIInputDisplay@@@Z @ 0x180030870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MobileCursor::UpdateDisplay(MobileCursor *this, struct IInputDisplay *a2)
{
  __int64 v4; // rcx

  if ( *((struct IInputDisplay **)this + 4) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 56LL))(
    *((_QWORD *)this + 4),
    (*((_QWORD *)this + 3) + 16LL) & -(__int64)(*((_QWORD *)this + 3) != 0LL));
}
