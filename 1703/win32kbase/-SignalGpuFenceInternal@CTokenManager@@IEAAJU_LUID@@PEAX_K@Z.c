/*
 * XREFs of ?SignalGpuFenceInternal@CTokenManager@@IEAAJU_LUID@@PEAX_K@Z @ 0x1C0005BBC
 * Callers:
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C0005E48 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 * Callees:
 *     ?EnsureRenderFenceWait@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C0005B40 (-EnsureRenderFenceWait@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 *     GreDxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C0007330 (GreDxgkSignalSynchronizationObjectFromGpuByReference.c)
 */

__int64 __fastcall CTokenManager::SignalGpuFenceInternal(CTokenManager *this, struct _LUID a2, void *a3, __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v7; // r10d
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 result; // rax

  v4 = 0;
  v7 = *((_DWORD *)g_pTokenManager + 20);
  if ( !v7 )
    return 3221226021LL;
  v8 = *((_QWORD *)g_pTokenManager + 9);
  while ( 1 )
  {
    v9 = v8 + 32LL * v4;
    if ( *(_QWORD *)v9 == a2 )
      break;
    if ( ++v4 >= v7 )
      return 3221226021LL;
  }
  if ( !v9 || !*(_DWORD *)(v9 + 12) )
    return 3221226021LL;
  result = CTokenManager::EnsureRenderFenceWait(g_pTokenManager, (struct CSM_TOKEN_ADAPTER_INFO *)(v8 + 32LL * v4));
  if ( (int)result >= 0 )
    return GreDxgkSignalSynchronizationObjectFromGpuByReference(a3, a4, *(unsigned int *)(v9 + 12));
  return result;
}
