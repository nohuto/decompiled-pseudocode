/*
 * XREFs of ?SetViewId@CAudioStream@@QEAAXI@Z @ 0x18005A5FC
 * Callers:
 *     ?SetViewId@CAudioSession@@UEAAJI@Z @ 0x180018480 (-SetViewId@CAudioSession@@UEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioStream::SetViewId(CAudioStream *this, int a2)
{
  __int64 v2; // rcx

  *((_DWORD *)this + 20) = a2;
  v2 = *((_QWORD *)this + 26);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
}
