/*
 * XREFs of ??1?$vector@USpatialInputButtonCaps@SpatialInteractionDevices@@V?$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@@std@@QEAA@XZ @ 0x18007ACD0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@EEAAXXZ @ 0x18007AC70 (-_Destroy@-$_Ref_count_obj@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<SpatialInteractionDevices::SpatialInputButtonCaps>::~vector<SpatialInteractionDevices::SpatialInputButtonCaps>(
        unsigned __int64 *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = (__int64)(a1[2] - v2) / 12;
    if ( v3 <= 0x1555555555555555LL )
    {
      if ( 12 * v3 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v2);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( (v2 & 0x1F) == 0 )
      {
        v4 = *(_QWORD *)(v2 - 8);
        if ( v4 < v2 )
        {
          v2 = v2 - v4 - 8;
          if ( v2 <= 0x1F )
          {
            v2 = v4;
            goto LABEL_8;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v2);
    JUMPOUT(0x18007AD5ELL);
  }
}
