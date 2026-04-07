/*
 * XREFs of ??$CreateTouchVisual@VCPressTapVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPressTapVisual@@@Z @ 0x18007FE04
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800816A4 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180039F44 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800897C0 (-Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 */

__int64 __fastcall CreateTouchVisual<CPressTapVisual>(struct IDwmChannel *a1, __int64 a2, CPressTapVisual **a3)
{
  unsigned int v5; // edi
  CTouchVisual *v6; // rax
  CPressTapVisual *v7; // rbx
  int v8; // eax

  if ( a3 )
  {
    v6 = (CTouchVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                           WPF::g_pProcessHeap,
                           408LL);
    v7 = v6;
    if ( v6 )
    {
      CTouchVisual::CTouchVisual(v6);
      *((_QWORD *)v7 + 37) = 0LL;
      *((_QWORD *)v7 + 43) = 0LL;
      *((_QWORD *)v7 + 44) = 0LL;
      *((_QWORD *)v7 + 50) = 0LL;
      *(_QWORD *)v7 = &CPressTapVisual::`vftable';
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v8 = CPressTapVisual::Initialize(v7, a1);
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
