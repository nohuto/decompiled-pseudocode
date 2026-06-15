/*
 * XREFs of ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14000ADE0
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140007C50 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000AC54 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000DCB0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000DE00 (-GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000E210 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x14001B9A0 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x14001CB20 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140030F34 (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??_GCInPlaceBuffer@@QEAAPEAXI@Z @ 0x1400310AC (--_GCInPlaceBuffer@@QEAAPEAXI@Z.c)
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x140031114 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::CreateAPOConnections(CPipeInstance *this)
{
  CPipeInstance *v1; // r15
  CInPlaceBuffer *v2; // r14
  int v3; // r13d
  int v4; // edi
  _QWORD *v5; // rsi
  __int64 (__fastcall *v6)(CProcessNode *__hidden, struct IAudioMediaType **); // rdx
  _QWORD *v7; // rbx
  __int64 *Prev; // rbx
  __int64 v9; // rbx
  __int64 v10; // rax
  BOOL v11; // r12d
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 (__fastcall *v15)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  CProcessNode *v16; // rcx
  const WAVEFORMATEX *(__stdcall *GetAudioFormat)(IAudioMediaType *); // rax
  const struct tWAVEFORMATEX *v18; // rax
  const struct tWAVEFORMATEX *v19; // r15
  __int64 (__fastcall *v20)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  const WAVEFORMATEX *(__stdcall *v21)(IAudioMediaType *); // rax
  const struct tWAVEFORMATEX *v22; // rax
  void **v23; // rcx
  __int64 (__fastcall *v24)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  volatile signed __int32 *v25; // rcx
  void (*v26)(void); // rax
  void **v27; // rbx
  unsigned int (__fastcall *v28)(CAudioMediaType *__hidden); // rax
  ULONG (__stdcall *Release)(IAudioMediaType *); // rax
  ULONG (__stdcall *v31)(IAudioMediaType *); // rax
  CProcessNode *v32; // rcx
  __int64 (__fastcall *v33)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int RightFormat; // eax
  __int64 v35; // r12
  __int64 v36; // r13
  void (*v37)(void); // rax
  CInPlaceBuffer *v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rcx
  CProcessNode *v41; // rcx
  __int64 (__fastcall *v42)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int v43; // eax
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rcx
  struct IAudioMediaType *v48; // [rsp+20h] [rbp-69h] BYREF
  __int64 v49; // [rsp+28h] [rbp-61h]
  __int64 v50; // [rsp+30h] [rbp-59h]
  char v51[8]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v52; // [rsp+40h] [rbp-49h]
  int v53; // [rsp+48h] [rbp-41h]
  void *Block; // [rsp+50h] [rbp-39h] BYREF
  int v55; // [rsp+58h] [rbp-31h]
  char v56[8]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v57; // [rsp+68h] [rbp-21h]
  int v58; // [rsp+70h] [rbp-19h]
  struct IAudioMediaType *v59; // [rsp+78h] [rbp-11h] BYREF
  int v60; // [rsp+80h] [rbp-9h]
  _QWORD v61[11]; // [rsp+88h] [rbp-1h] BYREF
  _QWORD *v63; // [rsp+100h] [rbp+77h] BYREF
  struct IAudioMediaType *v64; // [rsp+108h] [rbp+7Fh] BYREF

  v61[1] = -2LL;
  v1 = this;
  v2 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v3 = 0;
  v4 = 0;
  if ( *((_DWORD *)this + 3) )
    v5 = (_QWORD *)*((_QWORD *)this + 9);
  else
    v5 = (_QWORD *)*((_QWORD *)this + 8);
  v63 = v5;
  if ( !v5 )
    return (unsigned int)v4;
  while ( 1 )
  {
    v6 = CProcessNode::GetLeftFormat;
    if ( *((_DWORD *)v1 + 3) )
    {
      Prev = (__int64 *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(0LL, &v63);
      v5 = v63;
      v6 = CProcessNode::GetLeftFormat;
    }
    else
    {
      v7 = v5;
      v5 = (_QWORD *)*v5;
      v63 = v5;
      Prev = v7 + 2;
    }
    v9 = *Prev;
    if ( v5 )
      v10 = v5[2];
    else
      v10 = 0LL;
    v11 = 0;
    v48 = 0LL;
    v64 = 0LL;
    v12 = *(_QWORD *)(v9 + 24);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v9 + 32);
      if ( v13 )
      {
        if ( v10 && *(_DWORD *)(v12 + 40) == 2 && *(_DWORD *)(v13 + 40) == 2 )
        {
          if ( *(_DWORD *)(v9 + 16) )
          {
            if ( (*(_BYTE *)(v12 + 48) & 1) != 0 )
            {
              v45 = *(_QWORD *)(v10 + 24);
              if ( v45 )
              {
                if ( *(_DWORD *)(v45 + 40) == 2 )
                {
                  (*(void (__fastcall **)(_QWORD, struct IAudioMediaType **))(*(_QWORD *)v12 + 8LL))(
                    *(_QWORD *)(v9 + 24),
                    &v48);
                  v46 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v48->lpVtbl->GetAudioFormat)(v48);
                  (*(void (__fastcall **)(__int64, struct IAudioMediaType **))(*(_QWORD *)v12 + 16LL))(v12, &v64);
                  v11 = *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v64->lpVtbl->GetAudioFormat)(v64)
                                  + 8) >= *(_DWORD *)(v46 + 8);
                }
              }
            }
          }
          else if ( (*(_BYTE *)(v13 + 48) & 1) != 0 )
          {
            v14 = *(_QWORD *)(v10 + 32);
            if ( v14 )
            {
              if ( *(_DWORD *)(v14 + 40) == 2 )
              {
                v15 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v13 + 8LL);
                v16 = *(CProcessNode **)(v9 + 32);
                if ( v15 == CProcessNode::GetLeftFormat )
                  CProcessNode::GetLeftFormat(v16, &v48);
                else
                  v15(v16, &v48);
                GetAudioFormat = v48->lpVtbl->GetAudioFormat;
                v18 = (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat
                    ? CAudioMediaType::GetAudioFormat((CAudioMediaType *)v48)
                    : (const struct tWAVEFORMATEX *)((__int64 (*)(void))GetAudioFormat)();
                v19 = v18;
                v20 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v13 + 16LL);
                if ( v20 == CProcessNode::GetRightFormat )
                  CProcessNode::GetRightFormat((CProcessNode *)v13, &v64);
                else
                  v20((CProcessNode *)v13, &v64);
                v21 = v64->lpVtbl->GetAudioFormat;
                v22 = (char *)v21 == (char *)CAudioMediaType::GetAudioFormat
                    ? CAudioMediaType::GetAudioFormat((CAudioMediaType *)v64)
                    : (const struct tWAVEFORMATEX *)((__int64 (*)(void))v21)();
                if ( v19->nAvgBytesPerSec >= v22->nAvgBytesPerSec )
                  v11 = 1;
              }
            }
          }
        }
      }
    }
    if ( v64 )
    {
      Release = v64->lpVtbl->Release;
      if ( (char *)Release == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v64);
      else
        ((void (__fastcall *)(struct IAudioMediaType *, __int64 (__fastcall *)(CProcessNode *__hidden, struct IAudioMediaType **)))Release)(
          v64,
          v6);
    }
    if ( v48 )
    {
      v31 = v48->lpVtbl->Release;
      if ( (char *)v31 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v48);
      else
        ((void (__fastcall *)(struct IAudioMediaType *, __int64 (__fastcall *)(CProcessNode *__hidden, struct IAudioMediaType **)))v31)(
          v48,
          v6);
    }
    if ( !v11 )
    {
      if ( v2 )
        v3 = 0;
      v1 = this;
      goto LABEL_33;
    }
    if ( v2 )
    {
      v1 = this;
      goto LABEL_33;
    }
    v58 = *(_DWORD *)(v9 + 40);
    v60 = 1094927443;
    v59 = 0LL;
    v57 = 0LL;
    v32 = *(CProcessNode **)(v9 + 24);
    if ( v32 )
    {
      v33 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v32 + 16LL);
      if ( v33 == CProcessNode::GetRightFormat )
        RightFormat = CProcessNode::GetRightFormat(v32, &v59);
      else
        RightFormat = v33(v32, &v59);
      v4 = RightFormat;
      if ( RightFormat < 0 )
      {
LABEL_114:
        v35 = v49;
        v36 = v50;
        goto LABEL_69;
      }
    }
    else
    {
      v47 = *(_QWORD *)(v9 + 32);
      if ( v47 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType **))(*(_QWORD *)v47 + 8LL))(v47, &v59);
        if ( v4 < 0 )
          goto LABEL_114;
      }
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD *))(**(_QWORD **)(v9 + 48) + 40LL))(
           *(_QWORD *)(v9 + 48),
           v56,
           v61);
    if ( v4 < 0 )
      goto LABEL_114;
    v35 = v61[0];
    v49 = v61[0];
    v36 = v57;
    v50 = v57;
LABEL_69:
    if ( v59 )
    {
      v37 = (void (*)(void))v59->lpVtbl->Release;
      if ( (char *)v37 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v59);
      else
        v37();
      v59 = 0LL;
    }
    if ( v4 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          11LL,
          &WPP_d2302955c188393ffc67d03e162b2897_Traceguids,
          (unsigned int)v4);
      }
      AudDGTraceLoggingErrorHelper("CConnectionInstance::CreateConnectionBuffer", 0xB3u, v4);
      goto LABEL_131;
    }
    v38 = (CInPlaceBuffer *)operator new(0x20uLL);
    v2 = v38;
    v61[2] = v38;
    if ( v38 )
    {
      v1 = this;
      v39 = *((_QWORD *)this + 29);
      *((_QWORD *)v38 + 3) = 0LL;
      *((_QWORD *)v38 + 1) = v35;
      *(_QWORD *)v38 = v36;
      *((_DWORD *)v38 + 4) = 1;
      if ( *((_QWORD *)v38 + 3) != v39 )
      {
        if ( v39 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 8LL))(v39);
        v40 = *((_QWORD *)v2 + 3);
        if ( v40 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
        *((_QWORD *)v2 + 3) = v39;
      }
    }
    else
    {
      v2 = 0LL;
      v1 = this;
    }
    if ( !v2 )
    {
      v4 = -2147024882;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v1 + 29) + 48LL))(*((_QWORD *)v1 + 29), v35);
      goto LABEL_53;
    }
    v3 = 1;
LABEL_33:
    if ( *(_DWORD *)v9 )
      break;
    v4 = 0;
LABEL_50:
    if ( !v3 && v2 )
    {
      if ( (*((_DWORD *)v2 + 4))-- == 1 )
        CInPlaceBuffer::`scalar deleting destructor'(v2, (unsigned int)v6);
      v2 = 0LL;
    }
    if ( !v5 )
      goto LABEL_53;
  }
  v53 = *(_DWORD *)(v9 + 40);
  v55 = 1094927443;
  Block = 0LL;
  if ( v2 )
    v52 = *(_QWORD *)v2;
  else
    v52 = 0LL;
  v23 = *(void ***)(v9 + 24);
  if ( v23 )
  {
    v24 = (__int64 (__fastcall *)(CProcessNode *__hidden, struct IAudioMediaType **))*((_QWORD *)*v23 + 2);
    if ( v24 == CProcessNode::GetRightFormat )
    {
      Block = v23[2];
      v25 = (volatile signed __int32 *)v23[2];
      if ( v25 )
      {
        v26 = *(void (**)(void))(*(_QWORD *)v25 + 8LL);
        if ( (char *)v26 == (char *)CAudioMediaType::AddRef )
        {
          _InterlockedIncrement(v25 + 2);
          v5 = v63;
        }
        else
        {
          v26();
        }
      }
LABEL_41:
      v4 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(v9 + 48) + 56LL))(
             *(_QWORD *)(v9 + 48),
             v51,
             v9 + 8);
      if ( v4 >= 0 && v2 )
      {
        *(_QWORD *)(v9 + 56) = v2;
        ++*((_DWORD *)v2 + 4);
      }
    }
    else
    {
      v4 = v24((CProcessNode *)v23, (struct IAudioMediaType **)&Block);
      if ( v4 >= 0 )
        goto LABEL_41;
    }
  }
  else
  {
    v41 = *(CProcessNode **)(v9 + 32);
    if ( !v41 )
      goto LABEL_41;
    v42 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v41 + 8LL);
    v43 = v42 == CProcessNode::GetLeftFormat
        ? CProcessNode::GetLeftFormat(v41, (struct IAudioMediaType **)&Block)
        : v42(v41, (struct IAudioMediaType **)&Block);
    v4 = v43;
    if ( v43 >= 0 )
      goto LABEL_41;
  }
  v27 = (void **)Block;
  if ( Block )
  {
    v28 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
    if ( v28 == CAudioMediaType::Release )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v27 )
      {
        *v27 = &CAudioMediaType::`vftable';
        operator delete(v27[2]);
        v27[2] = 0LL;
        operator delete(v27);
      }
      v5 = v63;
    }
    else
    {
      v28((CAudioMediaType *)Block);
    }
    Block = 0LL;
  }
  if ( v4 >= 0 )
    goto LABEL_50;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_d2302955c188393ffc67d03e162b2897_Traceguids,
      (unsigned int)v4);
  }
  AudDGTraceLoggingErrorHelper("CConnectionInstance::CreateConnection", 0x63u, v4);
LABEL_53:
  if ( v2 )
    CInPlaceBuffer::Release(v2);
  if ( v4 < 0 )
  {
LABEL_131:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38LL,
        &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
        (unsigned int)v4);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateAPOConnections", 0xA88u, v4);
  }
  return (unsigned int)v4;
}
