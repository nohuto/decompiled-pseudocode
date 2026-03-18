/*
 * XREFs of ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x18000CD18
 * Callers:
 *     ?Render@CVisualCapture@@UEAAJPEA_N@Z @ 0x18000CCC0 (-Render@CVisualCapture@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z @ 0x18000D61C (-EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C340 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180089958 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualCapture::EnqueueSetEvent(CVisualCapture *this)
{
  HANDLE EventW; // rax
  int ExistingDevice; // eax
  signed int v4; // ebx
  signed int LastError; // eax
  int v7; // r9d
  unsigned int v8; // [rsp+20h] [rbp-18h]
  struct CD3DDeviceLevel1 *v9; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 55) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v8 = 130;
    if ( v4 >= 0 )
      v4 = -2003304445;
    v7 = v4;
    goto LABEL_15;
  }
  ExistingDevice = (*(__int64 (__fastcall **)(_QWORD, struct _LUID *, _QWORD))(***((_QWORD ***)this + 34) + 136LL))(
                     **((_QWORD **)this + 34),
                     &v10,
                     0LL);
  v4 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    v8 = 132;
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease(&v9);
  ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v10, &v9);
  v4 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    v8 = 134;
    goto LABEL_14;
  }
  ExistingDevice = CD3DDeviceLevel1::EnqueueSetEvent(v9, *((void **)this + 55));
  v4 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    v8 = 138;
LABEL_14:
    v7 = ExistingDevice;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v8);
  }
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease(&v9);
  return (unsigned int)v4;
}
