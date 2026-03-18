/*
 * XREFs of ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C0009F40
 * Callers:
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1C0006FC0 (imp_WdfRequestRetrieveInputBuffer.c)
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C00070D0 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfRequestRetrieveInputMemory @ 0x1C0078EE0 (imp_WdfRequestRetrieveInputMemory.c)
 *     imp_WdfRequestRetrieveOutputMemory @ 0x1C0079080 (imp_WdfRequestRetrieveOutputMemory.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C007BBF0 (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_Dqq @ 0x1C007C4C8 (WPP_IFR_SF_Dqq.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D8810 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetMemoryObject(
        FxRequest *this,
        FxRequestSystemBuffer **MemoryObject,
        void **Buffer,
        unsigned __int64 *Length)
{
  unsigned __int64 *v5; // r14
  int v7; // esi
  bool v8; // bp
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  void **v10; // r15
  unsigned int Options; // edi
  unsigned __int8 MajorFunction; // r12
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  PVOID MappedSystemVa; // rax
  int IsNotCompleted; // eax
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int64 _a2; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx
  FxDeviceBase *v22; // rdx
  const void *v23; // rcx
  unsigned __int16 v24; // ax
  const void *v25; // rdx
  unsigned __int16 v26; // r9
  const void *v27; // rcx
  FxDeviceBase *v28; // rdx
  const void *v29; // rcx
  unsigned __int16 v30; // ax
  const void *v31; // rdx
  __int64 MdlAddress; // r12
  PVOID v33; // rax
  const void *v34; // rcx
  _MDL *v35; // rcx
  _MDL *m_Mdl; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  int v38; // [rsp+40h] [rbp-38h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  v5 = Length;
  LOBYTE(Length) = 0;
  irql = 0;
  v7 = 0;
  v8 = 0;
  m_Globals = this->m_Globals;
  v10 = Buffer;
  Options = 0;
  MajorFunction = this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( m_Globals->FxVerifierIO )
  {
    if ( m_Globals->FxVerifierOn )
    {
      IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
      LOWORD(Length) = irql;
      v7 = IsNotCompleted;
      if ( IsNotCompleted < 0 )
        goto $Done_3;
    }
    if ( this->m_Irp.m_Irp->RequestorMode == 1 && (unsigned __int8)(MajorFunction - 3) <= 1u )
    {
      m_DeviceBase = this->m_DeviceBase;
      if ( m_DeviceBase[1].m_Refcnt == 1 )
      {
        v7 = -1073741808;
        _a2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        if ( !this->m_ObjectSize )
          _a2 = 0LL;
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qid(this->m_Globals, 2u, 0x10u, 0x19u, WPP_FxRequest_cpp_Traceguids, _a1, _a2, -1073741808);
        WPP_IFR_SF_(this->m_Globals, 2u, 0x10u, 0x1Au, WPP_FxRequest_cpp_Traceguids);
        FxVerifierDbgBreakPoint(this->m_Globals);
        LOWORD(Length) = irql;
      }
    }
  }
  if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Buffer);
    LOWORD(Length) = irql;
  }
  LOBYTE(Buffer) = MajorFunction;
  if ( MajorFunction == 14 )
  {
LABEL_5:
    m_Irp = this->m_Irp.m_Irp;
    CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
    Options = CurrentStackLocation->Parameters.Create.Options;
    if ( !Options )
    {
      v7 = -1073741789;
      v26 = 27;
      v27 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v27 = 0LL;
      goto LABEL_54;
    }
    LODWORD(Buffer) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart & 3) == 3
      && m_Irp->RequestorMode
      && MajorFunction != 15 )
    {
      v7 = -1073741808;
      v28 = this->m_DeviceBase;
      v29 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v30 = v28->m_ObjectSize;
      if ( !this->m_ObjectSize )
        v29 = 0LL;
      v31 = (const void *)((unsigned __int64)v28 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v30 )
        v31 = 0LL;
      WPP_IFR_SF_Dqqd(
        this->m_Globals,
        (unsigned __int8)v31,
        (unsigned int)Buffer,
        0x1Cu,
        WPP_FxRequest_cpp_Traceguids,
        (unsigned int)Buffer,
        v31,
        v29,
        v38);
      WPP_IFR_SF_d(this->m_Globals, 2u, 0x10u, 0x1Du, WPP_FxRequest_cpp_Traceguids, -1073741808);
      LOBYTE(Length) = irql;
      goto $Done_3;
    }
    goto LABEL_7;
  }
  if ( MajorFunction != 3 && MajorFunction != 4 )
  {
    if ( MajorFunction != 15 )
    {
      v22 = this->m_DeviceBase;
      v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v24 = v22->m_ObjectSize;
      if ( !this->m_ObjectSize )
        v23 = 0LL;
      v25 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v24 )
        v25 = 0LL;
      WPP_IFR_SF_Dqq(
        this->m_Globals,
        (unsigned __int8)v25,
        MajorFunction,
        (unsigned __int16)Length,
        traceGuid,
        MajorFunction,
        v25,
        v23);
      FxVerifierDbgBreakPoint(this->m_Globals);
      LOBYTE(Length) = irql;
      v7 = -1073741808;
      goto $Done_3;
    }
    goto LABEL_5;
  }
  m_Irp = this->m_Irp.m_Irp;
  Options = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v8 = this->m_DeviceBase[1].m_Refcnt == 3;
LABEL_7:
  if ( !Options )
  {
    v7 = -1073741789;
    v26 = 31;
    v27 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v27 = 0LL;
    goto LABEL_54;
  }
  if ( !v8 || (this->m_RequestBaseFlags & 1) != 0 )
    goto $Done_3;
  MdlAddress = (__int64)m_Irp->MdlAddress;
  if ( !MdlAddress )
  {
    v7 = -1073741789;
    v26 = 32;
    v27 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v27 = 0LL;
LABEL_54:
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, v26, WPP_FxRequest_cpp_Traceguids, v27, -1073741789);
    LOBYTE(Length) = irql;
    goto $Done_3;
  }
  if ( (*(_BYTE *)(MdlAddress + 10) & 5) != 0 )
  {
    v33 = *(PVOID *)(MdlAddress + 24);
  }
  else
  {
    v33 = MmMapLockedPagesSpecifyCache((PMDL)MdlAddress, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
    LOBYTE(Length) = irql;
  }
  if ( v33 )
  {
    v35 = this->m_Irp.m_Irp->MdlAddress;
    this->m_RequestBaseFlags |= 1u;
    this->m_SystemBuffer.m_Buffer = v35;
  }
  else
  {
    v7 = -1073741670;
    v34 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v34 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0x10u, 0x21u, WPP_FxRequest_cpp_Traceguids, v34, MdlAddress, -1073741670);
    LOBYTE(Length) = irql;
  }
$Done_3:
  if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
    FxNonPagedObject::Unlock(this, (unsigned __int8)Length, (unsigned __int8)Buffer);
  if ( v7 >= 0 )
  {
    *MemoryObject = &this->m_SystemBuffer;
    if ( v8 )
    {
      m_Mdl = this->m_SystemBuffer.m_Mdl;
      if ( (m_Mdl->MdlFlags & 5) != 0 )
        MappedSystemVa = m_Mdl->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(m_Mdl, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
    }
    else
    {
      MappedSystemVa = this->m_SystemBuffer.m_Buffer;
    }
    *v10 = MappedSystemVa;
    *v5 = Options;
  }
  return (unsigned int)v7;
}
