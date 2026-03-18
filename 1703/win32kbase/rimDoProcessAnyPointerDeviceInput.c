/*
 * XREFs of rimDoProcessAnyPointerDeviceInput @ 0x1C0111B38
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0110E4C (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0007B88 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00490F0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104C7C (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMGetPointerInputType @ 0x1C0106658 (RIMGetPointerInputType.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C010E278 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C010E78C (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C010E880 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     WPP_RECORDER_SF_i @ 0x1C011152C (WPP_RECORDER_SF_i.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0111A34 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C01123F8 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C01138B4 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C0113A78 (rimProcessPointerDeviceContact.c)
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C0113FA0 (rimUpdatePointerDeviceFrameScanTime.c)
 *     RIMCmGetActiveContactsCountNoButton @ 0x1C0116BE8 (RIMCmGetActiveContactsCountNoButton.c)
 */

__int64 __fastcall rimDoProcessAnyPointerDeviceInput(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
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
  int v15; // edx
  int v16; // r9d
  unsigned __int16 v17; // r13
  int v18; // eax
  LARGE_INTEGER v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  int v23; // [rsp+20h] [rbp-49h]
  __int64 v24; // [rsp+20h] [rbp-49h]
  __int64 v25; // [rsp+28h] [rbp-41h]
  int v26; // [rsp+50h] [rbp-19h] BYREF
  int v27; // [rsp+54h] [rbp-15h] BYREF
  int v28; // [rsp+58h] [rbp-11h] BYREF
  int v29; // [rsp+5Ch] [rbp-Dh] BYREF
  int v30; // [rsp+60h] [rbp-9h] BYREF
  __int64 v31; // [rsp+68h] [rbp-1h]
  __int64 v32; // [rsp+70h] [rbp+7h]
  unsigned __int16 v33; // [rsp+D0h] [rbp+67h] BYREF
  int v34; // [rsp+D8h] [rbp+6Fh]
  unsigned int v35; // [rsp+E0h] [rbp+77h] BYREF
  int v36; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 184);
  v5 = *(_DWORD *)(a2 + 264);
  v31 = *(_QWORD *)(a2 + 472);
  v6 = *(_QWORD *)(a2 + 456);
  v7 = -__CFSHR__(v3, 13);
  v8 = *(_QWORD *)(v6 + 24);
  v9 = *(unsigned __int16 *)(v6 + 44);
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    13,
    (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v11 = RIMGetPointerInputType(v31) - 2;
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
      LODWORD(v25) = v5;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0xEu,
        (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids,
        v25,
        v9);
      goto LABEL_39;
    }
    v14 = 1;
  }
  if ( v14 )
  {
    v32 = v14;
    do
    {
      if ( (int)rimExtractFrameInfoAndAbandonIncompleteFrame(
                  a1,
                  v2,
                  v8,
                  v9,
                  (__int64)&v27,
                  (__int64)&v35,
                  (__int64)&v26,
                  (__int64)&v36,
                  (__int64)&v29,
                  (__int64)&v33) >= 0 )
      {
        if ( !v26 )
          goto LABEL_25;
        rimUpdatePointerDeviceFrameScanTime(a1, v2, v8, (unsigned int)v9);
        if ( v27 )
        {
          if ( (unsigned int)RIMStartPointerDeviceFrame(a1, v2, PerformanceCounter.QuadPart) )
          {
            if ( *(_DWORD *)(v31 + 24) == 7 )
            {
              LODWORD(v24) = 0;
              rimProcessPointerDeviceButtonContact(a1, v2, v8, v9, v24);
            }
LABEL_25:
            RIMStoreRawDataInPointerDeviceFrame(a1, v2, v8, (unsigned int)v9, &v28);
            v34 = 0;
            if ( v35 )
            {
              v17 = v33;
              while ( 1 )
              {
                rimProcessPointerDeviceContact(a1, v2, v8, v9, v17, v28, (__int64)&v30);
                if ( v29 )
                {
                  if ( v30 )
                    break;
                }
                if ( (*(_DWORD *)(v31 + 260) & 8) != 0 )
                {
                  v17 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 688) + 24LL) + 8LL * v17 + 4);
                  v33 = v17;
                }
                if ( ++v34 >= v35 )
                  goto LABEL_32;
              }
              v18 = 1;
              v36 = 1;
            }
            else
            {
LABEL_32:
              v18 = v36;
            }
            if ( v18 )
            {
              RIMAbArbitratePointerDeviceFrame(a1, v2);
              RIMCompletePointerDeviceFrame(a1, v2);
            }
            goto LABEL_35;
          }
          v16 = 17;
        }
        else
        {
          if ( *(_DWORD *)(v31 + 24) == 7 && !(unsigned int)RIMCmGetActiveContactsCountNoButton(v31) )
          {
            rimCreateAndProcessPointerDeviceButtonOnlyFrame(a1, v2, v8, v9, PerformanceCounter.QuadPart);
            goto LABEL_35;
          }
          v16 = 16;
        }
      }
      else
      {
        v16 = 15;
      }
      LOBYTE(v15) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        20,
        v16,
        (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids);
LABEL_35:
      v8 += v9;
      --v32;
    }
    while ( v32 );
  }
LABEL_39:
  v19 = KeQueryPerformanceCounter(0LL);
  return WPP_RECORDER_SF_i(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           (unsigned __int64)(1000000 * (v19.QuadPart - PerformanceCounter.QuadPart)) % *(_QWORD *)(a1 + 648),
           v20,
           v21,
           v23);
}
