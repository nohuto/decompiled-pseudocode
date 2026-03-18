/*
 * XREFs of ?FillXBRBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x180177100
 * Callers:
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801771EC (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x1801E57F8 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 */

__int64 __fastcall FillXBRBuffer(struct CSurfaceShaderComposer *a1, int a2, int a3, int a4, signed int a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  _QWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  float v13[8]; // [rsp+40h] [rbp-30h] BYREF

  memset_0(v13, 0, sizeof(v13));
  v12[0] = 32LL;
  v13[0] = (float)a2;
  v13[1] = (float)a3;
  v12[1] = v13;
  v13[2] = (float)a4;
  v13[4] = FLOAT_1_0;
  v13[3] = (float)a5;
  v9 = CSurfaceShaderComposer::SetScratchConstantBuffer(a1, v12, 0LL);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x6Au);
  return v10;
}
