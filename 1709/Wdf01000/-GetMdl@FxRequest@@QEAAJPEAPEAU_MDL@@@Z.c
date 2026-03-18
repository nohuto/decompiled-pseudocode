/*
 * XREFs of ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C007B2D4
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0067290 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 *     imp_WdfRequestRetrieveInputWdmMdl @ 0x1C0078FC0 (imp_WdfRequestRetrieveInputWdmMdl.c)
 *     imp_WdfRequestRetrieveOutputWdmMdl @ 0x1C0079170 (imp_WdfRequestRetrieveOutputWdmMdl.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x1C00701C4 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C007BBF0 (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_dqqd @ 0x1C007BD0C (WPP_IFR_SF_dqqd.c)
 *     WPP_IFR_SF_qDqd @ 0x1C007BE70 (WPP_IFR_SF_qDqd.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C0083034 (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8810 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetMdl(FxRequest *this, _MDL **pMdl, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int LowPart; // r8d
  int v7; // esi
  _IRP *m_Irp; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  FxDeviceBase *v10; // r10
  int m_Refcnt; // edx
  void *MasterIrp; // rbp
  unsigned int Options; // esi
  unsigned __int16 v14; // ax
  const void *id; // r10
  const void *level; // rdx
  _MDL *MdlAddress; // rax
  int v18; // r14d
  const void *v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int16 v21; // ax
  const void *v22; // r10
  const void *v23; // rcx
  unsigned __int16 v24; // ax
  const void *v25; // r10
  FxDeviceBase *m_DeviceBase; // rdx
  const void *v27; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v29; // rdx
  _MDL *m_AllocatedMdl; // rax
  _MDL *Debug; // rax
  _MDL *v32; // r15
  unsigned __int8 v34; // dl
  unsigned __int8 v35; // r8
  unsigned __int8 v36; // dl
  unsigned __int16 v37; // r9
  unsigned __int16 v38; // ax
  const void *v39; // rbx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  int globals; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( m_Globals->FxVerifierIO )
  {
    v7 = m_Globals->FxVerifierOn ? FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals) : 0;
    if ( v7 < 0 )
      goto LABEL_52;
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  LOBYTE(LowPart) = CurrentStackLocation->MajorFunction;
  if ( (unsigned __int8)(CurrentStackLocation->MajorFunction - 14) <= 1u )
  {
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (LowPart & 3) == 0 || (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) - 1 < 2 )
    {
      MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
      Options = CurrentStackLocation->Parameters.Create.Options;
      goto LABEL_42;
    }
    m_DeviceBase = this->m_DeviceBase;
    v27 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    if ( !this->m_ObjectSize )
      v27 = 0LL;
    v29 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v29 = 0LL;
    WPP_IFR_SF_Dqqd(
      m_Globals,
      (unsigned __int8)v29,
      LowPart,
      0xAu,
      WPP_FxRequestKm_cpp_Traceguids,
      LowPart,
      v29,
      v27,
      globals);
    WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequestKm_cpp_Traceguids);
LABEL_28:
    v7 = -1073741808;
LABEL_51:
    *pMdl = 0LL;
    goto LABEL_52;
  }
  v10 = this->m_DeviceBase;
  m_Refcnt = v10[1].m_Refcnt;
  if ( m_Refcnt != 2 )
  {
    if ( m_Refcnt == 3 )
    {
      MdlAddress = m_Irp->MdlAddress;
      *pMdl = MdlAddress;
      if ( MdlAddress )
      {
        v18 = 0;
      }
      else
      {
        v18 = -1073741789;
        v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v19 = 0LL;
        WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0xDu, WPP_FxRequestKm_cpp_Traceguids, v19, -1073741789);
      }
      v7 = v18;
      goto LABEL_52;
    }
    if ( m_Refcnt != 1 )
    {
      v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v24 = v10->m_ObjectSize;
      if ( !this->m_ObjectSize )
        v23 = 0LL;
      v25 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v24 )
        v25 = 0LL;
      WPP_IFR_SF_dqqd(
        m_Globals,
        m_Refcnt,
        0x10u,
        0x10u,
        WPP_FxRequestKm_cpp_Traceguids,
        m_Refcnt,
        v25,
        v23,
        -1073741595);
      FxVerifierDbgBreakPoint(m_Globals);
      v7 = -1073741595;
      goto LABEL_51;
    }
    v20 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v21 = v10->m_ObjectSize;
    if ( !this->m_ObjectSize )
      v20 = 0LL;
    v22 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v21 )
      v22 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0x10u, 0xEu, WPP_FxRequestKm_cpp_Traceguids, v22, v20, -1073741808);
    WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0xFu, WPP_FxRequestKm_cpp_Traceguids);
    FxVerifierDbgBreakPoint(m_Globals);
    goto LABEL_28;
  }
  MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
  if ( (unsigned __int8)(LowPart - 3) > 1u )
  {
    v14 = v10->m_ObjectSize;
    id = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v14 )
      id = 0LL;
    level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      level = 0LL;
    WPP_IFR_SF_qDqd(
      m_Globals,
      (unsigned __int8)level,
      (unsigned __int8)LowPart,
      0xEu,
      traceGuid,
      level,
      (unsigned __int8)LowPart,
      id,
      globals);
    v7 = -1073741811;
    goto LABEL_51;
  }
  Options = CurrentStackLocation->Parameters.Read.Length;
LABEL_42:
  if ( !MasterIrp || !Options )
  {
    v36 = irql;
    *pMdl = 0LL;
    FxNonPagedObject::Unlock(this, v36, LowPart);
    if ( MasterIrp )
    {
      if ( Options )
        return 3221225507LL;
      v37 = 18;
    }
    else
    {
      v37 = 17;
    }
    v38 = this->m_ObjectSize;
    v39 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v38 )
      v39 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v37, WPP_FxRequestKm_cpp_Traceguids, v39, -1073741789);
    return 3221225507LL;
  }
  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    *pMdl = m_AllocatedMdl;
    v7 = 0;
LABEL_52:
    FxNonPagedObject::Unlock(this, irql, LowPart);
    return (unsigned int)v7;
  }
  if ( m_Globals->FxVerifierOn )
    Debug = FxMdlAllocateDebug(m_Globals, this, MasterIrp, Options, (unsigned __int8)traceGuid, 0, retaddr);
  else
    Debug = IoAllocateMdl(MasterIrp, Options, 0, 0, 0LL);
  v32 = Debug;
  if ( !Debug )
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x13u, WPP_FxRequestKm_cpp_Traceguids, MasterIrp, Options, -1073741670);
    v7 = -1073741670;
    goto LABEL_51;
  }
  MmBuildMdlForNonPagedPool(Debug);
  v34 = irql;
  this->m_AllocatedMdl = v32;
  *pMdl = v32;
  FxNonPagedObject::Unlock(this, v34, v35);
  return 0LL;
}
