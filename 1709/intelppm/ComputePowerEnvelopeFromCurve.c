/*
 * XREFs of ComputePowerEnvelopeFromCurve @ 0x1C000D930
 * Callers:
 *     ComputeProcessorEnergy @ 0x1C000D9E0 (ComputeProcessorEnergy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputePowerEnvelopeFromCurve(__int64 a1, unsigned int a2)
{
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  unsigned int *v5; // r9
  unsigned int v6; // eax
  unsigned int v7; // r9d
  unsigned int v9; // r9d
  unsigned int v10; // r11d
  unsigned int v11; // eax

  v3 = 0;
  v4 = (*(_DWORD *)(a1 + 4) >> 1) & 0x7F;
  if ( v4 )
  {
    v5 = (unsigned int *)(a1 + 8);
    do
    {
      v6 = *v5;
      if ( a2 == (unsigned __int8)*v5 )
        return v6 >> 8;
      if ( a2 < (unsigned __int8)v6 )
        break;
      ++v3;
      ++v5;
    }
    while ( v3 < v4 );
    if ( !v3 )
      goto LABEL_11;
    if ( v3 == v4 )
      v7 = *(_DWORD *)(a1 + 4LL * --v3 + 8);
    else
      v7 = *(_DWORD *)(a1 + 4LL * (v3 - 1) + 8);
  }
  else
  {
LABEL_11:
    v7 = *(_DWORD *)(a1 + 8);
    v3 = 1;
  }
  v9 = v7 >> 8;
  v10 = *(_DWORD *)(a1 + 4LL * (v3 - 1) + 8);
  v11 = *(_DWORD *)(a1 + 4LL * v3 + 8);
  if ( (unsigned __int8)v10 < (unsigned int)(unsigned __int8)v11 )
    return v9
         + (int)((a2 - (unsigned __int8)v10) * ((v11 >> 8) - (v10 >> 8)))
         / ((unsigned __int8)v11 - (unsigned __int8)v10);
  else
    return 0LL;
}
