/*
 * XREFs of ?UpdateActiveStreamCount@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800120DC
 * Callers:
 *     ?StopStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x180012170 (-StopStream@CProcessSubmixProxy@@UEAAJ_K@Z.c)
 *     ?StartStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x1800121A0 (-StartStream@CProcessSubmixProxy@@UEAAJ_K@Z.c)
 * Callees:
 *     ?OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180029F70 (-OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 */

void __fastcall CProcessSubmixProxy::UpdateActiveStreamCount(CProcessSubmixProxy *this, int a2)
{
  int v2; // r8d
  int v3; // eax
  struct IProcessSubmixProxy *v4; // rdx
  CSharedStreamGroupProxy *v5; // rcx
  __int64 (__fastcall *v6)(CSharedStreamGroupProxy *__hidden, struct IProcessSubmixProxy *); // rax

  v2 = *((_DWORD *)this + 32);
  v3 = v2 + a2;
  *((_DWORD *)this + 32) = v2 + a2;
  if ( !v2 )
  {
    if ( v3 != 1 )
      return;
    v4 = (CProcessSubmixProxy *)((char *)this + 8);
    v5 = (CSharedStreamGroupProxy *)*((_QWORD *)this + 25);
    v6 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *__hidden, struct IProcessSubmixProxy *))(*(_QWORD *)v5 + 344LL);
    if ( v6 == CSharedStreamGroupProxy::OnProcessSubmixStarted )
    {
      CSharedStreamGroupProxy::OnProcessSubmixStarted(v5, v4);
      return;
    }
LABEL_10:
    v6(v5, v4);
    return;
  }
  if ( v2 == 1 && !v3 )
  {
    v4 = (CProcessSubmixProxy *)((char *)this + 8);
    v5 = (CSharedStreamGroupProxy *)*((_QWORD *)this + 25);
    v6 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *__hidden, struct IProcessSubmixProxy *))(*(_QWORD *)v5 + 352LL);
    if ( v6 == CSharedStreamGroupProxy::OnProcessSubmixStopped )
    {
      CSharedStreamGroupProxy::OnProcessSubmixStopped(v5, v4);
      return;
    }
    goto LABEL_10;
  }
}
