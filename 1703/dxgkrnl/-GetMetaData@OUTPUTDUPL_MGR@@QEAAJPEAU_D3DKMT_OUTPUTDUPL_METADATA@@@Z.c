/*
 * XREFs of ?GetMetaData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C01ACEE4
 * Callers:
 *     _lambda_2348832400fa9218d4247e5b02438479_::_lambda_invoker_cdecl_ @ 0x1C01ABA50 (_lambda_2348832400fa9218d4247e5b02438479_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00A63E0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C00DDFBC (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C01AC82C (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C01AD388 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C01AD890 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z @ 0x1C01B1F98 (-GetDirtyRects@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_METADATA@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetMetaData(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_OUTPUTDUPL_METADATA *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  __int64 v10; // rcx
  __int64 Type; // rdx
  __int64 v12; // rax
  int DirtyRects; // edi
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char *Buffer; // rax
  __int64 v21; // rcx
  char *v22; // rsi
  __int64 v23; // rax
  OUTPUTDUPL_MGR *v24; // rcx
  UINT v25; // eax
  _BYTE v27[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = *((_QWORD *)this + 2) + 24LL * a2->VidPnSourceId;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, *(struct DXGFASTMUTEX *const *)v6, 3LL * a2->VidPnSourceId, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v7);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(
                        this,
                        (struct _OUTPUTDUPL_CONTEXTLIST *)v6,
                        CurrentProcess,
                        0LL);
  if ( ContextForProcess )
  {
    Type = (unsigned int)a2->Type;
    if ( (_DWORD)Type )
    {
      if ( (_DWORD)Type != 1 )
      {
        v12 = WdLogNewEntry5_WdError(v10, Type);
        *(_QWORD *)(v12 + 24) = a2->Type;
        WdLogEvent5_WdError(v12);
        DirtyRects = -1073741811;
        goto LABEL_13;
      }
      v14 = *((_QWORD *)*ContextForProcess + 33);
      if ( *(_DWORD *)(v14 + 16) == 2 )
      {
        v15 = *(_QWORD *)(v14 + 8);
        v16 = **(void ***)(v15 + 48);
        LODWORD(v15) = 24 * *(_DWORD *)(v15 + 44);
        a2->BufferSizeRequired = v15;
        if ( a2->BufferSizeSupplied < (unsigned int)v15 )
        {
          DirtyRects = -1073741789;
          goto LABEL_13;
        }
        a2->pBuffer = v16;
      }
      else
      {
        a2->BufferSizeRequired = 0;
      }
      DirtyRects = 0;
    }
    else
    {
      DirtyRects = OUTPUTDUPL_CONTEXT::GetDirtyRects(*ContextForProcess, a2);
    }
  }
  else
  {
    DirtyRects = -1073741275;
  }
LABEL_13:
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
  {
    Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(*(PVOID **)(v6 + 16), a2->BufferSizeRequired + 72, 0);
    v22 = Buffer;
    if ( Buffer )
    {
      memset(Buffer, 0, 0x48uLL);
      OUTPUTDUPL_MGR::InitializePacketHeader(v24, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v22);
      v25 = a2->BufferSizeRequired + 72;
      *((_DWORD *)v22 + 12) = 8;
      *((_DWORD *)v22 + 1) = v25;
      *((_DWORD *)v22 + 13) = a2->VidPnSourceId;
      *((_DWORD *)v22 + 14) = a2->Type;
      *((_DWORD *)v22 + 15) = a2->BufferSizeSupplied;
      *((_DWORD *)v22 + 16) = a2->BufferSizeRequired;
      *((_DWORD *)v22 + 17) = DirtyRects;
      if ( DirtyRects >= 0 )
        memmove(v22 + 72, a2->pBuffer, a2->BufferSizeRequired);
      OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v22, 1);
    }
    else
    {
      v23 = WdLogNewEntry5_WdLowResource(v21);
      *(_QWORD *)(v23 + 24) = 1787LL;
      WdLogEvent5_WdLowResource(v23);
      DirtyRects = -1073741801;
    }
  }
  if ( v27[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v17, v18, v19);
  return (unsigned int)DirtyRects;
}
