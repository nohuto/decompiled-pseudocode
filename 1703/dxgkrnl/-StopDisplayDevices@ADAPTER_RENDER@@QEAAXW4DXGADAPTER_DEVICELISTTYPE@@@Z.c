/*
 * XREFs of ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C017458C
 * Callers:
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C01737BC (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B7E8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?MarkDeviceAsError@DXGDEVICE@@QEAAXW4_VIDSCH_ERROR_CODE@@@Z @ 0x1C008B980 (-MarkDeviceAsError@DXGDEVICE@@QEAAXW4_VIDSCH_ERROR_CODE@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00D3290 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00D3304 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0101970 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::StopDisplayDevices(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 **v3; // r15
  __int64 *i; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned int v7; // esi
  unsigned int v8; // r14d

  v2 = 120LL;
  if ( a2 == 1 )
    v2 = 136LL;
  v3 = (__int64 **)(a1 + v2);
  for ( i = *v3; i != (__int64 *)v3 && i; i = (__int64 *)*i )
  {
    v5 = i[225];
    if ( v5 )
    {
      DXGADAPTER::AcquireCoreResourceExclusive(i[225], 1, 1);
      if ( *(_DWORD *)(v5 + 176) == 1 )
      {
        v6 = *(_QWORD *)(v5 + 2280);
        v7 = 0;
        v8 = *(_DWORD *)(v6 + 80);
        if ( v8 )
        {
          do
          {
            if ( i == (__int64 *)ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)v6, v7) )
              ADAPTER_DISPLAY::ReleaseVidPnSourceOwner((PERESOURCE **)v6, (struct DXGDEVICE *)i);
            ++v7;
          }
          while ( v7 < v8 );
        }
      }
      DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v5);
      DXGDEVICE::MarkDeviceAsError((__int64)i);
    }
  }
}
