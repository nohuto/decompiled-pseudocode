/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@@std@@QEAAXPEAUSpatialInputButtonCaps@SpatialInteractionDevices@@_K@Z @ 0x18007AC7C
 * Callers:
 *     _std::vector_SpatialInteractionDevices::SpatialInputButtonCaps_std::allocator_SpatialInteractionDevices::SpatialInputButtonCaps___::emplace_back_SpatialInteractionDevices::SpatialInputButtonCaps__::_1_::catch$106 @ 0x1800CFFD8 (_std--vector_SpatialInteractionDevices--SpatialInputButtonCaps_std--allocator_SpatialInteraction.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<SpatialInteractionDevices::SpatialInputButtonCaps>>::deallocate(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x1555555555555555LL )
    goto LABEL_8;
  if ( 12 * a3 >= 0x1000 )
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
    JUMPOUT(0x18007ACCFLL);
  }
LABEL_7:
  operator delete(a2);
}
