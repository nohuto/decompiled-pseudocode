/*
 * XREFs of ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C01AC3B8
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C01AF450 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C003A60C (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C00DDFBC (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C01AC82C (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C01AD21C (-InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C01AD3A4 (-IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C01AD890 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ??0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z @ 0x1C01B1634 (--0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01B236C (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateOutputDuplication(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_CREATE_OUTPUTDUPL *a2,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a3)
{
  OUTPUTDUPL_MGR *v6; // rcx
  unsigned int v7; // r8d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // r9d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v9; // edx
  bool v10; // cf
  unsigned int v11; // r12d
  int IsOutputDuplAllowedForVidPn; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGFASTMUTEX **v15; // rbx
  __int64 v16; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  OUTPUTDUPL_CONTEXT **v30; // r15
  OUTPUTDUPL_CONTEXT *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  UINT v40; // eax
  unsigned int v41; // [rsp+30h] [rbp-49h] BYREF
  _D3DKMT_VIDPNSOURCEOWNER_TYPE v42; // [rsp+34h] [rbp-45h] BYREF
  _BYTE v43[8]; // [rsp+38h] [rbp-41h] BYREF
  char v44; // [rsp+40h] [rbp-39h]
  _DWORD v45[16]; // [rsp+50h] [rbp-29h] BYREF

  OUTPUTDUPL_MGR::InitializeDiagnosticBuffers(this);
  memset(v45, 0, sizeof(v45));
  OUTPUTDUPL_MGR::InitializePacketHeader(v6, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v45);
  v7 = *(_DWORD *)a3;
  VidPnSourceId = a2[1].VidPnSourceId;
  v9 = a2->VidPnSourceId;
  v10 = (*(_DWORD *)a3 & 0x10) != 0;
  v45[1] = 64;
  v45[13] = v9;
  v11 = -1;
  v45[12] = v10 ? 0xB : 0;
  v41 = -1;
  IsOutputDuplAllowedForVidPn = OUTPUTDUPL_MGR::IsOutputDuplAllowedForVidPn(
                                  this,
                                  v9,
                                  (v7 >> 5) & 1,
                                  VidPnSourceId & 1,
                                  &v42);
  if ( IsOutputDuplAllowedForVidPn < 0 )
  {
LABEL_22:
    v45[14] = v11;
    v45[15] = IsOutputDuplAllowedForVidPn;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v45, 1);
    return (unsigned int)IsOutputDuplAllowedForVidPn;
  }
  v15 = (struct DXGFASTMUTEX **)(*((_QWORD *)this + 2) + 24LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v43, *v15, v13, v14);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v16);
  if ( !OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _OUTPUTDUPL_CONTEXTLIST *)v15, CurrentProcess, &v45[14]) )
  {
    ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _OUTPUTDUPL_CONTEXTLIST *)v15, 0LL, &v41);
    v11 = v41;
    v30 = ContextForProcess;
    IsOutputDuplAllowedForVidPn = -1073741653;
    if ( ContextForProcess )
    {
      if ( (*(_DWORD *)a3 & 0x10) != 0 )
      {
        v40 = 3;
        if ( v42 == D3DKMT_VIDPNSOURCEOWNER_SHARED )
          v40 = 1;
        IsOutputDuplAllowedForVidPn = 0;
        a2->RequiredKeyedMutexCount = v40;
      }
      else
      {
        v31 = (OUTPUTDUPL_CONTEXT *)operator new(0x150uLL, 0x674D444Fu, PagedPool);
        if ( v31 )
          v31 = OUTPUTDUPL_CONTEXT::OUTPUTDUPL_CONTEXT(
                  v31,
                  this,
                  v11,
                  (*(_DWORD *)a3 >> 1) & 1,
                  (*(_DWORD *)a3 >> 3) & 1,
                  (*(_DWORD *)a3 >> 2) & 1);
        *v30 = v31;
        if ( v31 )
        {
          IsOutputDuplAllowedForVidPn = OUTPUTDUPL_CONTEXT::Initialize(v31, a2);
          if ( IsOutputDuplAllowedForVidPn < 0 )
          {
            v34 = WdLogNewEntry5_WdError(v33, v27);
            v35 = a2->VidPnSourceId;
            v36 = v34;
            *(_QWORD *)(v34 + 24) = v35;
            *(_QWORD *)(v34 + 32) = PsGetCurrentProcess(v35);
            WdLogEvent5_WdError(v36);
            if ( *v30 )
              OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(*v30);
            *v30 = 0LL;
          }
        }
        else
        {
          v37 = WdLogNewEntry5_WdLowResource(v32);
          v38 = a2->VidPnSourceId;
          v39 = v37;
          *(_QWORD *)(v37 + 24) = v38;
          *(_QWORD *)(v37 + 32) = PsGetCurrentProcess(v38);
          WdLogEvent5_WdLowResource(v39);
          IsOutputDuplAllowedForVidPn = -1073741801;
        }
      }
    }
    if ( v44 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43, v27, v28, v29);
    goto LABEL_22;
  }
  v20 = WdLogNewEntry5_WdError(v19, v18);
  *(_QWORD *)(v20 + 24) = PsGetCurrentProcess(v21);
  *(_QWORD *)(v20 + 32) = a2->VidPnSourceId;
  WdLogEvent5_WdError(v20);
  v45[15] = -1073740008;
  OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v45, 1);
  if ( v44 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43, v22, v23, v24);
  return 3221227288LL;
}
