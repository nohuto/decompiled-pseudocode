/*
 * XREFs of ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x1801773BC
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x180176CCC (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x180177484 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 */

__int64 __fastcall CPolygon::Create(int a1, __int64 a2, __int64 *a3)
{
  int v3; // xmm0_4
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // [rsp+78h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a2 + 224);
  v9 = 0LL;
  v5 = CPolygon::Create(
         a1,
         *(_QWORD *)(a2 + 216),
         *(_QWORD *)(a2 + 248),
         (int)a2 + 144,
         v3,
         *(_DWORD *)(a2 + 236),
         *(_DWORD *)(a2 + 228),
         *(_DWORD *)(a2 + 232),
         *(_BYTE *)(a2 + 240),
         *(_BYTE *)(a2 + 241),
         a2 + 128,
         (__int64)&v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x57u);
  }
  else
  {
    v7 = v9;
    v9 = 0LL;
    *a3 = v7;
  }
  ReleaseInterface<ClipPlaneInfoRef>(&v9);
  return v6;
}
