/*
 * XREFs of ?GammaConvert_64bppABGR_128bppABGR@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1801C73F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Convert_sRGB_UINT16_To_scRGB_float@@YAMG@Z @ 0x1801C8748 (-Convert_sRGB_UINT16_To_scRGB_float@@YAMG@Z.c)
 */

void __fastcall GammaConvert_64bppABGR_128bppABGR(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  unsigned __int16 *v2; // r10
  _OWORD *v3; // rbx
  __int64 v4; // r10
  __int64 v5; // r10
  float v6; // xmm0_4
  __int64 v7; // r10
  int v8; // eax
  int v9; // r11d
  __int128 v10; // [rsp+20h] [rbp-18h]

  v2 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v3 = *(_OWORD **)a2;
  if ( *((_DWORD *)a1 + 2) )
  {
    do
    {
      LODWORD(v10) = Convert_sRGB_UINT16_To_scRGB_float(*v2);
      DWORD1(v10) = Convert_sRGB_UINT16_To_scRGB_float(*(_WORD *)(v4 + 2));
      v6 = Convert_sRGB_UINT16_To_scRGB_float(*(_WORD *)(v5 + 4));
      v8 = *(unsigned __int16 *)(v7 + 6);
      v2 = (unsigned __int16 *)(v7 + 8);
      *((float *)&v10 + 2) = v6;
      *((float *)&v10 + 3) = (float)v8 / 65535.0;
      *v3++ = v10;
    }
    while ( v9 != 1 );
  }
}
