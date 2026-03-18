/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800B32D4
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18005BFB0 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x180131A38 (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18013EE78 (--1CComposition@@MEAA@XZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18013FA90 (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180144EF0 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

void __fastcall DynArrayImpl<1>::ShrinkToSize(__int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rax
  int v4; // eax
  SIZE_T v5; // r9
  LPVOID v6; // rax

  v2 = *(void **)(a1 + 8);
  if ( *(void **)a1 != v2 )
  {
    v3 = 8LL * *(unsigned int *)(a1 + 24);
    if ( v3 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v2, *(const void **)a1, (unsigned int)v3);
        WPF::ProcessHeapImpl::Free(*(void **)a1);
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        v4 = *(_DWORD *)(a1 + 16);
LABEL_6:
        *(_DWORD *)(a1 + 20) = v4;
        return;
      }
      v5 = (unsigned int)v3;
      if ( *(_QWORD *)a1 )
      {
        v6 = HeapReAlloc(WPF::g_processHeap, 0, *(LPVOID *)a1, (unsigned int)v3);
      }
      else
      {
        if ( !(_DWORD)v3 )
          v5 = 1LL;
        v6 = HeapAlloc(WPF::g_processHeap, 0, v5);
      }
      if ( v6 )
      {
        *(_QWORD *)a1 = v6;
        v4 = *(_DWORD *)(a1 + 24);
        goto LABEL_6;
      }
    }
  }
}
