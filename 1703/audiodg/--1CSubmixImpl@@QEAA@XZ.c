/*
 * XREFs of ??1CSubmixImpl@@QEAA@XZ @ 0x1400081D0
 * Callers:
 *     ??_E?$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140008D00 (--_E-$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x1400090F0 (--_G-$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x140030240 (--1CStreamGroup@@QEAA@XZ.c)
 *     ??1CProcessSubmix@@QEAA@XZ @ 0x140030290 (--1CProcessSubmix@@QEAA@XZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140006670 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140009440 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000A600 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ??_GCAPOProcessNode@@UEAAPEAXI@Z @ 0x14000E4D0 (--_GCAPOProcessNode@@UEAAPEAXI@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400141C0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140015220 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14001B214 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x14003045C (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140030CE4 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140031040 (-FreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXPEAV.c)
 *     ?FreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140031068 (-FreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@.c)
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x140031114 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140031130 (-FreeNode@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPE.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140031194 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14003131C (-FreeNode@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEA.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140036454 (WPP_SF_.c)
 *     WPP_SF_q @ 0x14003651C (WPP_SF_q.c)
 *     ?RemoveHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAVCStreamInstance@@XZ @ 0x140038E10 (-RemoveHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@Q.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CSubmixImpl::~CSubmixImpl(CSubmixImpl *this)
{
  void (__fastcall ***v2)(struct ISubmix *, GUID *, CSystemAudioDeviceSharedBase **); // rdx
  __int64 v3; // rdx
  unsigned int v4; // edx
  __int64 v5; // rcx
  void *v6; // rcx
  CPipeInstance *v7; // rcx
  __int64 v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  ATL::CAtlPlex *v11; // rcx
  ATL::CAtlPlex *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  bool v18; // zf
  CInPlaceBuffer *v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rcx
  CAPOProcessNode *v22; // r14
  __int64 v23; // rax
  void *(__fastcall *v24)(CAPOProcessNode *__hidden, unsigned int); // rax
  _QWORD **v25; // rbx
  _QWORD *v26; // rcx
  ATL::CAtlPlex *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  ATL::CAtlPlex *v32; // rcx
  ATL::CAtlPlex *v33; // rcx
  void *v34; // rcx
  CStreamInstance *v35; // rax
  unsigned int v36; // edx
  __int64 *v37; // rdx
  void *v38; // rsi
  __int64 v39; // rax
  _QWORD *v40; // rdx
  _QWORD *v41; // rdx
  _QWORD *v42; // rdx
  _QWORD *v43; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-40h] BYREF
  char v45; // [rsp+30h] [rbp-38h]

  *(_QWORD *)this = &CSubmixImpl::`vftable';
  v2 = (void (__fastcall ***)(struct ISubmix *, GUID *, CSystemAudioDeviceSharedBase **))*((_QWORD *)this + 33);
  if ( v2 )
    CSubmixImpl::DisconnectFromRightSubmix(this, v2);
  while ( *((_QWORD *)this + 6) )
  {
    v35 = (CStreamInstance *)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead((char *)this + 32);
    if ( v35 )
      CStreamInstance::`scalar deleting destructor'(v35, v36);
  }
  while ( *((_QWORD *)this + 12) )
  {
    v37 = (__int64 *)*((_QWORD *)this + 10);
    if ( !v37 )
      ATL::AtlThrowImpl(-2147467259);
    v38 = (void *)v37[2];
    v39 = *v37;
    *((_QWORD *)this + 10) = *v37;
    if ( v39 )
      *(_QWORD *)(v39 + 8) = 0LL;
    else
      *((_QWORD *)this + 11) = 0LL;
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::FreeNode((char *)this + 80);
    operator delete(v38);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSubmixList;
  v45 = 0;
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
    if ( v3 == qword_140085758 )
      qword_140085758 = *(_QWORD *)(v3 + 8);
    else
      *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)(v3 + 8);
    *(_QWORD *)v3 = qword_140085770;
    qword_140085770 = v3;
    if ( !--qword_140085760 )
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll(&SubmixList);
  }
LABEL_13:
  if ( v45 )
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
  while ( *((_QWORD *)this + 12) )
  {
    v40 = (_QWORD *)*((_QWORD *)this + 10);
    if ( !v40 )
      ATL::AtlThrowImpl(-2147467259);
    *((_QWORD *)this + 10) = *v40;
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::FreeNode((char *)this + 80);
  }
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  v11 = (ATL::CAtlPlex *)*((_QWORD *)this + 13);
  if ( v11 )
  {
    ATL::CAtlPlex::FreeDataChain(v11);
    *((_QWORD *)this + 13) = 0LL;
  }
  while ( *((_QWORD *)this + 6) )
  {
    v41 = (_QWORD *)*((_QWORD *)this + 4);
    if ( !v41 )
      ATL::AtlThrowImpl(-2147467259);
    *((_QWORD *)this + 4) = *v41;
    ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::FreeNode((char *)this + 32);
  }
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v12 = (ATL::CAtlPlex *)*((_QWORD *)this + 7);
  if ( v12 )
  {
    ATL::CAtlPlex::FreeDataChain(v12);
    *((_QWORD *)this + 7) = 0LL;
  }
  v13 = *((_QWORD *)this + 3);
  if ( v13 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        47LL,
        &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
        *((_QWORD *)this + 3));
    }
    CPipeInstance::DeactivateAPOsAndRemoveConnections((CPipeInstance *)v13);
    while ( *(_QWORD *)(v13 + 80) )
    {
      v15 = *(__int64 **)(v13 + 64);
      if ( !v15 )
        ATL::AtlThrowImpl(-2147467259);
      v16 = v15[2];
      v17 = *v15;
      *(_QWORD *)(v13 + 64) = *v15;
      if ( v17 )
        *(_QWORD *)(v17 + 8) = 0LL;
      else
        *(_QWORD *)(v13 + 72) = 0LL;
      *v15 = *(_QWORD *)(v13 + 96);
      *(_QWORD *)(v13 + 96) = v15;
      v18 = (*(_QWORD *)(v13 + 80))-- == 1LL;
      if ( v18 )
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll(v13 + 64, v14);
      if ( v16 )
      {
        if ( *(_QWORD *)(v16 + 8) && *(_DWORD *)v16 )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v16 + 48) + 64LL))(*(_QWORD *)(v16 + 48));
          *(_QWORD *)(v16 + 8) = 0LL;
        }
        v19 = *(CInPlaceBuffer **)(v16 + 56);
        if ( v19 )
        {
          CInPlaceBuffer::Release(v19);
          *(_QWORD *)(v16 + 56) = 0LL;
        }
        v20 = *(_QWORD *)(v16 + 48);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        operator delete((void *)v16);
      }
    }
    while ( *(_QWORD *)(v13 + 32) )
    {
      v21 = *(__int64 **)(v13 + 16);
      if ( !v21 )
        ATL::AtlThrowImpl(-2147467259);
      v22 = (CAPOProcessNode *)v21[2];
      v23 = *v21;
      *(_QWORD *)(v13 + 16) = *v21;
      if ( v23 )
        *(_QWORD *)(v23 + 8) = 0LL;
      else
        *(_QWORD *)(v13 + 24) = 0LL;
      *v21 = *(_QWORD *)(v13 + 48);
      *(_QWORD *)(v13 + 48) = v21;
      v18 = (*(_QWORD *)(v13 + 32))-- == 1LL;
      if ( v18 )
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(v13 + 16);
      if ( *((_DWORD *)v22 + 10) == 2 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v13 + 232) + 32LL))(
          *(_QWORD *)(v13 + 232),
          *(_QWORD *)(*((_QWORD *)v22 + 4) + 40LL));
      v24 = **(void *(__fastcall ***)(CAPOProcessNode *__hidden, unsigned int))v22;
      if ( v24 == CAPOProcessNode::`scalar deleting destructor' )
        CAPOProcessNode::`scalar deleting destructor'(v22, 1u);
      else
        v24(v22, 1u);
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids);
    }
    v25 = (_QWORD **)(v13 + 240);
    while ( *(_QWORD *)(v13 + 256) )
    {
      v26 = *v25;
      if ( !*v25 )
        ATL::AtlThrowImpl(-2147467259);
      *v25 = (_QWORD *)*v26;
      *v26 = *(_QWORD *)(v13 + 272);
      *(_QWORD *)(v13 + 272) = v26;
      v18 = (*(_QWORD *)(v13 + 256))-- == 1LL;
      if ( v18 )
        ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll(v13 + 240, v14);
    }
    *v25 = 0LL;
    *(_QWORD *)(v13 + 248) = 0LL;
    *(_QWORD *)(v13 + 272) = 0LL;
    v27 = *(ATL::CAtlPlex **)(v13 + 264);
    if ( v27 )
    {
      ATL::CAtlPlex::FreeDataChain(v27);
      *(_QWORD *)(v13 + 264) = 0LL;
    }
    v28 = *(_QWORD *)(v13 + 232);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    CoTaskMemFree(*(LPVOID *)(v13 + 184));
    *(_QWORD *)(v13 + 184) = 0LL;
    v29 = *(_QWORD *)(v13 + 176);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    v30 = *(_QWORD *)(v13 + 168);
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    v31 = *(_QWORD *)(v13 + 144);
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    while ( *(_QWORD *)(v13 + 80) )
    {
      v42 = *(_QWORD **)(v13 + 64);
      if ( !v42 )
        ATL::AtlThrowImpl(-2147467259);
      *(_QWORD *)(v13 + 64) = *v42;
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::FreeNode(v13 + 64);
    }
    *(_QWORD *)(v13 + 64) = 0LL;
    *(_QWORD *)(v13 + 72) = 0LL;
    *(_QWORD *)(v13 + 96) = 0LL;
    v32 = *(ATL::CAtlPlex **)(v13 + 88);
    if ( v32 )
    {
      ATL::CAtlPlex::FreeDataChain(v32);
      *(_QWORD *)(v13 + 88) = 0LL;
    }
    while ( *(_QWORD *)(v13 + 32) )
    {
      v43 = *(_QWORD **)(v13 + 16);
      if ( !v43 )
        ATL::AtlThrowImpl(-2147467259);
      *(_QWORD *)(v13 + 16) = *v43;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::FreeNode(v13 + 16);
    }
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_QWORD *)(v13 + 24) = 0LL;
    *(_QWORD *)(v13 + 48) = 0LL;
    v33 = *(ATL::CAtlPlex **)(v13 + 40);
    if ( v33 )
    {
      ATL::CAtlPlex::FreeDataChain(v33);
      *(_QWORD *)(v13 + 40) = 0LL;
    }
    operator delete((void *)v13);
  }
  *((_QWORD *)this + 3) = 0LL;
  v34 = (void *)*((_QWORD *)this + 1);
  if ( v34 )
    CoTaskMemFree(v34);
}
