/*
 * XREFs of ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x1C008F4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C000EEC4 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qqqq @ 0x1C0082958 (WPP_IFR_SF_qqqq.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C008EC28 (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C008EE9C (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 */

void __fastcall FxUsbPipeContinuousReader::_FxUsbPipeRequestComplete(
        WDFREQUEST__ *Request,
        WDFUSBPIPE__ *Target,
        _WDF_REQUEST_COMPLETION_PARAMS *Params,
        FxUsbPipeRepeatReader *Context)
{
  _QWORD *_a2; // r10
  FxUsbPipeContinuousReader *Parent; // r14
  char v7; // bp
  char v8; // si
  FxUsbPipe *m_Pipe; // rdi
  int _a4; // r8d
  const void *_a1; // rcx
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // r8
  const void *v14; // rcx
  const void *v15; // r10
  int irql; // [rsp+98h] [rbp+20h] BYREF

  _a2 = &Context->Request->__vftable;
  Parent = Context->Parent;
  v7 = 0;
  v8 = 0;
  m_Pipe = Parent->m_Pipe;
  _a4 = Context->Request->m_Irp.m_Irp->IoStatus.Status;
  irql = _a4;
  if ( _a4 < 0 )
  {
    if ( _a4 == -1073741536 )
    {
      v14 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_Pipe->m_ObjectSize )
        v14 = 0LL;
      WPP_IFR_SF_qqqq(
        m_Pipe->m_Globals,
        4u,
        0xEu,
        0x12u,
        WPP_FxUsbPipe_cpp_Traceguids,
        v14,
        Context,
        _a2,
        Context->RequestIrp);
    }
    else
    {
      _a1 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_Pipe->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qqqd(
        m_Pipe->m_Globals,
        4u,
        0xEu,
        0x11u,
        WPP_FxUsbPipe_cpp_Traceguids,
        _a1,
        _a2,
        Context->RequestIrp,
        _a4);
      FxNonPagedObject::Lock(m_Pipe, (unsigned __int8 *)&irql, v12);
      KeSetEvent(&Context->ReadCompletedEvent.m_Event, 0, 0);
      v7 = 1;
      FxUsbPipeContinuousReader::QueueWorkItemLocked(Parent, Context);
      FxNonPagedObject::Unlock(m_Pipe, irql, v13);
    }
  }
  else
  {
    Parent->m_ReadCompleteCallback(
      Target,
      *(WDFMEMORY__ **)(*(_QWORD *)(_a2[21] + 32LL) + 8LL),
      *(_QWORD *)(*(_QWORD *)(_a2[21] + 32LL) + 16LL),
      Parent->m_ReadCompleteContext);
    v8 = FxUsbPipeContinuousReader::ResubmitRepeater(Parent, Context, &irql);
  }
  if ( (v8 & 1) != 0 )
  {
    KeInsertQueueDpc(&Context->Dpc, 0LL, 0LL);
  }
  else if ( (v8 & 2) != 0 )
  {
    v15 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_Pipe->m_ObjectSize )
      v15 = 0LL;
    WPP_IFR_SF_qqqq(
      m_Pipe->m_Globals,
      4u,
      0xEu,
      0x13u,
      WPP_FxUsbPipe_cpp_Traceguids,
      v15,
      Context,
      Context->Request,
      Context->RequestIrp);
  }
  else if ( !v7 )
  {
    KeSetEvent(&Context->ReadCompletedEvent.m_Event, 0, 0);
  }
}
