/*
 * XREFs of ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x180088CDC
 * Callers:
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x18008CFB0 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18003DC98 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800917A0 (-Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 */

__int64 __fastcall CreateTouchVisual<CPenBarrelKeyVisual>(struct IDwmChannel *a1, __int64 a2, CTouchVisual **a3)
{
  unsigned int v5; // edi
  CTouchVisual *v6; // rax
  CTouchVisual *v7; // rbx
  int v8; // eax

  if ( a3 )
  {
    v6 = (CTouchVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                           WPF::g_pProcessHeap,
                           344LL);
    v7 = v6;
    if ( v6 )
    {
      CTouchVisual::CTouchVisual(v6);
      *((_DWORD *)v7 + 77) = 0;
      *((_QWORD *)v7 + 39) = 0LL;
      *((_QWORD *)v7 + 40) = 0LL;
      *(_QWORD *)v7 = &CPenBarrelKeyVisual::`vftable';
      *((_WORD *)v7 + 170) = 1;
      *((_BYTE *)v7 + 342) = 0;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v8 = CPenBarrelKeyVisual::Initialize(v7, a1);
      v5 = v8;
      if ( v8 >= 0 )
      {
        *a3 = v7;
        v7 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x3Fu);
      }
      if ( v7 )
        CBaseObject::Release(v7);
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x3Du);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u);
  }
  return v5;
}
