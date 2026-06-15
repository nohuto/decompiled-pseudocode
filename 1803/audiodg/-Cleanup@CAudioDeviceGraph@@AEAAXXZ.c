/*
 * XREFs of ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14000F8F0
 * Callers:
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x14000F300 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140002EE8 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x140008470 (--1CPipeInstance@@QEAA@XZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000E090 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x14002FEB8 (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140034B74 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140034C70 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDeviceGraph::Cleanup(CAudioDeviceGraph *this)
{
  _QWORD *v2; // rcx
  __int64 (__fastcall *v3)(CAudioDeviceGraph *); // rax
  _QWORD *v4; // rdi
  __int64 **v5; // rbx
  __int64 *v6; // rcx
  CPipeInstance *v7; // rdi
  __int64 v8; // rax
  bool v9; // zf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids, this);
      v2 = WPP_GLOBAL_Control;
    }
    if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x20000) != 0 && *((_BYTE *)v2 + 25) >= 4u )
      WPP_SF_(v2[2], 44LL, &WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids);
  }
  v3 = *(__int64 (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 120LL);
  if ( v3 == CAudioDeviceGraph::Stop )
    CAudioDeviceGraph::Stop(this);
  else
    v3(this);
  v4 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    *v4 = &CProtectedOutputController::`vftable';
    ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v4 + 2);
    operator delete(v4);
  }
  *((_QWORD *)this + 15) = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = (__int64 **)((char *)this + 168);
  while ( v5[2] )
  {
    v6 = *v5;
    if ( !*v5 )
      ATL::AtlThrowImpl(-2147467259);
    v7 = (CPipeInstance *)v6[2];
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
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_3dcabf6e46fe37d8e2cf6f9c2f959793_Traceguids);
  }
}
