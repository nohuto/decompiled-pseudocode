/*
 * XREFs of ?AdvanceFrame@COffScreenRenderTarget@@UEAAX_K_N@Z @ 0x180027400
 * Callers:
 *     <none>
 * Callees:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180042480 (-GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COffScreenRenderTarget::AdvanceFrame(COffScreenRenderTarget *this)
{
  int CurrentDisplaySet; // eax
  __int64 i; // rbx
  __int64 v4; // rcx
  int v5; // eax
  int ExistingDevice; // eax
  struct CD3DDeviceLevel1 *v7; // rcx
  struct _LUID v8; // [rsp+30h] [rbp-18h] BYREF
  struct CD3DDeviceLevel1 *v9; // [rsp+38h] [rbp-10h] BYREF
  CDisplaySet *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v10);
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0xF0u);
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 42); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * i);
      v5 = (*(__int64 (__fastcall **)(__int64, struct _LUID *, _QWORD, _QWORD))(*(_QWORD *)v4 + 104LL))(
             v4,
             &v8,
             0LL,
             0LL);
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xF7u);
      }
      else
      {
        ExistingDevice = CD3DDeviceManager::GetExistingDevice(
                           (CD3DDeviceManager *)&g_D3DDeviceManager,
                           (const struct _GUID *)(*((_QWORD *)this - 6) + 324LL),
                           v8,
                           &v9);
        if ( ExistingDevice < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, ExistingDevice, 0xFFu);
        }
        else
        {
          v7 = v9;
          if ( *((int *)v9 + 218) >= 0 )
            *((_BYTE *)v9 + 1125) = 1;
          CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v7 + 488));
        }
      }
    }
  }
  if ( v10 )
    CDisplaySet::Release(v10);
}
