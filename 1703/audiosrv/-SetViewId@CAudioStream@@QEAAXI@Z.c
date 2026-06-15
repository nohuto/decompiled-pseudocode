/*
 * XREFs of ?SetViewId@CAudioStream@@QEAAXI@Z @ 0x18007A2AC
 * Callers:
 *     ?SetViewId@CAudioSession@@UEAAJI@Z @ 0x180002270 (-SetViewId@CAudioSession@@UEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioStream::SetViewId(CAudioStream *this, int a2)
{
  __int64 v2; // rcx

  *((_DWORD *)this + 21) = a2;
  v2 = *((_QWORD *)this + 26);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
}
