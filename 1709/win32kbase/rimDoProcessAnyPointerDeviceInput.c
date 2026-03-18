/*
 * XREFs of rimDoProcessAnyPointerDeviceInput @ 0x1C0110618
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C010F8F4 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0008C0C (WPP_RECORDER_SF_dd.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0011110 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104AB4 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMGetPointerInputType @ 0x1C0107340 (RIMGetPointerInputType.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C010D1BC (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C010D6D4 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C010D7C8 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     WPP_RECORDER_SF_i @ 0x1C0110000 (WPP_RECORDER_SF_i.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0110514 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C0110EE4 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C011239C (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C011255C (rimProcessPointerDeviceContact.c)
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C0112A74 (rimUpdatePointerDeviceFrameScanTime.c)
 *     RIMCmGetActiveContactsCountNoButton @ 0x1C0115764 (RIMCmGetActiveContactsCountNoButton.c)
 */

__int64 __fastcall rimDoProcessAnyPointerDeviceInput(__int64 a1, __int64 a2)
{
  int v3; // r13d
  unsigned int v5; // r12d
  __int64 v6; // rax
  int v7; // r13d
  __int64 v8; // r15
  __int64 v9; // r14
  LARGE_INTEGER PerformanceCounter; // rbx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned __int16 v15; // r9
  unsigned __int16 v16; // r13
  int v17; // eax
  LARGE_INTEGER v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  int v22; // [rsp+20h] [rbp-49h]
  __int64 v23; // [rsp+28h] [rbp-41h]
  int v24; // [rsp+50h] [rbp-19h] BYREF
  int v25; // [rsp+54h] [rbp-15h] BYREF
  int v26; // [rsp+58h] [rbp-11h] BYREF
  int v27; // [rsp+5Ch] [rbp-Dh] BYREF
  int v28; // [rsp+60h] [rbp-9h] BYREF
  __int64 v29; // [rsp+68h] [rbp-1h]
  __int64 v30; // [rsp+70h] [rbp+7h]
  unsigned __int16 v31; // [rsp+D0h] [rbp+67h] BYREF
  int v32; // [rsp+D8h] [rbp+6Fh]
  unsigned int v33; // [rsp+E0h] [rbp+77h] BYREF
  int v34; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = *(_DWORD *)(a2 + 184);
  v5 = *(_DWORD *)(a2 + 264);
  v29 = *(_QWORD *)(a2 + 472);
  v6 = *(_QWORD *)(a2 + 456);
  v7 = -__CFSHR__(v3, 13);
  v8 = *(_QWORD *)(v6 + 24);
  v9 = *(unsigned __int16 *)(v6 + 44);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0xEu,
    (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v11 = RIMGetPointerInputType(v29) - 2;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 )
    {
      v13 = 12;
      goto LABEL_7;
    }
    if ( v12 == 1 )
    {
      v13 = 2;
      goto LABEL_7;
    }
  }
  v13 = 10;
LABEL_7:
  CInputGlobals::UpdateInputGlobals(
    (__int64)gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    v13,
    0,
    0,
    v7 != 0 ? 10 : 2);
  v14 = v5 / (unsigned int)v9;
  if ( v5 % (unsigned int)v9 )
  {
    if ( v5 > (unsigned int)v9 )
    {
      LODWORD(v23) = v5;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0xFu,
        (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
        v23,
        v9);
      goto LABEL_39;
    }
    v14 = 1;
  }
  if ( v14 )
  {
    v30 = v14;
    do
    {
      if ( (int)rimExtractFrameInfoAndAbandonIncompleteFrame(
                  a1,
                  a2,
                  v8,
                  v9,
                  (__int64)&v25,
                  (__int64)&v33,
                  (__int64)&v24,
                  (__int64)&v34,
                  (__int64)&v27,
                  (__int64)&v31) >= 0 )
      {
        if ( !v24 )
          goto LABEL_25;
        rimUpdatePointerDeviceFrameScanTime(a1, a2, v8, (unsigned int)v9);
        if ( v25 )
        {
          if ( (unsigned int)RIMStartPointerDeviceFrame(a1, a2, PerformanceCounter.QuadPart) )
          {
            if ( *(_DWORD *)(v29 + 24) == 7 )
              rimProcessPointerDeviceButtonContact(a1, a2, v8, v9, 0);
LABEL_25:
            RIMStoreRawDataInPointerDeviceFrame(a1, a2, v8, (unsigned int)v9, &v26);
            v32 = 0;
            if ( v33 )
            {
              v16 = v31;
              while ( 1 )
              {
                rimProcessPointerDeviceContact(a1, a2, v8, v9, v16, v26, (__int64)&v28);
                if ( v27 )
                {
                  if ( v28 )
                    break;
                }
                if ( (*(_DWORD *)(v29 + 276) & 8) != 0 )
                {
                  v16 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 672) + 24LL) + 8LL * v16 + 4);
                  v31 = v16;
                }
                if ( ++v32 >= v33 )
                  goto LABEL_32;
              }
              v17 = 1;
              v34 = 1;
            }
            else
            {
LABEL_32:
              v17 = v34;
            }
            if ( v17 )
            {
              RIMAbArbitratePointerDeviceFrame(a1, a2);
              RIMCompletePointerDeviceFrame(a1, a2);
            }
            goto LABEL_35;
          }
          v15 = 18;
        }
        else
        {
          if ( *(_DWORD *)(v29 + 24) == 7 && !(unsigned int)RIMCmGetActiveContactsCountNoButton(v29) )
          {
            rimCreateAndProcessPointerDeviceButtonOnlyFrame(a1, a2, v8, v9, PerformanceCounter.QuadPart);
            goto LABEL_35;
          }
          v15 = 17;
        }
      }
      else
      {
        v15 = 16;
      }
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        v15,
        (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
LABEL_35:
      v8 += v9;
      --v30;
    }
    while ( v30 );
  }
LABEL_39:
  v18 = KeQueryPerformanceCounter(0LL);
  return WPP_RECORDER_SF_i(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           (unsigned __int64)(1000000 * (v18.QuadPart - PerformanceCounter.QuadPart)) % *(_QWORD *)(a1 + 648),
           v19,
           v20,
           v22);
}
