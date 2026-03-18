/*
 * XREFs of ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x1800B6178
 * Callers:
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x1800B5FAC (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x180070F50 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18007F134 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x1800B60E8 (-ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ.c)
 *     ?Construct@AdapterInfo@CSurfaceManager@@QEAAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x1800B6444 (-Construct@AdapterInfo@CSurfaceManager@@QEAAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVCD3DDeviceM.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceManager::EnsureAdapterInfo(CSurfaceManager *this)
{
  int v1; // ebx
  int v3; // eax
  CSurfaceManager::AdapterInfo *v4; // rdi
  __int64 v5; // rbp
  struct CDXGIAdapterLimited *v6; // r15
  int v7; // eax
  int v8; // eax
  CSurfaceManager::AdapterInfo *v10; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v10 = 0LL;
  if ( !*((_BYTE *)this + 624) )
  {
    v3 = CDisplayManager::EnsureDXGIEnumeration(&g_DisplayManager, &v10);
    v4 = v10;
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1B2u);
    }
    else
    {
      v5 = 0LL;
      if ( *((_DWORD *)v10 + 22) )
      {
        while ( 1 )
        {
          v6 = *(struct CDXGIAdapterLimited **)(*((_QWORD *)v4 + 8) + 8 * v5);
          v7 = DynArrayImpl<0>::AddMultiple((__int64)this + 512, 40, 1, &v10);
          v1 = v7;
          if ( v7 < 0 )
            break;
          v8 = CSurfaceManager::AdapterInfo::Construct(
                 v10,
                 (const struct _GUID *)(*((_QWORD *)this + 50) + 324LL),
                 v6,
                 (struct CD3DDeviceManager *)&g_D3DDeviceManager);
          v1 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1C2u);
            goto LABEL_8;
          }
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= *((_DWORD *)v4 + 22) )
            goto LABEL_7;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1BBu);
      }
      else
      {
LABEL_7:
        *((_BYTE *)this + 624) = 1;
      }
    }
LABEL_8:
    if ( v1 < 0 )
      CSurfaceManager::ReleaseAdapterInfo(this);
    if ( v4 )
      (*(void (__fastcall **)(CSurfaceManager::AdapterInfo *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return (unsigned int)v1;
}
