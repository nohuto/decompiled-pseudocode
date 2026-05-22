/*
 * XREFs of ??1CursorNotificationProcessor@@QEAA@XZ @ 0x180017120
 * Callers:
 *     ??_EWin32kInterop@@UEAAPEAXI@Z @ 0x18000F4F0 (--_EWin32kInterop@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CursorNotificationProcessor::~CursorNotificationProcessor(CursorNotificationProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _QWORD *v4; // rcx

  if ( *((_QWORD *)this + 2) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
  if ( *((_QWORD *)this + 4) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *(_QWORD **)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  }
}
