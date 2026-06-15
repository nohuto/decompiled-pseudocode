/*
 * XREFs of ??1CPipeInstance@@QEAA@XZ @ 0x140005B70
 * Callers:
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14000DA94 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140011370 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140011F90 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x1400303C0 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x1400021E0 (--_GCStreamProcessNode@@UEAAPEAXI@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x1400057E0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140005A34 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140007360 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1400172A0 (-FreeNode@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@.c)
 *     ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x140019DA0 (--_ECDeviceProcessNode@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x14001C890 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x14003006C (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140030804 (-FreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXPEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140035F54 (WPP_SF_.c)
 *     WPP_SF_q @ 0x14003BD5C (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CPipeInstance::~CPipeInstance(LPVOID *this)
{
  LPVOID *v2; // rcx
  __int64 *v3; // rbx
  _QWORD *v4; // rax
  bool v5; // zf
  __int64 *v6; // rcx
  _QWORD **v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  _QWORD *v12; // rcx
  ATL::CAtlPlex *v13; // rcx
  LPVOID *v14; // rcx
  CStreamProcessNode *(__fastcall ***v15)(CStreamProcessNode *, char); // rbx
  _QWORD *v16; // rax
  CStreamProcessNode *(__fastcall *v17)(CStreamProcessNode *, char); // rax
  CStreamProcessNode *(__fastcall **v18)(CStreamProcessNode *, char); // rdi
  CStreamProcessNode *(__fastcall *v19)(CStreamProcessNode *, char); // rcx
  volatile signed __int32 *v20; // rdi
  unsigned int (__fastcall *v21)(CAudioMediaType *__hidden); // rax
  volatile signed __int32 *v22; // rdi
  unsigned int (__fastcall *v23)(CAudioMediaType *__hidden); // rax
  _QWORD **v24; // rbx
  ATL::CAtlPlex *v25; // rcx
  LPVOID v26; // rcx
  LPVOID v27; // rcx
  LPVOID v28; // rcx
  LPVOID v29; // rcx
  ATL::CAtlPlex *v30; // rcx
  ATL::CAtlPlex *v31; // rcx
  __int64 v32; // rcx
  LPVOID *v33; // rdx
  LPVOID *v34; // rdx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids, this, -2LL);
  }
  CPipeInstance::DeactivateAPOsAndRemoveConnections((CPipeInstance *)this);
  while ( this[10] )
  {
    v2 = (LPVOID *)this[8];
    if ( !v2 )
      ATL::AtlThrowImpl(-2147467259);
    v3 = (__int64 *)v2[2];
    v4 = *v2;
    this[8] = *v2;
    if ( v4 )
      v4[1] = 0LL;
    else
      this[9] = 0LL;
    *v2 = this[12];
    this[12] = v2;
    v5 = this[10] == (LPVOID)1;
    this[10] = (char *)this[10] - 1;
    if ( v5 )
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)(this + 8));
    while ( v3[2] )
    {
      v6 = (__int64 *)*v3;
      if ( !*v3 )
        ATL::AtlThrowImpl(-2147467259);
      v7 = (_QWORD **)v6[2];
      v8 = *v6;
      *v3 = *v6;
      if ( v8 )
        *(_QWORD *)(v8 + 8) = 0LL;
      else
        v3[1] = 0LL;
      *v6 = v3[4];
      v3[4] = (__int64)v6;
      v5 = v3[2]-- == 1;
      if ( v5 )
      {
        *v3 = 0LL;
        v3[1] = 0LL;
        v3[4] = 0LL;
        v9 = (_QWORD *)v3[3];
        if ( v9 )
        {
          do
          {
            v10 = (_QWORD *)*v9;
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
            v32 = v11[3];
            if ( v32 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
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
  while ( this[4] )
  {
    v14 = (LPVOID *)this[2];
    if ( !v14 )
      ATL::AtlThrowImpl(-2147467259);
    v15 = (CStreamProcessNode *(__fastcall ***)(CStreamProcessNode *, char))v14[2];
    v16 = *v14;
    this[2] = *v14;
    if ( v16 )
      v16[1] = 0LL;
    else
      this[3] = 0LL;
    *v14 = this[6];
    this[6] = v14;
    v5 = this[4] == (LPVOID)1;
    this[4] = (char *)this[4] - 1;
    if ( v5 )
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)(this + 2));
    if ( *((_DWORD *)v15 + 10) == 2 )
      (*(void (__fastcall **)(LPVOID, CStreamProcessNode *(__fastcall *)(CStreamProcessNode *, char)))(*(_QWORD *)this[29] + 32LL))(
        this[29],
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
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids);
  }
  v24 = (_QWORD **)(this + 30);
  while ( this[32] )
  {
    if ( !*v24 )
      ATL::AtlThrowImpl(-2147467259);
    *v24 = (_QWORD *)**v24;
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::FreeNode(this + 30);
  }
  *v24 = 0LL;
  this[31] = 0LL;
  this[34] = 0LL;
  v25 = (ATL::CAtlPlex *)this[33];
  if ( v25 )
  {
    ATL::CAtlPlex::FreeDataChain(v25);
    this[33] = 0LL;
  }
  v26 = this[29];
  if ( v26 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v26 + 16LL))(v26);
  CoTaskMemFree(this[23]);
  this[23] = 0LL;
  v27 = this[22];
  if ( v27 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v27 + 16LL))(v27);
  v28 = this[21];
  if ( v28 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v28 + 16LL))(v28);
  v29 = this[18];
  if ( v29 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v29 + 16LL))(v29);
  while ( this[10] )
  {
    v33 = (LPVOID *)this[8];
    if ( !v33 )
      ATL::AtlThrowImpl(-2147467259);
    this[8] = *v33;
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::FreeNode(this + 8);
  }
  this[8] = 0LL;
  this[9] = 0LL;
  this[12] = 0LL;
  v30 = (ATL::CAtlPlex *)this[11];
  if ( v30 )
  {
    ATL::CAtlPlex::FreeDataChain(v30);
    this[11] = 0LL;
  }
  while ( this[4] )
  {
    v34 = (LPVOID *)this[2];
    if ( !v34 )
      ATL::AtlThrowImpl(-2147467259);
    this[2] = *v34;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::FreeNode(this + 2);
  }
  this[2] = 0LL;
  this[3] = 0LL;
  this[6] = 0LL;
  v31 = (ATL::CAtlPlex *)this[5];
  if ( v31 )
  {
    ATL::CAtlPlex::FreeDataChain(v31);
    this[5] = 0LL;
  }
}
