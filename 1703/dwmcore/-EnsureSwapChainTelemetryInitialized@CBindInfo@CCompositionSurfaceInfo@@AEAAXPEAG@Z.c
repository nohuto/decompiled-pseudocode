/*
 * XREFs of ?EnsureSwapChainTelemetryInitialized@CBindInfo@CCompositionSurfaceInfo@@AEAAXPEAG@Z @ 0x180075E2C
 * Callers:
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18007632C (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x1800211D4 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800C6740 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall CCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(
        CCompositionSurfaceInfo::CBindInfo *this,
        unsigned __int16 *a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // esi
  unsigned __int16 *v7; // rax

  if ( *((_DWORD *)this + 14) > 1u && !*((_QWORD *)this + 36) )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
    v5 = v4 + 1;
    if ( v5 > 1 )
    {
      v6 = v5;
      v7 = (unsigned __int16 *)operator new(saturated_mul(v5, 2uLL));
      *((_QWORD *)this + 36) = v7;
      if ( v7 )
      {
        StringCchCopyW(v7, v6, a2);
        CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat(this, 0, 1);
      }
    }
  }
}
