/*
 * XREFs of ?OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18002BD60
 * Callers:
 *     ?StartStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x180007DB0 (-StartStream@CProcessSubmixProxy@@UEAAJ_K@Z.c)
 * Callees:
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x18002BD7C (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::OnProcessSubmixStarted(
        CSharedStreamGroupProxy *this,
        struct IProcessSubmixProxy *a2)
{
  ++*((_DWORD *)this + 60);
  CSharedStreamGroupProxy::UpdateAuxiliaryStreamState((CSharedStreamGroupProxy *)((char *)this - 8));
  return 0LL;
}
