/*
 * XREFs of ?OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18002BD40
 * Callers:
 *     ?StopStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x180007D40 (-StopStream@CProcessSubmixProxy@@UEAAJ_K@Z.c)
 * Callees:
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x18002BD7C (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::OnProcessSubmixStopped(
        CSharedStreamGroupProxy *this,
        struct IProcessSubmixProxy *a2)
{
  --*((_DWORD *)this + 60);
  CSharedStreamGroupProxy::UpdateAuxiliaryStreamState((CSharedStreamGroupProxy *)((char *)this - 8));
  return 0LL;
}
