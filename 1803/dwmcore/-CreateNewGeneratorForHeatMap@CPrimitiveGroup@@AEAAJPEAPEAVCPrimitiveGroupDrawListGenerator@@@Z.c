/*
 * XREFs of ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18019EF60
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x180097C3C (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x18006FEF4 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B8C88 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewGeneratorForHeatMap(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  __int64 v2; // rbx
  CD2DSharedBuffer *v4; // rdx
  CD2DSharedBuffer *v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int128 v11; // [rsp+50h] [rbp-18h] BYREF
  struct CPrimitiveGroupDrawListGenerator *v12; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0LL;
  *a2 = 0LL;
  v4 = (CD2DSharedBuffer *)*((_QWORD *)this + 85);
  v5 = (CD2DSharedBuffer *)*((_QWORD *)this + 84);
  v12 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v6 = CPrimitiveGroupDrawListGenerator::Create(v5, v4, &v11, &v10, &v9, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x310u);
    v2 = (__int64)v12;
  }
  else
  {
    *a2 = v12;
  }
  ReleaseInterfaceNoNULL<CPolygon>(v2);
  return v7;
}
