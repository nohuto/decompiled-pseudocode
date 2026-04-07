/*
 * XREFs of ??$CreateTouchVisual@VCTextTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTextTetherVisual@@@Z @ 0x1800890E8
 * Callers:
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x18008B964 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??0CTextTetherVisual@@IEAA@_K@Z @ 0x18008E21C (--0CTextTetherVisual@@IEAA@_K@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008E380 (-Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 */

__int64 __fastcall CreateTouchVisual<CTextTetherVisual>(
        struct IDwmChannel *a1,
        unsigned __int64 a2,
        CTextTetherVisual **a3)
{
  unsigned int v6; // edi
  CTextTetherVisual *v7; // rax
  CTextTetherVisual *v8; // rbx
  int v9; // eax

  if ( a3 )
  {
    v7 = (CTextTetherVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 16LL))(
                                WPF::g_pProcessHeap,
                                432LL);
    if ( v7 )
      v8 = CTextTetherVisual::CTextTetherVisual(v7, a2);
    else
      v8 = 0LL;
    if ( v8 )
    {
      v9 = CTextTetherVisual::Initialize(v8, a1);
      v6 = v9;
      if ( v9 >= 0 )
      {
        *a3 = v8;
        v8 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x3Fu);
      }
      if ( v8 )
        CBaseObject::Release(v8);
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x3Du);
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u);
  }
  return v6;
}
