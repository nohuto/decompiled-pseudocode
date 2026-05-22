/*
 * XREFs of ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KI_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@PEAUInputInfo@@@Z @ 0x180067B88
 * Callers:
 *     ?PrepareAndSendInputInfo@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@PEADKK_JPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@@Z @ 0x180091680 (-PrepareAndSendInputInfo@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController.c)
 *     ?DoDeviceRemoval@SpatialInputControllerCollection@@IEAAJK@Z @ 0x1800936F8 (-DoDeviceRemoval@SpatialInputControllerCollection@@IEAAJK@Z.c)
 * Callees:
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180067D8C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?QuaternionToEulerAngles@SpatialInteractionDevices@@YAJAEBUXMFLOAT4@DirectX@@PEAM11@Z @ 0x180075454 (-QuaternionToEulerAngles@SpatialInteractionDevices@@YAJAEBUXMFLOAT4@DirectX@@PEAM11@Z.c)
 *     _Init_thread_footer @ 0x1800CBE48 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800CBEA8 (_Init_thread_header.c)
 */

__int64 __fastcall MPCInputInfoHelper::PopulateAugmentedInput(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  LONGLONG v9; // rbx
  int v10; // esi
  float v11; // xmm0_4
  float *v13; // [rsp+20h] [rbp-28h]
  float v14; // [rsp+30h] [rbp-18h] BYREF
  float v15; // [rsp+34h] [rbp-14h] BYREF
  LARGE_INTEGER Frequency; // [rsp+38h] [rbp-10h] BYREF

  v9 = 0LL;
  v10 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(a1, 0LL, a2, a7, 0);
  if ( v10 >= 0 )
  {
    *(_DWORD *)a7 = 0x2000;
    *(_DWORD *)(a7 + 1332) = a3;
    *(_BYTE *)(a7 + 1392) = 1;
    *(_OWORD *)(a7 + 1396) = *(_OWORD *)a5;
    *(_OWORD *)(a7 + 1412) = *(_OWORD *)(a5 + 16);
    *(_OWORD *)(a7 + 1428) = *(_OWORD *)(a5 + 32);
    *(_OWORD *)(a7 + 1444) = *(_OWORD *)(a5 + 48);
    *(_OWORD *)(a7 + 1460) = *(_OWORD *)(a5 + 64);
    *(_OWORD *)(a7 + 1476) = *(_OWORD *)(a5 + 80);
    *(_OWORD *)(a7 + 1492) = *(_OWORD *)(a5 + 96);
    *(_OWORD *)(a7 + 1508) = *(_OWORD *)(a5 + 112);
    *(_OWORD *)(a7 + 1524) = *(_OWORD *)(a5 + 128);
    *(_OWORD *)(a7 + 1540) = *(_OWORD *)(a5 + 144);
    *(_OWORD *)(a7 + 1336) = *(_OWORD *)a6;
    *(_OWORD *)(a7 + 1352) = *(_OWORD *)(a6 + 16);
    *(_OWORD *)(a7 + 1368) = *(_OWORD *)(a6 + 32);
    *(_QWORD *)(a7 + 1384) = *(_QWORD *)(a6 + 48);
    *(_BYTE *)(a7 + 1320) = a4;
    if ( *(_BYTE *)(a5 + 120)
      && (int)SpatialInteractionDevices::QuaternionToEulerAngles(
                (SpatialInteractionDevices *)(a5 + 104),
                (const struct DirectX::XMFLOAT4 *)&v14,
                &v15,
                (float *)&Frequency,
                v13) >= 0 )
    {
      v11 = 180.0 - (float)(v14 * 57.295776);
      *(float *)(a7 + 1324) = v15 * 57.295776;
      *(float *)(a7 + 1328) = v11;
    }
    if ( dword_18010F568 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 4LL) )
    {
      Init_thread_header(&dword_18010F568);
      if ( dword_18010F568 == -1 )
      {
        if ( QueryPerformanceFrequency(&Frequency) )
          v9 = -13 * Frequency.QuadPart / 1000;
        qword_18010F570 = v9;
        Init_thread_footer(&dword_18010F568);
      }
    }
    *(_QWORD *)(a7 + 16) += qword_18010F570;
  }
  return (unsigned int)v10;
}
