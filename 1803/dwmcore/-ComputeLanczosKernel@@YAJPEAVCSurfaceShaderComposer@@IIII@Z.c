/*
 * XREFs of ?ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x180176D08
 * Callers:
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801771EC (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?ComputeDecimationFilterKernel@Lanczos@@YAXIIQEAY05M@Z @ 0x18017CCF0 (-ComputeDecimationFilterKernel@Lanczos@@YAXIIQEAY05M@Z.c)
 *     ?ComputeInterpolationFilterKernel@Lanczos@@YAXQEAY05M@Z @ 0x18017CE04 (-ComputeInterpolationFilterKernel@Lanczos@@YAXQEAY05M@Z.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x1801E57F8 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 */

__int64 __fastcall ComputeLanczosKernel(
        struct CSurfaceShaderComposer *a1,
        signed int a2,
        int a3,
        signed int a4,
        unsigned int a5)
{
  float *v9; // rdx
  float *v10; // r9
  float *v11; // r9
  __int64 v12; // rdx
  unsigned int *v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  _QWORD v20[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v21[16]; // [rsp+40h] [rbp-C0h] BYREF
  signed int v22; // [rsp+50h] [rbp-B0h]
  int v23; // [rsp+54h] [rbp-ACh]
  signed int v24; // [rsp+58h] [rbp-A8h]
  float (*v25)[6]; // [rsp+5Ch] [rbp-A4h]
  char v26; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v27[96]; // [rsp+660h] [rbp+560h] BYREF
  unsigned int v28[96]; // [rsp+7E0h] [rbp+6E0h] BYREF

  memset_0(v21, 0, 0x620uLL);
  LODWORD(v25) = a5;
  v22 = a2;
  v23 = a3;
  v24 = a4;
  if ( a2 > a4 )
    Lanczos::ComputeDecimationFilterKernel((Lanczos *)(unsigned int)a2, a4, (unsigned int)v27, (float (*const)[6])v10);
  else
    Lanczos::ComputeInterpolationFilterKernel((Lanczos *)v27, (float (*const)[6])v9);
  if ( v23 > (int)v25 )
    Lanczos::ComputeDecimationFilterKernel(
      (Lanczos *)(unsigned int)v23,
      (unsigned int)v25,
      (unsigned int)v28,
      (float (*const)[6])v11);
  else
    Lanczos::ComputeInterpolationFilterKernel((Lanczos *)v28, (float (*const)[6])(unsigned int)v25);
  v12 = 0LL;
  v13 = (unsigned int *)&v26;
  v14 = 16LL;
  do
  {
    v15 = 6LL;
    do
    {
      *(v13 - 1) = v27[v12];
      v16 = v28[v12++];
      *v13 = v16;
      v13 += 4;
      --v15;
    }
    while ( v15 );
    --v14;
  }
  while ( v14 );
  v20[0] = 1568LL;
  v20[1] = v21;
  v17 = CSurfaceShaderComposer::SetScratchConstantBuffer(a1, v20, 0LL);
  v18 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x52u);
  return v18;
}
