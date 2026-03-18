/*
 * XREFs of ?DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z @ 0x1C00F3770
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0xq @ 0x1C00205AC (McTemplateK0xq.c)
 */

void __fastcall DxgkSetProcessStatus(struct _D3DKMT_PROCESS_STATUS_INTERNAL *a1)
{
  struct DXGGLOBAL *Global; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 v5; // rcx
  __int64 ProcessDxgProcess; // rbx
  __int64 v7; // r8
  int v8; // edx
  bool v9; // zf
  signed __int32 v10; // eax
  __int64 v11; // rcx
  signed __int32 v12; // ett
  bool v13; // al
  signed __int32 v14; // ett
  __int64 v15; // rax

  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 280) )
  {
    Global = DXGGLOBAL::GetGlobal(v3);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)Global + 279, 1, 1) )
      return;
  }
  v4 = *(_QWORD *)a1;
  ProcessDxgProcess = PsGetProcessDxgProcess(*(_QWORD *)a1, Global);
  if ( !ProcessDxgProcess )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v15 + 24) = 3227LL;
    goto LABEL_25;
  }
  if ( *((_DWORD *)a1 + 2) == 1 )
  {
    v8 = 1;
    goto LABEL_5;
  }
  if ( *((_DWORD *)a1 + 2) != 2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v15 + 24) = 3187LL;
LABEL_25:
    WdLogEvent5_WdAssertion(v15);
    return;
  }
  v8 = 2;
LABEL_5:
  v9 = *((_BYTE *)a1 + 12) == 0;
  _m_prefetchw((const void *)(ProcessDxgProcess + 312));
  v10 = *(_DWORD *)(ProcessDxgProcess + 312);
  if ( !v9 )
  {
    do
    {
      v11 = v8 | (unsigned int)v10;
      v12 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(ProcessDxgProcess + 312), v11, v10);
    }
    while ( v12 != v10 );
    v13 = (v10 & v8) == 0;
LABEL_8:
    if ( !v13 )
      return;
    goto LABEL_9;
  }
  v7 = (unsigned int)~v8;
  do
  {
    v11 = (unsigned int)v7 & v10;
    v14 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(ProcessDxgProcess + 312), v11, v10);
  }
  while ( v14 != v10 );
  if ( (v10 & v8) == 0 )
  {
    v13 = 0;
    goto LABEL_8;
  }
LABEL_9:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0xq(v11, &SetProcessStatus, v7, v4, *(_DWORD *)(ProcessDxgProcess + 312));
  _InterlockedAdd((volatile signed __int32 *)(ProcessDxgProcess + 320), 1u);
  if ( _InterlockedExchange((volatile __int32 *)(ProcessDxgProcess + 316), 1) )
    _InterlockedDecrement((volatile signed __int32 *)(ProcessDxgProcess + 320));
  else
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(*(_QWORD *)(ProcessDxgProcess + 64) + 40LL), CriticalWorkQueue);
}
