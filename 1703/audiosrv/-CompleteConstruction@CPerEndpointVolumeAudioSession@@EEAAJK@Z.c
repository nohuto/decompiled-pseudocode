/*
 * XREFs of ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x18008A5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CF40 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180023694 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x18008CB88 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::CompleteConstruction(
        const void **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  const unsigned __int16 *Buffer; // rax
  int AliasedEndpointCharacteristics; // ebx
  int (*v7)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  struct _GUID v9; // [rsp+30h] [rbp-18h] BYREF
  struct CEndpointCharacteristics *v10; // [rsp+50h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+60h] [rbp+18h] BYREF

  pv = 0LL;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x32u, (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids);
  }
  v10 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer(this + 99, a2, a3, a4);
  AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(Buffer, 0, &v10);
  if ( AliasedEndpointCharacteristics < 0
    || (v9 = GUID_00000000_0000_0000_0000_000000000000,
        AliasedEndpointCharacteristics = CEndpointCharacteristics::GetMixFormat(
                                           v10,
                                           eHostProcessConnector,
                                           &v9,
                                           v7,
                                           (struct tWAVEFORMATEX **)&pv),
        AliasedEndpointCharacteristics < 0)
    || (AliasedEndpointCharacteristics = CPerEndpointVolumeAudioSession::GetVolumeStrip(
                                           (CPerEndpointVolumeAudioSession *)this,
                                           0LL),
        AliasedEndpointCharacteristics < 0) )
  {
    AudSrvTraceLoggingErrorHelper(
      "CPerEndpointVolumeAudioSession::CompleteConstruction",
      2175,
      AliasedEndpointCharacteristics);
  }
  if ( v10 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v10 + 16LL))(v10);
  CoTaskMemFree(pv);
  return (unsigned int)AliasedEndpointCharacteristics;
}
