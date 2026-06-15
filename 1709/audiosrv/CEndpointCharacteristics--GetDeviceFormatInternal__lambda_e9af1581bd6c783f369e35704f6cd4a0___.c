/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_e9af1581bd6c783f369e35704f6cd4a0___ @ 0x180036254
 * Callers:
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B76E4 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180023870 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x180031248 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___ @ 0x180036178 (CEndpointCharacteristics--GetDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x18005ACAC (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_e9af1581bd6c783f369e35704f6cd4a0___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5,
        struct tWAVEFORMATEX **a6)
{
  int DefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0; // ebx
  struct tWAVEFORMATEX *v7; // rdi
  struct tWAVEFORMATEX *v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v9[1] = (struct tWAVEFORMATEX *)-2LL;
  v9[0] = 0LL;
  *a6 = 0LL;
  v10 = *a5;
  v11 = *((_QWORD *)a5 + 2);
  DefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0 = CEndpointCharacteristics::GetDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___(
                                                             a1,
                                                             a2,
                                                             a3,
                                                             (__int64)&v10,
                                                             v9);
  if ( DefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0 >= 0 )
  {
    v7 = v9[0];
    DefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0 = ValidateWaveFormatEx(v9[0]);
    if ( DefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0 >= 0 )
    {
      v9[0] = 0LL;
      *a6 = v7;
    }
  }
  LogEPCError(
    "CEndpointCharacteristics::GetDeviceFormatInternal",
    6111,
    DefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0);
  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(v9);
  return (unsigned int)DefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0;
}
