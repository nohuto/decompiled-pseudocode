/*
 * XREFs of ?DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z @ 0x1C00D7020
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0xq @ 0x1C0040120 (McTemplateK0xq.c)
 */

void __fastcall DxgkSetProcessStatus(struct _D3DKMT_PROCESS_STATUS_INTERNAL *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 ProcessDxgProcess; // rbx
  __int64 v6; // r8
  int v7; // edx
  bool v8; // zf
  signed __int32 v9; // eax
  __int64 v10; // rcx
  signed __int32 v11; // ett
  bool v12; // al
  signed __int32 v13; // ett
  __int64 v14; // rax

  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 300)
    && _InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v2) + 299, 1, 1) )
  {
    return;
  }
  v3 = *(_QWORD *)a1;
  ProcessDxgProcess = PsGetProcessDxgProcess(*(_QWORD *)a1);
  if ( !ProcessDxgProcess )
  {
    v14 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v14 + 24) = 3422LL;
    goto LABEL_25;
  }
  if ( *((_DWORD *)a1 + 2) == 1 )
  {
    v7 = 1;
    goto LABEL_5;
  }
  if ( *((_DWORD *)a1 + 2) != 2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v14 + 24) = 3382LL;
LABEL_25:
    WdLogEvent5_WdAssertion(v14);
    return;
  }
  v7 = 2;
LABEL_5:
  v8 = *((_BYTE *)a1 + 12) == 0;
  _m_prefetchw((const void *)(ProcessDxgProcess + 328));
  v9 = *(_DWORD *)(ProcessDxgProcess + 328);
  if ( !v8 )
  {
    do
    {
      v10 = v7 | (unsigned int)v9;
      v11 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(ProcessDxgProcess + 328), v10, v9);
    }
    while ( v11 != v9 );
    v12 = (v9 & v7) == 0;
LABEL_8:
    if ( !v12 )
      return;
    goto LABEL_9;
  }
  v6 = (unsigned int)~v7;
  do
  {
    v10 = (unsigned int)v6 & v9;
    v13 = v9;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(ProcessDxgProcess + 328), v10, v9);
  }
  while ( v13 != v9 );
  if ( (v9 & v7) == 0 )
  {
    v12 = 0;
    goto LABEL_8;
  }
LABEL_9:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0xq(v10, &SetProcessStatus, v6, v3, *(_DWORD *)(ProcessDxgProcess + 328));
  _InterlockedAdd((volatile signed __int32 *)(ProcessDxgProcess + 336), 1u);
  if ( _InterlockedExchange((volatile __int32 *)(ProcessDxgProcess + 332), 1) )
    _InterlockedDecrement((volatile signed __int32 *)(ProcessDxgProcess + 336));
  else
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(*(_QWORD *)(ProcessDxgProcess + 72) + 40LL), CriticalWorkQueue);
}
