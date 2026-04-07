/*
 * XREFs of ?Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180017108
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18001CB3C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x18001F050 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentBlurBehind::Create(struct IDwmChannel *a1, struct CAccentBlurBehind **a2)
{
  CRenderDataVisual *v4; // rax
  CRenderDataVisual *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  if ( !a2 )
  {
    v7 = -2147024809;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x3Eu);
    return v7;
  }
  v4 = (CRenderDataVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 16LL))(
                              WPF::g_pProcessHeap,
                              384LL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x180uLL);
    CRenderDataVisual::CRenderDataVisual(v5);
    *(_QWORD *)v5 = &CAccentBlurBehind::`vftable';
    *((_QWORD *)v5 + 36) = 0LL;
    *((_QWORD *)v5 + 37) = 0LL;
    *((_DWORD *)v5 + 76) = 0;
    *((_DWORD *)v5 + 77) = 0;
    *((_DWORD *)v5 + 78) = 0;
    *((_DWORD *)v5 + 80) = 1056964608;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v7 = -2147024882;
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(CRenderDataVisual *, struct IDwmChannel *))(*(_QWORD *)v5 + 8LL))(v5, a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x3Eu);
  }
  else
  {
    *a2 = v5;
    v5 = 0LL;
  }
  if ( v5 )
    CBaseObject::Release(v5);
  return v7;
}
