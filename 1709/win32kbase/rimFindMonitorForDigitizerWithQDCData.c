/*
 * XREFs of rimFindMonitorForDigitizerWithQDCData @ 0x1C000CCBC
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C000C8F8 (RIMOnDisplayStateChange.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C01015C0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0105F10 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0108964 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     UserLogError @ 0x1C000A680 (UserLogError.c)
 *     DrvDxgkGetMonitorDeviceObject @ 0x1C000CCA0 (DrvDxgkGetMonitorDeviceObject.c)
 *     RIMGetDisplayMonitor @ 0x1C000D010 (RIMGetDisplayMonitor.c)
 *     RIMGetContainerId @ 0x1C000EB54 (RIMGetContainerId.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C0026310 (DrvDisplayConfigGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall rimFindMonitorForDigitizerWithQDCData(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r15
  __int64 v4; // rsi
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r8
  int v13; // r11d
  int v14; // r13d
  unsigned int v15; // r15d
  __int64 v16; // r14
  __int64 v17; // rcx
  unsigned __int16 *v18; // rax
  int v19; // ecx
  int v20; // edx
  unsigned __int16 *v21; // rax
  int v22; // ecx
  int v23; // edx
  __int64 v24; // rax
  _DWORD *v25; // rcx
  int v26; // eax
  int v27; // eax
  __int64 result; // rax
  __int64 v29; // rcx
  int v30; // [rsp+30h] [rbp-D0h]
  int v31; // [rsp+34h] [rbp-CCh]
  __int64 v32; // [rsp+38h] [rbp-C8h]
  __int64 v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  _QWORD v37[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h]
  _DWORD *v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h]
  _DWORD v42[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-58h]
  int v44; // [rsp+B0h] [rbp-50h]
  _WORD v45[134]; // [rsp+144h] [rbp+44h] BYREF

  v39 = a3;
  v37[0] = 0LL;
  v3 = a3;
  v4 = a2;
  if ( !a2 )
    goto LABEL_44;
  v35 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v32 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v36 = 0LL;
  v12 = 0LL;
  v34 = 0LL;
  v13 = 0;
  v30 = 0;
  v14 = 0;
  v31 = 0;
  v38 = 0LL;
  if ( *(_DWORD *)v4 )
  {
    v15 = 0;
    do
    {
      v40 = 0LL;
      v41 = 0LL;
      v16 = 192LL * v15;
      if ( (int)DrvDxgkGetMonitorDeviceObject() >= 0 )
      {
        RIMGetContainerId(v33, &v40, 0LL);
        ObfDereferenceObject((PVOID)v37[1]);
      }
      v17 = *(_QWORD *)(v4 + 8);
      v43 = *(_QWORD *)(v17 + v16 + 16);
      v44 = *(_DWORD *)(v17 + v16 + 28);
      v42[1] = 420;
      v42[0] = 2;
      if ( (int)DrvDisplayConfigGetDeviceInfo(v42) < 0 || !v45[0] )
        goto LABEL_17;
      v18 = v45;
      do
      {
        v19 = *(unsigned __int16 *)((char *)v18 + a1 + 1052 - (_QWORD)v45);
        v20 = *v18 - v19;
        if ( v20 )
          break;
        ++v18;
      }
      while ( v19 );
      if ( !v20 )
        v8 = v16 + *(_QWORD *)(v4 + 8);
      v21 = v45;
      do
      {
        v22 = *(unsigned __int16 *)((char *)v21 + a1 + 796 - (_QWORD)v45);
        v23 = *v21 - v22;
        if ( v23 )
          break;
        ++v21;
      }
      while ( v22 );
      if ( !v23 )
      {
        v6 = v16 + *(_QWORD *)(v4 + 8);
        v32 = v6;
      }
      else
      {
LABEL_17:
        v6 = v32;
      }
      v24 = *(_QWORD *)(a1 + 1528) - v40;
      if ( !v24 )
        v24 = *(_QWORD *)(a1 + 1536) - v41;
      if ( v24 )
        goto LABEL_21;
      v29 = v38 - *(_QWORD *)(a1 + 1528);
      if ( v38 == *(_QWORD *)(a1 + 1528) )
        v29 = v38 - *(_QWORD *)(a1 + 1536);
      if ( !v29 )
      {
LABEL_21:
        v12 = v34;
      }
      else
      {
        v12 = v16 + *(_QWORD *)(v4 + 8);
        ++v31;
        v34 = v12;
      }
      v25 = (_DWORD *)(v16 + *(_QWORD *)(v4 + 8));
      v26 = v25[20];
      if ( v26 == 0x80000000 || v26 == 11 || v26 == 13 )
      {
        v11 = v36;
        v13 = ++v30;
        v10 = v16 + *(_QWORD *)(v4 + 8);
        v35 = v10;
      }
      else
      {
        v10 = v35;
        v13 = v30;
        ++v14;
        v11 = v16 + *(_QWORD *)(v4 + 8);
        v36 = v11;
      }
      if ( !v9 && !v25[29] && !v25[30] )
        v9 = v16 + *(_QWORD *)(v4 + 8);
      ++v15;
    }
    while ( v15 < *(_DWORD *)v4 );
    v3 = v39;
    v7 = v31;
  }
  if ( v3 )
    *v3 = v14 != 0;
  if ( v8 )
  {
    *(_DWORD *)(a1 + 792) = 5;
    goto LABEL_42;
  }
  if ( v6 )
  {
    v8 = v6;
    *(_DWORD *)(a1 + 792) = 1;
    goto LABEL_42;
  }
  LODWORD(a2) = 1;
  if ( !v12 || v7 != 1 )
  {
    v27 = *(_DWORD *)(a1 + 768);
    if ( v27 )
    {
      if ( v27 == 1 && v11 && v14 == 1 )
      {
        v8 = v11;
        goto LABEL_63;
      }
    }
    else if ( v10 && v13 == 1 )
    {
      v8 = v10;
      goto LABEL_63;
    }
    if ( !v9 )
      goto LABEL_44;
    *(_DWORD *)(a1 + 792) = 3;
    v8 = v9;
    if ( v3 )
      UserLogError(-2147483385);
    goto LABEL_42;
  }
  v8 = v12;
LABEL_63:
  *(_DWORD *)(a1 + 792) = 2;
LABEL_42:
  if ( (unsigned int)RIMGetDisplayMonitor(v8, v4, v37) )
  {
    *(_QWORD *)(a1 + 784) = v37[0];
    *(_QWORD *)(a1 + 1308) = *(_QWORD *)(v8 + 16);
    result = *(unsigned int *)(v8 + 28);
    *(_DWORD *)(a1 + 1316) = result;
    return result;
  }
LABEL_44:
  if ( v3 )
    UserLogError(-2147483385);
  *(_QWORD *)(a1 + 784) = *(_QWORD *)(gpDispInfo + 88);
  *(_DWORD *)(a1 + 792) = 4;
  LOBYTE(a2) = 3;
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           a2,
           18,
           11,
           (__int64)&WPP_fde1f29744cf32a1006834eb8d6e2bcd_Traceguids);
}
