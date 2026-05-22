/*
 * XREFs of ?deallocate@?$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@QEAAXQEAUSpatialInputButtonCaps@SpatialInteractionDevices@@_K@Z @ 0x18009F5B0
 * Callers:
 *     _std::vector_SpatialInteractionDevices::SpatialInputButtonCaps_std::allocator_SpatialInteractionDevices::SpatialInputButtonCaps___::emplace_back_SpatialInteractionDevices::SpatialInputButtonCaps__::_1_::catch$99 @ 0x1800E8CE2 (_std--vector_SpatialInteractionDevices--SpatialInputButtonCaps_std--allocator_SpatialInteraction.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<SpatialInteractionDevices::SpatialInputButtonCaps>::deallocate(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x1555555555555555LL )
    goto LABEL_8;
  if ( 12 * a3 >= 0x1000 )
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
    JUMPOUT(0x18009F603LL);
  }
LABEL_7:
  operator delete((void *)a2);
}
