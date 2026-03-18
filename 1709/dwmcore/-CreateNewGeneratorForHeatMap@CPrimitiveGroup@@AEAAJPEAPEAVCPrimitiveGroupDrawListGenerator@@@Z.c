/*
 * XREFs of ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180174E28
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18002721C (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1AEBV?$span@PEAVIImageSource@@@gsl@@2AEBV?$span@PEAVCPrimitiveColor@@@4@PEAPEAV1@@Z @ 0x180046718 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1AEBV-$span@PEA.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180074928 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewGeneratorForHeatMap(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  __int64 v3; // rbx
  CD2DSharedBuffer *v4; // r8
  struct ID2D1PrivateCompositorBuffer *v5; // rdx
  __int64 v6; // rcx
  signed int v7; // eax
  unsigned int v8; // edi
  __int128 v10; // [rsp+40h] [rbp-38h] BYREF
  __int128 v11; // [rsp+50h] [rbp-28h] BYREF
  __int128 v12; // [rsp+60h] [rbp-18h] BYREF
  struct CPrimitiveGroupDrawListGenerator *v13; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0LL;
  *a2 = 0LL;
  v4 = (CD2DSharedBuffer *)*((_QWORD *)this + 85);
  v5 = (struct ID2D1PrivateCompositorBuffer *)*((_QWORD *)this + 84);
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 360LL);
  v13 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v7 = CPrimitiveGroupDrawListGenerator::Create(v6, v5, v4, &v12, &v11, &v10, &v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x300u);
    v3 = (__int64)v13;
  }
  else
  {
    *a2 = v13;
  }
  ReleaseInterfaceNoNULL<CPolygon>(v3);
  return v8;
}
