/*
 * XREFs of ?StartTransition@CAccent@@QEAAJXZ @ 0x180003044
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180010178 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x1800030A4 (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x1800030EC (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x1800031F4 (-EndTransition@CAccent@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x1800380D4 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800A2ED8 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 */

__int64 __fastcall CAccent::StartTransition(CAccent *this)
{
  int updated; // edi
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  updated = CAccent::_UpdateResources(this);
  if ( updated < 0 )
  {
    v4 = 927;
    goto LABEL_14;
  }
  if ( !CAccent::s_IsPolicyActive((CAccent *)((char *)this + 296)) || !CAccent::_IsAnimationNeeded(this) )
  {
    updated = CAccent::EndTransition(this);
    if ( updated >= 0 )
      return (unsigned int)updated;
    v4 = 945;
    goto LABEL_14;
  }
  v5 = *((_QWORD *)this + 45);
  if ( v5 )
    CBaseObject::Release((CBaseObject *)(v5 + 8));
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         40LL);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 16) = 1;
    *(_DWORD *)(v6 + 36) = -1;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)v6 = &CAccentTransition::`vftable'{for `IAnimationListener'};
    *(_QWORD *)(v6 + 8) = &CAccentTransition::`vftable'{for `CBaseObject'};
  }
  *((_QWORD *)this + 45) = v6;
  updated = CAccentTransition::StartAnimation((CAccentTransition *)v6, (CAccent *)((char *)this + 296), this);
  if ( updated < 0 )
  {
    v4 = 940;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v4);
    v7 = *((_QWORD *)this + 45);
    if ( v7 )
    {
      CBaseObject::Release((CBaseObject *)(v7 + 8));
      *((_QWORD *)this + 45) = 0LL;
    }
  }
  return (unsigned int)updated;
}
