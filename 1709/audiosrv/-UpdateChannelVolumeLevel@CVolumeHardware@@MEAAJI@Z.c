/*
 * XREFs of ?UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z @ 0x18006B310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005BB90 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x1800685E8 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     WPP_SF_dg @ 0x18006B9E8 (WPP_SF_dg.c)
 */

__int64 __fastcall CVolumeHardware::UpdateChannelVolumeLevel(CVolumeHardware *this, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  CVolumeUnit *v4; // rax
  float DB; // xmm0_4
  __int64 *v6; // rsi
  __int64 v7; // rdi
  CVolumeUnit *v8; // rax
  __int64 v9; // r8

  v2 = a2;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                          (_QWORD *)this + 10,
                          a2);
    DB = CVolumeUnit::GetDB(v4);
    WPP_SF_dg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      39LL,
      &WPP_a99c65f464be33b31308c514a5524983_Traceguids,
      (unsigned int)v2,
      DB);
  }
  v6 = (__int64 *)*((_QWORD *)this + 31);
  v7 = *v6;
  v8 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v2);
  CVolumeUnit::GetDB(v8);
  return (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, char *))(v7 + 48))(
           v6,
           (unsigned int)v2,
           v9,
           (char *)this + 256);
}
