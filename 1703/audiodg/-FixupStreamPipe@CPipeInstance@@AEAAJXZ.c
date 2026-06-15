/*
 * XREFs of ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000BAE0
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140007C50 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B9C0 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000DCB0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400112E0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140015384 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140030E94 (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140030F84 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPipeInstance::FixupStreamPipe(__int64 **this)
{
  CAudioMediaType *v1; // r15
  int APOProcessNode; // r14d
  __int64 *v4; // rax
  __int64 v5; // r13
  unsigned int *v6; // rsi
  __int64 v7; // rcx
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // rbx
  void (*v10)(void); // rax
  CAudioMediaType *v11; // rcx
  void (__fastcall **v12)(CAudioMediaType *, __int64); // rax
  CAudioMediaType *v13; // rbx
  void (*v14)(void); // rax
  void (*v15)(void); // rax
  void (*v16)(void); // rax
  void (*v17)(void); // rax
  void (*v18)(void); // rax
  unsigned int *v19; // r12
  void (*v20)(void); // rax
  void (*v21)(void); // rax
  void (*v22)(void); // rax
  void (*v23)(void); // rax
  void (*v24)(void); // rax
  void (*v25)(void); // rax
  CAudioMediaType *v26[2]; // [rsp+30h] [rbp-68h] BYREF
  ATL::CAtlException *v27; // [rsp+40h] [rbp-58h] BYREF
  ATL::CAtlException *v28; // [rsp+48h] [rbp-50h] BYREF
  GUID v29; // [rsp+50h] [rbp-48h]
  CAudioMediaType *v30; // [rsp+A0h] [rbp+8h] BYREF
  CAudioMediaType *v31; // [rsp+A8h] [rbp+10h] BYREF
  CAudioMediaType *v32; // [rsp+B0h] [rbp+18h] BYREF
  CAudioMediaType *v33; // [rsp+B8h] [rbp+20h] BYREF

  v30 = (CAudioMediaType *)this;
  v26[1] = (CAudioMediaType *)-2LL;
  v1 = (CAudioMediaType *)this;
  APOProcessNode = 0;
  if ( *((_DWORD *)this + 28) == 2 && (unsigned __int64)this[4] > 1 )
  {
    v4 = this[2];
    if ( !v4 )
      ATL::AtlThrowImpl(-2147467259);
    v5 = *v4;
    v6 = (unsigned int *)v4[2];
    if ( !*v4 )
      ATL::AtlThrowImpl(-2147467259);
    v7 = *(_QWORD *)(v5 + 16);
    if ( v6[10] == 3
      && *(_DWORD *)(v7 + 40) == 2
      && *(_DWORD *)(*(_QWORD *)(v7 + 32) + 4LL)
      && (*(_BYTE *)(v7 + 48) & 1) != 0 )
    {
      v33 = 0LL;
      v32 = 0LL;
      v29 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(&GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e, v6[6], 1LL);
      if ( APOProcessNode < 0 )
      {
        if ( v32 )
        {
          v10 = *(void (**)(void))(*(_QWORD *)v32 + 16LL);
          if ( (char *)v10 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release(v32);
          else
            v10();
        }
        v11 = v33;
        goto LABEL_24;
      }
      v13 = v33;
      APOProcessNode = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v1 + 29)
                                                                                           + 24LL))(
                         *((_QWORD *)v1 + 29),
                         *((_QWORD *)v33 + 4) + 8LL,
                         *(unsigned int *)(*((_QWORD *)v33 + 4) + 4LL),
                         *((_QWORD *)v1 + 23),
                         *((_QWORD *)v33 + 4) + 40LL);
      if ( APOProcessNode < 0
        || (APOProcessNode = (*(__int64 (__fastcall **)(unsigned int *, CAudioMediaType **))(*(_QWORD *)v6 + 16LL))(
                               v6,
                               &v32),
            APOProcessNode < 0) )
      {
        if ( v32 )
        {
          v14 = *(void (**)(void))(*(_QWORD *)v32 + 16LL);
          if ( (char *)v14 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release(v32);
          else
            v14();
        }
        goto LABEL_93;
      }
      v26[0] = 0LL;
      if ( (*(unsigned int (__fastcall **)(CAudioMediaType *, CAudioMediaType *, CAudioMediaType **, CAudioMediaType *))(*(_QWORD *)v13 + 40LL))(
             v13,
             v32,
             v26,
             v32) )
      {
        APOProcessNode = -2005139404;
      }
      else
      {
        (*(void (__fastcall **)(CAudioMediaType *, CAudioMediaType *))(*(_QWORD *)v13 + 24LL))(v13, v32);
        (*(void (__fastcall **)(CAudioMediaType *, CAudioMediaType *))(*(_QWORD *)v13 + 32LL))(v13, v32);
        APOProcessNode = 0;
        try
        {
          v31 = v13;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore((char *)v1 + 16, v5, &v31);
        }
        catch ( ATL::CAtlException *v27 )
        {
          v8 = v27;
          if ( *(_DWORD *)v27 == -1073741571 )
            _o__resetstkoflw();
          LODWORD(v31) = *(_DWORD *)v8;
          APOProcessNode = (int)v31;
          if ( (int)v31 < 0 )
          {
            if ( v26[0] )
            {
              v15 = *(void (**)(void))(*(_QWORD *)v26[0] + 16LL);
              if ( (char *)v15 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release(v26[0]);
              else
                v15();
            }
            if ( v32 )
            {
              v16 = *(void (**)(void))(*(_QWORD *)v32 + 16LL);
              if ( (char *)v16 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release(v32);
              else
                v16();
            }
            v11 = v33;
LABEL_25:
            v12 = *(void (__fastcall ***)(CAudioMediaType *, __int64))v11;
LABEL_94:
            (*v12)(v11, 1LL);
            goto LABEL_3;
          }
          v1 = v30;
        }
        v13 = 0LL;
        v33 = 0LL;
      }
      if ( v26[0] )
      {
        v17 = *(void (**)(void))(*(_QWORD *)v26[0] + 16LL);
        if ( (char *)v17 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release(v26[0]);
        else
          v17();
      }
      if ( v32 )
      {
        v18 = *(void (**)(void))(*(_QWORD *)v32 + 16LL);
        if ( (char *)v18 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release(v32);
        else
          v18();
      }
      if ( v13 )
        (**(void (__fastcall ***)(CAudioMediaType *, __int64))v13)(v13, 1LL);
    }
  }
  if ( *((_DWORD *)v1 + 28) == 5 && *((_QWORD *)v1 + 4) == 1LL )
  {
    v32 = 0LL;
    v30 = 0LL;
    v19 = *(unsigned int **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((char *)v1 + 16);
    v29 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(&GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e, v19[6], 1LL);
    if ( APOProcessNode < 0 )
    {
      if ( v30 )
      {
        v20 = *(void (**)(void))(*(_QWORD *)v30 + 16LL);
        if ( (char *)v20 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release(v30);
        else
          v20();
      }
      v11 = v32;
LABEL_24:
      if ( !v11 )
        goto LABEL_3;
      goto LABEL_25;
    }
    v13 = v32;
    APOProcessNode = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v1 + 29) + 24LL))(
                       *((_QWORD *)v1 + 29),
                       *((_QWORD *)v32 + 4) + 8LL,
                       *(unsigned int *)(*((_QWORD *)v32 + 4) + 4LL),
                       *((_QWORD *)v1 + 23),
                       *((_QWORD *)v32 + 4) + 40LL);
    if ( APOProcessNode < 0
      || (APOProcessNode = (*(__int64 (__fastcall **)(unsigned int *, CAudioMediaType **))(*(_QWORD *)v19 + 16LL))(
                             v19,
                             &v30),
          APOProcessNode < 0) )
    {
      if ( v30 )
      {
        v21 = *(void (**)(void))(*(_QWORD *)v30 + 16LL);
        if ( (char *)v21 == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release(v30);
        else
          v21();
      }
      goto LABEL_93;
    }
    v33 = 0LL;
    if ( (*(unsigned int (__fastcall **)(CAudioMediaType *, CAudioMediaType *, CAudioMediaType **, CAudioMediaType *))(*(_QWORD *)v13 + 40LL))(
           v13,
           v30,
           &v33,
           v30) )
    {
      APOProcessNode = -2005139404;
    }
    else
    {
      (*(void (__fastcall **)(CAudioMediaType *, CAudioMediaType *))(*(_QWORD *)v13 + 24LL))(v13, v30);
      (*(void (__fastcall **)(CAudioMediaType *, CAudioMediaType *))(*(_QWORD *)v13 + 32LL))(v13, v30);
      APOProcessNode = 0;
      try
      {
        v31 = v13;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((char *)v1 + 16, &v31);
      }
      catch ( ATL::CAtlException *v28 )
      {
        v9 = v28;
        if ( *(_DWORD *)v28 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v31) = *(_DWORD *)v9;
        APOProcessNode = (int)v31;
        if ( (int)v31 < 0 )
        {
          if ( v33 )
          {
            v22 = *(void (**)(void))(*(_QWORD *)v33 + 16LL);
            if ( (char *)v22 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release(v33);
            else
              v22();
          }
          if ( v30 )
          {
            v23 = *(void (**)(void))(*(_QWORD *)v30 + 16LL);
            if ( (char *)v23 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release(v30);
            else
              v23();
          }
          v11 = v32;
          goto LABEL_25;
        }
      }
      v13 = 0LL;
      v32 = 0LL;
    }
    if ( v33 )
    {
      v24 = *(void (**)(void))(*(_QWORD *)v33 + 16LL);
      if ( (char *)v24 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release(v33);
      else
        v24();
    }
    if ( v30 )
    {
      v25 = *(void (**)(void))(*(_QWORD *)v30 + 16LL);
      if ( (char *)v25 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release(v30);
      else
        v25();
    }
    if ( v13 )
    {
LABEL_93:
      v12 = *(void (__fastcall ***)(CAudioMediaType *, __int64))v13;
      v11 = v13;
      goto LABEL_94;
    }
  }
LABEL_3:
  if ( APOProcessNode < 0 )
    AudDGTraceLoggingErrorHelper("CPipeInstance::FixupStreamPipe", 0x90Cu, APOProcessNode);
  return (unsigned int)APOProcessNode;
}
