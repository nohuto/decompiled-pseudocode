/*
 * XREFs of ?TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180155180
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x180154F9C (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x1801908A8 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z.c)
 */

unsigned __int64 __fastcall TransferVertices2DH_UV2(__int64 a1, CMILMatrix *a2, float a3)
{
  unsigned __int64 result; // rax
  unsigned int v4; // ebx
  __int64 v5; // r13
  int v8; // r14d
  int v9; // esi
  _DWORD *v10; // rbp
  int v11; // xmm1_4
  int v12; // xmm1_4
  _DWORD *v13; // r11
  int v14; // xmm0_4
  int v15; // eax
  __int64 v16; // r11
  char *v17; // rbp
  __int64 v18; // rcx
  _DWORD v19[4]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v20[4]; // [rsp+30h] [rbp-68h] BYREF

  result = *(unsigned int *)(a1 + 12);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 24);
  v8 = 8 * result + 16;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v9 = 0;
    *(float *)&v19[3] = FLOAT_1_0;
    do
    {
      v10 = (_DWORD *)(v5 + v9);
      v11 = v10[1];
      v19[0] = *v10;
      v19[2] = v10[2];
      v19[1] = v11;
      CMILMatrix::Transform(a2, (const struct MilPoint4F *)v19, (struct MilPoint4F *)v20, 1u);
      v12 = v20[1];
      *v13 = v20[0];
      v14 = v20[3];
      v13[1] = v12;
      v13[2] = v14;
      v15 = BlendPremultipliedColorDW(v10[3], a3);
      *(_DWORD *)(v16 + 12) = v15;
      v17 = (char *)v10 - v16;
      result = v16 + 16;
      v18 = 2LL;
      do
      {
        *(_QWORD *)result = *(_QWORD *)&v17[result];
        result += 8LL;
        --v18;
      }
      while ( v18 );
      ++v4;
      v9 += v8;
    }
    while ( v4 < *(_DWORD *)(a1 + 8) );
  }
  return result;
}
