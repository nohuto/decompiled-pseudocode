/*
 * XREFs of ?UpdatePremultipliedColor@CDrawListPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x18015F4A8
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800AB7E0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawListPrimitive::UpdatePremultipliedColor(CDrawListPrimitive *this, const struct _D3DCOLORVALUE *a2)
{
  unsigned int v2; // r9d
  __int64 v4; // rdi
  __int64 v5; // rsi
  int v6; // ebx
  int v7; // r10d
  int v8; // r11d
  __int64 v9; // rax
  float v10; // xmm3_4
  float v11; // xmm0_4
  unsigned int v12; // ecx
  float v13; // xmm0_4
  unsigned int v14; // ecx
  float v15; // xmm0_4
  __int64 v16; // rax
  float v17; // [rsp+0h] [rbp-28h]

  v2 = 0;
  v4 = *((_QWORD *)this + 3);
  v5 = *((_QWORD *)this + 4);
  v6 = 8 * *((_DWORD *)this + 3) + 16;
  if ( *((_DWORD *)this + 2) )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = v8;
      ++v2;
      v8 += v6;
      v10 = *(float *)(v9 + v5 + 12);
      v11 = (float)((float)(v10 * a2->a) * 255.0) + 6291456.25;
      v12 = (LODWORD(v11) << 23) & 0xFF00FFFF;
      v13 = (float)((float)(v10 * a2->b) * 255.0) + 6291456.25;
      v14 = ((LODWORD(v13) << 15) | v12) & 0xFFFF00FF;
      v15 = (float)((float)(v10 * a2->g) * 255.0) + 6291456.25;
      v17 = (float)((float)(v10 * a2->r) * 255.0) + 6291456.25;
      v16 = v7;
      v7 += v6;
      *(_DWORD *)(v16 + v4 + 12) = ((int)(LODWORD(v17) << 10) >> 11) | (((int)(LODWORD(v15) << 10) >> 3) | v14) & 0xFFFFFF00;
    }
    while ( v2 < *((_DWORD *)this + 2) );
  }
}
