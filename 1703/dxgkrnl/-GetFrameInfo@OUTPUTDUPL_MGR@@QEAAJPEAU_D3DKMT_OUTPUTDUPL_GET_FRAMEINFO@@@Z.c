/*
 * XREFs of ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x1C01ACDC8
 * Callers:
 *     _lambda_a555c8f1bf148962729f2402570fc0b4_::_lambda_invoker_cdecl_ @ 0x1C01ABAA0 (_lambda_a555c8f1bf148962729f2402570fc0b4_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C00DDFBC (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C01AC82C (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C01AD388 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C01AD890 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetFrameInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_FRAMEINFO@@@Z @ 0x1C01B1FF0 (-GetFrameInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_FRAMEINFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetFrameInfo(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_OUTPUTDUPL_GET_FRAMEINFO *a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGFASTMUTEX **v6; // rbx
  __int64 v7; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  OUTPUTDUPL_MGR *v14; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _BYTE v19[16]; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v20[14]; // [rsp+30h] [rbp-39h] BYREF

  v6 = (struct DXGFASTMUTEX **)(*((_QWORD *)this + 2) + 24LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, *v6, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v7);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(
                        this,
                        (struct _OUTPUTDUPL_CONTEXTLIST *)v6,
                        CurrentProcess,
                        0LL);
  if ( ContextForProcess )
  {
    OUTPUTDUPL_CONTEXT::GetFrameInfo(*ContextForProcess, &a2->FrameInfo);
    v10 = 0;
  }
  else
  {
    v10 = -1073741275;
  }
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) && v10 >= 0 )
  {
    memset(v20, 0, 0x68uLL);
    OUTPUTDUPL_MGR::InitializePacketHeader(v14, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v20);
    VidPnSourceId = a2->VidPnSourceId;
    v16 = *(_OWORD *)&a2->FrameInfo.AccumulatedFrames;
    *(_OWORD *)&v20[7] = *(_OWORD *)&a2->FrameInfo.LastPresentTime.LowPart;
    HIDWORD(v20[0]) = 104;
    v17 = *(_OWORD *)&a2->FrameInfo.PointerPosition.Position.y;
    LODWORD(v20[6]) = 7;
    HIDWORD(v20[6]) = VidPnSourceId;
    *(_OWORD *)&v20[11] = v17;
    *(_OWORD *)&v20[9] = v16;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v20, 1);
  }
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, v11, v12, v13);
  return (unsigned int)v10;
}
