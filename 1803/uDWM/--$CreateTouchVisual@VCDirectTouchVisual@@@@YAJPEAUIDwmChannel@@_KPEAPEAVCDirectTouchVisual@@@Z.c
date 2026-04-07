/*
 * XREFs of ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x18003D3A8
 * Callers:
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x18003D960 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x18008A2E4 (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18008A5E8 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18008B5E0 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x18008B964 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18008C180 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18003D6F0 (-Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18003DC98 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateTouchVisual<CDirectTouchVisual>(
        struct IDwmChannel *a1,
        unsigned __int64 a2,
        CDirectTouchVisual **a3)
{
  CTouchVisual *v6; // rax
  CDirectTouchVisual *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi

  if ( a3 )
  {
    v6 = (CTouchVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                           WPF::g_pProcessHeap,
                           424LL);
    v7 = v6;
    if ( v6 )
    {
      CTouchVisual::CTouchVisual(v6, a2);
      *((_QWORD *)v7 + 51) = 0LL;
      *((_QWORD *)v7 + 52) = 0LL;
      *(_QWORD *)v7 = &CDirectTouchVisual::`vftable';
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v8 = CDirectTouchVisual::Initialize(v7, a1);
      v9 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x3Fu);
      }
      else
      {
        *a3 = v7;
        v7 = 0LL;
      }
      if ( v7 )
        CBaseObject::Release(v7);
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3Du);
    }
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x39u);
  }
  return v9;
}
