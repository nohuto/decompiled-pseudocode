/*
 * XREFs of ?ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C01AECD4
 * Callers:
 *     _lambda_693db078d59c16956e85dd4c51bec7d2_::_lambda_invoker_cdecl_ @ 0x1C01ABA90 (_lambda_693db078d59c16956e85dd4c51bec7d2_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C01AC82C (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C01B3A00 (-ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ReleaseFrame(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_OUTPUTDUPL_RELEASE_FRAME *a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGFASTMUTEX **v6; // rbx
  __int64 v7; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = (struct DXGFASTMUTEX **)(*((_QWORD *)this + 2) + 24LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, *v6, 3LL * a2->VidPnSourceId, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v7);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(
                        this,
                        (struct _OUTPUTDUPL_CONTEXTLIST *)v6,
                        CurrentProcess,
                        0LL);
  if ( ContextForProcess )
    v13 = OUTPUTDUPL_CONTEXT::ReleaseFrame(*ContextForProcess, a2);
  else
    v13 = -1073741275;
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v10, v11, v12);
  return v13;
}
