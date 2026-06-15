/*
 * XREFs of ?StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x1800CAE70
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x18001DC30 (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::StartStream(CSharedStreamGroupProxy *this)
{
  int v2; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10));
  if ( v2 >= 0 )
  {
    ++*((_DWORD *)this + 68);
    CSharedStreamGroupProxy::UpdateAuxiliaryStreamState((CSharedStreamGroupProxy *)((char *)this - 8));
  }
  return (unsigned int)v2;
}
