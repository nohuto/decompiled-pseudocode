/*
 * XREFs of ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C01C5D84
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C01C9200 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C01C6284 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CompleteInitialization(
        OUTPUTDUPL_MGR *this,
        const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  struct DXGFASTMUTEX **v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  unsigned int v8; // ebx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (struct DXGFASTMUTEX **)(*((_QWORD *)this + 2) + 24LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, *v3);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5, v4);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(
                        this,
                        (struct _OUTPUTDUPL_CONTEXTLIST *)v3,
                        CurrentProcess,
                        0LL);
  if ( ContextForProcess )
  {
    v8 = 0;
    *((_DWORD *)*ContextForProcess + 79) = 1;
  }
  else
  {
    v8 = -1073741275;
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return v8;
}
