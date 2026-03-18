/*
 * XREFs of ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01351B4
 * Callers:
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C0131A70 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00394DC (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C003A424 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C003A6B4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     UpconvertTime @ 0x1C0068DB0 (UpconvertTime.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C006AAA0 (ResetAccessibilityCountersOnMouseInput.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     EtwTraceMouseInputApc @ 0x1C00AC140 (EtwTraceMouseInputApc.c)
 *     ?HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C01349E8 (-HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C0134A74 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ProcessInput(
        __int64 *a1,
        __int64 a2,
        struct _MOUSE_INPUT_DATA *a3,
        unsigned int a4,
        char a5)
{
  unsigned int v5; // r14d
  __int64 v6; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  const struct _MOUSE_INPUT_DATA *v12; // rbx
  unsigned __int64 v13; // rcx
  const struct tagUIPI_INFO_INT *v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  int v17; // edx
  int v18; // edx
  int v19; // r9d
  USHORT Flags; // ax
  __int64 v21; // rdx
  unsigned int v23; // [rsp+30h] [rbp-A1h]
  char *v24; // [rsp+38h] [rbp-99h]
  __int128 v25; // [rsp+40h] [rbp-91h] BYREF
  __int128 v26; // [rsp+50h] [rbp-81h] BYREF
  __int128 v27; // [rsp+60h] [rbp-71h]
  __int128 v28; // [rsp+70h] [rbp-61h]
  struct tagPOINT v29; // [rsp+80h] [rbp-51h] BYREF
  struct tagPOINT v30; // [rsp+90h] [rbp-41h] BYREF

  v5 = 0;
  v6 = a4;
  v23 = 0;
  EtwTraceMouseInputApc((__int64)a1);
  if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
  {
    WPP_RECORDER_SF_(a1[1], 4u, 0xAu, 0xBu, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
  }
  else if ( !gptiBlockInput )
  {
    if ( (gdwPUDFlags & 0x100) != 0 )
      ResetAccessibilityCountersOnMouseInput();
    if ( (int)IsEditionStopSonarSupported() >= 0 )
      EditionStopSonar();
    if ( *(int *)(a2 + 256) >= 0 )
    {
      v12 = (const struct _MOUSE_INPUT_DATA *)gptCursorAsync;
      if ( a3 )
      {
        v13 = (unsigned __int64)a3 + v6;
        v24 = (char *)a3 + v6;
        do
        {
          v14 = (const struct tagUIPI_INFO_INT *)((unsigned __int64)&a3[1] & -(__int64)((unsigned __int64)&a3[1] < v13));
          if ( (a3->Flags & 4) != 0 )
          {
            v23 = 1;
          }
          else
          {
            if ( a5 )
            {
              v15 = UpconvertTime(a3->ExtraInformation);
              a3->ExtraInformation = 0;
              *(_QWORD *)&v25 = v15;
              v16 = v15 * gliQpcFreq.QuadPart / 0x3E8;
              *(_QWORD *)&v26 = v16;
            }
            else
            {
              *(_QWORD *)&v25 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
              *(LARGE_INTEGER *)&v26 = KeQueryPerformanceCounter(0LL);
            }
            CMouseProcessor::HandleMouseForLegacyTouchpad((CMouseProcessor *)v16, a3, (struct DEVICEINFO *)a2);
            v17 = v14 == 0LL ? 0x100 : 0;
            if ( a5 )
            {
              v18 = v17 | 0x30;
              v19 = v18 | 0x40;
              if ( !*(_DWORD *)(((a2 + 392) & -(__int64)(a5 != 0)) + 8) )
                v19 = v18;
            }
            else
            {
              Flags = a3->Flags;
              v19 = v17 | 0x40;
              if ( (Flags & 1) != 0 )
                a3->Flags = Flags | 2;
            }
            LODWORD(v27) = 2;
            *((_QWORD *)&v27 + 1) = *(_QWORD *)a2;
            *(_QWORD *)&v28 = v25;
            *((_QWORD *)&v28 + 1) = v26;
            v25 = v28;
            v26 = v27;
            CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v30, (__int64)a3, &v25, v19, &v26, 0LL);
            if ( (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(
                                 (__int64)a1,
                                 (const struct CMouseProcessor::MouseInputDataEx *)&v30) == 1 )
            {
              WPP_RECORDER_SF_(a1[1], 4u, 0xAu, 0xDu, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
            }
            else
            {
              if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)&v30, 2048LL)
                && (v30.y & 0x2AA) != 0 )
              {
                PoLatencySensitivityHint(0LL, v21);
              }
              v12 = **(const struct _MOUSE_INPUT_DATA ***)&CMouseProcessor::ProcessMouseInputData(
                                                             (CMouseProcessor *)a1,
                                                             &v29,
                                                             (struct tagPOINT)&v30,
                                                             v12,
                                                             v14,
                                                             (struct tagUIPI_INFO_INT *)((a2 + 392) & -(__int64)(a5 != 0)));
            }
            v13 = (unsigned __int64)v24;
          }
          a3 = (struct _MOUSE_INPUT_DATA *)v14;
        }
        while ( v14 );
        return v23;
      }
    }
    else
    {
      WPP_RECORDER_SF_(a1[1], 3u, 0xAu, 0xCu, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
      if ( !(unsigned int)IsRemoteConnection() && *(_DWORD *)(a2 + 256) != -1073741738 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
    }
  }
  return v5;
}
