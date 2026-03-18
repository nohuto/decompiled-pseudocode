/*
 * XREFs of RIMGetQDCActivePathsData @ 0x1C006436C
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C000C8F8 (RIMOnDisplayStateChange.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     ?_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ @ 0x1C0061350 (-_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C01015C0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x1C0105F10 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0108964 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMFreeQDCActivePathsData @ 0x1C000EDD0 (RIMFreeQDCActivePathsData.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0064710 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C0064A40 (DrvQueryDisplayConfig.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

_QWORD *__fastcall RIMGetQDCActivePathsData(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  int DisplayConfigBufferSizes; // edi
  __int64 v4; // r8
  __int64 v5; // rax
  void *v6; // rax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+88h] [rbp-78h]
  int v16; // [rsp+90h] [rbp-70h]
  const wchar_t *v17; // [rsp+98h] [rbp-68h]
  char *v18; // [rsp+A0h] [rbp-60h]
  int v19; // [rsp+A8h] [rbp-58h]
  int *v20; // [rsp+B0h] [rbp-50h]
  int v21; // [rsp+B8h] [rbp-48h]
  __int64 v22; // [rsp+C0h] [rbp-40h]
  int v23; // [rsp+C8h] [rbp-38h]
  const wchar_t *v24; // [rsp+D0h] [rbp-30h]
  int *v25; // [rsp+D8h] [rbp-28h]
  int v26; // [rsp+E0h] [rbp-20h]
  int *v27; // [rsp+E8h] [rbp-18h]
  int v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  int v30; // [rsp+100h] [rbp+0h]
  const wchar_t *v31; // [rsp+108h] [rbp+8h]
  char *v32; // [rsp+110h] [rbp+10h]
  int v33; // [rsp+118h] [rbp+18h]
  int *v34; // [rsp+120h] [rbp+20h]
  int v35; // [rsp+128h] [rbp+28h]
  __int64 v36; // [rsp+130h] [rbp+30h]
  int v37; // [rsp+138h] [rbp+38h]
  _BYTE v38[40]; // [rsp+140h] [rbp+40h] BYREF

  v1 = a1;
  *a1 = 0LL;
  a1[1] = 0LL;
  DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(18LL, a1);
  if ( DisplayConfigBufferSizes < 0 )
    goto LABEL_9;
  v5 = *(unsigned int *)v1;
  if ( (_DWORD)v5 )
  {
    v6 = Win32AllocPoolZInit(192 * v5, 1836086098LL);
    v1[1] = v6;
    if ( v6 )
    {
      DisplayConfigBufferSizes = DrvQueryDisplayConfig(2147483666LL, v1, v6, 0LL);
      if ( DisplayConfigBufferSizes < 0 )
      {
LABEL_9:
        RIMFreeQDCActivePathsData(v1, v2, v4);
        return 0LL;
      }
      if ( *(_DWORD *)v1 )
      {
        v11 = 0;
        v12 = 0LL;
        *(_QWORD *)v13 = 0LL;
        QueryTable.Flags = 288;
        QueryTable.DefaultType = 67108868;
        QueryTable.Name = L"ScreenPosition.Left";
        QueryTable.EntryContext = &v12;
        QueryTable.DefaultData = &v11;
        v17 = L"ScreenPosition.Top";
        v18 = (char *)&v12 + 4;
        v20 = &v11;
        v24 = L"ScreenPosition.Right";
        v25 = v13;
        v27 = &v11;
        v31 = L"ScreenPosition.Bottom";
        v32 = (char *)&v13[1];
        QueryTable.DefaultLength = 4;
        v16 = 288;
        v19 = 67108868;
        v21 = 4;
        v23 = 288;
        v26 = 67108868;
        v28 = 4;
        v30 = 288;
        v33 = 67108868;
        v35 = 4;
        v34 = &v11;
        QueryTable.QueryRoutine = 0LL;
        v15 = 0LL;
        v22 = 0LL;
        v29 = 0LL;
        v36 = 0LL;
        v37 = 0;
        memset(v38, 0, sizeof(v38));
        if ( RtlQueryRegistryValues(3u, L"GRE_Initialize\\OverrideScreenLayout", &QueryTable, 0LL, 0LL) >= 0
          && (int)v12 < v13[0]
          && SHIDWORD(v12) < v13[1] )
        {
          v2 = 0LL;
          if ( *(_DWORD *)v1 )
          {
            v8 = v1[1] + 140LL;
            do
            {
              if ( *(_DWORD *)(v8 - 60) == 0x80000000 && *(_DWORD *)(v8 - 84) && *(_DWORD *)(v8 - 80) )
              {
                *(_QWORD *)v8 = 0LL;
                v9 = v13[0] - v12;
                *(_DWORD *)(v8 - 52) = v13[0] - v12;
                *(_DWORD *)(v8 - 84) = v9;
                *(_DWORD *)(v8 + 8) = v9;
                v10 = v13[1] - HIDWORD(v12);
                *(_DWORD *)(v8 - 48) = v13[1] - HIDWORD(v12);
                *(_DWORD *)(v8 - 80) = v10;
                *(_DWORD *)(v8 + 12) = v10;
              }
              v2 = (unsigned int)(v2 + 1);
              v8 += 192LL;
            }
            while ( (unsigned int)v2 < *(_DWORD *)v1 );
          }
        }
      }
    }
    else
    {
      DisplayConfigBufferSizes = -1073741801;
    }
  }
  if ( DisplayConfigBufferSizes < 0 )
    goto LABEL_9;
  return v1;
}
