/*
 * XREFs of ?ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS@@PEBXI@Z @ 0x18012CC14
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x180167B20 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetInertiaModifierAnimations(
        void **this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS *a3,
        const void *a4,
        unsigned int a5)
{
  __int64 Resource; // rax
  unsigned int v9; // edi
  SIZE_T v10; // rax

  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 3), 0x71u);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(&this[*((unsigned int *)a3 + 2) + 53], Resource);
  if ( *((_DWORD *)a3 + 4) == a5 )
  {
    WPF::ProcessHeapImpl::Free(this[*((unsigned int *)a3 + 2) + 56]);
    v9 = 0;
    this[*((unsigned int *)a3 + 2) + 56] = 0LL;
    *((_DWORD *)this + *((unsigned int *)a3 + 2) + 118) = *((_DWORD *)a3 + 4);
    if ( *((_DWORD *)a3 + 4) )
    {
      v10 = 4LL * *((unsigned int *)a3 + 4);
      if ( !is_mul_ok(*((unsigned int *)a3 + 4), 4uLL) )
        v10 = -1LL;
      this[*((unsigned int *)a3 + 2) + 56] = operator new(v10);
      memcpy_0(this[*((unsigned int *)a3 + 2) + 56], a4, *((unsigned int *)a3 + 4));
    }
  }
  else
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x341u);
  }
  return v9;
}
