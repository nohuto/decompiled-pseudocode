/*
 * XREFs of ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003EF74
 * Callers:
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140043970 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 * Callees:
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14000D6E0 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140015220 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14001B070 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x14001E752 (_CxxThrowException_0.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140030F84 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x140030FB4 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140031214 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140034E94 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x14003EC14 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14003FD64 (-CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudio.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::CreateBridgeStreamPipeInstance(
        struct IUnknown *a1,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IAudioProcessingObject *a3,
        struct CPipeInstance *a4,
        struct tWAVEFORMATEX *a5,
        struct SYSTEM_AUDIO_STREAM *a6,
        struct CPipeInstance **a7)
{
  BOOL v9; // r12d
  float v10; // xmm6_4
  struct tWAVEFORMATEX *v11; // r13
  int v12; // eax
  int v13; // eax
  int v14; // eax
  CPipeInstance *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  CPipeInstance *v18; // rdi
  const unsigned __int16 *v19; // r8
  unsigned __int64 v20; // r9
  int v21; // eax
  int v22; // esi
  int v23; // eax
  int v24; // eax
  __int64 v26; // [rsp+20h] [rbp-B8h]
  CPipeInstance *v27; // [rsp+30h] [rbp-A8h] BYREF
  int pExceptionObject; // [rsp+38h] [rbp-A0h] BYREF
  int v29; // [rsp+3Ch] [rbp-9Ch] BYREF
  int v30; // [rsp+40h] [rbp-98h] BYREF
  int v31; // [rsp+44h] [rbp-94h] BYREF
  int v32; // [rsp+48h] [rbp-90h] BYREF
  __int128 v33; // [rsp+50h] [rbp-88h] BYREF
  __int64 v34; // [rsp+60h] [rbp-78h]
  __int128 v35; // [rsp+68h] [rbp-70h]
  int v36; // [rsp+78h] [rbp-60h]
  __int64 v37; // [rsp+80h] [rbp-58h]
  long *v38; // [rsp+88h] [rbp-50h] BYREF
  ATL::CAtlException *v39; // [rsp+90h] [rbp-48h] BYREF
  CPipeInstance *v41; // [rsp+E8h] [rbp+10h] BYREF

  v37 = -2LL;
  v9 = *(_DWORD *)a2 != 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 10;
  if ( *((_DWORD *)a2 + 2) == 1 )
    v10 = FLOAT_1_0;
  else
    v10 = FLOAT_1_1;
  *a7 = 0LL;
  try
  {
    a6 = 0LL;
    v11 = a5;
    v12 = CAPOEndpointProcessNode::CreateAPOEndpointProcessNode(*(unsigned int *)a2, a3, a5, &a6);
    if ( v12 < 0 )
    {
      pExceptionObject = v12;
      throw (long *)&pExceptionObject;
    }
    v41 = a6;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v33, (__int64 *)&v41);
    a6 = 0LL;
    v41 = 0LL;
    v13 = CProcessNode::CreateDummyProcessNode(v9, v11, &v41);
    if ( v13 < 0 )
    {
      v29 = v13;
      throw (long *)&v29;
    }
    v27 = v41;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v33, (__int64 *)&v27);
    v41 = 0LL;
    v14 = CProcessNode::CreateDummyProcessNode(v9, v11, &v41);
    if ( v14 < 0 )
    {
      v30 = v14;
      throw (long *)&v30;
    }
    v27 = v41;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v33, (__int64 *)&v27);
    v41 = 0LL;
    v15 = (CPipeInstance *)operator new(0x130uLL);
    if ( v15 )
      v18 = CPipeInstance::CPipeInstance(v15, (enum PIPE_TYPE)5);
    else
      v18 = 0LL;
    v27 = v18;
    if ( !v18 )
    {
      v31 = -2147024882;
      throw (long *)&v31;
    }
    v19 = (const unsigned __int16 *)*((_QWORD *)a2 + 5);
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = _AllocStringWorker<CTCoAllocPolicy>(v17, v16, v19, v20, v26, (wchar_t **)v18 + 23);
    v22 = v21;
    if ( v21 < 0 )
    {
      v32 = v21;
      throw (long *)&v32;
    }
    *((_DWORD *)v18 + 30) = *(_DWORD *)a2 == 2;
    *((_DWORD *)v18 + 3) = v9;
    *(_QWORD *)((char *)v18 + 124) = 0LL;
    if ( *((_QWORD *)v18 + 18) )
      ATL::AtlComPtrAssign((struct IUnknown **)v18 + 18, 0LL);
    if ( *((struct IUnknown **)v18 + 29) != a1 )
      ATL::AtlComPtrAssign((struct IUnknown **)v18 + 29, a1);
    *(_QWORD *)v18 = a4;
    *((_DWORD *)v18 + 2) = a4 == 0LL;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((__int64 *)v18 + 2, (__int64)&v33);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v33);
    if ( a4 )
      v23 = *((_DWORD *)a4 + 34);
    else
      v23 = (int)(float)((float)(int)((double)(int)(v11->nAvgBytesPerSec / v11->nBlockAlign)
                                    * (double)(int)*((_QWORD *)a2 + 4)
                                    / 10000000.0
                                    + 0.5)
                       * v10);
    *((_DWORD *)v18 + 35) = v23;
    v24 = 1;
    if ( *((_DWORD *)a2 + 1) )
      v24 = 7;
    *((_DWORD *)v18 + 33) = v24;
    *((_QWORD *)v18 + 25) = 1LL;
    v27 = 0LL;
    *a7 = v18;
    ATL::CAutoPtr<CPipeInstance>::Free(&v27);
  }
  catch ( long *v38 )
  {
    LODWORD(a7) = *(_DWORD *)v38;
    v22 = (int)a7;
  }
  catch ( ATL::CAtlException *v39 )
  {
    LODWORD(a7) = *(_DWORD *)v39;
    v22 = (int)a7;
  }
  if ( v22 < 0 )
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateBridgeStreamPipeInstance", 0x393u, v22);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v33);
  return (unsigned int)v22;
}
