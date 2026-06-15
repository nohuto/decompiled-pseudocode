/*
 * XREFs of ?StopStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x180044850
 * Callers:
 *     ?Stop@CAudioStream@@UEAAJXZ @ 0x1800442C0 (-Stop@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     ?OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x1800450D0 (-OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessSubmixProxy::StopStream(CProcessSubmixProxy *this)
{
  int v2; // ecx
  CSharedStreamGroupProxy *v3; // rcx
  __int64 (__fastcall *v4)(CSharedStreamGroupProxy *__hidden, struct IProcessSubmixProxy *); // rax

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5));
  v2 = *((_DWORD *)this + 30);
  *((_DWORD *)this + 30) = v2 - 1;
  if ( v2 == 1 )
  {
    v3 = (CSharedStreamGroupProxy *)*((_QWORD *)this + 24);
    v4 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *__hidden, struct IProcessSubmixProxy *))(*(_QWORD *)v3 + 352LL);
    if ( v4 == CSharedStreamGroupProxy::OnProcessSubmixStopped )
      CSharedStreamGroupProxy::OnProcessSubmixStopped(v3, this);
    else
      v4(v3, this);
  }
  return 0LL;
}
