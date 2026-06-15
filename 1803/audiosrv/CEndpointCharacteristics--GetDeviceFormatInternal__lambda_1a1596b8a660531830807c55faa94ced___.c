/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_1a1596b8a660531830807c55faa94ced___ @ 0x180064368
 * Callers:
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800ECC14 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180038090 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x180039AD4 (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___ @ 0x18006428C (CEndpointCharacteristics--GetDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x1800EFDC8 (-LogEPCError@@YAXPEBDHJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_1a1596b8a660531830807c55faa94ced___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct tWAVEFORMATEX **a6)
{
  int DefaultFormat__lambda_1a1596b8a660531830807c55faa94ced; // ebx
  struct tWAVEFORMATEX *v7; // rdi
  LPVOID v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v9[1] = (LPVOID)-2LL;
  v9[0] = 0LL;
  *a6 = 0LL;
  v10 = *(_OWORD *)a5;
  v11 = *(_QWORD *)(a5 + 16);
  DefaultFormat__lambda_1a1596b8a660531830807c55faa94ced = CEndpointCharacteristics::GetDefaultFormat__lambda_1a1596b8a660531830807c55faa94ced___(
                                                             a1,
                                                             a2,
                                                             a3,
                                                             &v10,
                                                             (struct tWAVEFORMATEX **)v9);
  if ( DefaultFormat__lambda_1a1596b8a660531830807c55faa94ced >= 0 )
  {
    v7 = (struct tWAVEFORMATEX *)v9[0];
    DefaultFormat__lambda_1a1596b8a660531830807c55faa94ced = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)v9[0]);
    if ( DefaultFormat__lambda_1a1596b8a660531830807c55faa94ced >= 0 )
    {
      v9[0] = 0LL;
      *a6 = v7;
    }
  }
  LogEPCError(
    "CEndpointCharacteristics::GetDeviceFormatInternal",
    6147,
    DefaultFormat__lambda_1a1596b8a660531830807c55faa94ced);
  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(v9);
  return (unsigned int)DefaultFormat__lambda_1a1596b8a660531830807c55faa94ced;
}
