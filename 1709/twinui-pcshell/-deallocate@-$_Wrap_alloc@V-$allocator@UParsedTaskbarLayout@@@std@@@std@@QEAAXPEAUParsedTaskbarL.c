/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAXPEAUParsedTaskbarLayout@@_K@Z @ 0x18008ED7C
 * Callers:
 *     _std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::emplace_back_ParsedPenWorkspaceLayout__::_1_::catch$67 @ 0x1801EA919 (_std--vector_ParsedPenWorkspaceLayout_std--allocator_ParsedPenWorkspaceLayout___--emplace_back_P.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<ParsedTaskbarLayout>>::deallocate(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x276276276276276LL )
    goto LABEL_8;
  if ( 104 * a3 >= 0x1000 )
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
    JUMPOUT(0x18008EDCBLL);
  }
LABEL_7:
  operator delete(a2);
}
