/*
 * XREFs of ?Create@CIconicAnimatedVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18008DFBC
 * Callers:
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x18008EFD0 (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x18009DF54 (--0CIconicAnimatedVisual@@IEAA@XZ.c)
 */

__int64 __fastcall CIconicAnimatedVisual::Create(struct IDwmChannel *a1, struct CIconicAnimatedVisual **a2)
{
  unsigned int v4; // edi
  CIconicAnimatedVisual *v5; // rax
  struct CIconicAnimatedVisual *v6; // rbx
  int v7; // eax

  if ( !a2 )
  {
    v4 = -2147024809;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x19u);
    return v4;
  }
  v5 = (CIconicAnimatedVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 16LL))(
                                  WPF::g_pProcessHeap,
                                  392LL);
  if ( v5 )
    v6 = CIconicAnimatedVisual::CIconicAnimatedVisual(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v4 = -2147024882;
    goto LABEL_3;
  }
  v7 = (*(__int64 (__fastcall **)(struct CIconicAnimatedVisual *, struct IDwmChannel *))(*(_QWORD *)v6 + 8LL))(v6, a1);
  v4 = v7;
  if ( v7 >= 0 )
  {
    *a2 = v6;
    v6 = 0LL;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x19u);
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v4;
}
