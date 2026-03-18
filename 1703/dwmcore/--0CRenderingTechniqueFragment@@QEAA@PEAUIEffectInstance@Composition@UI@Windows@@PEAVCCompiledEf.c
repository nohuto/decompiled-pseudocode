/*
 * XREFs of ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCCompiledEffectCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x1800156B4
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180003C2C (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@_NPEAPEAVCRenderingTechniq.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::CRenderingTechniqueFragment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        char a6)
{
  __int64 v10; // rax

  *(_QWORD *)a1 = a2;
  if ( a2 )
    (**(void (__fastcall ***)(__int64))a2)(a2);
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 16) = a4;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  *(_DWORD *)(a1 + 20) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, a4);
  *(_DWORD *)(a1 + 24) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 80LL))(a2, a4);
  *(_DWORD *)(a1 + 28) = a5;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_BYTE *)(a1 + 120) = a6;
  return a1;
}
