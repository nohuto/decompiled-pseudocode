/*
 * XREFs of UsbhBuildDeviceID @ 0x1C001CFA0
 * Callers:
 *     UsbhCreatePdo @ 0x1C001FDA0 (UsbhCreatePdo.c)
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 *     UsbhUpdateUxdSettings @ 0x1C0022298 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00530C4 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0053184 (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_Sqd @ 0x1C00532D0 (WPP_RECORDER_SF_Sqd.c)
 *     UsbhBuildUxdPnpId @ 0x1C0058090 (UsbhBuildUxdPnpId.c)
 */

__int64 __fastcall UsbhBuildDeviceID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  unsigned __int16 v8; // r10
  unsigned __int16 v9; // r11
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  int v12; // r8d
  int v13; // r9d
  unsigned __int16 v14; // r10
  char v15; // r11
  _QWORD *PoolWithTag; // rbx
  _WORD *v17; // rcx
  int v18; // ebp
  PVOID v19; // rax
  __int64 v20; // rdi
  _WORD *v21; // rcx
  int v22; // r8d
  int v24; // eax
  int v25; // r8d
  __int16 v26; // r9
  int v27; // [rsp+20h] [rbp-48h]

  if ( !a2 )
  {
    v8 = 0;
    v9 = 0;
    goto LABEL_4;
  }
  v7 = PdoExt(a2);
  if ( (v7[353] & 0x10004) != 0x10000 )
  {
LABEL_3:
    v8 = *((_WORD *)v7 + 700);
    v9 = *((_WORD *)v7 + 701);
LABEL_4:
    v10 = v8;
    v11 = v9;
    Log(a1, 4096, 1685473604, v8, v9);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DD(WPP_GLOBAL_Control->DeviceExtension, v14, v12, v13, v27, v14, v15);
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x18uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      v17 = PoolWithTag;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      *(_OWORD *)PoolWithTag = *(_OWORD *)L"USB\\VID_nnnn";
      for ( PoolWithTag[2] = *(_QWORD *)L"nnnn"; *v17 != 110; ++v17 )
        ;
      v18 = 46;
      *v17 = (unsigned __int8)Nibble[v10 >> 12];
      v17[1] = (unsigned __int8)Nibble[(v10 >> 8) & 0xF];
      v17[2] = (unsigned __int8)Nibble[(unsigned __int8)v10 >> 4];
      v17[3] = (unsigned __int8)Nibble[v10 & 0xF];
      v19 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2EuLL, 0x42554855u);
      v20 = (__int64)v19;
      if ( v19 )
      {
        memset(v19, 0, 0x2EuLL);
        v21 = (_WORD *)(v20 + 24);
        *(_OWORD *)v20 = *(_OWORD *)PoolWithTag;
        *(_QWORD *)(v20 + 16) = PoolWithTag[2];
        *(_OWORD *)(v20 + 24) = *(_OWORD *)L"&PID_nnnn";
        for ( *(_WORD *)(v20 + 40) = aPidNnnn[8]; *v21 != 110; ++v21 )
          ;
        *v21 = (unsigned __int8)Nibble[v11 >> 12];
        v21[1] = (unsigned __int8)Nibble[(v11 >> 8) & 0xF];
        v21[2] = (unsigned __int8)Nibble[(unsigned __int8)v11 >> 4];
        v21[3] = (unsigned __int8)Nibble[v11 & 0xF];
      }
      else
      {
        v18 = 0;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v20 )
      {
        *(_QWORD *)(a3 + 8) = v20;
        *(_DWORD *)(a3 + 4) = v18;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_Sd(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            v22,
            13,
            (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids,
            v20,
            v18);
        return 0LL;
      }
      else
      {
        Log(a1, 4096, 1684615474, a2, -1073741670LL);
        return 3221225626LL;
      }
    }
    else
    {
      Log(a1, 4096, 1684615457, a2, -1073741670LL);
      return 3221225626LL;
    }
  }
  v24 = UsbhBuildUxdPnpId(v6, a2, a3);
  if ( v24 < 0 )
  {
    Log(a1, 4096, 1684625477, 0LL, v24);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v26 )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        11,
        (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids);
    goto LABEL_3;
  }
  Log(a1, 4096, 1684624728, *(_QWORD *)(a3 + 8), *(unsigned int *)(a3 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_Sqd(
      WPP_GLOBAL_Control->DeviceExtension,
      *(_QWORD *)(a3 + 8),
      v25,
      10,
      (__int64)&WPP_716811dc45ea3a5f9b6ecc0e5223d871_Traceguids,
      *(_QWORD *)(a3 + 8),
      *(_QWORD *)(a3 + 8),
      *(_DWORD *)(a3 + 4));
  return 0LL;
}
