/*
 * XREFs of ?HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z @ 0x1C009D484
 * Callers:
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C002AEC0 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 * Callees:
 *     memmove @ 0x1C003D680 (memmove.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryInterfaceForPowerThread(
        FxPkgPnp *this,
        FxIrp *Irp,
        unsigned __int8 *CompleteRequest)
{
  FxPkgPnp_vtbl *v3; // rax
  __int64 result; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int16 Size; // ax
  unsigned int v9; // ebx

  v3 = this->__vftable;
  *CompleteRequest = 1;
  result = ((__int64 (__fastcall *)(FxPkgPnp *))v3->SendIrpSynchronously)(this);
  if ( (_DWORD)result == -1073741637 )
  {
    CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->Parameters.QueryInterface.Version == 1
      && (Size = this->m_PowerThreadInterface.Interface.Size,
          CurrentStackLocation->Parameters.QueryInterface.Size >= Size) )
    {
      memmove(CurrentStackLocation->Parameters.SetFile.FileObject, &this->m_PowerThreadInterface, Size);
      v9 = 0;
      this->m_PowerThreadInterface.Interface.InterfaceReference(this->m_PowerThreadInterface.Interface.Context);
    }
    else
    {
      return (unsigned int)-1073741306;
    }
    return v9;
  }
  return result;
}
