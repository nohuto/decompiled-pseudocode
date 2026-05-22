/*
 * XREFs of ??1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ @ 0x180084F3C
 * Callers:
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$29 @ 0x1800D090B (_ContextualProcessorManager--OnHitTest_--_1_--dtor$29.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ContextualProcessorBuffer::ContextualProcessorMetadata::~ContextualProcessorMetadata(
        ContextualProcessorBuffer::ContextualProcessorMetadata *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
