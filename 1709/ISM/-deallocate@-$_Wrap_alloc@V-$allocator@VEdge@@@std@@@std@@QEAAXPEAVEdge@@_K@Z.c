/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@VEdge@@@std@@@std@@QEAAXPEAVEdge@@_K@Z @ 0x18002AE28
 * Callers:
 *     _std::vector_Edge_std::allocator_Edge___::emplace_back_Edge_&___ptr64__::_1_::catch$107 @ 0x1800CDDE6 (_std--vector_Edge_std--allocator_Edge___--emplace_back_Edge_-___ptr64__--_1_--catch$107.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<Edge>>::deallocate(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x38E38E38E38E38ELL )
    goto LABEL_8;
  if ( 72 * a3 >= 0x1000 )
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
    JUMPOUT(0x18002AE7BLL);
  }
LABEL_7:
  operator delete(a2);
}
