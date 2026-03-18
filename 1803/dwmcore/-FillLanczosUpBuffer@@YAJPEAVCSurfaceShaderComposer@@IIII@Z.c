/*
 * XREFs of ?FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x180177010
 * Callers:
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801771EC (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x1801E57F8 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 */

__int64 __fastcall FillLanczosUpBuffer(struct CSurfaceShaderComposer *a1, int a2, int a3, int a4, signed int a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  _QWORD v12[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v13[8]; // [rsp+40h] [rbp-38h] BYREF
  float v14; // [rsp+48h] [rbp-30h]
  float v15; // [rsp+4Ch] [rbp-2Ch]
  float v16; // [rsp+50h] [rbp-28h]
  float v17; // [rsp+54h] [rbp-24h]

  memset_0(v13, 0, 0x20uLL);
  v12[0] = 32LL;
  v14 = (float)a2;
  v15 = (float)a3;
  v12[1] = v13;
  v16 = (float)a4;
  v17 = (float)a5;
  v9 = CSurfaceShaderComposer::SetScratchConstantBuffer(a1, v12, 0LL);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1Du);
  return v10;
}
