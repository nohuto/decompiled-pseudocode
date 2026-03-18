/*
 * XREFs of ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C00694E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C0033744 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     WPP_IFR_SF_qqq @ 0x1C00689B0 (WPP_IFR_SF_qqq.c)
 *     ?InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z @ 0x1C0068F2C (-InvokeProgramDma@FxDmaTransactionProgramOrReserveDma@@QEAAEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVI.c)
 *     WPP_IFR_SF_dqd @ 0x1C006A28C (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qqqD @ 0x1C006A4C8 (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_qqxDq @ 0x1C006A70C (WPP_IFR_SF_qqxDq.c)
 *     WPP_IFR_SF_sqqxx @ 0x1C006AA74 (WPP_IFR_SF_sqqxx.c)
 */

__int64 __fastcall FxDmaPacketTransaction::StageTransfer(FxDmaPacketTransaction *this, __int64 a2, unsigned __int8 a3)
{
  int v4; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // r14
  unsigned __int8 v7; // r8
  _FX_DRIVER_GLOBALS *v8; // rcx
  char v9; // si
  unsigned __int64 m_MaxFragmentLength; // rdx
  unsigned __int64 m_Remaining; // r9
  unsigned __int64 flags; // rdi
  unsigned __int64 v13; // r10
  unsigned int m_MapRegistersReserved; // r8d
  _MDL *m_CurrentFragmentMdl; // rcx
  unsigned __int64 ByteCount; // rax
  unsigned int v17; // r8d
  __int64 v18; // rcx
  unsigned __int64 id; // r10
  _FX_DRIVER_GLOBALS *v20; // r8
  unsigned __int64 v21; // r9
  const char *v22; // rcx
  const void *globals; // rdx
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned __int8 *Alignment; // r12
  unsigned __int8 v26; // dl
  unsigned int v27; // r8d
  unsigned __int16 v28; // r9
  _FX_DRIVER_GLOBALS *v29; // rsi
  const void *v30; // r15
  bool v31; // zf
  unsigned int m_CurrentFragmentLength; // ecx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  const void *ProgramDma; // rdx
  const void *v36; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v39; // r8
  WDFDMATRANSACTION__ *v40; // rdx
  unsigned __int8 v41; // r8
  DMA_COMPLETION_STATUS CompletionStatus; // esi
  unsigned __int8 v43; // dl
  unsigned __int8 v44; // dl
  const void *v45; // rcx
  unsigned __int8 v46; // r8
  unsigned __int8 RerunStaging; // si
  const _GUID *traceGuid; // [rsp+28h] [rbp-59h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int8 sgListBuffer[40]; // [rsp+70h] [rbp-11h] BYREF

  v4 = 0;
  m_Globals = this->m_Globals;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)sgListBuffer = m_Globals;
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x1Au, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1);
  FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, a3);
  if ( this->m_TransferState.CurrentStagingThread )
  {
    v8 = *(_FX_DRIVER_GLOBALS **)sgListBuffer;
    v9 = 0;
    this->m_TransferState.RerunStaging = 1;
    if ( v8->FxVerifierOn && v8->FxVerboseOn )
      WPP_IFR_SF_q(v8, 5u, 0xFu, 0x1Bu, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1);
  }
  else
  {
    v9 = 1;
    this->m_TransferState.CurrentStagingThread = KeGetCurrentThread();
  }
  FxNonPagedObject::Unlock(this, (unsigned __int8)pFxDriverGlobals, v7);
  FxObject::AddRef(this, sgListBuffer, 0, 0LL);
  if ( v9 )
  {
    do
    {
      m_MaxFragmentLength = this->m_MaxFragmentLength;
      m_Remaining = this->m_Remaining;
      flags = this->m_Transferred;
      if ( m_Remaining < m_MaxFragmentLength )
        m_MaxFragmentLength = this->m_Remaining;
      v13 = flags + this->m_StartOffset;
      this->m_CurrentFragmentLength = m_MaxFragmentLength;
      this->m_CurrentFragmentOffset = v13;
      if ( !this->m_RequireSingleTransfer )
      {
        m_MapRegistersReserved = this->m_MapRegistersReserved;
        if ( m_MapRegistersReserved )
        {
          if ( this->m_MapRegistersNeeded > m_MapRegistersReserved )
          {
            m_CurrentFragmentMdl = this->m_CurrentFragmentMdl;
            while ( m_CurrentFragmentMdl )
            {
              ByteCount = m_CurrentFragmentMdl->ByteCount;
              if ( ByteCount >= v13 )
                break;
              m_CurrentFragmentMdl = m_CurrentFragmentMdl->Next;
              v13 -= ByteCount;
            }
            v17 = m_MapRegistersReserved << 12;
            v18 = ((_WORD)v13 + (unsigned __int16)m_CurrentFragmentMdl->ByteOffset) & 0xFFF;
            if ( m_MaxFragmentLength >= (unsigned __int64)(v17 - 4096) - v18 + 4096 )
              m_MaxFragmentLength = v17 - 4096 - v18 + 4096;
            this->m_CurrentFragmentLength = m_MaxFragmentLength;
          }
        }
      }
      id = this->m_CurrentFragmentLength;
      v20 = *(_FX_DRIVER_GLOBALS **)sgListBuffer;
      v21 = m_Remaining - id;
      this->m_Remaining = v21;
      if ( v20->FxVerifierOn && v20->FxVerboseOn )
      {
        v22 = "first";
        globals = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          globals = 0LL;
        if ( flags )
          v22 = "next";
        WPP_IFR_SF_sqqxx(
          v20,
          (unsigned __int8)globals,
          (unsigned int)v20,
          v21,
          traceGuid,
          v22,
          globals,
          this->m_CurrentFragmentMdl,
          flags,
          id);
      }
      if ( this->m_IsCancelled == 1 )
      {
        v4 = -1073741536;
      }
      else if ( this->PreMapTransfer(this) )
      {
        m_DmaEnabler = this->m_DmaEnabler;
        if ( (*((_BYTE *)m_DmaEnabler + 380) & 4) != 0 )
          Alignment = &sgListBuffer[8];
        else
          Alignment = (unsigned __int8 *)m_DmaEnabler->m_SGList.ScatterGatherProfile.Lookaside.L.ListHead.Alignment;
        this->GetTransferCompletionRoutine(this);
        v29 = this->m_Globals;
        v30 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        v31 = this->m_ObjectSize == 0;
        m_CurrentFragmentLength = this->m_CurrentFragmentLength;
        HIDWORD(pFxDriverGlobals) = m_CurrentFragmentLength;
        if ( v31 )
          v30 = 0LL;
        if ( v29->FxVerifierOn && v29->FxVerboseOn )
          WPP_IFR_SF_qqxDq(
            v29,
            v26,
            v27,
            v28,
            traceGuid,
            v30,
            this->m_CurrentFragmentMdl,
            this->m_CurrentFragmentOffset,
            m_CurrentFragmentLength,
            this->m_MapRegisterBase);
        if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
        {
          LODWORD(traceGuid) = this->m_DeviceAddressOffset;
          v4 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, unsigned __int64))this->m_AdapterInfo->AdapterObject->DmaOperations->MapTransferEx)(
                 this->m_AdapterInfo->AdapterObject,
                 this->m_CurrentFragmentMdl,
                 this->m_MapRegisterBase,
                 this->m_CurrentFragmentOffset);
        }
        else
        {
          *(_DWORD *)Alignment = 1;
          *((_QWORD *)Alignment + 1) = 0LL;
          traceGuid = (const _GUID *)((char *)&pFxDriverGlobals + 4);
          *((_QWORD *)Alignment + 2) = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, char *))this->m_AdapterInfo->AdapterObject->DmaOperations->MapTransfer)(
                                         this->m_AdapterInfo->AdapterObject,
                                         this->m_CurrentFragmentMdl,
                                         this->m_MapRegisterBase,
                                         (char *)this->m_CurrentFragmentMdl->StartVa
                                       + this->m_CurrentFragmentMdl->ByteOffset
                                       + this->m_CurrentFragmentOffset);
          v4 = 0;
          *((_DWORD *)Alignment + 6) = HIDWORD(pFxDriverGlobals);
        }
        if ( v29->FxVerifierOn && v29->FxVerboseOn )
          WPP_IFR_SF_dqd(
            v29,
            5u,
            0xFu,
            0xEu,
            WPP_FxDmaTransactionPacket_hpp_Traceguids,
            SHIDWORD(pFxDriverGlobals),
            v30,
            v4);
        if ( v4 >= 0 )
        {
          v33 = this->m_CurrentFragmentLength;
          if ( HIDWORD(pFxDriverGlobals) < v33 )
          {
            v34 = v33 - HIDWORD(pFxDriverGlobals);
            this->m_CurrentFragmentLength = HIDWORD(pFxDriverGlobals);
            this->m_Remaining += v34;
          }
          ProgramDma = this->m_DmaAcquiredFunction.Method.ProgramDma;
          if ( ProgramDma )
          {
            if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 316LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) )
            {
              v36 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !this->m_ObjectSize )
                v36 = 0LL;
              WPP_IFR_SF_qqq(
                *(_FX_DRIVER_GLOBALS **)sgListBuffer,
                5u,
                0xFu,
                0x1Du,
                WPP_FxDmaTransactionPacket_cpp_Traceguids,
                ProgramDma,
                this->m_DmaAcquiredContext,
                v36);
            }
            m_DeviceBase = this->m_DmaEnabler->FxDmaTransactionBase::m_DeviceBase;
            m_ObjectSize = m_DeviceBase->m_ObjectSize;
            v39 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_ObjectSize )
              v39 = 0LL;
            v40 = (WDFDMATRANSACTION__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !this->m_ObjectSize )
              v40 = 0LL;
            FxDmaTransactionProgramOrReserveDma::InvokeProgramDma(
              &this->m_DmaAcquiredFunction,
              v40,
              v39,
              this->m_DmaAcquiredContext,
              this->m_DmaDirection,
              (_SCATTER_GATHER_LIST *)Alignment);
          }
        }
      }
      else
      {
        v4 = 0;
      }
      FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, (unsigned __int8)v20);
      if ( this->m_TransferState.RerunCompletion == 1 )
      {
        CompletionStatus = this->m_TransferState.CompletionStatus;
        v43 = (unsigned __int8)pFxDriverGlobals;
        this->m_TransferState.CompletionStatus = -1;
        this->m_TransferState.RerunCompletion = 0;
        FxNonPagedObject::Unlock(this, v43, v41);
        if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 316LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) )
        {
          v45 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v45 = 0LL;
          WPP_IFR_SF_qqqD(
            *(_FX_DRIVER_GLOBALS **)sgListBuffer,
            v44,
            *(unsigned int *)sgListBuffer,
            0x1Eu,
            WPP_FxDmaTransactionPacket_cpp_Traceguids,
            this[1].m_Globals,
            *(const void **)&this[1].m_ObjectFlags,
            v45,
            CompletionStatus);
        }
        this->CallEvtDmaCompleted(this, CompletionStatus);
        FxNonPagedObject::Lock(this, (unsigned __int8 *)&pFxDriverGlobals, v46);
      }
      RerunStaging = this->m_TransferState.RerunStaging;
      if ( RerunStaging == 1 )
        this->m_TransferState.RerunStaging = 0;
      else
        this->m_TransferState.CurrentStagingThread = 0LL;
      FxNonPagedObject::Unlock(this, (unsigned __int8)pFxDriverGlobals, v41);
    }
    while ( RerunStaging == 1 );
  }
  this->Release(this, sgListBuffer, 0, 0LL);
  if ( *(_BYTE *)(*(_QWORD *)sgListBuffer + 316LL) && *(_BYTE *)(*(_QWORD *)sgListBuffer + 324LL) )
    WPP_IFR_SF_qd(
      *(_FX_DRIVER_GLOBALS **)sgListBuffer,
      5u,
      0xFu,
      0x1Fu,
      WPP_FxDmaTransactionPacket_cpp_Traceguids,
      _a1,
      v4);
  return (unsigned int)v4;
}
