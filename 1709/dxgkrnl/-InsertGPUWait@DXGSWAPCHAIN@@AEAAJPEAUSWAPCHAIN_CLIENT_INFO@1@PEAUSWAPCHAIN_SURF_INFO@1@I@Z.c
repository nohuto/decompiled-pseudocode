/*
 * XREFs of ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C01D5E94
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z @ 0x1C01D4DFC (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C00E9300 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C019D570 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z @ 0x1C01D5FC4 (-MarkAbandoned@DXGSWAPCHAIN@@QEAAX_N@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InsertGPUWait(
        DXGSWAPCHAIN *this,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a3,
        unsigned int a4)
{
  unsigned __int64 v5; // r14
  __int64 v8; // rax
  DXGDEVICE *v9; // rcx
  struct DXGPROCESS *v10; // rbp
  __int64 v11; // rax
  bool v12; // dl
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned int v17[4]; // [rsp+50h] [rbp-148h] BYREF
  unsigned int v18[64]; // [rsp+60h] [rbp-138h] BYREF

  v5 = a4;
  if ( !*((_QWORD *)a2 + 1) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 2434LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  v10 = (struct DXGPROCESS *)*((_QWORD *)v9 + 5);
  if ( v10 )
  {
    DXGDEVICE::GetContexts(v9, v17, v18);
    if ( v17[0] )
    {
      v16 = 0LL;
      do
      {
        result = WaitForSynchronizationObjectFromGpu(
                   1u,
                   (unsigned int *)a3 + 4 * *((int *)a2 + 7) + 7,
                   0LL,
                   v5,
                   v18[v16],
                   v10,
                   0,
                   1,
                   0);
        if ( (int)result < 0 )
          break;
        v16 = (unsigned int)(v16 + 1);
      }
      while ( (unsigned int)v16 < v17[0] );
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v15 + 24) = this;
      *(_QWORD *)(v15 + 32) = *((_QWORD *)a2 + 1);
      WdLogEvent5_WdError(v15);
      return 3221225473LL;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = 2440LL;
    WdLogEvent5_WdError(v11);
    DXGSWAPCHAIN::MarkAbandoned(this, v12);
    return 3221225485LL;
  }
  return result;
}
