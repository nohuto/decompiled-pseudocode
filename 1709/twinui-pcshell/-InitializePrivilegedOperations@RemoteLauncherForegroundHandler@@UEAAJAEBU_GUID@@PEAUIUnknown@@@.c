/*
 * XREFs of ?InitializePrivilegedOperations@RemoteLauncherForegroundHandler@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1800DDC80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RemoteLauncherForegroundHandler::InitializePrivilegedOperations(
        RemoteLauncherForegroundHandler *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx

  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2 )
  {
    v4 = (_QWORD *)((char *)this + 64);
    v5 = *((_QWORD *)this + 8);
    if ( v5 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    ((void (__fastcall *)(struct IUnknown *, GUID *, _QWORD *))a3->lpVtbl->QueryInterface)(
      a3,
      &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2,
      v4);
  }
  return 0LL;
}
