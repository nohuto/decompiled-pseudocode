/*
 * XREFs of ?SetData@?$CTypedConstantBuffer@ULightVSConstantBuffer@@@@QEAAXAEBULightVSConstantBuffer@@@Z @ 0x1800B8508
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     memcmp_0 @ 0x1800C5D80 (memcmp_0.c)
 */

int __fastcall CTypedConstantBuffer<LightVSConstantBuffer>::SetData(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // rbx
  _OWORD *v3; // rdi
  int result; // eax
  __int64 v6; // rax
  __int128 v7; // xmm1

  v2 = a2;
  v3 = (_OWORD *)(a1 + 16);
  result = memcmp_0(a2, (const void *)(a1 + 16), 0x104uLL);
  if ( result )
  {
    v6 = 2LL;
    do
    {
      *v3 = *v2;
      v3[1] = v2[1];
      v3[2] = v2[2];
      v3[3] = v2[3];
      v3[4] = v2[4];
      v3[5] = v2[5];
      v3[6] = v2[6];
      v3 += 8;
      v7 = v2[7];
      v2 += 8;
      *(v3 - 1) = v7;
      --v6;
    }
    while ( v6 );
    result = *(_DWORD *)v2;
    *(_DWORD *)v3 = *(_DWORD *)v2;
    *(_BYTE *)(a1 + 8) = 1;
  }
  return result;
}
