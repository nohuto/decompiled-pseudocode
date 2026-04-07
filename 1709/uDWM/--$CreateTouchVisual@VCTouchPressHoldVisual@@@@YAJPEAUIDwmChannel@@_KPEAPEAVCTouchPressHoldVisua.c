/*
 * XREFs of ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x180080188
 * Callers:
 *     ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x180080A70 (-EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800816A4 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180039F44 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CTouchPressHoldVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18009D080 (-Initialize@CTouchPressHoldVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 */

__int64 __fastcall CreateTouchVisual<CTouchPressHoldVisual>(
        struct IDwmChannel *a1,
        __int64 a2,
        CTouchPressHoldVisual **a3)
{
  unsigned int v5; // edi
  CTouchVisual *v6; // rax
  CTouchPressHoldVisual *v7; // rbx
  int v8; // eax

  if ( a3 )
  {
    v6 = (CTouchVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                           WPF::g_pProcessHeap,
                           368LL);
    v7 = v6;
    if ( v6 )
    {
      CTouchVisual::CTouchVisual(v6);
      *(_QWORD *)v7 = &CTouchPressHoldVisual::`vftable';
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v8 = CTouchPressHoldVisual::Initialize(v7, a1);
      v5 = v8;
      if ( v8 >= 0 )
      {
        *a3 = v7;
        v7 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x3Fu);
      }
      if ( v7 )
        CBaseObject::Release(v7);
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3Du);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x39u);
  }
  return v5;
}
