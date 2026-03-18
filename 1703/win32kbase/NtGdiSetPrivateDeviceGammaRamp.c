/*
 * XREFs of NtGdiSetPrivateDeviceGammaRamp @ 0x1C0001FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C00020C4 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 __fastcall NtGdiSetPrivateDeviceGammaRamp(HDC a1, _OWORD *a2, int a3)
{
  _OWORD *v4; // rbx
  unsigned int v6; // esi
  _OWORD *v7; // rax
  void *v8; // rdi
  __int64 v9; // rcx

  v4 = a2;
  v6 = 0;
  if ( a2 )
  {
    v7 = (_OWORD *)PALLOCMEM2(0x600uLL);
    v8 = v7;
    if ( v7 )
    {
      if ( ((unsigned __int8)v4 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = 12LL;
      do
      {
        *v7 = *v4;
        v7[1] = v4[1];
        v7[2] = v4[2];
        v7[3] = v4[3];
        v7[4] = v4[4];
        v7[5] = v4[5];
        v7[6] = v4[6];
        v7 += 8;
        *(v7 - 1) = v4[7];
        v4 += 8;
        --v9;
      }
      while ( v9 );
      v6 = GreSetPrivateDeviceGammaRamp(a1, v8, a3);
      Win32FreePool(v8);
    }
  }
  return v6;
}
