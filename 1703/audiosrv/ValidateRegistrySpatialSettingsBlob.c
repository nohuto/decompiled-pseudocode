/*
 * XREFs of ValidateRegistrySpatialSettingsBlob @ 0x18003BA74
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003F190 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 * Callees:
 *     <none>
 */

char __fastcall ValidateRegistrySpatialSettingsBlob(__int64 a1, char a2, _OWORD *a3, _OWORD *a4, bool *a5, bool *a6)
{
  char v6; // r11
  __int64 v7; // r10

  v6 = 0;
  if ( *(_WORD *)a1 == 65 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( v7 )
    {
      if ( *(_DWORD *)(a1 + 8) > 8u
        && *(_DWORD *)v7 <= *(_DWORD *)(a1 + 8)
        && *(_DWORD *)(v7 + 4) == 1
        && *(_DWORD *)v7 == 80
        && *(_DWORD *)(v7 + 68) )
      {
        *a3 = *(_OWORD *)(v7 + 20);
        *a4 = *(_OWORD *)(v7 + 36);
        if ( !a2 )
          *(_DWORD *)(v7 + 72) = *(_DWORD *)(v7 + 8);
        *a5 = *(_DWORD *)(v7 + 72) != 0;
        v6 = 1;
        *a6 = *(_DWORD *)(v7 + 16) != 0;
      }
    }
  }
  return v6;
}
