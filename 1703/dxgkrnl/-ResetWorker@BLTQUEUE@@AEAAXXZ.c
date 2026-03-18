/*
 * XREFs of ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01B5E8C
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C011F164 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C01B5E50 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z @ 0x1C01BE24C (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@@Z.c)
 */

void __fastcall BLTQUEUE::ResetWorker(BLTQUEUE *this)
{
  struct DXGSWAPCHAIN **v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rax

  BLTQUEUE::ResetInternal(this);
  KeWaitForSingleObject((char *)this + 2568, Executive, 0, 0, 0LL);
  v2 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
  if ( v2 )
  {
    v3 = SwapChainAbandonInternal(*v2);
    v8 = v3;
    if ( v3 < 0 )
    {
      v9 = WdLogNewEntry5_WdWarning(v5, v4, v6, v7);
      *(_QWORD *)(v9 + 24) = **((_QWORD **)this + 320);
      *(_QWORD *)(v9 + 32) = v8;
      WdLogEvent5_WdWarning(v9);
    }
    ObfDereferenceObject(*((PVOID *)this + 320));
    *((_QWORD *)this + 320) = 0LL;
  }
  KeReleaseMutex((PRKMUTEX)((char *)this + 2568), 0);
  *((_BYTE *)this + 401) = 0;
  BLTQUEUE::FinishCommand(this, 0);
}
