/*
 * XREFs of ??1CAudioDeviceGraph@@QEAA@XZ @ 0x14000D530
 * Callers:
 *     ??_G?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x140010000 (--_G-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z.c)
 *     _ATL::CComObject_CAudioDeviceGraph_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1400213EA (_ATL--CComObject_CAudioDeviceGraph_--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _ATL::CComCreator_ATL::CComObject_CAudioDeviceGraph___::CreateInstance_::_1_::dtor$1 @ 0x140021D27 (_ATL--CComCreator_ATL--CComObject_CAudioDeviceGraph___--CreateInstance_--_1_--dtor$1.c)
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x140031944 (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@QEAA@XZ @ 0x1400319A8 (--1-$CComContainedObject@VCAudioDeviceGraph@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140005A34 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14000DA94 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140035F54 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CAudioDeviceGraph::~CAudioDeviceGraph(CAudioDeviceGraph *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids);
  }
  CAudioDeviceGraph::Cleanup(this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids);
  }
  v2 = *((_QWORD *)this + 46);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 41);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = (void *)*((_QWORD *)this + 38);
  if ( v4 )
  {
    free(v4);
    *((_QWORD *)this + 38) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 39);
  if ( v5 )
  {
    free(v5);
    *((_QWORD *)this + 39) = 0LL;
  }
  *((_DWORD *)this + 80) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)this + 136);
  v6 = *((_QWORD *)this + 15);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 14);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( *((_BYTE *)this + 72) )
  {
    *((_BYTE *)this + 72) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
}
