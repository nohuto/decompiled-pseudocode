/*
 * XREFs of ?deallocate@?$allocator@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@std@@QEAAXQEAUINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@_K@Z @ 0x180004FB8
 * Callers:
 *     _std::vector_InputProvider_std::allocator_InputProvider___::emplace_back_InputProvider__::_1_::catch$70 @ 0x1800E40E4 (_std--vector_InputProvider_std--allocator_InputProvider___--emplace_back_InputProvider__--_1_--c.c)
 *     _std::vector_INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD_std::allocator_INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD___::emplace_back_INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD_const_&___ptr64__::_1_::catch$102 @ 0x1800E820C (_std--vector_INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD_std--allocator_INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOA.c)
 *     _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::emplace_back_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&___ptr64__::_1_::catch$70 @ 0x1800E945D (_std--vector_ContextualProcessorBuffer--ContextualProcessorMetadata_std--allocator_ContextualPro.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD>::deallocate(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0xAAAAAAAAAAAAAAALL )
    goto LABEL_8;
  if ( 24 * a3 >= 0x1000 )
  {
    if ( (a2 & 0x1F) == 0 )
    {
      v3 = *(_QWORD *)(a2 - 8);
      if ( v3 < a2 )
      {
        a2 = a2 - v3 - 8;
        if ( a2 <= 0x1F )
        {
          a2 = v3;
          goto LABEL_7;
        }
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1, a2);
    JUMPOUT(0x18000500BLL);
  }
LABEL_7:
  operator delete((void *)a2);
}
