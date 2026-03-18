/*
 * XREFs of NtGdiSetPrivateDeviceGammaRamp @ 0x1C00FB300
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C00FAC60 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 */

__int64 __fastcall NtGdiSetPrivateDeviceGammaRamp(struct HOBJ__ *a1, _OWORD *a2, int a3)
{
  _OWORD *v4; // rbx
  unsigned int v6; // esi
  _OWORD *v7; // rdi
  _OWORD *v8; // rax
  __int64 v9; // rcx

  v4 = a2;
  v6 = 0;
  if ( a2 )
  {
    v7 = PALLOCMEM2(0x600uLL, 1886221383LL, 0);
    if ( v7 )
    {
      if ( ((unsigned __int8)v4 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = v7;
      v9 = 12LL;
      do
      {
        *v8 = *v4;
        v8[1] = v4[1];
        v8[2] = v4[2];
        v8[3] = v4[3];
        v8[4] = v4[4];
        v8[5] = v4[5];
        v8[6] = v4[6];
        v8 += 8;
        *(v8 - 1) = v4[7];
        v4 += 8;
        --v9;
      }
      while ( v9 );
      v6 = GreSetPrivateDeviceGammaRamp(a1, v7, a3);
      Win32FreePool((__int64)v7);
    }
  }
  return v6;
}
