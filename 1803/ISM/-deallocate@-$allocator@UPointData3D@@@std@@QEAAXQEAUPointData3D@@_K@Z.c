/*
 * XREFs of ?deallocate@?$allocator@UPointData3D@@@std@@QEAAXQEAUPointData3D@@_K@Z @ 0x180040BE0
 * Callers:
 *     _std::vector_PointData3D_std::allocator_PointData3D___::emplace_back_PointData3D_const_&___ptr64__::_1_::catch$102 @ 0x1800E57F2 (_std--vector_PointData3D_std--allocator_PointData3D___--emplace_back_PointData3D_const_-___ptr64.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<PointData3D>::deallocate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x1642C8590B21642LL )
    goto LABEL_8;
  if ( 184 * a3 >= 0x1000 )
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
    JUMPOUT(0x180040C32LL);
  }
LABEL_7:
  operator delete((void *)a2);
}
