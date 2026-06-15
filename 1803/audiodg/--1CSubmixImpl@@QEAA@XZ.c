/*
 * XREFs of ??1CSubmixImpl@@QEAA@XZ @ 0x140006360
 * Callers:
 *     ??_E?$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140015060 (--_E-$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x1400155C0 (--_G-$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1?$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ @ 0x14002EE7C (--1-$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComContainedObject@VCProcessSubmix@@@ATL@@QEAA@XZ @ 0x14002EEAC (--1-$CComContainedObject@VCProcessSubmix@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140033B94 (--1-$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x1400448D8 (--1-$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140002EE8 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?RemoveAll@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x1400036C8 (-RemoveAll@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QE.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140003790 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140003CF0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140004BF0 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140007B00 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140007D20 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140008010 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14002F3F4 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x14002FC4C (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14002FD2C (-FreeNode@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEA.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAVCStreamInstance@@XZ @ 0x1400372D0 (-RemoveHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@Q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSubmixImpl::~CSubmixImpl(CSubmixImpl *this)
{
  void (__fastcall ***v2)(struct ISubmix *, GUID *, struct ISubmixInternal **); // rdx
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // rcx
  void *v6; // rcx
  CPipeInstance *v7; // rcx
  __int64 v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rcx
  CStreamInstance *v17; // rax
  unsigned int v18; // edx
  __int64 *v19; // rdx
  void *v20; // rsi
  __int64 v21; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v23; // [rsp+30h] [rbp-18h]

  *(_QWORD *)this = &CSubmixImpl::`vftable';
  v2 = (void (__fastcall ***)(struct ISubmix *, GUID *, struct ISubmixInternal **))*((_QWORD *)this + 33);
  if ( v2 )
    CSubmixImpl::DisconnectFromRightSubmix(this, v2);
  while ( *((_QWORD *)this + 6) )
  {
    v17 = (CStreamInstance *)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead((char *)this + 32);
    if ( v17 )
      CStreamInstance::`scalar deleting destructor'(v17, v18);
  }
  while ( *((_QWORD *)this + 12) )
  {
    v19 = (__int64 *)*((_QWORD *)this + 10);
    if ( !v19 )
      ATL::AtlThrowImpl(-2147467259);
    v20 = (void *)v19[2];
    v21 = *v19;
    *((_QWORD *)this + 10) = *v19;
    if ( v21 )
      *(_QWORD *)(v21 + 8) = 0LL;
    else
      *((_QWORD *)this + 11) = 0LL;
    ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::FreeNode((char *)this + 80);
    operator delete(v20);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSubmixList;
  v23 = 0;
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
    if ( v3 == qword_140087758 )
      qword_140087758 = *(_QWORD *)(v3 + 8);
    else
      *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)(v3 + 8);
    *(_QWORD *)v3 = qword_140087770;
    qword_140087770 = v3;
    if ( !--qword_140087760 )
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)&SubmixList);
  }
LABEL_13:
  if ( v23 )
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
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((__int64)this + 80);
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((__int64)this + 32);
  v11 = *((_QWORD *)this + 3);
  if ( v11 )
  {
    CPipeInstance::Cleanup(*((CPipeInstance **)this + 3));
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll((__int64 *)(v11 + 240));
    v12 = *(_QWORD *)(v11 + 232);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    CoTaskMemFree(*(LPVOID *)(v11 + 184));
    *(_QWORD *)(v11 + 184) = 0LL;
    v13 = *(_QWORD *)(v11 + 176);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = *(_QWORD *)(v11 + 168);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = *(_QWORD *)(v11 + 144);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll(v11 + 64);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(v11 + 16);
    operator delete((void *)v11);
  }
  *((_QWORD *)this + 3) = 0LL;
  v16 = (void *)*((_QWORD *)this + 1);
  if ( v16 )
    CoTaskMemFree(v16);
}
