/*
 * XREFs of ?deallocate@?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@QEAAXQEAUDeviceDisplayMapping@DWMInputRouter@@_K@Z @ 0x1800816B0
 * Callers:
 *     _std::vector_DWMInputRouter::DeviceDisplayMapping_std::allocator_DWMInputRouter::DeviceDisplayMapping___::emplace_back_DWMInputRouter::DeviceDisplayMapping__::_1_::catch$107 @ 0x1800E7D48 (_std--vector_DWMInputRouter--DeviceDisplayMapping_std--allocator_DWMInputRouter--DeviceDisplayMa.c)
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::emplace_back_ContextualProcessorBuffer::InputSample__::_1_::catch$98 @ 0x1800E9419 (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProcessorBuffer--In.c)
 *     _std::vector_SPATIAL_NODE_ID_std::allocator_SPATIAL_NODE_ID___::emplace_back_SPATIAL_NODE_ID_const_&___ptr64__::_1_::catch$99 @ 0x1800E9C7C (_std--vector_SPATIAL_NODE_ID_std--allocator_SPATIAL_NODE_ID___--emplace_back_SPATIAL_NODE_ID_con.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<DWMInputRouter::DeviceDisplayMapping>::deallocate(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_8;
  if ( 16 * a3 >= 0x1000 )
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
    JUMPOUT(0x180081700LL);
  }
LABEL_7:
  operator delete((void *)a2);
}
