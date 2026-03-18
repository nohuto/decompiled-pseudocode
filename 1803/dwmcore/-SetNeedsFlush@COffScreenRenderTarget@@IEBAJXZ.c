/*
 * XREFs of ?SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ @ 0x18000DC64
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18000D7E0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x18015B1E0 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180089958 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderTarget::SetNeedsFlush(COffScreenRenderTarget *this)
{
  int v1; // ebx
  __int64 i; // rdi
  __int64 v4; // rcx
  int ExistingDevice; // eax
  int v6; // ebp
  struct CD3DDeviceLevel1 *v7; // rcx
  struct _LUID v9; // [rsp+50h] [rbp+8h] BYREF
  struct CD3DDeviceLevel1 *v10; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 74); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 34) + 8 * i);
    if ( (*(int (__fastcall **)(__int64, struct _LUID *, _QWORD))(*(_QWORD *)v4 + 136LL))(v4, &v9, 0LL) >= 0 )
    {
      ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v9, &v10);
      v6 = ExistingDevice;
      if ( ExistingDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ExistingDevice, 0xFFu);
        if ( v1 >= 0 )
          v1 = v6;
      }
      else
      {
        v7 = v10;
        if ( *((int *)v10 + 222) >= 0 )
          *((_BYTE *)v10 + 1052) = 1;
        CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v7 + 472));
      }
    }
  }
  return (unsigned int)v1;
}
