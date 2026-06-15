/*
 * XREFs of ?StopStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x180012170
 * Callers:
 *     ?Stop@CAudioStream@@UEAAJXZ @ 0x18001C890 (-Stop@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateActiveStreamCount@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800120DC (-UpdateActiveStreamCount@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessSubmixProxy::StopStream(CProcessSubmixProxy *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5));
  CProcessSubmixProxy::UpdateActiveStreamCount((CProcessSubmixProxy *)((char *)this - 8), -1);
  return 0LL;
}
