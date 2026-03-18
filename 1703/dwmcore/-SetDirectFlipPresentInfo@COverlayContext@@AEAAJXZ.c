/*
 * XREFs of ?SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ @ 0x1800715D0
 * Callers:
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180071BB8 (-Reset@COverlayContext@@IEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180155520 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::SetDirectFlipPresentInfo(CDirectFlipInfo **this)
{
  unsigned int v1; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax

  v1 = 0;
  if ( this[121] )
  {
    *(_BYTE *)(v3 + 84) = CDirectFlipInfo::RenderingRealizationChanged(this[121])
                       && *(int *)(*(_QWORD *)(v3 + 32) + 76LL) <= 1;
    *(_DWORD *)(v3 + 80) = *(_DWORD *)(*(_QWORD *)(v3 + 32) + 72LL);
    if ( *(_BYTE *)(v3 + 84) )
      *(_BYTE *)(v4 + 1089) = 1;
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 968) + 16LL))(*(_QWORD *)(v4 + 968));
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xE75u);
  }
  return v1;
}
