/*
 * XREFs of ?CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z @ 0x180154EAC
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x180072420 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x1801549D4 (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::CreateCandidate(const struct CDirectFlipInfo *a1, struct CDirectFlipInfo **a2)
{
  int v4; // eax
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x11u);
  }
  else
  {
    v6 = (CDirectFlipInfo *)operator new(0x68uLL);
    if ( v6 )
      v6 = CDirectFlipInfo::CDirectFlipInfo(v6, (struct COverlayContext **)a1);
    if ( v6 )
    {
      *((_DWORD *)v6 + 16) = 2;
      *a2 = v6;
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x14u);
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>(v8);
  return v5;
}
