/*
 * XREFs of FillHrtfDesiredFromat @ 0x180040C60
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003C980 (-IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003D960 (-IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_.c)
 *     ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800408B0 (-IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FillHrtfDesiredFromat(char a1, int a2, __int64 a3)
{
  __int16 v3; // ax
  __int16 v4; // cx
  int v5; // eax
  __int64 result; // rax

  *(_DWORD *)(a3 + 4) = a2;
  *(_WORD *)a3 = -2;
  *(_WORD *)(a3 + 16) = 22;
  *(GUID *)(a3 + 24) = GUID_00000001_0000_0010_8000_00aa00389b71;
  if ( a1 )
  {
    *(_DWORD *)(a3 + 20) = 1599;
    *(_WORD *)(a3 + 2) = 8;
    *(_WORD *)(a3 + 14) = 32;
    v3 = 24;
  }
  else
  {
    *(_DWORD *)(a3 + 20) = 3;
    *(_WORD *)(a3 + 2) = 2;
    v3 = 16;
    *(_WORD *)(a3 + 14) = 16;
  }
  v4 = *(_WORD *)(a3 + 2);
  *(_WORD *)(a3 + 18) = v3;
  v5 = (unsigned __int16)(v4 * (*(_WORD *)(a3 + 14) >> 3));
  *(_WORD *)(a3 + 12) = v5;
  result = (unsigned int)(a2 * v5);
  *(_DWORD *)(a3 + 8) = result;
  return result;
}
