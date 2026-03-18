/*
 * XREFs of ?_PnpQueryBusInformation@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C003A620
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C002B79C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryBusInformation(FxPkgPnp *This, FxIrp *Irp)
{
  __int64 v4; // rbx
  _FX_DRIVER_GLOBALS *v5; // r14
  _QWORD *PoolWithTag; // rax
  unsigned int Status; // esi
  __int64 v9; // rdx
  __int64 v10; // rax
  const void *_a1; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)&This->m_DeviceBase[1].m_ObjectFlags + 648LL);
  if ( *(_DWORD *)(v4 + 1104) )
  {
    v5 = *(_FX_DRIVER_GLOBALS **)(v4 + 16);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, v5->Tag);
    if ( PoolWithTag )
    {
      Status = 0;
      *(_OWORD *)PoolWithTag = *(_OWORD *)(v4 + 1104);
      PoolWithTag[2] = *(_QWORD *)(v4 + 1120);
      Irp->m_Irp->IoStatus.Information = (unsigned __int64)PoolWithTag;
    }
    else
    {
      Status = -1073741670;
      Irp->m_Irp->IoStatus.Information = 0LL;
      v9 = *(_QWORD *)(v4 + 96);
      v10 = *(unsigned __int16 *)(v9 + 10);
      _a1 = (const void *)(v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !(_WORD)v10 )
        _a1 = 0LL;
      WPP_IFR_SF_qd(v5, 2u, 0xCu, 0x1Bu, WPP_FxPkgPnp_cpp_Traceguids, _a1, -1073741670);
    }
  }
  else
  {
    Status = Irp->m_Irp->IoStatus.Status;
  }
  return FxPkgPnp::CompletePnpRequest(This, Irp, Status);
}
