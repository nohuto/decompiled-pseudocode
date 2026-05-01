/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXPEAW4LayoutSKU@SharedStartModel@@_K@Z @ 0x18008EDCC
 * Callers:
 *     _std::vector_enum_SharedStartModel::LayoutSKU_std::allocator_enum_SharedStartModel::LayoutSKU___::emplace_back_enum_SharedStartModel::LayoutSKU_const_&___ptr64__::_1_::catch$106 @ 0x1801EA962 (_std--vector_enum_SharedStartModel--LayoutSKU_std--allocator_enum_SharedStartModel-_ea_1801EA962.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<enum SharedStartModel::LayoutSKU>>::deallocate(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_8;
  if ( 4 * a3 >= 0x1000 )
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
    JUMPOUT(0x18008EE1ELL);
  }
LABEL_7:
  operator delete(a2);
}
