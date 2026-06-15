/*
 * XREFs of ?UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z @ 0x180087190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x180084F98 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     WPP_SF_dg @ 0x1800ADE90 (WPP_SF_dg.c)
 */

__int64 __fastcall CVolumeHardware::UpdateChannelVolumeLevel(CVolumeHardware *this, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  float DB; // xmm0_4
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8

  v2 = a2;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    if ( (unsigned __int64)a2 >= *((_QWORD *)this + 11) )
      ATL::AtlThrowImpl(-2147024809);
    DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56LL * a2));
    WPP_SF_dg(*(_QWORD *)(v5 + 16), 39LL, &WPP_14242717b50d32756585d53851505e56_Traceguids, (unsigned int)v2, DB);
  }
  if ( v2 >= *((_QWORD *)this + 11) )
    ATL::AtlThrowImpl(-2147024809);
  CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v2));
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(v6 + 48))(v7, (unsigned int)v2);
}
