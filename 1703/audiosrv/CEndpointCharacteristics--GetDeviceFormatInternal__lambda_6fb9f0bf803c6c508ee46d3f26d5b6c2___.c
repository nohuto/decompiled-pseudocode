/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___ @ 0x18004C1F0
 * Callers:
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800BE6F8 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000C8C0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x18002C540 (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x18002D7BC (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___ @ 0x18004C114 (CEndpointCharacteristics--GetDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5,
        struct tWAVEFORMATEX **a6)
{
  int DefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2; // ebx
  struct tWAVEFORMATEX *v7; // rdi
  LPVOID v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v9[1] = (LPVOID)-2LL;
  v9[0] = 0LL;
  *a6 = 0LL;
  v10 = *a5;
  v11 = *((_QWORD *)a5 + 2);
  DefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2 = CEndpointCharacteristics::GetDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___(
                                                             a1,
                                                             a2,
                                                             a3,
                                                             (__int64)&v10,
                                                             (struct tWAVEFORMATEX **)v9);
  if ( DefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2 >= 0 )
  {
    v7 = (struct tWAVEFORMATEX *)v9[0];
    DefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2 = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)v9[0]);
    if ( DefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2 >= 0 )
    {
      v9[0] = 0LL;
      *a6 = v7;
    }
  }
  LogEPCError(
    "CEndpointCharacteristics::GetDeviceFormatInternal",
    6005,
    DefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2);
  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(v9);
  return (unsigned int)DefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2;
}
