/*
 * XREFs of ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x1800AFA64
 * Callers:
 *     ??_EContextualProcessorBuffer@@OBA@EAAPEAXI@Z @ 0x1800B15C0 (--_EContextualProcessorBuffer@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1800B0D28 (--1-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@ContextualProcesso.c)
 *     ??1?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1800B0FEC (--1-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContextualProc.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

ContextualProcessorBuffer *__fastcall ContextualProcessorBuffer::`scalar deleting destructor'(
        ContextualProcessorBuffer *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &ContextualProcessorBuffer::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 1) = &ContextualProcessorBuffer::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 2) = &ContextualProcessorBuffer::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  std::vector<ContextualProcessorBuffer::InputSample>::~vector<ContextualProcessorBuffer::InputSample>((char *)this + 56);
  std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::~vector<ContextualProcessorBuffer::ContextualProcessorMetadata>((char *)this + 32);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
