/*
 * XREFs of ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x180154F60
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180155050 (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 *     ?RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z @ 0x180175A84 (-RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::Deactivate(CDirectFlipInfo *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  CCompositionSurfaceInfo *v5; // rcx
  unsigned int v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  char v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v2 = CDirectFlipInfo::EnsureIndependentFlipState(this, 0, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    v7 = 366;
    goto LABEL_7;
  }
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
         *((_QWORD *)this + 2),
         &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
         &v8);
  v3 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x171u);
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, const struct _D3DCOLORVALUE *))(*(_QWORD *)v8 + 336LL))(
           v8,
           0LL,
           0LL,
           &`CVisual::SetHeatMapColor'::`2'::sc_defaultValue);
    v3 = v2;
    if ( v2 < 0 )
    {
      v7 = 373;
LABEL_7:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, v7);
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>(v8);
  (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 104LL))(
    *((_QWORD *)this + 2),
    &v9,
    0LL,
    0LL);
  v5 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 4);
  *((_DWORD *)this + 16) = (*((_BYTE *)v5 + 220) != 0) + 2;
  CCompositionSurfaceInfo::RecordDirectFlipState(v5, *((_QWORD *)this + 9), 0);
  return v3;
}
