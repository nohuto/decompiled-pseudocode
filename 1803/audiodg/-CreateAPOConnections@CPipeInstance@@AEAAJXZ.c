/*
 * XREFs of ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140009F30
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140005F00 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009CB8 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x14000CD30 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000CE10 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000CEC0 (-GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000D2E0 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x14001B954 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?GetPrev@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAAEAPEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@AEAPEAU__POSITION@@@Z @ 0x14002FA28 (-GetPrev@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIns.c)
 *     ??_GCInPlaceBuffer@@QEAAPEAXI@Z @ 0x14002FB7C (--_GCInPlaceBuffer@@QEAAPEAXI@Z.c)
 *     ?Release@CInPlaceBuffer@@QEAAKXZ @ 0x14002FBD4 (-Release@CInPlaceBuffer@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPipeInstance::CreateAPOConnections(struct IAudioMediaType *this)
{
  struct IAudioMediaType *v1; // r12
  struct IAudioMediaType *v2; // rbx
  struct IAudioMediaTypeVtbl *lpVtbl; // r14
  __int64 (__fastcall *v4)(CProcessNode *__hidden, struct IAudioMediaType **); // rdx
  struct IAudioMediaTypeVtbl *v5; // rax
  ULONG (__stdcall **Prev)(IAudioMediaType *); // rax
  __int64 v7; // rdi
  _QWORD *v8; // r13
  __int64 v9; // rdi
  ULONG (__stdcall *Release)(IAudioMediaType *); // rax
  __int64 v11; // rax
  BOOL v12; // r12d
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  CProcessNode *v17; // rcx
  const WAVEFORMATEX *(__stdcall *GetAudioFormat)(IAudioMediaType *); // rax
  const struct tWAVEFORMATEX *v19; // rax
  const struct tWAVEFORMATEX *v20; // r15
  __int64 (__fastcall *v21)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  const WAVEFORMATEX *(__stdcall *v22)(IAudioMediaType *); // rax
  const struct tWAVEFORMATEX *v23; // rax
  char v24; // r15
  void **v25; // rcx
  __int64 (__fastcall *v26)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  volatile signed __int32 *v27; // rcx
  void (*v28)(void); // rax
  int v29; // esi
  void **v30; // rdi
  unsigned int (__fastcall *v31)(CAudioMediaType *__hidden); // rax
  __int64 v32; // rdi
  __int64 v33; // rcx
  CProcessNode *v34; // rcx
  __int64 (__fastcall *v35)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int LeftFormat; // eax
  void (*v37)(void); // rax
  ULONG (__stdcall *v38)(IAudioMediaType *); // rax
  ULONG (__stdcall *v39)(IAudioMediaType *); // rax
  CProcessNode *v40; // rcx
  __int64 (__fastcall *v41)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int RightFormat; // eax
  void (*v43)(void); // rax
  struct IAudioMediaType *v44; // rax
  struct IAudioMediaType *v45; // rsi
  struct IAudioMediaTypeVtbl *v46; // r15
  struct IAudioMediaTypeVtbl *v47; // rcx
  struct IAudioMediaTypeVtbl *v48; // rcx
  CProcessNode *v50; // rcx
  __int64 (__fastcall *v51)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int v52; // eax
  __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 v56; // rcx
  struct IAudioMediaType *v57; // [rsp+20h] [rbp-E0h] BYREF
  struct IAudioMediaTypeVtbl *v58; // [rsp+28h] [rbp-D8h] BYREF
  struct IAudioMediaType *v59; // [rsp+30h] [rbp-D0h]
  struct IAudioMediaTypeVtbl *v60; // [rsp+38h] [rbp-C8h] BYREF
  char v61[8]; // [rsp+40h] [rbp-C0h] BYREF
  struct IAudioMediaTypeVtbl *v62; // [rsp+48h] [rbp-B8h]
  int v63; // [rsp+50h] [rbp-B0h]
  void *Block; // [rsp+58h] [rbp-A8h] BYREF
  int v65; // [rsp+60h] [rbp-A0h]
  char v66[8]; // [rsp+68h] [rbp-98h] BYREF
  struct IAudioMediaTypeVtbl *v67; // [rsp+70h] [rbp-90h]
  int v68; // [rsp+78h] [rbp-88h]
  struct IAudioMediaType *v69; // [rsp+80h] [rbp-80h] BYREF
  int v70; // [rsp+88h] [rbp-78h]
  struct IAudioMediaTypeVtbl *v71; // [rsp+90h] [rbp-70h] BYREF
  struct IAudioMediaTypeVtbl *v72; // [rsp+98h] [rbp-68h]
  char v73[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v74; // [rsp+A8h] [rbp-58h]
  int v75; // [rsp+B0h] [rbp-50h]
  struct IAudioMediaType *v76; // [rsp+B8h] [rbp-48h] BYREF
  int v77; // [rsp+C0h] [rbp-40h]
  __int128 v78; // [rsp+C8h] [rbp-38h]
  __int128 v79; // [rsp+D8h] [rbp-28h]
  char v80; // [rsp+E8h] [rbp-18h]
  __int64 v81; // [rsp+F0h] [rbp-10h]
  struct IAudioMediaType *v82; // [rsp+F8h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]
  struct IAudioMediaType *v84; // [rsp+150h] [rbp+50h]
  char v85; // [rsp+158h] [rbp+58h]
  struct IAudioMediaType *v86; // [rsp+168h] [rbp+68h] BYREF

  v84 = this;
  v81 = -2LL;
  v1 = this;
  v2 = 0LL;
  v59 = 0LL;
  v85 = 0;
  if ( HIDWORD(this[1].lpVtbl) )
    lpVtbl = this[9].lpVtbl;
  else
    lpVtbl = this[8].lpVtbl;
  v58 = lpVtbl;
  while ( 1 )
  {
LABEL_4:
    if ( !lpVtbl )
    {
      v29 = 0;
      goto LABEL_102;
    }
    v4 = CProcessNode::GetLeftFormat;
    if ( HIDWORD(v1[1].lpVtbl) )
    {
      Prev = (ULONG (__stdcall **)(IAudioMediaType *))ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::GetPrev(
                                                        this,
                                                        &v58);
      lpVtbl = v58;
      v4 = CProcessNode::GetLeftFormat;
    }
    else
    {
      v5 = lpVtbl;
      lpVtbl = (struct IAudioMediaTypeVtbl *)lpVtbl->QueryInterface;
      v58 = lpVtbl;
      Prev = &v5->Release;
    }
    v7 = *(_QWORD *)*Prev;
    if ( !v7 )
      ATL::AtlThrowImpl(-2147467259);
    v8 = *(_QWORD **)v7;
    v9 = *(_QWORD *)(v7 + 16);
    if ( lpVtbl )
    {
      Release = lpVtbl->Release;
      if ( !*(_QWORD *)Release )
        ATL::AtlThrowImpl(-2147467259);
      v11 = *(_QWORD *)(*(_QWORD *)Release + 16LL);
    }
    else
    {
      v11 = 0LL;
    }
    v12 = 0;
    v57 = 0LL;
    v86 = 0LL;
    v13 = *(_QWORD *)(v9 + 24);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v9 + 32);
      if ( v14 )
      {
        if ( v11 && *(_DWORD *)(v13 + 40) == 2 && *(_DWORD *)(v14 + 40) == 2 )
        {
          if ( *(_DWORD *)(v9 + 16) )
          {
            if ( (*(_BYTE *)(v13 + 48) & 1) != 0 )
            {
              v54 = *(_QWORD *)(v11 + 24);
              if ( v54 )
              {
                if ( *(_DWORD *)(v54 + 40) == 2 )
                {
                  (*(void (__fastcall **)(_QWORD, struct IAudioMediaType **))(*(_QWORD *)v13 + 8LL))(
                    *(_QWORD *)(v9 + 24),
                    &v57);
                  v55 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v57->lpVtbl->GetAudioFormat)(v57);
                  (*(void (__fastcall **)(__int64, struct IAudioMediaType **))(*(_QWORD *)v13 + 16LL))(v13, &v86);
                  v12 = *(_DWORD *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v86->lpVtbl->GetAudioFormat)(v86)
                                  + 8) >= *(_DWORD *)(v55 + 8);
                }
              }
            }
          }
          else if ( (*(_BYTE *)(v14 + 48) & 1) != 0 )
          {
            v15 = *(_QWORD *)(v11 + 32);
            if ( v15 )
            {
              if ( *(_DWORD *)(v15 + 40) == 2 )
              {
                v16 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v14 + 8LL);
                v17 = *(CProcessNode **)(v9 + 32);
                if ( v16 == CProcessNode::GetLeftFormat )
                  CProcessNode::GetLeftFormat(v17, &v57);
                else
                  v16(v17, &v57);
                GetAudioFormat = v57->lpVtbl->GetAudioFormat;
                v19 = (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat
                    ? CAudioMediaType::GetAudioFormat((CAudioMediaType *)v57)
                    : (const struct tWAVEFORMATEX *)((__int64 (*)(void))GetAudioFormat)();
                v20 = v19;
                v21 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v14 + 16LL);
                if ( v21 == CProcessNode::GetRightFormat )
                  CProcessNode::GetRightFormat((CProcessNode *)v14, &v86);
                else
                  v21((CProcessNode *)v14, &v86);
                v22 = v86->lpVtbl->GetAudioFormat;
                v23 = (char *)v22 == (char *)CAudioMediaType::GetAudioFormat
                    ? CAudioMediaType::GetAudioFormat((CAudioMediaType *)v86)
                    : (const struct tWAVEFORMATEX *)((__int64 (*)(void))v22)();
                if ( v20->nAvgBytesPerSec >= v23->nAvgBytesPerSec )
                  v12 = 1;
              }
            }
          }
        }
      }
    }
    if ( v86 )
    {
      v38 = v86->lpVtbl->Release;
      if ( (char *)v38 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v86);
      else
        ((void (__fastcall *)(struct IAudioMediaType *, __int64 (__fastcall *)(CProcessNode *__hidden, struct IAudioMediaType **)))v38)(
          v86,
          v4);
    }
    if ( v57 )
    {
      v39 = v57->lpVtbl->Release;
      if ( (char *)v39 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v57);
      else
        ((void (__fastcall *)(struct IAudioMediaType *, __int64 (__fastcall *)(CProcessNode *__hidden, struct IAudioMediaType **)))v39)(
          v57,
          v4);
    }
    if ( v12 )
      break;
    v24 = v85;
    this = 0LL;
    if ( v2 )
      v24 = 0;
    v85 = v24;
    v1 = v84;
LABEL_36:
    if ( !*(_DWORD *)v9 )
      goto LABEL_53;
    v63 = *(_DWORD *)(v9 + 40);
    v65 = 1094927443;
    Block = 0LL;
    if ( v2 )
      v62 = v2->lpVtbl;
    else
      v62 = 0LL;
    v25 = *(void ***)(v9 + 24);
    if ( v25 )
    {
      v26 = (__int64 (__fastcall *)(CProcessNode *__hidden, struct IAudioMediaType **))*((_QWORD *)*v25 + 2);
      if ( v26 == CProcessNode::GetRightFormat )
      {
        Block = v25[2];
        v27 = (volatile signed __int32 *)v25[2];
        if ( v27 )
        {
          v28 = *(void (**)(void))(*(_QWORD *)v27 + 8LL);
          if ( (char *)v28 == (char *)CAudioMediaType::AddRef )
          {
            _InterlockedIncrement(v27 + 2);
            v2 = v59;
            lpVtbl = v58;
          }
          else
          {
            v28();
          }
        }
      }
      else
      {
        v29 = v26((CProcessNode *)v25, (struct IAudioMediaType **)&Block);
        if ( v29 < 0 )
          goto LABEL_47;
      }
    }
    else
    {
      v50 = *(CProcessNode **)(v9 + 32);
      if ( v50 )
      {
        v51 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v50 + 8LL);
        v52 = v51 == CProcessNode::GetLeftFormat
            ? CProcessNode::GetLeftFormat(v50, (struct IAudioMediaType **)&Block)
            : v51(v50, (struct IAudioMediaType **)&Block);
        v29 = v52;
        if ( v52 < 0 )
          goto LABEL_47;
      }
    }
    v29 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(v9 + 48) + 56LL))(
            *(_QWORD *)(v9 + 48),
            v61,
            v9 + 8);
    if ( v29 >= 0 && v2 )
    {
      *(_QWORD *)(v9 + 56) = v2;
      ++LODWORD(v2[2].lpVtbl);
    }
LABEL_47:
    v30 = (void **)Block;
    if ( Block )
    {
      v31 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
      this = (struct IAudioMediaType *)CAudioMediaType::Release;
      if ( v31 == CAudioMediaType::Release )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v30 )
        {
          *v30 = &CAudioMediaType::`vftable';
          operator delete(v30[2]);
          v30[2] = 0LL;
          operator delete(v30);
        }
        v2 = v59;
        lpVtbl = v58;
      }
      else
      {
        v31((CAudioMediaType *)Block);
      }
      Block = 0LL;
    }
    if ( v29 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10LL,
          &WPP_97ee21803b773af0dc6a4f276843e66e_Traceguids,
          (unsigned int)v29);
      }
      AudDGTraceLoggingErrorHelper("CConnectionInstance::CreateConnection", 0x63u, v29);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAE9,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v29,
        (int)v57);
      goto LABEL_102;
    }
LABEL_53:
    if ( !v24 )
    {
      this = v2;
      v2 = 0LL;
      v59 = 0LL;
      if ( this )
      {
        if ( LODWORD(this[2].lpVtbl)-- == 1 )
          CInPlaceBuffer::`scalar deleting destructor'((CInPlaceBuffer *)this, (unsigned int)v4);
      }
    }
    if ( v8 )
    {
      while ( 1 )
      {
        v32 = v8[2];
        v8 = (_QWORD *)*v8;
        if ( !*(_DWORD *)v32 )
          goto LABEL_68;
        v75 = *(_DWORD *)(v32 + 40);
        v77 = 1094927443;
        v76 = 0LL;
        v74 = 0LL;
        v33 = *(_QWORD *)(v32 + 24);
        if ( v33 )
        {
          v29 = (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType **))(*(_QWORD *)v33 + 16LL))(v33, &v76);
          if ( v29 >= 0 )
            goto LABEL_62;
        }
        else
        {
          v34 = *(CProcessNode **)(v32 + 32);
          if ( !v34
            || ((v35 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v34 + 8LL),
                 v35 != CProcessNode::GetLeftFormat)
              ? (LeftFormat = v35(v34, &v76))
              : (LeftFormat = CProcessNode::GetLeftFormat(v34, &v76)),
                v29 = LeftFormat,
                LeftFormat >= 0) )
          {
LABEL_62:
            v29 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(v32 + 48) + 56LL))(
                    *(_QWORD *)(v32 + 48),
                    v73,
                    v32 + 8);
          }
        }
        this = v76;
        if ( v76 )
        {
          v37 = (void (*)(void))v76->lpVtbl->Release;
          if ( (char *)v37 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v76);
          else
            v37();
          v76 = 0LL;
        }
        if ( v29 < 0 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              10LL,
              &WPP_97ee21803b773af0dc6a4f276843e66e_Traceguids,
              (unsigned int)v29);
          }
          AudDGTraceLoggingErrorHelper("CConnectionInstance::CreateConnection", 0x63u, v29);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xAF5,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
            (const char *)(unsigned int)v29,
            (int)v57);
          goto LABEL_102;
        }
LABEL_68:
        if ( !v8 )
          goto LABEL_4;
      }
    }
  }
  if ( v2 )
  {
    v24 = v85;
    v1 = v84;
LABEL_96:
    this = 0LL;
    goto LABEL_36;
  }
  v68 = *(_DWORD *)(v9 + 40);
  v70 = 1094927443;
  v69 = 0LL;
  v67 = 0LL;
  v40 = *(CProcessNode **)(v9 + 24);
  if ( v40 )
  {
    v41 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v40 + 16LL);
    if ( v41 == CProcessNode::GetRightFormat )
      RightFormat = CProcessNode::GetRightFormat(v40, &v69);
    else
      RightFormat = v41(v40, &v69);
    v29 = RightFormat;
    if ( RightFormat < 0 )
      goto LABEL_82;
  }
  else
  {
    v56 = *(_QWORD *)(v9 + 32);
    if ( v56 )
    {
      v29 = (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType **))(*(_QWORD *)v56 + 8LL))(v56, &v69);
      if ( v29 < 0 )
        goto LABEL_82;
    }
  }
  v29 = (*(__int64 (__fastcall **)(_QWORD, char *, struct IAudioMediaTypeVtbl **))(**(_QWORD **)(v9 + 48) + 40LL))(
          *(_QWORD *)(v9 + 48),
          v66,
          &v71);
  if ( v29 >= 0 )
  {
    v60 = v71;
    v72 = v67;
  }
LABEL_82:
  if ( v69 )
  {
    v43 = (void (*)(void))v69->lpVtbl->Release;
    if ( (char *)v43 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v69);
    else
      v43();
    v69 = 0LL;
  }
  if ( v29 >= 0 )
  {
    v1 = v84;
    *(_QWORD *)&v78 = v84;
    *((_QWORD *)&v78 + 1) = &v60;
    v79 = v78;
    v80 = 1;
    v44 = (struct IAudioMediaType *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v45 = v44;
    v82 = v44;
    if ( v44 )
    {
      v46 = v84[29].lpVtbl;
      v47 = v60;
      v44[3].lpVtbl = 0LL;
      v44[1].lpVtbl = v47;
      v44->lpVtbl = v72;
      LODWORD(v44[2].lpVtbl) = 1;
      v48 = v44[3].lpVtbl;
      if ( v48 != v46 )
      {
        if ( v46 )
        {
          (*((void (__fastcall **)(struct IAudioMediaTypeVtbl *))v46->QueryInterface + 1))(v46);
          v48 = v45[3].lpVtbl;
        }
        if ( v48 )
          (*((void (__fastcall **)(struct IAudioMediaTypeVtbl *))v48->QueryInterface + 2))(v48);
        v45[3].lpVtbl = v46;
      }
    }
    else
    {
      v45 = 0LL;
    }
    v2 = v45;
    v59 = v45;
    if ( !v45 )
    {
      v29 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAD8,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)0x8007000ELL,
        (int)v57);
      v80 = 0;
      (*((void (__fastcall **)(struct IAudioMediaTypeVtbl *, struct IAudioMediaTypeVtbl *))v84[29].lpVtbl->QueryInterface
       + 6))(
        v84[29].lpVtbl,
        v60);
      goto LABEL_102;
    }
    v80 = 0;
    v24 = 1;
    v85 = 1;
    goto LABEL_96;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11LL,
      &WPP_97ee21803b773af0dc6a4f276843e66e_Traceguids,
      (unsigned int)v29);
  }
  AudDGTraceLoggingErrorHelper("CConnectionInstance::CreateConnectionBuffer", 0xB3u, v29);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAD3,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)v29,
    (int)v57);
LABEL_102:
  if ( v2 )
    CInPlaceBuffer::Release((CInPlaceBuffer *)v2);
  return (unsigned int)v29;
}
