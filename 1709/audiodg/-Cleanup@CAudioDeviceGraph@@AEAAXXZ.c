/*
 * XREFs of ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14000DA94
 * Callers:
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x14000D530 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140005A34 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x140005B70 (--1CPipeInstance@@QEAA@XZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000C200 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x140030F1C (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140035F54 (WPP_SF_.c)
 *     WPP_SF_q @ 0x14003BD5C (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDeviceGraph::Cleanup(CAudioDeviceGraph *this)
{
  _QWORD *v2; // rcx
  __int64 (__fastcall *v3)(CAudioDeviceGraph *); // rax
  _QWORD *v4; // rdi
  __int64 **v5; // rbx
  __int64 *v6; // rcx
  LPVOID *v7; // rdi
  __int64 v8; // rax
  bool v9; // zf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 59LL, &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids, this);
      v2 = WPP_GLOBAL_Control;
    }
    if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x20000) != 0 && *((_BYTE *)v2 + 25) >= 4u )
      WPP_SF_(v2[2], 60LL, &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids);
  }
  v3 = *(__int64 (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 120LL);
  if ( v3 == CAudioDeviceGraph::Stop )
    CAudioDeviceGraph::Stop(this);
  else
    v3(this);
  v4 = (_QWORD *)*((_QWORD *)this + 11);
  if ( v4 )
  {
    *v4 = &CProtectedOutputController::`vftable';
    ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v4 + 2);
    operator delete(v4);
  }
  *((_QWORD *)this + 11) = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  v11 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v5 = (__int64 **)((char *)this + 136);
  while ( v5[2] )
  {
    v6 = *v5;
    if ( !*v5 )
      ATL::AtlThrowImpl(-2147467259);
    v7 = (LPVOID *)v6[2];
    v8 = *v6;
    *v5 = (__int64 *)*v6;
    if ( v8 )
      *(_QWORD *)(v8 + 8) = 0LL;
    else
      v5[1] = 0LL;
    *v6 = (__int64)v5[4];
    v5[4] = v6;
    v9 = v5[2] == (__int64 *)1;
    v5[2] = (__int64 *)((char *)v5[2] - 1);
    if ( v9 )
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)v5);
    if ( v7 )
    {
      CPipeInstance::~CPipeInstance(v7);
      operator delete(v7);
    }
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 61LL, &WPP_6080fe2713ce397b188bf80ec1d83326_Traceguids);
  }
}
