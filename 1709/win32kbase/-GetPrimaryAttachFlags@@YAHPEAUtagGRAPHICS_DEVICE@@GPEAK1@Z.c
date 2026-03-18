/*
 * XREFs of ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C008AA14
 * Callers:
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C008A7EC (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00F610C (-DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F63C4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00406A0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall GetPrimaryAttachFlags(
        struct tagGRAPHICS_DEVICE *a1,
        unsigned __int16 a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v8; // rax
  int v9; // eax
  unsigned __int16 v10; // bx
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  int v16; // eax
  const WCHAR *v17; // rax
  __int64 v18; // rcx
  WCHAR *v19; // r14
  NTSTATUS v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  _DWORD v23[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h]
  int v26; // [rsp+90h] [rbp-70h]
  const wchar_t *v27; // [rsp+98h] [rbp-68h]
  unsigned int *v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h]
  _DWORD *v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B8h] [rbp-48h]
  __int64 v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  _BYTE v34[40]; // [rsp+D0h] [rbp-30h] BYREF

  v23[0] = 0;
  v8 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v8 + 24) = a1;
  WdLogEvent5_WdTrace(v8);
  QueryTable.Name = L"Attach.PrimaryDevice";
  QueryTable.Flags = 288;
  QueryTable.DefaultType = 67108868;
  QueryTable.DefaultData = v23;
  v27 = L"Attach.ToDesktop";
  QueryTable.DefaultLength = 4;
  v26 = 288;
  v29 = 67108868;
  v31 = 4;
  *a4 = 0;
  v30 = v23;
  *a3 = 0;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = a3;
  v25 = 0LL;
  v28 = a4;
  v32 = 0LL;
  v33 = 0;
  memset(v34, 0, sizeof(v34));
  v9 = *((_DWORD *)a1 + 40);
  if ( (v9 & 0x2000000) != 0 )
  {
    v10 = -1;
  }
  else if ( (v9 & 0x4000000) != 0 )
  {
    v10 = a2;
  }
  else
  {
    v10 = 0;
  }
  RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                 (unsigned __int16 *)a1,
                                                 1,
                                                 0LL,
                                                 0LL,
                                                 0,
                                                 0LL,
                                                 v10);
  v12 = (WCHAR *)RegistryHandleFromDeviceMap;
  if ( RegistryHandleFromDeviceMap )
  {
    RtlQueryRegistryValues(0x40000000u, RegistryHandleFromDeviceMap, &QueryTable, 0LL, 0LL);
    ZwClose(v12);
  }
  else
  {
    v17 = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)a1, 0, 0LL, 0LL, 0, 0LL, v10);
    v19 = (WCHAR *)v17;
    if ( v17 )
    {
      v20 = RtlQueryRegistryValues(0x40000000u, v17, &QueryTable, 0LL, 0LL);
      ZwClose(v19);
      if ( v20 < 0 )
      {
        v21 = WdLogNewEntry5_WdTrace(v13);
        WdLogEvent5_WdTrace(v21);
        *a4 = 0;
        *a3 = 0;
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdTrace(v18);
      WdLogEvent5_WdTrace(v22);
    }
  }
  if ( a2 )
  {
    if ( a2 == 0xFFFF )
    {
      v16 = (*((_DWORD *)a1 + 40) >> 25) & 1;
    }
    else
    {
      if ( (*((_DWORD *)a1 + 40) & 0x2000000) != 0 )
        goto LABEL_8;
      v16 = *((_DWORD *)a1 + 69);
    }
    *a4 = v16;
    goto LABEL_9;
  }
  if ( (*((_DWORD *)a1 + 40) & 0x6000000) != 0 )
LABEL_8:
    *a4 = 0;
LABEL_9:
  v14 = WdLogNewEntry5_WdTrace(v13);
  *(_QWORD *)(v14 + 24) = *a3;
  *(_QWORD *)(v14 + 32) = *a4;
  WdLogEvent5_WdTrace(v14);
  return 1LL;
}
