/*
 * XREFs of ??$CreateTouchVisual@VCTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTetherVisual@@@Z @ 0x180088A60
 * Callers:
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18008A934 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??0CTetherVisual@@IEAA@_K@Z @ 0x18008CCC8 (--0CTetherVisual@@IEAA@_K@Z.c)
 *     ?Initialize@CTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008D220 (-Initialize@CTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 */

__int64 __fastcall CreateTouchVisual<CTetherVisual>(struct IDwmChannel *a1, unsigned __int64 a2, CTetherVisual **a3)
{
  unsigned int v6; // edi
  CTetherVisual *v7; // rax
  CTetherVisual *v8; // rbx
  int v9; // eax

  if ( a3 )
  {
    v7 = (CTetherVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 16LL))(
                            WPF::g_pProcessHeap,
                            424LL);
    if ( v7 )
      v8 = CTetherVisual::CTetherVisual(v7, a2);
    else
      v8 = 0LL;
    if ( v8 )
    {
      v9 = CTetherVisual::Initialize(v8, a1);
      v6 = v9;
      if ( v9 >= 0 )
      {
        *a3 = v8;
        v8 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x3Fu);
      }
      if ( v8 )
        CBaseObject::Release(v8);
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x3Du);
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x39u);
  }
  return v6;
}
