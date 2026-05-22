/*
 * XREFs of ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x1800B0370
 * Callers:
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$6 @ 0x1800E9401 (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$6.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ContextualProcessorBuffer::InputSample::~InputSample(ContextualProcessorBuffer::InputSample *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( *(_QWORD *)this )
    operator delete(*(void **)this);
}
