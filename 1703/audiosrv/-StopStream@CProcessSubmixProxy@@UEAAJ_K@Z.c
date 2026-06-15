/*
 * XREFs of ?StopStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x180007D40
 * Callers:
 *     ?Stop@CAudioStream@@UEAAJXZ @ 0x1800192D0 (-Stop@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     ?OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18002BD40 (-OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessSubmixProxy::StopStream(CProcessSubmixProxy *this)
{
  int v2; // ecx
  CSharedStreamGroupProxy *v3; // rcx
  __int64 (__fastcall *v4)(CSharedStreamGroupProxy *__hidden, struct IProcessSubmixProxy *); // rax

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5));
  v2 = *((_DWORD *)this + 31);
  *((_DWORD *)this + 31) = v2 - 1;
  if ( v2 == 1 )
  {
    v3 = (CSharedStreamGroupProxy *)*((_QWORD *)this + 19);
    v4 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *__hidden, struct IProcessSubmixProxy *))(*(_QWORD *)v3 + 360LL);
    if ( v4 == CSharedStreamGroupProxy::OnProcessSubmixStopped )
      CSharedStreamGroupProxy::OnProcessSubmixStopped(v3, this);
    else
      v4(v3, this);
  }
  return 0LL;
}
