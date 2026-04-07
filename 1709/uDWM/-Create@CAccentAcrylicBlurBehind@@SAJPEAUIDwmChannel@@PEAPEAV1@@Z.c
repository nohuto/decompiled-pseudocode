/*
 * XREFs of ?Create@CAccentAcrylicBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180075978
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180012054 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x18007577C (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::Create(struct IDwmChannel *a1, struct CAccentAcrylicBlurBehind **a2)
{
  unsigned int v4; // edi
  CAccentAcrylicBlurBehind *v5; // rax
  CAccentAcrylicBlurBehind *v6; // rbx
  struct CAccentAcrylicBlurBehind *v7; // rbx
  int v8; // eax

  if ( !a2 )
  {
    v4 = -2147024809;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x6Bu);
    return v4;
  }
  v5 = (CAccentAcrylicBlurBehind *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 16LL))(
                                     WPF::g_pProcessHeap,
                                     376LL);
  v6 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0x178uLL);
    v7 = CAccentAcrylicBlurBehind::CAccentAcrylicBlurBehind(v6);
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    v4 = -2147024882;
    goto LABEL_3;
  }
  v8 = (*(__int64 (__fastcall **)(struct CAccentAcrylicBlurBehind *, struct IDwmChannel *))(*(_QWORD *)v7 + 8LL))(
         v7,
         a1);
  v4 = v8;
  if ( v8 >= 0 )
  {
    *a2 = v7;
    v7 = 0LL;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x6Bu);
  }
  if ( v7 )
    CBaseObject::Release(v7);
  return v4;
}
