/*
 * XREFs of ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x1801358F4
 * Callers:
 *     ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180042270 (-UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180042C90 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x180135A54 (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x180079550 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1800B63E8 (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800C7D38 (-GetCurrentFrameId@@YA_KXZ.c)
 */

char __fastcall CD3DDeviceManager::DeleteUnusedDevice(CD3DDeviceManager *this, unsigned int a2)
{
  int v2; // r10d
  __int64 *v3; // r11
  char v4; // si
  __int64 v6; // r9
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r10
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  CSurfaceManager *v15; // rcx

  v2 = *((_DWORD *)this + 38);
  v3 = (__int64 *)((char *)this + 128);
  v4 = 0;
  v6 = 5LL * a2;
  v7 = *(_QWORD *)(*((_QWORD *)this + 16) + 40LL * a2);
  if ( !*(_DWORD *)(v7 + 496)
    && (*(int *)(v7 + 872) < 0
     || !*(_DWORD *)(*(_QWORD *)(v7 + 144) + 16LL)
     && !*(_DWORD *)(v7 + 1048)
     && GetCurrentFrameId() >= *(_QWORD *)(v7 + 1112)) )
  {
    v8 = *((_DWORD *)this + 60);
    v9 = (unsigned int)(v2 - 1);
    v4 = 1;
    if ( a2 >= v8 )
    {
      v14 = *v3;
      *(_OWORD *)(v14 + 8 * v6) = *(_OWORD *)(*v3 + 40 * v9);
      *(_OWORD *)(v14 + 8 * v6 + 16) = *(_OWORD *)(v14 + 40 * v9 + 16);
      *(_QWORD *)(v14 + 8 * v6 + 32) = *(_QWORD *)(v14 + 40 * v9 + 32);
    }
    else
    {
      v10 = *v3;
      v11 = v8 - 1;
      *((_DWORD *)this + 60) = v11;
      *(_OWORD *)(v10 + 8 * v6) = *(_OWORD *)(v10 + 40LL * v11);
      *(_OWORD *)(v10 + 8 * v6 + 16) = *(_OWORD *)(v10 + 40LL * v11 + 16);
      *(_QWORD *)(v10 + 8 * v6 + 32) = *(_QWORD *)(v10 + 40LL * v11 + 32);
      v12 = *v3;
      v13 = 5LL * *((unsigned int *)this + 60);
      *(_OWORD *)(v12 + 8 * v13) = *(_OWORD *)(*v3 + 40 * v9);
      *(_OWORD *)(v12 + 8 * v13 + 16) = *(_OWORD *)(v12 + 40 * v9 + 16);
      *(_QWORD *)(v12 + 8 * v13 + 32) = *(_QWORD *)(v12 + 40 * v9 + 32);
    }
    *((_DWORD *)this + 38) = v9;
    if ( !(_DWORD)v9 )
      DynArrayImpl<0>::ShrinkToSize((__int64)v3, 0x28u);
    CD3DDeviceLevel1::`vector deleting destructor'((CD3DDeviceLevel1 *)v7, 1);
    v15 = (CSurfaceManager *)*((_QWORD *)this + 8);
    if ( v15 )
      CSurfaceManager::ResetTokenThread(v15);
  }
  return v4;
}
