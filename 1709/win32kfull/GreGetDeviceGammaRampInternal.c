/*
 * XREFs of GreGetDeviceGammaRampInternal @ 0x1C00F704C
 * Callers:
 *     GreGetDeviceGammaRamp @ 0x1C00F6FA8 (GreGetDeviceGammaRamp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetDeviceGammaRampInternal(__int64 a1, _OWORD *a2)
{
  unsigned int v2; // r8d
  _OWORD *v3; // rax
  __int64 v4; // rcx
  __int128 v5; // xmm1
  _WORD *v7; // rcx
  __int16 v8; // ax

  v2 = 0;
  if ( a1 && (*(_DWORD *)(a1 + 32) & 1) != 0 && (unsigned int)(*(_DWORD *)(a1 + 2124) - 3) <= 3 )
  {
    v3 = *(_OWORD **)(a1 + 1704);
    if ( v3 )
    {
      v4 = 12LL;
      do
      {
        *a2 = *v3;
        a2[1] = v3[1];
        a2[2] = v3[2];
        a2[3] = v3[3];
        a2[4] = v3[4];
        a2[5] = v3[5];
        a2[6] = v3[6];
        a2 += 8;
        v5 = v3[7];
        v3 += 8;
        *(a2 - 1) = v5;
        --v4;
      }
      while ( v4 );
    }
    else
    {
      v7 = a2 + 32;
      do
      {
        v8 = v2++;
        v8 <<= 8;
        v7[256] = v8;
        *v7 = v8;
        *(v7 - 256) = v8;
        ++v7;
      }
      while ( v2 < 0x100 );
    }
    return 1;
  }
  return v2;
}
