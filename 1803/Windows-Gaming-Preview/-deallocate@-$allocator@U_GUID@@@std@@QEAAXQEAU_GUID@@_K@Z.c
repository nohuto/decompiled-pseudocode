/*
 * XREFs of ?deallocate@?$allocator@U_GUID@@@std@@QEAAXQEAU_GUID@@_K@Z @ 0x180016F44
 * Callers:
 *     _std::vector__GUID_std::allocator__GUID___::_Reallocate_exactly_::_1_::catch$52 @ 0x18004418F (_std--vector__GUID_std--allocator__GUID___--_Reallocate_exactly_--_1_--catch$52.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<_GUID>::deallocate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
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
    JUMPOUT(0x180016F94LL);
  }
LABEL_7:
  operator delete((void *)a2);
}
