/*
 * XREFs of ?CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z @ 0x1801490B4
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180067654 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x180148B60 (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::CreateCandidate(const struct CDirectFlipInfo *a1, struct CDirectFlipInfo **a2)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  CDirectFlipInfo *v6; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v8 = 0LL;
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1 + 2))(
         *((_QWORD *)a1 + 2),
         &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
         &v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x11u);
  }
  else
  {
    v6 = (CDirectFlipInfo *)operator new(0x80uLL);
    if ( v6 )
      v6 = CDirectFlipInfo::CDirectFlipInfo(v6, a1);
    if ( v6 )
    {
      *((_DWORD *)v6 + 14) = 2;
      *a2 = v6;
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x14u);
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>(v8);
  return v5;
}
