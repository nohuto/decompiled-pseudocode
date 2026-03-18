/*
 * XREFs of ?EnsureRenderFenceWait@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C00360FC
 * Callers:
 *     ?SignalGpuFenceInternal@CTokenManager@@IEAAJU_LUID@@PEAX_K@Z @ 0x1C0036178 (-SignalGpuFenceInternal@CTokenManager@@IEAAJU_LUID@@PEAX_K@Z.c)
 * Callees:
 *     GreDxgkWaitForSynchronizationObjectFromGpu @ 0x1C0085350 (GreDxgkWaitForSynchronizationObjectFromGpu.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall CTokenManager::EnsureRenderFenceWait(CTokenManager *this, struct CSM_TOKEN_ADAPTER_INFO *a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  _QWORD v6[10]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *((_QWORD *)this + 12);
  result = 0LL;
  if ( *((_QWORD *)a2 + 3) != v2 )
  {
    memset(v6, 0, sizeof(v6));
    LODWORD(v6[0]) = *((_DWORD *)a2 + 3);
    v6[1] = (char *)a2 + 16;
    HIDWORD(v6[0]) = 1;
    v6[2] = v2;
    result = GreDxgkWaitForSynchronizationObjectFromGpu(v6);
    if ( (int)result >= 0 )
      *((_QWORD *)a2 + 3) = *((_QWORD *)this + 12);
  }
  return result;
}
