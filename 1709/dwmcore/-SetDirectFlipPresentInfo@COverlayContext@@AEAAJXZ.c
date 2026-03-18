/*
 * XREFs of ?SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ @ 0x180066EEC
 * Callers:
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18006737C (-Reset@COverlayContext@@IEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180149730 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::SetDirectFlipPresentInfo(CDirectFlipInfo **this)
{
  unsigned int v1; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax

  v1 = 0;
  if ( this[131] )
  {
    *(_BYTE *)(v3 + 76) = CDirectFlipInfo::RenderingRealizationChanged(this[131])
                       && *(int *)(*(_QWORD *)(v3 + 32) + 76LL) <= 1;
    *(_DWORD *)(v3 + 72) = *(_DWORD *)(*(_QWORD *)(v3 + 32) + 72LL);
    if ( *(_BYTE *)(v3 + 76) )
      *(_BYTE *)(v4 + 1177) = 1;
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 1048) + 16LL))(*(_QWORD *)(v4 + 1048));
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xFB0u);
  }
  return v1;
}
