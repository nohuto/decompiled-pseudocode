/*
 * XREFs of ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003DE30
 * Callers:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x1400444E8 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140007D20 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140007EE4 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14000CBF0 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000CE10 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000FBD0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140010370 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140010660 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001B95C (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x14001D6E1 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14002F97C (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14002FC9C (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140033578 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     WPP_SF_ @ 0x140034B74 (WPP_SF_.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x14003D874 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CPipeInstance::CreateFormatConverterPipeInstance(
        struct IUnknown *a1,
        const struct tWAVEFORMATEX **a2,
        struct CPipeInstance **a3)
{
  BOOL v6; // r12d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rbx
  CAudioMediaType *v11; // rdi
  __int64 (__fastcall *v12)(CAudioMediaType *); // rax
  int v13; // eax
  CPipeInstance *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  CPipeInstance *v17; // rdi
  const unsigned __int16 *v18; // r8
  unsigned __int64 v19; // r9
  int v20; // eax
  int v21; // ebx
  _UNKNOWN **v22; // rcx
  __int64 v24; // [rsp+20h] [rbp-F8h]
  __int64 v25; // [rsp+38h] [rbp-E0h] BYREF
  int pExceptionObject; // [rsp+40h] [rbp-D8h] BYREF
  int v27; // [rsp+44h] [rbp-D4h] BYREF
  int v28; // [rsp+48h] [rbp-D0h] BYREF
  int v29; // [rsp+4Ch] [rbp-CCh] BYREF
  int v30; // [rsp+50h] [rbp-C8h] BYREF
  int v31; // [rsp+54h] [rbp-C4h] BYREF
  struct IAudioMediaType *v32; // [rsp+58h] [rbp-C0h] BYREF
  CPipeInstance *v33; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+78h] [rbp-A0h] BYREF
  __int128 v37; // [rsp+80h] [rbp-98h] BYREF
  __int64 v38; // [rsp+90h] [rbp-88h]
  __int128 v39; // [rsp+98h] [rbp-80h]
  int v40; // [rsp+A8h] [rbp-70h]
  __int64 v41; // [rsp+B0h] [rbp-68h]
  long *v42; // [rsp+B8h] [rbp-60h] BYREF
  ATL::CAtlException *v43; // [rsp+C0h] [rbp-58h] BYREF
  GUID v44; // [rsp+D0h] [rbp-48h] BYREF
  CPipeInstance *v45; // [rsp+128h] [rbp+10h] BYREF
  struct CPipeInstance **v46; // [rsp+130h] [rbp+18h]
  __int64 v47; // [rsp+138h] [rbp+20h] BYREF

  v46 = a3;
  v41 = -2LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 10;
  v6 = *(_DWORD *)a2 != 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, (__int64)&WPP_0100469152753b0964101f667eb0634c_Traceguids);
  }
  *a3 = 0LL;
  try
  {
    v25 = 0LL;
    v7 = CProcessNode::CreateDummyProcessNode(v6, a2[1], &v25);
    if ( v7 < 0 )
    {
      pExceptionObject = v7;
      throw (long *)&pExceptionObject;
    }
    v34 = v25;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v37, &v34);
    v25 = 0LL;
    if ( *(_DWORD *)a2 )
    {
      v47 = 0LL;
      v13 = CProcessNode::CreateDummyProcessNode(v6, a2[2], &v47);
      if ( v13 < 0 )
      {
        v29 = v13;
        throw (long *)&v29;
      }
      v36 = v47;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v37, &v36);
      v47 = 0LL;
    }
    else
    {
      v32 = 0LL;
      v8 = CAudioMediaType::Create(a2[2], (unsigned int)a2[2]->cbSize + 18, &v32, 0.0, 0);
      if ( v8 < 0 )
      {
        v27 = v8;
        throw (long *)&v27;
      }
      v45 = 0LL;
      v44 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v9 = CAPOProcessNode::CreateAPOProcessNode(
             &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
             v6,
             1,
             0,
             (__int128 *)&v44,
             &v45);
      if ( v9 < 0 )
      {
        v28 = v9;
        throw (long *)&v28;
      }
      v10 = (__int64)v45;
      v11 = (CAudioMediaType *)v32;
      (*(void (__fastcall **)(CPipeInstance *, struct IAudioMediaType *))(*(_QWORD *)v45 + 24LL))(v45, v32);
      (*(void (__fastcall **)(__int64, CAudioMediaType *))(*(_QWORD *)v10 + 32LL))(v10, v11);
      v35 = v10;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v37, &v35);
      v45 = 0LL;
      if ( v11 )
      {
        v12 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v11 + 16LL);
        if ( v12 == CAudioMediaType::Release )
          CAudioMediaType::Release(v11);
        else
          v12(v11);
      }
    }
    v14 = (CPipeInstance *)operator new(0x138uLL);
    v45 = v14;
    if ( v14 )
      v17 = CPipeInstance::CPipeInstance(v14, (enum PIPE_TYPE)4);
    else
      v17 = 0LL;
    v33 = v17;
    if ( !v17 )
    {
      v30 = -2147024882;
      throw (long *)&v30;
    }
    v18 = (const unsigned __int16 *)a2[4];
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = _AllocStringWorker<CTCoAllocPolicy>(v16, v15, v18, v19, v24, (char **)v17 + 23);
    v21 = v20;
    if ( v20 < 0 )
    {
      v31 = v20;
      throw (long *)&v31;
    }
    *((_DWORD *)v17 + 30) = *(_DWORD *)a2 == 2;
    *((_DWORD *)v17 + 3) = v6;
    *((_DWORD *)v17 + 32) = 0;
    if ( *((_QWORD *)v17 + 18) )
      ATL::AtlComPtrAssign((struct IUnknown **)v17 + 18, 0LL);
    if ( *((struct IUnknown **)v17 + 29) != a1 )
      ATL::AtlComPtrAssign((struct IUnknown **)v17 + 29, a1);
    *(_QWORD *)v17 = 0LL;
    *((_DWORD *)v17 + 2) = 1;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((__int64 *)v17 + 2, (__int64)&v37);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v37);
    *((_DWORD *)v17 + 35) = (int)((float)((float)(int)a2[2]->nAvgBytesPerSec / (float)a2[2]->nBlockAlign)
                                * (double)(int)a2[3]
                                / 10000000.0
                                + 0.5);
    *((_DWORD *)v17 + 33) = 14;
    *((_DWORD *)v17 + 51) = 0;
    *((GUID *)v17 + 13) = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v33 = 0LL;
    *v46 = v17;
    ATL::CAutoPtr<CPipeInstance>::Free(&v33);
    v25 = 0LL;
  }
  catch ( long *v42 )
  {
    v21 = *(_DWORD *)v42;
  }
  catch ( ATL::CAtlException *v43 )
  {
    v21 = *(_DWORD *)v43;
  }
  v22 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, (__int64)&WPP_0100469152753b0964101f667eb0634c_Traceguids, v21);
    v22 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v21 < 0 )
  {
    if ( v22 != &WPP_GLOBAL_Control && (*((_DWORD *)v22 + 7) & 0x20000) != 0 && *((_BYTE *)v22 + 25) >= 2u )
      WPP_SF_D((__int64)v22[2], 0x12u, (__int64)&WPP_0100469152753b0964101f667eb0634c_Traceguids, v21);
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateFormatConverterPipeInstance", 0x227u, v21);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v37);
  return (unsigned int)v21;
}
