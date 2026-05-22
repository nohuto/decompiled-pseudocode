/*
 * XREFs of ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x180084DC4
 * Callers:
 *     ??_EContextualProcessorBuffer@@O7EAAPEAXI@Z @ 0x180086100 (--_EContextualProcessorBuffer@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18008573C (--1-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@ContextualProcesso.c)
 *     ??1?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18008582C (--1-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContextualProc.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

ContextualProcessorBuffer *__fastcall ContextualProcessorBuffer::`scalar deleting destructor'(
        ContextualProcessorBuffer *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &ContextualProcessorBuffer::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &ContextualProcessorBuffer::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 10);
  if ( v5 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  std::vector<ContextualProcessorBuffer::InputSample>::~vector<ContextualProcessorBuffer::InputSample>((char *)this + 48);
  std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::~vector<ContextualProcessorBuffer::ContextualProcessorMetadata>((char *)this + 24);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
