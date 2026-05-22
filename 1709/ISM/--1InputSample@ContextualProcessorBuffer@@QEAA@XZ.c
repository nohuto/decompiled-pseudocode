/*
 * XREFs of ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x18008570C
 * Callers:
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$5 @ 0x1800D092F (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ContextualProcessorBuffer::InputSample::~InputSample(ContextualProcessorBuffer::InputSample *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 356);
  if ( v2 )
  {
    *((_QWORD *)this + 356) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
