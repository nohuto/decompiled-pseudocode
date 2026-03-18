/*
 * XREFs of ?SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PEAUtagQDC_DATA@@@Z @ 0x1C01A5A18
 * Callers:
 *     FindMonitorForDigitizerWithQDCData @ 0x1C01A6BD0 (FindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     ?NotifyPointerDeviceChangeClients@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UDISPLAYCONFIG_PATH_TARGET_INFO@@UDISPLAYCONFIG_SOURCE_MODE@@H@Z @ 0x1C01A52D0 (-NotifyPointerDeviceChangeClients@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UDISPLAYCONFIG_PATH_TARGET.c)
 *     ?UpdatePointerDeviceOrientation@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@W4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C01A6670 (-UpdatePointerDeviceOrientation@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@W4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     UpdatePointerDeviceScalingInfo @ 0x1C01A7810 (UpdatePointerDeviceScalingInfo.c)
 */

void __fastcall SetPointerDeviceDisplayConfig(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        int a2,
        struct tagDISPLAY_PATH_INFO *a3,
        struct tagQDC_DATA *a4)
{
  struct tagDISPLAY_PATH_INFO *v4; // rdi
  _DWORD *v6; // rsi
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  BOOL v10; // r9d
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r9
  __int128 v19; // [rsp+50h] [rbp-58h] BYREF
  int v20; // [rsp+60h] [rbp-48h]
  _OWORD v21[3]; // [rsp+70h] [rbp-38h] BYREF

  v4 = a3;
  if ( a2 )
  {
    v6 = (_DWORD *)((char *)a1 + 720);
    if ( RtlCompareMemory((char *)a1 + 720, (const void *)(*(_QWORD *)a3 + 20LL), 0x30uLL) != 48
      || (v7 = (_DWORD *)*((_QWORD *)v4 + 1), *((_DWORD *)a1 + 192) != v7[4])
      || *((_DWORD *)a1 + 193) != v7[5]
      || *((_DWORD *)a1 + 195) != v7[7]
      || *((_DWORD *)a1 + 196) != v7[8]
      || (v8 = *((_QWORD *)v4 + 3),
          a3 = (struct tagDISPLAY_PATH_INFO *)*((unsigned int *)a1 + 207),
          ((_DWORD)a3 != 0) != (v8 != 0))
      || (_DWORD)a3 && v8 && RtlCompareMemory((char *)a1 + 788, (const void *)(v8 + 16), 0x28uLL) != 40 )
    {
      v9 = *(_QWORD *)v4;
      v10 = *v6 != *(_DWORD *)(*(_QWORD *)v4 + 20LL)
         || *((_DWORD *)a1 + 181) != *(_DWORD *)(v9 + 24)
         || *((_DWORD *)a1 + 182) != *(_DWORD *)(v9 + 28);
      v11 = *((_QWORD *)v4 + 1);
      *(_OWORD *)((char *)a1 + 124) = *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 36) + 40LL) + 28LL);
      v12 = *(_OWORD *)(v11 + 16);
      v13 = *(_OWORD *)(v9 + 36);
      v20 = *(_DWORD *)(v11 + 32);
      v19 = v12;
      v14 = *(_OWORD *)(v9 + 20);
      v21[1] = v13;
      v21[0] = v14;
      v21[2] = *(_OWORD *)(v9 + 52);
      NotifyPointerDeviceChangeClients(a1, (__int64)v21, &v19, v10);
    }
  }
  v15 = *(_QWORD *)v4;
  *((_OWORD *)a1 + 45) = *(_OWORD *)(*(_QWORD *)v4 + 20LL);
  *((_OWORD *)a1 + 46) = *(_OWORD *)(v15 + 36);
  *((_OWORD *)a1 + 47) = *(_OWORD *)(v15 + 52);
  v16 = *(unsigned int *)(v15 + 40);
  if ( *((_DWORD *)a1 + 175) != (_DWORD)v16 )
    UpdatePointerDeviceOrientation(a1, v16, a3, a4);
  v17 = *((_QWORD *)v4 + 1);
  v18 = *((_QWORD *)v4 + 3);
  *((_OWORD *)a1 + 48) = *(_OWORD *)(v17 + 16);
  *((_DWORD *)a1 + 196) = *(_DWORD *)(v17 + 32);
  *((_DWORD *)a1 + 207) = v18 != 0;
  if ( v18 )
  {
    *(_OWORD *)((char *)a1 + 788) = *(_OWORD *)(v18 + 16);
    *(_OWORD *)((char *)a1 + 804) = *(_OWORD *)(v18 + 32);
    *(_QWORD *)((char *)a1 + 820) = *(_QWORD *)(v18 + 48);
  }
  UpdatePointerDeviceScalingInfo((_DWORD)a1 + 156, (_DWORD)a1 + 768, *((_QWORD *)v4 + 2), v18, (__int64)a1 + 720);
}
