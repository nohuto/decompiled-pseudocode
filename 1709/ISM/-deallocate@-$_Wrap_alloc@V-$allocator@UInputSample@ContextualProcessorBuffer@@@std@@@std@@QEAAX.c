/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXPEAUInputSample@ContextualProcessorBuffer@@_K@Z @ 0x18008592C
 * Callers:
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::emplace_back_ContextualProcessorBuffer::InputSample__::_1_::catch$67 @ 0x1800D093B (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProcessorBuffer--In.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<ContextualProcessorBuffer::InputSample>>::deallocate(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x16F26016F26016LL )
    goto LABEL_8;
  if ( 2856 * a3 >= 0x1000 )
  {
    if ( ((unsigned __int8)a2 & 0x1F) == 0 )
    {
      v3 = *(a2 - 1);
      if ( v3 < (unsigned __int64)a2 && (unsigned __int64)a2 - v3 - 8 <= 0x1F )
      {
        a2 = (_QWORD *)*(a2 - 1);
        goto LABEL_7;
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1);
    JUMPOUT(0x18008597ELL);
  }
LABEL_7:
  operator delete(a2);
}
