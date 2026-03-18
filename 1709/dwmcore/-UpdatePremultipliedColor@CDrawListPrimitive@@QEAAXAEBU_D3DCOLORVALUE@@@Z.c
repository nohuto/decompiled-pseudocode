/*
 * XREFs of ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x18015551C
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180023E10 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawListPrimitive::UpdatePremultipliedColor(CDrawListPrimitive *this, const struct _D3DCOLORVALUE *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r10d
  __int64 v5; // rdi
  int i; // r9d
  int v8; // eax
  __int64 v9; // rdx
  float v10; // xmm3_4
  float v11; // xmm0_4
  unsigned int v12; // ecx
  float v13; // xmm0_4
  unsigned int v14; // ecx
  float v15; // xmm0_4
  float v16; // [rsp+0h] [rbp-18h]

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  v5 = *((_QWORD *)this + 4);
  for ( i = *((_DWORD *)this + 3);
        v3 < *((_DWORD *)this + 2);
        *(_DWORD *)(v9 + v2 + 12) = ((int)(LODWORD(v16) << 10) >> 11) | (((int)(LODWORD(v15) << 10) >> 3) | v14) & 0xFFFFFF00 )
  {
    v8 = v3 * (i + 2);
    ++v3;
    v9 = 8 * v8;
    v10 = *(float *)(v9 + v5 + 12);
    v11 = (float)((float)(v10 * a2->a) * 255.0) + 6291456.25;
    v12 = (LODWORD(v11) << 23) & 0xFF00FFFF;
    v13 = (float)((float)(v10 * a2->b) * 255.0) + 6291456.25;
    v14 = ((LODWORD(v13) << 15) | v12) & 0xFFFF00FF;
    v15 = (float)((float)(v10 * a2->g) * 255.0) + 6291456.25;
    v16 = (float)((float)(v10 * a2->r) * 255.0) + 6291456.25;
  }
}
