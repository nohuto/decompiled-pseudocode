/*
 * XREFs of ?deallocate@?$allocator@VEdge@@@std@@QEAAXQEAVEdge@@_K@Z @ 0x180067E0C
 * Callers:
 *     _std::vector_Edge_std::allocator_Edge___::emplace_back_Edge_const_&___ptr64__::_1_::catch$74 @ 0x1800E71BC (_std--vector_Edge_std--allocator_Edge___--emplace_back_Edge_const_-___ptr64__--_1_--catch$74.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<Edge>::deallocate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x2AAAAAAAAAAAAAALL )
    goto LABEL_8;
  if ( 96 * a3 >= 0x1000 )
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
    JUMPOUT(0x180067E5FLL);
  }
LABEL_7:
  operator delete((void *)a2);
}
