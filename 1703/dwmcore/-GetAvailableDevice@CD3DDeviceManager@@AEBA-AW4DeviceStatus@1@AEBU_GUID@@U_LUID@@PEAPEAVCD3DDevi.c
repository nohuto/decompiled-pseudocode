/*
 * XREFs of ?GetAvailableDevice@CD3DDeviceManager@@AEBA?AW4DeviceStatus@1@AEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180042BF8
 * Callers:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180042480 (-GetExistingDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall CD3DDeviceManager::GetAvailableDevice(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // r11d
  unsigned int v6; // edi
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rcx

  v4 = 0;
  *a4 = 0LL;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 240);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 128);
    while ( 1 )
    {
      if ( a3 == *(_QWORD *)(v7 + 40LL * v5 + 8) )
      {
        v8 = *a2 - *(_QWORD *)(v7 + 40LL * v5 + 16);
        if ( *a2 == *(_QWORD *)(v7 + 40LL * v5 + 16) )
          v8 = a2[1] - *(_QWORD *)(v7 + 40LL * v5 + 24);
        if ( !v8 )
          break;
      }
      if ( ++v5 >= v6 )
        return v4;
    }
    v9 = *(_QWORD *)(v7 + 40LL * v5);
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 496));
    if ( *(int *)(v9 + 872) < 0 )
    {
      v4 = 2;
      CMILPoolResource::Release((CMILPoolResource *)(v9 + 488));
    }
    else
    {
      *a4 = v9;
      return 1;
    }
  }
  return v4;
}
