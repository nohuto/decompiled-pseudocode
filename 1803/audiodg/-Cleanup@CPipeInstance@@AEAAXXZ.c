/*
 * XREFs of ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140008010
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140006360 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x140008470 (--1CPipeInstance@@QEAA@XZ.c)
 * Callees:
 *     ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x140001ED0 (--_GCStreamProcessNode@@UEAAPEAXI@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140002EE8 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?FreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140003770 (-FreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140007D20 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140009740 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x140016E90 (--_ECDeviceProcessNode@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x14001B954 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x14002F028 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140034B74 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140034C70 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CPipeInstance::Cleanup(CPipeInstance *this)
{
  __int64 *v2; // rcx
  __int64 **v3; // rbx
  __int64 v4; // rax
  bool v5; // zf
  __int64 *v6; // rcx
  _QWORD **v7; // rsi
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 *v10; // rdi
  _QWORD *v11; // rdi
  _QWORD *v12; // rcx
  ATL::CAtlPlex *v13; // rcx
  __int64 *v14; // rcx
  CStreamProcessNode *(__fastcall ***v15)(CStreamProcessNode *, char); // rbx
  __int64 v16; // rax
  CStreamProcessNode *(__fastcall *v17)(CStreamProcessNode *, char); // rax
  CStreamProcessNode *(__fastcall **v18)(CStreamProcessNode *, char); // rdi
  CStreamProcessNode *(__fastcall *v19)(CStreamProcessNode *, char); // rcx
  volatile signed __int32 *v20; // rdi
  unsigned int (__fastcall *v21)(CAudioMediaType *__hidden); // rax
  volatile signed __int32 *v22; // rdi
  unsigned int (__fastcall *v23)(CAudioMediaType *__hidden); // rax
  __int64 v24; // rcx
  __int64 *v25; // rdx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_0100469152753b0964101f667eb0634c_Traceguids, this, -2LL);
  }
  CPipeInstance::DeactivateAPOsAndRemoveConnections(this);
  while ( *((_QWORD *)this + 10) )
  {
    v2 = (__int64 *)*((_QWORD *)this + 8);
    if ( !v2 )
      ATL::AtlThrowImpl(-2147467259);
    v3 = (__int64 **)v2[2];
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
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)this + 64);
    while ( v3[2] )
    {
      v6 = *v3;
      if ( !*v3 )
        ATL::AtlThrowImpl(-2147467259);
      v7 = (_QWORD **)v6[2];
      v8 = *v6;
      *v3 = (__int64 *)*v6;
      if ( v8 )
        *(_QWORD *)(v8 + 8) = 0LL;
      else
        v3[1] = 0LL;
      *v6 = (__int64)v3[4];
      v3[4] = v6;
      v5 = v3[2] == (__int64 *)1;
      v3[2] = (__int64 *)((char *)v3[2] - 1);
      if ( v5 )
      {
        while ( v3[2] )
        {
          v25 = *v3;
          if ( !*v3 )
            ATL::AtlThrowImpl(-2147467259);
          *v3 = (__int64 *)*v25;
          ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::FreeNode((__int64)v3, v25);
        }
        *v3 = 0LL;
        v3[1] = 0LL;
        v3[4] = 0LL;
        v9 = v3[3];
        if ( v9 )
        {
          do
          {
            v10 = (__int64 *)*v9;
            free(v9);
            v9 = v10;
          }
          while ( v10 );
          v3[3] = 0LL;
        }
      }
      if ( v7 )
      {
        if ( v7[1] && *(_DWORD *)v7 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v7[6] + 64LL))(v7[6]);
          v7[1] = 0LL;
        }
        v11 = v7[7];
        if ( v11 )
        {
          v5 = (*((_DWORD *)v11 + 4))-- == 1;
          if ( v5 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11[3] + 48LL))(v11[3], v11[1]);
            v24 = v11[3];
            if ( v24 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
            operator delete(v11);
          }
          v7[7] = 0LL;
        }
        v12 = v7[6];
        if ( v12 )
          (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
        operator delete(v7);
      }
    }
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[4] = 0LL;
    v13 = (ATL::CAtlPlex *)v3[3];
    if ( v13 )
    {
      ATL::CAtlPlex::FreeDataChain(v13);
      v3[3] = 0LL;
    }
    operator delete(v3);
  }
  while ( *((_QWORD *)this + 4) )
  {
    v14 = (__int64 *)*((_QWORD *)this + 2);
    if ( !v14 )
      ATL::AtlThrowImpl(-2147467259);
    v15 = (CStreamProcessNode *(__fastcall ***)(CStreamProcessNode *, char))v14[2];
    v16 = *v14;
    *((_QWORD *)this + 2) = *v14;
    if ( v16 )
      *(_QWORD *)(v16 + 8) = 0LL;
    else
      *((_QWORD *)this + 3) = 0LL;
    *v14 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = v14;
    v5 = (*((_QWORD *)this + 4))-- == 1LL;
    if ( v5 )
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)this + 16);
    if ( *((_DWORD *)v15 + 10) == 2 )
      (*(void (__fastcall **)(_QWORD, CStreamProcessNode *(__fastcall *)(CStreamProcessNode *, char)))(**((_QWORD **)this + 29) + 32LL))(
        *((_QWORD *)this + 29),
        v15[4][5]);
    v17 = **v15;
    if ( (char *)v17 == (char *)CAPOProcessNode::`scalar deleting destructor' )
    {
      *v15 = (CStreamProcessNode *(__fastcall **)(CStreamProcessNode *, char))&CAPOProcessNode::`vftable';
      v18 = v15[4];
      if ( v18 )
      {
        v19 = v18[5];
        if ( v19 )
          (*(void (__fastcall **)(CStreamProcessNode *(__fastcall *)(CStreamProcessNode *, char)))(*(_QWORD *)v19 + 16LL))(v19);
        operator delete(v18);
      }
      v15[4] = 0LL;
      *v15 = (CStreamProcessNode *(__fastcall **)(CStreamProcessNode *, char))&CProcessNode::`vftable';
      v20 = (volatile signed __int32 *)v15[2];
      if ( v20 )
      {
        v21 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v20 + 16LL);
        if ( v21 == CAudioMediaType::Release )
        {
          if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
          {
            *(_QWORD *)v20 = &CAudioMediaType::`vftable';
            operator delete(*((void **)v20 + 2));
            *((_QWORD *)v20 + 2) = 0LL;
            operator delete((void *)v20);
          }
        }
        else
        {
          v21((CAudioMediaType *)v15[2]);
        }
      }
      v22 = (volatile signed __int32 *)v15[1];
      if ( v22 )
      {
        v23 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v22 + 16LL);
        if ( v23 == CAudioMediaType::Release )
        {
          if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
          {
            *(_QWORD *)v22 = &CAudioMediaType::`vftable';
            operator delete(*((void **)v22 + 2));
            *((_QWORD *)v22 + 2) = 0LL;
            operator delete((void *)v22);
          }
        }
        else
        {
          v23((CAudioMediaType *)v15[1]);
        }
      }
      operator delete(v15);
    }
    else if ( (char *)v17 == (char *)CDeviceProcessNode::`vector deleting destructor' )
    {
      CDeviceProcessNode::`vector deleting destructor'((CDeviceProcessNode *)v15, 1u);
    }
    else if ( v17 == CStreamProcessNode::`scalar deleting destructor' )
    {
      CStreamProcessNode::`scalar deleting destructor'((CStreamProcessNode *)v15, 1);
    }
    else
    {
      v17((CStreamProcessNode *)v15, 1);
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_0100469152753b0964101f667eb0634c_Traceguids);
  }
}
