/*
 * XREFs of ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x180149170
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180149268 (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 *     ?RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z @ 0x18017CAA0 (-RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::Deactivate(CDirectFlipInfo *this)
{
  signed int v2; // eax
  unsigned int v3; // ebx
  signed int v4; // eax
  CCompositionSurfaceInfo *v5; // rcx
  unsigned int v7; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0LL;
  v2 = CDirectFlipInfo::EnsureIndependentFlipState(this, 0, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    v7 = 367;
    goto LABEL_7;
  }
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
         *((_QWORD *)this + 2),
         &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
         &v8);
  v3 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x172u);
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v8 + 344LL))(
           v8,
           0LL,
           0LL,
           0LL,
           0LL,
           &`CVisual::SetHeatMapColor'::`2'::sc_defaultValue);
    v3 = v2;
    if ( v2 < 0 )
    {
      v7 = 376;
LABEL_7:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, v7);
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>(v8);
  (*(void (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 2) + 88LL))(*((_QWORD *)this + 2), &v9, 0LL);
  v5 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 4);
  *((_DWORD *)this + 14) = (*((_BYTE *)v5 + 220) != 0) + 2;
  CCompositionSurfaceInfo::RecordDirectFlipState(v5, *((_QWORD *)this + 8), 0);
  return v3;
}
