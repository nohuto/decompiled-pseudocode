/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800CD160
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18002DA70 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801497E4 (--1CComposition@@MEAA@XZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18014AA6C (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180152540 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x18017EFE4 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 *     ?ReleaseResources@CCompositionCubeMap@@AEAAXXZ @ 0x180183D64 (-ReleaseResources@CCompositionCubeMap@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

void __fastcall DynArrayImpl<1>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  void *v3; // rcx
  unsigned __int64 v4; // r8
  SIZE_T v5; // r9
  int v6; // eax
  LPVOID v7; // rax

  v3 = *(void **)(a1 + 8);
  if ( *(void **)a1 != v3 )
  {
    v4 = a2 * (unsigned __int64)*(unsigned int *)(a1 + 24);
    if ( v4 <= 0xFFFFFFFF )
    {
      v5 = (unsigned int)v4;
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v3, *(const void **)a1, (unsigned int)v4);
        operator delete(*(void **)a1);
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        v6 = *(_DWORD *)(a1 + 16);
LABEL_6:
        *(_DWORD *)(a1 + 20) = v6;
        return;
      }
      if ( *(_QWORD *)a1 )
      {
        v7 = HeapReAlloc(WPF::g_processHeap, 0, *(LPVOID *)a1, (unsigned int)v4);
      }
      else
      {
        if ( !(_DWORD)v4 )
          v5 = 1LL;
        v7 = HeapAlloc(WPF::g_processHeap, 0, v5);
      }
      if ( v7 )
      {
        *(_QWORD *)a1 = v7;
        v6 = *(_DWORD *)(a1 + 24);
        goto LABEL_6;
      }
    }
  }
}
