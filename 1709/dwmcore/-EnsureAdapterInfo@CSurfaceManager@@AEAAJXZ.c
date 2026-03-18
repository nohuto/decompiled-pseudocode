/*
 * XREFs of ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x180076AF8
 * Callers:
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x180119BD4 (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180010EA8 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1800685D8 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x180076A68 (-ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ.c)
 *     ?Construct@AdapterInfo@CSurfaceManager@@QEAAJPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x180076C38 (-Construct@AdapterInfo@CSurfaceManager@@QEAAJPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceManager::EnsureAdapterInfo(CSurfaceManager *this)
{
  int v1; // ebx
  signed int v3; // eax
  CSurfaceManager::AdapterInfo *v4; // rdi
  __int64 v5; // rbp
  struct CDXGIAdapterLimited *v6; // r15
  signed int v7; // eax
  signed int v8; // eax
  CSurfaceManager::AdapterInfo *v10; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v10 = 0LL;
  if ( !*((_BYTE *)this + 624) )
  {
    v3 = CDisplayManager::EnsureDXGIEnumeration((CDisplayManager *)&g_DisplayManager, &v10);
    v4 = v10;
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x1BCu);
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
          v8 = CSurfaceManager::AdapterInfo::Construct(v10, v6, (struct CD3DDeviceManager *)&g_D3DDeviceManager);
          v1 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x1CBu);
            goto LABEL_8;
          }
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= *((_DWORD *)v4 + 22) )
            goto LABEL_7;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x1C5u);
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
