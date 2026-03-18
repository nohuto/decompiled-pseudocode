/*
 * XREFs of ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01AC32C
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C01AF450 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C01AC82C (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CompleteInitialization(
        OUTPUTDUPL_MGR *this,
        const struct _D3DKMT_CREATE_OUTPUTDUPL *a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGFASTMUTEX **v5; // rbx
  __int64 v6; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = (struct DXGFASTMUTEX **)(*((_QWORD *)this + 2) + 24LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, *v5, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(
                        this,
                        (struct _OUTPUTDUPL_CONTEXTLIST *)v5,
                        CurrentProcess,
                        0LL);
  if ( ContextForProcess )
  {
    v12 = 0;
    *((_DWORD *)*ContextForProcess + 79) = 1;
  }
  else
  {
    v12 = -1073741275;
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14, v9, v10, v11);
  return v12;
}
