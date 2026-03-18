/*
 * XREFs of ?CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z @ 0x180172414
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180079C9C (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x180171EBC (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x11u);
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x14u);
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v5;
}
