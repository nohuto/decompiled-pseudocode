/*
 * XREFs of DrvCreatePhysicalMonitorObjects @ 0x1C00F9150
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00EE070 (NtGdiCreateOPMProtectedOutputs.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     UpdateMonitorDevices @ 0x1C0061520 (UpdateMonitorDevices.c)
 *     ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00EDC7C (-OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z.c)
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C00EDCB0 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00F6ED4 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     ?DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z @ 0x1C00F6F20 (-DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z.c)
 */

__int64 __fastcall DrvCreatePhysicalMonitorObjects(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        int a3,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a4,
        unsigned int a5,
        unsigned int *a6,
        _QWORD *Address)
{
  __int64 v7; // r14
  __int64 v8; // rsi
  int v9; // ebx
  _QWORD *v11; // rax
  unsigned int v12; // r14d
  struct tagGRAPHICS_DEVICE *v13; // rsi
  __int64 v14; // rcx
  int DeviceFromNameAndValidateDevice; // ebx
  struct tagGRAPHICS_DEVICE *v16; // r13
  unsigned int v17; // r15d
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rdi
  __int64 v21; // r13
  unsigned __int64 v22; // rax
  _QWORD *v23; // r15
  unsigned int *v24; // rdi
  __int64 i; // rdx
  __int64 v26; // rdi
  int v27; // r12d
  __int64 v28; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v33; // [rsp+34h] [rbp-54h]
  int v34; // [rsp+38h] [rbp-50h]
  int v35; // [rsp+3Ch] [rbp-4Ch]
  struct tagGRAPHICS_DEVICE *v36[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+90h] [rbp+8h] BYREF
  int v38; // [rsp+A0h] [rbp+18h]
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v39; // [rsp+A8h] [rbp+20h]

  v39 = a4;
  v38 = a3;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v11[3] = a1;
  v11[4] = v8;
  v11[5] = v7;
  v11[6] = a5;
  WdLogEvent5_WdEvent(v11);
  v12 = 0;
  v33 = 0;
  v13 = 0LL;
  UpdateMonitorDevices();
  DeviceFromNameAndValidateDevice = DrvGetDeviceFromNameAndValidateDevice(a1, v9, v36);
  if ( DeviceFromNameAndValidateDevice < 0
    || (v16 = v36[0],
        DeviceFromNameAndValidateDevice = DrvGetNumberOfPhysicalMonitors(v36[0], &v37),
        DeviceFromNameAndValidateDevice < 0) )
  {
LABEL_37:
    if ( DeviceFromNameAndValidateDevice < 0 )
      goto LABEL_38;
    Win32FreePool((__int64)v13);
    v31 = WdLogNewEntry5_WdTrace(v30);
    WdLogEvent5_WdTrace(v31);
    return 0LL;
  }
  else
  {
    v17 = v37;
    if ( a5 < v37 )
    {
      DeviceFromNameAndValidateDevice = -1071774234;
      goto LABEL_38;
    }
    v18 = 8 * v37;
    if ( 8 * (unsigned __int64)v37 > 0xFFFFFFFF )
    {
      v18 = -1;
      DeviceFromNameAndValidateDevice = -1073741675;
    }
    else
    {
      DeviceFromNameAndValidateDevice = 0;
    }
    if ( DeviceFromNameAndValidateDevice >= 0 )
    {
      v13 = (struct tagGRAPHICS_DEVICE *)PALLOCMEM2(v18, 1986291527LL, 1);
      v36[1] = v13;
      if ( !v13 )
      {
        DeviceFromNameAndValidateDevice = -1073741801;
        goto LABEL_38;
      }
      v19 = 0;
      v37 = 0;
      v20 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v20 >= *((_DWORD *)v16 + 56) )
        {
          v22 = 8LL * a5;
          if ( v22 > 0xFFFFFFFF )
          {
            LODWORD(v22) = -1;
            DeviceFromNameAndValidateDevice = -1073741675;
          }
          else
          {
            DeviceFromNameAndValidateDevice = 0;
          }
          if ( DeviceFromNameAndValidateDevice >= 0 )
          {
            v23 = Address;
            ProbeForWrite(Address, (unsigned int)v22, 8u);
            v24 = a6;
            ProbeForWrite(a6, 4uLL, 4u);
            if ( v12 > a5 )
            {
              DeviceFromNameAndValidateDevice = -1071774234;
              v35 = -1071774234;
            }
            else
            {
              for ( i = 0LL; ; i = (unsigned int)(i + 1) )
              {
                v34 = i;
                if ( (unsigned int)i >= v12 )
                  break;
                v23[i] = *((_QWORD *)v13 + i);
              }
              *v24 = v12;
            }
            goto LABEL_37;
          }
          break;
        }
        v21 = *((_QWORD *)v16 + 29);
        if ( (*(_DWORD *)(v21 + 20 * v20) & 1) != 0 )
        {
          if ( v12 == v17 )
            goto LABEL_26;
          if ( v38 )
          {
            if ( v38 != 1 )
            {
LABEL_26:
              DeviceFromNameAndValidateDevice = -1071774233;
              break;
            }
            DeviceFromNameAndValidateDevice = IsCreatePhysicalMonitorSupported();
            if ( DeviceFromNameAndValidateDevice >= 0 )
              DeviceFromNameAndValidateDevice = CreatePhysicalMonitorWrap(
                                                  v21 + 20 * v20 + 8,
                                                  *(unsigned int *)(v21 + 20 * v20 + 4),
                                                  (char *)v13 + 8 * v37);
            if ( DeviceFromNameAndValidateDevice < 0 )
              break;
LABEL_23:
            v19 = ++v37;
            v33 = ++v12;
            goto LABEL_25;
          }
          v32 = 0;
          DeviceFromNameAndValidateDevice = OPMCreateProtectedOutput(
                                              (COPM *)(unsigned int)v39,
                                              (struct _LUID *)(v21 + 20 * v20 + 8),
                                              *(_DWORD *)(v21 + 20 * v20 + 4),
                                              (void **)v13 + v19,
                                              &v32);
          if ( DeviceFromNameAndValidateDevice < 0 )
            goto LABEL_37;
          if ( !v32 )
            goto LABEL_23;
          v19 = v37;
        }
LABEL_25:
        v20 = (unsigned int)(v20 + 1);
        v16 = v36[0];
      }
    }
LABEL_38:
    if ( v13 )
    {
      if ( v12 )
      {
        v26 = 0LL;
        v27 = v38;
        while ( (unsigned int)v26 < v12 )
        {
          OPMDestroyProtectedOutput(*((COPM **)v13 + v26));
          if ( v27 )
          {
            if ( v27 == 1 && (int)IsDestroyPhysicalMonitorSupported() >= 0 )
              DestroyPhysicalMonitor(*((_QWORD *)v13 + v26));
          }
          else
          {
            OPMDestroyProtectedOutput(*((COPM **)v13 + v26));
          }
          v26 = (unsigned int)(v26 + 1);
        }
      }
      Win32FreePool((__int64)v13);
    }
    v28 = WdLogNewEntry5_WdTrace(v14);
    *(_QWORD *)(v28 + 24) = DeviceFromNameAndValidateDevice;
    WdLogEvent5_WdTrace(v28);
    return (unsigned int)DeviceFromNameAndValidateDevice;
  }
}
