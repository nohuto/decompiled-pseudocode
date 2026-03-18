/*
 * XREFs of ?RemoveAll@?$CMap@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$ComPtr@VCInteraction@@@23@V?$CMapEqualHelper@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$ComPtr@VCInteraction@@@23@@@@@QEAAXXZ @ 0x18016D170
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18016A868 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?ReleaseManipulations@CInteractionTracker@@AEAAXXZ @ 0x18016D09C (-ReleaseManipulations@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??_G?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18016AB58 (--_G-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

void __fastcall CMap<Microsoft::WRL::ComPtr<CManipulation>,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<Microsoft::WRL::ComPtr<CManipulation>,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveAll(
        __int64 a1)
{
  int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rcx
  void *v5; // rcx

  if ( *(_QWORD *)a1 )
  {
    v2 = 0;
    if ( *(int *)(a1 + 16) > 0 )
    {
      v3 = 0LL;
      do
      {
        v4 = *(_QWORD *)(v3 + *(_QWORD *)a1);
        if ( v4 )
        {
          *(_QWORD *)(v3 + *(_QWORD *)a1) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        Microsoft::WRL::ComPtr<CInteraction>::`scalar deleting destructor'((__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * v2++));
        v3 += 8LL;
      }
      while ( v2 < *(_DWORD *)(a1 + 16) );
    }
    WPF::ProcessHeapImpl::Free(*(void **)a1);
    *(_QWORD *)a1 = 0LL;
  }
  v5 = *(void **)(a1 + 8);
  if ( v5 )
  {
    WPF::ProcessHeapImpl::Free(v5);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
}
