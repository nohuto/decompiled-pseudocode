/*
 * XREFs of ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x1801AA640
 * Callers:
 *     ?CleanupReferences@CHwBitmapBrush@@UEAAXXZ @ 0x180086240 (-CleanupReferences@CHwBitmapBrush@@UEAAXXZ.c)
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1800862E0 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::GetCachedEffectNoRef(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int v7; // edi
  __int64 v8; // rax
  signed int v9; // eax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = a2;
  v11 = 0LL;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 8LL * a2 + 192);
  if ( !v8 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**(_QWORD **)(a1 + 176) + 504LL))(
           *(_QWORD *)(a1 + 176),
           (char *)&unk_18026DEB4 + 24 * a2,
           &v11);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x722u);
      v3 = v11;
      goto LABEL_5;
    }
    v8 = v11;
    *(_QWORD *)(a1 + 8 * v4 + 192) = v11;
    v11 = 0LL;
  }
  *a3 = v8;
LABEL_5:
  ReleaseInterfaceNoNULL<CManipulationManager>(v3);
  return v7;
}
