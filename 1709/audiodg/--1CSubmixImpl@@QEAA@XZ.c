/*
 * XREFs of ??1CSubmixImpl@@QEAA@XZ @ 0x140011F90
 * Callers:
 *     ??_E?$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140015990 (--_E-$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x140015EF0 (--_G-$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x14002FE88 (--1CStreamGroup@@QEAA@XZ.c)
 *     ??1CProcessSubmix@@QEAA@XZ @ 0x14002FF40 (--1CProcessSubmix@@QEAA@XZ.c)
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400055C0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140005A34 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x140005B70 (--1CPipeInstance@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140010740 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140014ABC (-RemoveAll@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QE.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x1400303C0 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140030BF8 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140030D10 (-FreeNode@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEA.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAVCStreamInstance@@XZ @ 0x1400386F0 (-RemoveHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@Q.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CSubmixImpl::~CSubmixImpl(CSubmixImpl *this)
{
  void (__fastcall ***v2)(struct ISubmix *, GUID *, CSystemAudioDeviceSharedBase **); // rdx
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rcx
  void *v6; // rcx
  CPipeInstance *v7; // rcx
  __int64 v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rdi
  void *v12; // rcx
  CStreamInstance *v13; // rax
  unsigned int v14; // edx
  __int64 *v15; // rdx
  void *v16; // rsi
  __int64 v17; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v19; // [rsp+30h] [rbp-18h]

  *(_QWORD *)this = &CSubmixImpl::`vftable';
  v2 = (void (__fastcall ***)(struct ISubmix *, GUID *, CSystemAudioDeviceSharedBase **))*((_QWORD *)this + 33);
  if ( v2 )
    CSubmixImpl::DisconnectFromRightSubmix(this, v2);
  while ( *((_QWORD *)this + 6) )
  {
    v13 = (CStreamInstance *)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead((char *)this + 32);
    if ( v13 )
      CStreamInstance::`scalar deleting destructor'(v13, v14);
  }
  while ( *((_QWORD *)this + 12) )
  {
    v15 = (__int64 *)*((_QWORD *)this + 10);
    if ( !v15 )
      ATL::AtlThrowImpl(-2147467259);
    v16 = (void *)v15[2];
    v17 = *v15;
    *((_QWORD *)this + 10) = *v15;
    if ( v17 )
      *(_QWORD *)(v17 + 8) = 0LL;
    else
      *((_QWORD *)this + 11) = 0LL;
    ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::FreeNode((char *)this + 80);
    operator delete(v16);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSubmixList;
  v19 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = SubmixList;
  if ( SubmixList )
  {
    while ( *(CSubmixImpl **)(v3 + 16) != this )
    {
      v3 = *(_QWORD *)v3;
      if ( !v3 )
        goto LABEL_13;
    }
    if ( v3 == SubmixList )
      SubmixList = *(_QWORD *)v3;
    else
      **(_QWORD **)(v3 + 8) = *(_QWORD *)v3;
    if ( v3 == qword_140089758 )
      qword_140089758 = *(_QWORD *)(v3 + 8);
    else
      *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)(v3 + 8);
    *(_QWORD *)v3 = qword_140089770;
    qword_140089770 = v3;
    if ( !--qword_140089760 )
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)&SubmixList);
  }
LABEL_13:
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  PublishDeviceGraphWnfState();
  v5 = *((_QWORD *)this + 33);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = (void *)*((_QWORD *)this + 30);
  if ( v6 )
    CoTaskMemFree(v6);
  v7 = (CPipeInstance *)*((_QWORD *)this + 29);
  if ( v7 )
    CPipeInstance::`scalar deleting destructor'(v7, v4);
  *((_QWORD *)this + 29) = 0LL;
  v8 = *((_QWORD *)this + 28);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = (void *)*((_QWORD *)this + 23);
  if ( v9 )
    CoTaskMemFree(v9);
  v10 = (void *)*((_QWORD *)this + 22);
  if ( v10 )
    CoTaskMemFree(v10);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((char *)this + 80);
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((char *)this + 32);
  v11 = (void *)*((_QWORD *)this + 3);
  if ( v11 )
  {
    CPipeInstance::~CPipeInstance(*((LPVOID **)this + 3));
    operator delete(v11);
  }
  *((_QWORD *)this + 3) = 0LL;
  v12 = (void *)*((_QWORD *)this + 1);
  if ( v12 )
    CoTaskMemFree(v12);
}
