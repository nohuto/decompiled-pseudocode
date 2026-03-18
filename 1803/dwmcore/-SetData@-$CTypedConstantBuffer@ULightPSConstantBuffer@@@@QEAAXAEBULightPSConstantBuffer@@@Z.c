/*
 * XREFs of ?SetData@?$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAXAEBULightPSConstantBuffer@@@Z @ 0x180017DA4
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
 */

int __fastcall CTypedConstantBuffer<LightPSConstantBuffer>::SetData(__int64 a1, _OWORD *a2)
{
  _OWORD *v3; // rdi
  int result; // eax
  _OWORD *v6; // rdi
  __int128 v7; // xmm0
  _OWORD *v8; // rbx
  __int128 v9; // xmm1

  v3 = (_OWORD *)(a1 + 16);
  result = memcmp_0(a2, (const void *)(a1 + 16), 0xF0uLL);
  if ( result )
  {
    result = 128;
    *v3 = *a2;
    v3[1] = a2[1];
    v3[2] = a2[2];
    v3[3] = a2[3];
    v3[4] = a2[4];
    v3[5] = a2[5];
    v3[6] = a2[6];
    v6 = v3 + 8;
    v7 = a2[7];
    v8 = a2 + 8;
    *(v6 - 1) = v7;
    *v6 = *v8;
    v6[1] = v8[1];
    v6[2] = v8[2];
    v6[3] = v8[3];
    v6[4] = v8[4];
    v6[5] = v8[5];
    v9 = v8[6];
    *(_BYTE *)(a1 + 8) = 1;
    v6[6] = v9;
  }
  return result;
}
