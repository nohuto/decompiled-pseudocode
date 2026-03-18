/*
 * XREFs of ?EmitUpdateCommands@CScaleTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0012890
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

char __fastcall DirectComposition::CScaleTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CScaleTransformMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v3; // rax
  _DWORD *v4; // rbx
  float *v5; // rcx
  __int64 v6; // rdx
  double *v7; // rbx
  float v8; // xmm0_4
  void *v10; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x2CuLL, &v10) )
    return 0;
  v3 = (char *)v10;
  *(_DWORD *)v10 = 44;
  v4 = v3 + 4;
  memset(v3 + 4, 0, 0x28uLL);
  *v4 = 472;
  v5 = (float *)((char *)this + 56);
  v6 = 4LL;
  v4[1] = *((_DWORD *)this + 6);
  v7 = (double *)(v4 + 2);
  do
  {
    v8 = *v5++;
    *v7++ = v8;
    --v6;
  }
  while ( v6 );
  return 1;
}
