/*
 * XREFs of ?Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z @ 0x1C00D7FB8
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qDxD @ 0x1C007C5B4 (WPP_IFR_SF_qDxD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8810 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall FxRequest::Vf_VerifyCompleteInternal(FxRequest *this, _FX_DRIVER_GLOBALS *Status, int FxDriverGlobals)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  __int16 m_VerifierFlags; // ax
  const void *_a1; // rcx
  FxIrp *p_m_Irp; // r15
  _IRP *m_Irp; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int id; // esi
  unsigned __int8 v13; // dl
  unsigned __int64 flags; // rcx
  unsigned __int16 *p_m_ObjectSize; // rbx
  WDFREQUEST__ *v16; // rdi
  WDFREQUEST__ *v17; // rax
  _IRP *v18; // rdx
  bool v19; // zf
  _FX_DRIVER_GLOBALS *v20; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-78h]
  _WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA data; // [rsp+50h] [rbp-48h] BYREF
  _FX_DRIVER_GLOBALS *irql; // [rsp+A8h] [rbp+10h] OVERLAPPED BYREF

  irql = Status;
  FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql, FxDriverGlobals);
  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierIO && m_Globals->FxVerifierOn )
    FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
  m_VerifierFlags = this->m_VerifierFlags;
  if ( (m_VerifierFlags & 0x10) != 0 && (m_VerifierFlags & 0x40) == 0 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(*p_m_Globals, 2u, 0x10u, 0xEu, WPP_FxRequest_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(*p_m_Globals);
  }
  p_m_Irp = &this->m_Irp;
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MajorFunction == 3 || CurrentStackLocation->MajorFunction == 4 )
  {
    id = CurrentStackLocation->Parameters.Read.Length;
  }
  else
  {
    if ( CurrentStackLocation->MajorFunction != 14 )
      goto LABEL_14;
    if ( m_Irp->RequestorMode != 1 )
      goto LABEL_14;
    id = CurrentStackLocation->Parameters.Read.Length;
    if ( !id )
      goto LABEL_14;
  }
  if ( FxDriverGlobals >= 0 )
  {
    flags = m_Irp->IoStatus.Information;
    if ( flags > id )
    {
      p_m_ObjectSize = &this->m_ObjectSize;
      v16 = (WDFREQUEST__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v17 = v16;
      if ( !*p_m_ObjectSize )
        v17 = 0LL;
      WPP_IFR_SF_qDxD(
        *p_m_Globals,
        (unsigned __int8)CurrentStackLocation,
        (unsigned int)m_Irp,
        CurrentStackLocation->MajorFunction,
        traceGuid,
        v17,
        CurrentStackLocation->MajorFunction,
        flags,
        id);
      v18 = p_m_Irp->m_Irp;
      v19 = *p_m_ObjectSize == 0;
      v20 = *p_m_Globals;
      data.Irp = p_m_Irp->m_Irp;
      if ( v19 )
        v16 = 0LL;
      data.Request = v16;
      data.OutputBufferLength = id;
      data.Information = v18->IoStatus.Information;
      data.MajorFunction = v18->Tail.Overlay.CurrentStackLocation->MajorFunction;
      FxVerifierBugCheckWorker(v20, WDF_REQUEST_FATAL_ERROR, 4uLL, (ULONG_PTR)&data);
    }
  }
LABEL_14:
  v13 = (unsigned __int8)irql;
  this->m_Completed = 1;
  FxNonPagedObject::Unlock(this, v13, (unsigned __int8)m_Irp);
}
