/*
 * XREFs of ?GetPointerShapeData@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z @ 0x1C01AD0A0
 * Callers:
 *     _lambda_323a6f2bac221de0325809d248e0690f_::_lambda_invoker_cdecl_ @ 0x1C01ABA80 (_lambda_323a6f2bac221de0325809d248e0690f_--_lambda_invoker_cdecl_.c)
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
 *     ?GetPointerShapeData@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z @ 0x1C01B2154 (-GetPointerShapeData@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetPointerShapeData(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGFASTMUTEX **v6; // rbx
  __int64 v7; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  unsigned int PointerShapeData; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  OUTPUTDUPL_MGR *v14; // rcx
  _BYTE v16[16]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v17[12]; // [rsp+30h] [rbp-29h] BYREF

  v6 = (struct DXGFASTMUTEX **)(*((_QWORD *)this + 2) + 24LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, *v6, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v7);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(
                        this,
                        (struct _OUTPUTDUPL_CONTEXTLIST *)v6,
                        CurrentProcess,
                        0LL);
  if ( ContextForProcess )
    PointerShapeData = OUTPUTDUPL_CONTEXT::GetPointerShapeData(*ContextForProcess, a2);
  else
    PointerShapeData = -1073741275;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
  {
    memset(v17, 0, 0x58uLL);
    OUTPUTDUPL_MGR::InitializePacketHeader(v14, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v17);
    HIDWORD(v17[6]) = a2->VidPnSourceId;
    v17[7] = *(_QWORD *)&a2->ShapeInfo.Type;
    v17[8] = *(_QWORD *)&a2->ShapeInfo.Height;
    v17[9] = a2->ShapeInfo.HotSpot;
    LODWORD(v17[10]) = a2->BufferSizeSupplied;
    HIDWORD(v17[10]) = a2->BufferSizeRequired;
    HIDWORD(v17[0]) = 88;
    LODWORD(v17[6]) = 9;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v17, 1);
  }
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16, v11, v12, v13);
  return PointerShapeData;
}
