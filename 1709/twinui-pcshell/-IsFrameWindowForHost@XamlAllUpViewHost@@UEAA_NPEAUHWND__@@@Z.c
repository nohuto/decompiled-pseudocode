/*
 * XREFs of ?IsFrameWindowForHost@XamlAllUpViewHost@@UEAA_NPEAUHWND__@@@Z @ 0x1801592A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall XamlAllUpViewHost::IsFrameWindowForHost(XamlAllUpViewHost *this, HWND a2)
{
  __int64 v2; // rbx
  __int64 i; // rdi

  v2 = *((_QWORD *)this + 19);
  for ( i = *((_QWORD *)this + 18); ; i += 8LL )
  {
    if ( i == v2 )
      return 0;
    if ( (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)i + 56LL) + 40LL))(*(_QWORD *)(*(_QWORD *)i + 56LL)) == a2 )
      break;
  }
  return 1;
}
