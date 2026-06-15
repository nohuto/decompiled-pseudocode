/*
 * XREFs of ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140009060
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140008F40 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x1400059CC (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140005A18 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000AA90 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x1400308AC (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPipeInstance::FixupStreamPipe(__int64 **this)
{
  CPipeInstance *v1; // r14
  int APOProcessNode; // esi
  __int64 *v4; // rax
  __int64 v5; // r13
  unsigned int *v6; // r15
  __int64 v7; // rcx
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // rbx
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  void (__fastcall **v11)(_QWORD, __int64); // rax
  __int64 v12; // rbx
  unsigned int *v13; // r15
  _QWORD v14[2]; // [rsp+30h] [rbp-68h] BYREF
  ATL::CAtlException *v15; // [rsp+40h] [rbp-58h] BYREF
  ATL::CAtlException *v16; // [rsp+48h] [rbp-50h] BYREF
  GUID v17; // [rsp+50h] [rbp-48h]
  CPipeInstance *v18; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v20; // [rsp+B0h] [rbp+18h] BYREF
  _QWORD *v21; // [rsp+B8h] [rbp+20h] BYREF

  v18 = (CPipeInstance *)this;
  v14[1] = -2LL;
  v1 = (CPipeInstance *)this;
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
      v21 = 0LL;
      v20 = 0LL;
      v17 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(&GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e, v6[6], 1LL);
      if ( APOProcessNode < 0 )
      {
        if ( v20 )
          (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
        v10 = (void (__fastcall ***)(_QWORD, __int64))v21;
        goto LABEL_21;
      }
      v12 = (__int64)v21;
      APOProcessNode = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _QWORD **))(**((_QWORD **)v1 + 29) + 24LL))(
                         *((_QWORD *)v1 + 29),
                         v21[4] + 8LL,
                         *(unsigned int *)(v21[4] + 4LL),
                         *((_QWORD *)v1 + 23),
                         v21[4] + 40LL,
                         &v21);
      if ( APOProcessNode < 0
        || (APOProcessNode = (*(__int64 (__fastcall **)(unsigned int *, _QWORD **))(*(_QWORD *)v6 + 16LL))(v6, &v20),
            APOProcessNode < 0) )
      {
        if ( v20 )
          (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
        goto LABEL_69;
      }
      v14[0] = 0LL;
      if ( (*(unsigned int (__fastcall **)(__int64, _QWORD *, _QWORD *, _QWORD *))(*(_QWORD *)v12 + 40LL))(
             v12,
             v20,
             v14,
             v20) )
      {
        APOProcessNode = -2005139404;
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 24LL))(v12, v20);
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 32LL))(v12, v20);
        APOProcessNode = 0;
        try
        {
          v19 = v12;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore((char *)v1 + 16, v5, &v19);
        }
        catch ( ATL::CAtlException *v15 )
        {
          v8 = v15;
          if ( *(_DWORD *)v15 == -1073741571 )
            _o__resetstkoflw();
          LODWORD(v19) = *(_DWORD *)v8;
          APOProcessNode = v19;
          if ( (int)v19 < 0 )
          {
            if ( v14[0] )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
            if ( v20 )
              (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
            v10 = (void (__fastcall ***)(_QWORD, __int64))v21;
LABEL_22:
            v11 = *v10;
LABEL_70:
            (*v11)(v10, 1LL);
            goto LABEL_3;
          }
          v1 = v18;
        }
        v12 = 0LL;
        v21 = 0LL;
      }
      if ( v14[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
      if ( v20 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      if ( v12 )
        (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1LL);
    }
  }
  if ( *((_DWORD *)v1 + 28) == 5 && *((_QWORD *)v1 + 4) == 1LL )
  {
    v20 = 0LL;
    v18 = 0LL;
    v13 = *(unsigned int **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)v1 + 2);
    v17 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(&GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e, v13[6], 1LL);
    if ( APOProcessNode < 0 )
    {
      if ( v18 )
        (*(void (**)(void))(*(_QWORD *)v18 + 16LL))();
      v10 = (void (__fastcall ***)(_QWORD, __int64))v20;
LABEL_21:
      if ( !v10 )
        goto LABEL_3;
      goto LABEL_22;
    }
    v12 = (__int64)v20;
    APOProcessNode = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v1 + 29) + 24LL))(
                       *((_QWORD *)v1 + 29),
                       v20[4] + 8LL,
                       *(unsigned int *)(v20[4] + 4LL),
                       *((_QWORD *)v1 + 23),
                       v20[4] + 40LL);
    if ( APOProcessNode < 0
      || (APOProcessNode = (*(__int64 (__fastcall **)(unsigned int *, CPipeInstance **))(*(_QWORD *)v13 + 16LL))(
                             v13,
                             &v18),
          APOProcessNode < 0) )
    {
      if ( v18 )
        (*(void (__fastcall **)(CPipeInstance *))(*(_QWORD *)v18 + 16LL))(v18);
      goto LABEL_69;
    }
    v21 = 0LL;
    if ( (*(unsigned int (__fastcall **)(__int64, CPipeInstance *, _QWORD **, CPipeInstance *))(*(_QWORD *)v12 + 40LL))(
           v12,
           v18,
           &v21,
           v18) )
    {
      APOProcessNode = -2005139404;
    }
    else
    {
      (*(void (__fastcall **)(__int64, CPipeInstance *))(*(_QWORD *)v12 + 24LL))(v12, v18);
      (*(void (__fastcall **)(__int64, CPipeInstance *))(*(_QWORD *)v12 + 32LL))(v12, v18);
      APOProcessNode = 0;
      try
      {
        v19 = v12;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)v1 + 2, &v19);
      }
      catch ( ATL::CAtlException *v16 )
      {
        v9 = v16;
        if ( *(_DWORD *)v16 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v19) = *(_DWORD *)v9;
        APOProcessNode = v19;
        if ( (int)v19 < 0 )
        {
          if ( v21 )
            (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
          if ( v18 )
            (*(void (__fastcall **)(CPipeInstance *))(*(_QWORD *)v18 + 16LL))(v18);
          v10 = (void (__fastcall ***)(_QWORD, __int64))v20;
          goto LABEL_22;
        }
      }
      v12 = 0LL;
      v20 = 0LL;
    }
    if ( v21 )
      (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
    if ( v18 )
      (*(void (__fastcall **)(CPipeInstance *))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v12 )
    {
LABEL_69:
      v11 = *(void (__fastcall ***)(_QWORD, __int64))v12;
      v10 = (void (__fastcall ***)(_QWORD, __int64))v12;
      goto LABEL_70;
    }
  }
LABEL_3:
  if ( APOProcessNode < 0 )
    AudDGTraceLoggingErrorHelper("CPipeInstance::FixupStreamPipe", 0x976u, APOProcessNode);
  return (unsigned int)APOProcessNode;
}
