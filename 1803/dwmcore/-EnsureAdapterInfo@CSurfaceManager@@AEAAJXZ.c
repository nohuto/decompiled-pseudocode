/*
 * XREFs of ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x18001FE80
 * Callers:
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x18001FCFC (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18001F0FC (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x18001FE1C (-ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ.c)
 *     ?Construct@AdapterInfo@CSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x180020744 (-Construct@AdapterInfo@CSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x180079844 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceManager::EnsureAdapterInfo(CSurfaceManager *this)
{
  int v1; // ebx
  int v3; // eax
  CSurfaceManager::AdapterInfo *v4; // rdi
  __int64 v5; // rbp
  struct CDXGIAdapterLimited *v6; // r15
  int v7; // eax
  CSurfaceManager::AdapterInfo *v9; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v9 = 0LL;
  if ( !*((_BYTE *)this + 504) )
  {
    v3 = CDisplayManager::EnsureDXGIEnumeration(&g_DisplayManager, &v9);
    v4 = v9;
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1B2u);
    }
    else
    {
      v5 = 0LL;
      if ( *((_DWORD *)v9 + 22) )
      {
        while ( 1 )
        {
          v6 = *(struct CDXGIAdapterLimited **)(*((_QWORD *)v4 + 8) + 8 * v5);
          v7 = DynArrayImpl<0>::AddMultiple((char *)this + 440, 16LL, 1LL, &v9);
          v1 = v7;
          if ( v7 < 0 )
            break;
          CSurfaceManager::AdapterInfo::Construct(v9, v6, (struct CD3DDeviceManager *)&g_D3DDeviceManager);
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= *((_DWORD *)v4 + 22) )
            goto LABEL_6;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1BBu);
      }
      else
      {
LABEL_6:
        *((_BYTE *)this + 504) = 1;
      }
    }
    if ( v1 < 0 )
      CSurfaceManager::ReleaseAdapterInfo(this);
    if ( v4 )
      (*(void (__fastcall **)(CSurfaceManager::AdapterInfo *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return (unsigned int)v1;
}
