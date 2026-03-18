/*
 * XREFs of ?CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z @ 0x180172320
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180171F60 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180008F14 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectFlipInfo::CheckIndependentFlipSupport(CDirectFlipInfo *this, bool *a2)
{
  unsigned int v2; // ebx
  bool v3; // al
  int v6; // eax
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]
  bool v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0;
  v11 = 0LL;
  v10 = 0;
  if ( !*((_QWORD *)this + 1) )
    goto LABEL_7;
  v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
         *((_QWORD *)this + 2),
         &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
         &v11);
  v2 = v6;
  if ( v6 < 0 )
  {
    v9 = 653;
    goto LABEL_14;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, bool *))(*(_QWORD *)v11 + 480LL))(v11, &v10);
  v2 = v6;
  if ( v6 < 0 )
  {
    v9 = 655;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v9);
    goto LABEL_8;
  }
  v3 = v10;
  if ( !v10 )
  {
LABEL_7:
    *a2 = v3;
    goto LABEL_8;
  }
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                    + 4));
  if ( RenderingRealizationNoRef )
  {
    v3 = *((_DWORD *)RenderingRealizationNoRef + 68) != 3;
    v10 = v3;
    goto LABEL_7;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x29Bu);
LABEL_8:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v2;
}
