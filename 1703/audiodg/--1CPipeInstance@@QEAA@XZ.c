/*
 * XREFs of ??1CPipeInstance@@QEAA@XZ @ 0x14000D800
 * Callers:
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x1400073A0 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140010AA0 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140030CE4 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140009440 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000A600 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140015220 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x140017BE0 (--_GCStreamProcessNode@@UEAAPEAXI@Z.c)
 *     ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x140017D80 (--_ECDeviceProcessNode@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x14001CB20 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x14003045C (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140031040 (-FreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXPEAV.c)
 *     ?FreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140031068 (-FreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140036454 (WPP_SF_.c)
 *     WPP_SF_q @ 0x14003651C (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CPipeInstance::~CPipeInstance(CPipeInstance *this)
{
  __int64 *v2; // rcx
  _QWORD **v3; // rbx
  __int64 v4; // rax
  bool v5; // zf
  _QWORD *v6; // rsi
  _QWORD *v7; // rcx
  __int64 *v8; // rcx
  void *(__fastcall ***v9)(CAPOProcessNode *__hidden, unsigned int); // rbx
  __int64 v10; // rax
  void *(__fastcall *v11)(CAPOProcessNode *__hidden, unsigned int); // rax
  void *(__fastcall **v12)(CAPOProcessNode *__hidden, unsigned int); // rdi
  void *(__fastcall *v13)(CAPOProcessNode *__hidden, unsigned int); // rcx
  volatile signed __int32 *v14; // rdi
  unsigned int (__fastcall *v15)(CAudioMediaType *__hidden); // rax
  volatile signed __int32 *v16; // rdi
  unsigned int (__fastcall *v17)(CAudioMediaType *__hidden); // rax
  _QWORD **v18; // rbx
  ATL::CAtlPlex *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  ATL::CAtlPlex *v25; // rcx
  ATL::CAtlPlex *v26; // rcx
  _QWORD *v27; // rdx
  _QWORD *v28; // rdx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids, this);
  }
  CPipeInstance::DeactivateAPOsAndRemoveConnections((struct IAudioProcessor **)this);
  while ( *((_QWORD *)this + 10) )
  {
    v2 = (__int64 *)*((_QWORD *)this + 8);
    if ( !v2 )
      ATL::AtlThrowImpl(-2147467259);
    v3 = (_QWORD **)v2[2];
    v4 = *v2;
    *((_QWORD *)this + 8) = *v2;
    if ( v4 )
      *(_QWORD *)(v4 + 8) = 0LL;
    else
      *((_QWORD *)this + 9) = 0LL;
    *v2 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = v2;
    v5 = (*((_QWORD *)this + 10))-- == 1LL;
    if ( v5 )
      ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll((__int64)this + 64);
    if ( v3 )
    {
      if ( v3[1] && *(_DWORD *)v3 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v3[6] + 64LL))(v3[6]);
        v3[1] = 0LL;
      }
      v6 = v3[7];
      if ( v6 )
      {
        v5 = (*((_DWORD *)v6 + 4))-- == 1;
        if ( v5 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v6[3] + 48LL))(v6[3], v6[1]);
          v22 = v6[3];
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          operator delete(v6);
        }
        v3[7] = 0LL;
      }
      v7 = v3[6];
      if ( v7 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      operator delete(v3);
    }
  }
  while ( *((_QWORD *)this + 4) )
  {
    v8 = (__int64 *)*((_QWORD *)this + 2);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147467259);
    v9 = (void *(__fastcall ***)(CAPOProcessNode *__hidden, unsigned int))v8[2];
    v10 = *v8;
    *((_QWORD *)this + 2) = *v8;
    if ( v10 )
      *(_QWORD *)(v10 + 8) = 0LL;
    else
      *((_QWORD *)this + 3) = 0LL;
    *v8 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = v8;
    v5 = (*((_QWORD *)this + 4))-- == 1LL;
    if ( v5 )
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((char *)this + 16);
    if ( *((_DWORD *)v9 + 10) == 2 )
      (*(void (__fastcall **)(_QWORD, void *(__fastcall *)(CAPOProcessNode *__hidden, unsigned int)))(**((_QWORD **)this + 29) + 32LL))(
        *((_QWORD *)this + 29),
        v9[4][5]);
    v11 = **v9;
    if ( v11 == CAPOProcessNode::`scalar deleting destructor' )
    {
      *v9 = (void *(__fastcall **)(CAPOProcessNode *__hidden, unsigned int))&CAPOProcessNode::`vftable';
      v12 = v9[4];
      if ( v12 )
      {
        v13 = v12[5];
        if ( v13 )
          (*(void (__fastcall **)(void *(__fastcall *)(CAPOProcessNode *__hidden, unsigned int)))(*(_QWORD *)v13 + 16LL))(v13);
        operator delete(v12);
      }
      v9[4] = 0LL;
      *v9 = (void *(__fastcall **)(CAPOProcessNode *__hidden, unsigned int))&CProcessNode::`vftable';
      v14 = (volatile signed __int32 *)v9[2];
      if ( v14 )
      {
        v15 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v14 + 16LL);
        if ( v15 == CAudioMediaType::Release )
        {
          if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
          {
            *(_QWORD *)v14 = &CAudioMediaType::`vftable';
            operator delete(*((void **)v14 + 2));
            *((_QWORD *)v14 + 2) = 0LL;
            operator delete((void *)v14);
          }
        }
        else
        {
          v15((CAudioMediaType *)v9[2]);
        }
      }
      v16 = (volatile signed __int32 *)v9[1];
      if ( v16 )
      {
        v17 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v16 + 16LL);
        if ( v17 == CAudioMediaType::Release )
        {
          if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
          {
            *(_QWORD *)v16 = &CAudioMediaType::`vftable';
            operator delete(*((void **)v16 + 2));
            *((_QWORD *)v16 + 2) = 0LL;
            operator delete((void *)v16);
          }
        }
        else
        {
          v17((CAudioMediaType *)v9[1]);
        }
      }
      operator delete(v9);
    }
    else if ( v11 == CDeviceProcessNode::`vector deleting destructor' )
    {
      CDeviceProcessNode::`vector deleting destructor'((CDeviceProcessNode *)v9, 1u);
    }
    else if ( v11 == CStreamProcessNode::`scalar deleting destructor' )
    {
      CStreamProcessNode::`scalar deleting destructor'((CStreamProcessNode *)v9, 1u);
    }
    else
    {
      v11((CAPOProcessNode *)v9, 1u);
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids);
  }
  v18 = (_QWORD **)((char *)this + 240);
  while ( *((_QWORD *)this + 32) )
  {
    if ( !*v18 )
      ATL::AtlThrowImpl(-2147467259);
    *v18 = (_QWORD *)**v18;
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::FreeNode((char *)this + 240);
  }
  *v18 = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  v19 = (ATL::CAtlPlex *)*((_QWORD *)this + 33);
  if ( v19 )
  {
    ATL::CAtlPlex::FreeDataChain(v19);
    *((_QWORD *)this + 33) = 0LL;
  }
  v20 = *((_QWORD *)this + 29);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  CoTaskMemFree(*((LPVOID *)this + 23));
  *((_QWORD *)this + 23) = 0LL;
  v21 = *((_QWORD *)this + 22);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v23 = *((_QWORD *)this + 21);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v24 = *((_QWORD *)this + 18);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  while ( *((_QWORD *)this + 10) )
  {
    v27 = (_QWORD *)*((_QWORD *)this + 8);
    if ( !v27 )
      ATL::AtlThrowImpl(-2147467259);
    *((_QWORD *)this + 8) = *v27;
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::FreeNode((char *)this + 64);
  }
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v25 = (ATL::CAtlPlex *)*((_QWORD *)this + 11);
  if ( v25 )
  {
    ATL::CAtlPlex::FreeDataChain(v25);
    *((_QWORD *)this + 11) = 0LL;
  }
  while ( *((_QWORD *)this + 4) )
  {
    v28 = (_QWORD *)*((_QWORD *)this + 2);
    if ( !v28 )
      ATL::AtlThrowImpl(-2147467259);
    *((_QWORD *)this + 2) = *v28;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::FreeNode((char *)this + 16);
  }
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v26 = (ATL::CAtlPlex *)*((_QWORD *)this + 5);
  if ( v26 )
  {
    ATL::CAtlPlex::FreeDataChain(v26);
    *((_QWORD *)this + 5) = 0LL;
  }
}
