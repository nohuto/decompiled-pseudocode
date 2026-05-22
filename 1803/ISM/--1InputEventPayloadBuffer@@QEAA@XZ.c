/*
 * XREFs of ??1InputEventPayloadBuffer@@QEAA@XZ @ 0x180018618
 * Callers:
 *     _InputRedirectionTarget::DeliverInput_::_1_::dtor$0 @ 0x1800E3FC2 (_InputRedirectionTarget--DeliverInput_--_1_--dtor$0.c)
 *     _InputDestTarget::DeliverInput_::_1_::dtor$0 @ 0x1800E7E4B (_InputDestTarget--DeliverInput_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall InputEventPayloadBuffer::~InputEventPayloadBuffer(InputEventPayloadBuffer *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    operator delete(v1);
}
