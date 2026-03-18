/*
 * XREFs of ?DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z @ 0x1C009F380
 * Callers:
 *     <none>
 * Callees:
 *     Template_xq @ 0x1C00414C4 (Template_xq.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkSetProcessStatus(struct _D3DKMT_PROCESS_STATUS_INTERNAL *a1)
{
  struct DXGGLOBAL *Global; // rdx
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 ProcessDxgProcess; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  bool v10; // zf
  signed __int32 v11; // eax
  __int64 v12; // rcx
  signed __int32 v13; // ett
  bool v14; // al
  signed __int32 v15; // ett
  __int64 v16; // rax

  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 280) )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( _InterlockedCompareExchange((volatile signed __int32 *)Global + 279, 1, 1) )
      return;
  }
  v3 = *(_QWORD *)a1;
  ProcessDxgProcess = PsGetProcessDxgProcess(*(_QWORD *)a1, Global);
  if ( !ProcessDxgProcess )
  {
    v16 = WdLogNewEntry5_WdAssertion(v5, v4, v7, v8);
    *(_QWORD *)(v16 + 24) = 3064LL;
    goto LABEL_26;
  }
  if ( *((_DWORD *)a1 + 2) == 1 )
  {
    v9 = 1;
    goto LABEL_5;
  }
  if ( *((_DWORD *)a1 + 2) != 2 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v5, v4, v7, v8);
    *(_QWORD *)(v16 + 24) = 3024LL;
LABEL_26:
    WdLogEvent5_WdAssertion(v16);
    return;
  }
  v9 = 2;
LABEL_5:
  v10 = *((_BYTE *)a1 + 12) == 0;
  _m_prefetchw((const void *)(ProcessDxgProcess + 276));
  v11 = *(_DWORD *)(ProcessDxgProcess + 276);
  if ( !v10 )
  {
    do
    {
      v12 = v9 | (unsigned int)v11;
      v13 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(ProcessDxgProcess + 276), v12, v11);
    }
    while ( v13 != v11 );
    v14 = (v11 & v9) == 0;
LABEL_8:
    if ( !v14 )
      return;
    goto LABEL_13;
  }
  v7 = (unsigned int)~v9;
  do
  {
    v12 = (unsigned int)v7 & v11;
    v15 = v11;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(ProcessDxgProcess + 276), v12, v11);
  }
  while ( v15 != v11 );
  if ( (v11 & v9) == 0 )
  {
    v14 = 0;
    goto LABEL_8;
  }
LABEL_13:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_xq(v12, &SetProcessStatus, v7, v3, *(_DWORD *)(ProcessDxgProcess + 276));
  _InterlockedAdd((volatile signed __int32 *)(ProcessDxgProcess + 284), 1u);
  if ( _InterlockedExchange((volatile __int32 *)(ProcessDxgProcess + 280), 1) )
    _InterlockedDecrement((volatile signed __int32 *)(ProcessDxgProcess + 284));
  else
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(*(_QWORD *)(ProcessDxgProcess + 64) + 40LL), CriticalWorkQueue);
}
