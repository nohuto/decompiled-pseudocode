/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@UPointData3D@@@std@@@std@@QEAAXPEAUPointData3D@@_K@Z @ 0x180039DD4
 * Callers:
 *     _std::vector_PointData3D_std::allocator_PointData3D___::emplace_back_PointData3D_const_&___ptr64__::_1_::catch$106 @ 0x1800CE677 (_std--vector_PointData3D_std--allocator_PointData3D___--emplace_back_PointData3D_const_-___ptr64.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<PointData3D>>::deallocate(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x1642C8590B21642LL )
    goto LABEL_8;
  if ( 184 * a3 >= 0x1000 )
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
    JUMPOUT(0x180039E26LL);
  }
LABEL_7:
  operator delete(a2);
}
