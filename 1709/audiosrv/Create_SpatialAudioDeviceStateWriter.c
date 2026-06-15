/*
 * XREFs of Create_SpatialAudioDeviceStateWriter @ 0x1800D3E68
 * Callers:
 *     ?SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSelectionMode@@@Z @ 0x1800C6FDC (-SetDeviceRendererSelectionMode@CExclusiveModeListener@@AEAAJPEAUIMMDevice@@W4SpatialRendererSel.c)
 *     ?MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z @ 0x1800C9DB0 (-MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18005CA34 (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1800D387C (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 */

__int64 __fastcall Create_SpatialAudioDeviceStateWriter(
        const unsigned __int16 *a1,
        struct IPropertyStore *a2,
        _QWORD *a3)
{
  unsigned int v4; // ebx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  const unsigned __int16 *v10; // [rsp+30h] [rbp-39h] BYREF
  struct IPropertyStore *v11; // [rsp+38h] [rbp-31h] BYREF
  SpatialAudioDeviceStateWriter *v12[2]; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  struct IPropertyStore **v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]
  struct IPropertyStore **v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+98h] [rbp+2Fh]
  int v20; // [rsp+9Ch] [rbp+33h]

  v12[0] = 0LL;
  v10 = a1;
  v11 = a2;
  if ( a3 )
  {
    *a3 = 0LL;
    Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease((__int64 *)v12);
    LODWORD(v10) = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateWriter,SpatialAudioDeviceStateWriter,unsigned short const * &,IPropertyStore * &>(
                     v12,
                     &v10,
                     &v11);
    v4 = (unsigned int)v10;
    if ( (int)v10 >= 0 )
    {
      v4 = (**((__int64 (__fastcall ***)(char *, GUID *, _QWORD *))v12[0] + 71))(
             (char *)v12[0] + 568,
             &GUID_3927b438_dd02_4ef9_b08d_f52d17592a32,
             a3);
    }
    else if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_SpatialAudioDeviceStateWriter");
      v17 = 0;
      v20 = 0;
      v15 = &v11;
      v16 = 4;
      v19 = 4;
      LODWORD(v11) = 68;
      v18 = (struct IPropertyStore **)&v10;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v7, v8, 5u, &pData);
    }
  }
  else
  {
    v4 = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "Create_SpatialAudioDeviceStateWriter");
      v17 = 0;
      v20 = 0;
      v15 = (struct IPropertyStore **)&v10;
      v16 = 4;
      v19 = 4;
      LODWORD(v10) = 63;
      LODWORD(v11) = -2147024809;
      v18 = &v11;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v5, v6, 5u, &pData);
    }
  }
  Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease((__int64 *)v12);
  return v4;
}
