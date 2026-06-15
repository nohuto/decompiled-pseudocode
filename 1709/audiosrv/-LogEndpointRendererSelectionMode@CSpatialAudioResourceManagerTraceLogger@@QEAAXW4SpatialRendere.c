/*
 * XREFs of ?LogEndpointRendererSelectionMode@CSpatialAudioResourceManagerTraceLogger@@QEAAXW4SpatialRendererSelectionMode@@PEBG@Z @ 0x1800C6060
 * Callers:
 *     ?SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSelectionMode@@@Z @ 0x1800C6FDC (-SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSel.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CSpatialAudioResourceManagerTraceLogger::LogEndpointRendererSelectionMode(
        __int64 a1,
        int a2,
        const WCHAR *a3)
{
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  UINT32 cData; // r10d
  TLG_STATUS result; // eax
  int v7; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+70h] [rbp-28h] BYREF

  if ( (unsigned int)dword_18014A370 > 5 )
  {
    v7 = a2;
    v9 = &v7;
    v10 = 4;
    v11 = 0;
    TlgCreateWsz(&v12, a3);
    return TlgWrite((TraceLoggingHProvider)&dword_18014A370, &unk_1801114B2, v3, v4, cData, &pData);
  }
  return result;
}
