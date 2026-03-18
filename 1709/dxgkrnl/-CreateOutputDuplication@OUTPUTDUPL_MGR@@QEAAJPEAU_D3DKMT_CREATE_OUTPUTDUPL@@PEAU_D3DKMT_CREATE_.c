/*
 * XREFs of ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C01C5E10
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C01C9200 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C002AAE8 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C00908F4 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C01C6284 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C01C6D14 (-InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C01C6E9C (-IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C01C7388 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ??0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z @ 0x1C01CB3F4 (--0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01CC128 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateOutputDuplication(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_CREATE_OUTPUTDUPL *a2,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a3)
{
  OUTPUTDUPL_MGR *v6; // rcx
  unsigned int v7; // r8d
  struct _D3DKMT_OUTPUTDUPLCREATIONFLAGS::$2AC88DCDFD0D040EA0D625572809A630::$3AD2520B051062E66F8E36EF65C6D209 Value; // r9d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  bool v10; // cf
  unsigned int v11; // r12d
  int IsOutputDuplAllowedForVidPn; // edi
  struct DXGFASTMUTEX **v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  OUTPUTDUPL_CONTEXT **v23; // r15
  OUTPUTDUPL_CONTEXT *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rdx
  UINT v35; // eax
  unsigned int v36; // [rsp+30h] [rbp-49h] BYREF
  _D3DKMT_VIDPNSOURCEOWNER_TYPE v37; // [rsp+34h] [rbp-45h] BYREF
  _BYTE v38[8]; // [rsp+38h] [rbp-41h] BYREF
  char v39; // [rsp+40h] [rbp-39h]
  _DWORD v40[16]; // [rsp+50h] [rbp-29h] BYREF

  OUTPUTDUPL_MGR::InitializeDiagnosticBuffers(this);
  memset(v40, 0, sizeof(v40));
  OUTPUTDUPL_MGR::InitializePacketHeader(v6, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v40);
  v7 = *(_DWORD *)a3;
  Value = (struct _D3DKMT_OUTPUTDUPLCREATIONFLAGS::$2AC88DCDFD0D040EA0D625572809A630::$3AD2520B051062E66F8E36EF65C6D209)a2->Flags.Value;
  VidPnSourceId = a2->VidPnSourceId;
  v10 = (*(_DWORD *)a3 & 0x10) != 0;
  v40[1] = 64;
  v40[13] = VidPnSourceId;
  v11 = -1;
  v40[12] = v10 ? 0xB : 0;
  v36 = -1;
  IsOutputDuplAllowedForVidPn = OUTPUTDUPL_MGR::IsOutputDuplAllowedForVidPn(
                                  this,
                                  VidPnSourceId,
                                  (v7 >> 5) & 1,
                                  *(_BYTE *)&Value & 1,
                                  &v37);
  if ( IsOutputDuplAllowedForVidPn < 0 )
  {
LABEL_22:
    v40[14] = v11;
    v40[15] = IsOutputDuplAllowedForVidPn;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v40, 1);
    return (unsigned int)IsOutputDuplAllowedForVidPn;
  }
  v13 = (struct DXGFASTMUTEX **)(*((_QWORD *)this + 2) + 24LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, *v13);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v15, v14);
  if ( !OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _OUTPUTDUPL_CONTEXTLIST *)v13, CurrentProcess, &v40[14]) )
  {
    ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _OUTPUTDUPL_CONTEXTLIST *)v13, 0LL, &v36);
    v11 = v36;
    v23 = ContextForProcess;
    IsOutputDuplAllowedForVidPn = -1073741653;
    if ( ContextForProcess )
    {
      if ( (*(_DWORD *)a3 & 0x10) != 0 )
      {
        v35 = 3;
        if ( v37 == D3DKMT_VIDPNSOURCEOWNER_SHARED )
          v35 = 1;
        IsOutputDuplAllowedForVidPn = 0;
        a2->RequiredKeyedMutexCount = v35;
      }
      else
      {
        v24 = (OUTPUTDUPL_CONTEXT *)operator new(0x150uLL, 0x674D444Fu, PagedPool);
        if ( v24 )
          v24 = OUTPUTDUPL_CONTEXT::OUTPUTDUPL_CONTEXT(
                  v24,
                  this,
                  v11,
                  (*(_DWORD *)a3 >> 1) & 1,
                  (*(_DWORD *)a3 >> 3) & 1,
                  (*(_DWORD *)a3 >> 2) & 1);
        *v23 = v24;
        if ( v24 )
        {
          IsOutputDuplAllowedForVidPn = OUTPUTDUPL_CONTEXT::Initialize(v24, a2);
          if ( IsOutputDuplAllowedForVidPn < 0 )
          {
            v27 = WdLogNewEntry5_WdError(v26);
            v28 = a2->VidPnSourceId;
            v29 = v27;
            *(_QWORD *)(v27 + 24) = v28;
            *(_QWORD *)(v27 + 32) = PsGetCurrentProcess(v28, v30);
            WdLogEvent5_WdError(v29);
            if ( *v23 )
              OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(*v23);
            *v23 = 0LL;
          }
        }
        else
        {
          v31 = WdLogNewEntry5_WdLowResource(v25);
          v32 = a2->VidPnSourceId;
          v33 = v31;
          *(_QWORD *)(v31 + 24) = v32;
          *(_QWORD *)(v31 + 32) = PsGetCurrentProcess(v32, v34);
          WdLogEvent5_WdLowResource(v33);
          IsOutputDuplAllowedForVidPn = -1073741801;
        }
      }
    }
    if ( v39 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
    goto LABEL_22;
  }
  v18 = WdLogNewEntry5_WdError(v17);
  *(_QWORD *)(v18 + 24) = PsGetCurrentProcess(v20, v19);
  *(_QWORD *)(v18 + 32) = a2->VidPnSourceId;
  WdLogEvent5_WdError(v18);
  v40[15] = -1073740008;
  OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v40, 1);
  if ( v39 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
  return 3221227288LL;
}
