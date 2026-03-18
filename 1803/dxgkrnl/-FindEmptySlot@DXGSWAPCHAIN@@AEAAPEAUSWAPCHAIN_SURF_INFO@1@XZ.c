/*
 * XREFs of ?FindEmptySlot@DXGSWAPCHAIN@@AEAAPEAUSWAPCHAIN_SURF_INFO@1@XZ @ 0x1C01DE424
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C01DDC6C (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 * Callees:
 *     <none>
 */

struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *__fastcall DXGSWAPCHAIN::FindEmptySlot(struct _KTHREAD **this)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  __int64 v4; // rdx
  struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *result; // rax

  if ( this[1] != KeGetCurrentThread() )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 2464LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = *((_DWORD *)this + 12);
  v4 = 0LL;
  if ( !v3 )
    return 0LL;
  while ( 1 )
  {
    result = (struct _KTHREAD *)((char *)this[7] + 96 * v4);
    if ( !*((_DWORD *)result + 2) )
      break;
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= v3 )
      return 0LL;
  }
  return result;
}
