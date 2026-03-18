/*
 * XREFs of ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C009A08C
 * Callers:
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C0099E80 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0047480 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@K@Z @ 0x1C0080CE4 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     UpconvertTime @ 0x1C0088980 (UpconvertTime.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C008BA50 (ResetAccessibilityCountersOnMouseInput.c)
 *     EtwTraceMouseInputApc @ 0x1C009A1B0 (EtwTraceMouseInputApc.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C01318C0 (-HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C013194C (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 */

__int64 __fastcall CMouseProcessor::ProcessInput(CMouseProcessor *a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  unsigned int v5; // r12d
  __int64 v6; // r14
  int v10; // edx
  const struct _MOUSE_INPUT_DATA *v11; // rbx
  unsigned __int64 v12; // rcx
  const struct tagUIPI_INFO_INT *v13; // r14
  int v15; // r9d
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r12
  int v19; // ecx
  int v20; // ecx
  int v21; // r9d
  int v22; // edx
  int v23; // [rsp+30h] [rbp-B1h]
  unsigned __int64 v25; // [rsp+40h] [rbp-A1h]
  __int128 v26; // [rsp+50h] [rbp-91h] BYREF
  __int128 v27; // [rsp+60h] [rbp-81h]
  __int128 v28; // [rsp+70h] [rbp-71h]
  struct tagPOINT v29; // [rsp+80h] [rbp-61h] BYREF
  __int128 v30; // [rsp+90h] [rbp-51h] BYREF
  struct tagPOINT v31; // [rsp+A0h] [rbp-41h] BYREF
  int v32; // [rsp+D8h] [rbp-9h]

  v5 = 0;
  v6 = a4;
  v23 = 0;
  EtwTraceMouseInputApc();
  if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
  {
    v15 = 11;
    LOBYTE(v10) = 4;
LABEL_16:
    WPP_RECORDER_SF_(*((_QWORD *)a1 + 1), v10, 10, v15, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
    return v5;
  }
  if ( gptiBlockInput )
    return v5;
  if ( (gdwPUDFlags & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput();
  if ( (int)IsEditionStopSonarSupported() >= 0 )
    EditionStopSonar();
  if ( *(int *)(a2 + 256) < 0 )
  {
    v15 = 12;
    LOBYTE(v10) = 3;
    goto LABEL_16;
  }
  v11 = (const struct _MOUSE_INPUT_DATA *)gptCursorAsync;
  if ( a3 )
  {
    v12 = a3 + v6;
    v25 = a3 + v6;
    do
    {
      v13 = (const struct tagUIPI_INFO_INT *)((a3 + 24) & -(__int64)(a3 + 24 < v12));
      if ( (*(_BYTE *)(a3 + 2) & 4) != 0 )
      {
        v5 = 1;
        v23 = 1;
      }
      else
      {
        if ( a5 )
        {
          v16 = UpconvertTime(*(_DWORD *)(a3 + 20));
          *(_DWORD *)(a3 + 20) = 0;
        }
        else
        {
          v17 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
          v16 = (v17 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
        }
        *(_QWORD *)&v26 = v16;
        v18 = v16 * gliQpcFreq.QuadPart / 0x3E8uLL;
        CMouseProcessor::HandleMouseForLegacyTouchpad(
          (CMouseProcessor *)v17,
          (struct _MOUSE_INPUT_DATA *)a3,
          (struct DEVICEINFO *)a2);
        v19 = v13 == 0LL ? 0x100 : 0;
        if ( a5 )
        {
          v20 = v19 | 0x30;
          v21 = v20 | 0x40;
          if ( !*(_DWORD *)(((a2 + 384) & -(__int64)(a5 != 0)) + 8) )
            v21 = v20;
        }
        else
        {
          v21 = v19 | 0x40;
        }
        LODWORD(v27) = 2;
        *((_QWORD *)&v28 + 1) = v18;
        *((_QWORD *)&v27 + 1) = *(_QWORD *)a2;
        *(_QWORD *)&v28 = v26;
        v30 = v28;
        v26 = v27;
        CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v31, a3, &v30, v21, &v26, 0);
        if ( (v31.x & 0x10000) != 0 || (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(a1, &v31) != 1 )
        {
          if ( (v32 & 0x800) == 0 && (v31.y & 0x2AA) != 0 )
            PoLatencySensitivityHint(0LL);
          v11 = **(const struct _MOUSE_INPUT_DATA ***)&CMouseProcessor::ProcessMouseInputData(
                                                         a1,
                                                         &v29,
                                                         (struct tagPOINT)&v31,
                                                         v11,
                                                         v13,
                                                         (struct tagUIPI_INFO_INT *)((a2 + 384) & -(__int64)(a5 != 0)));
        }
        else
        {
          LOBYTE(v22) = 4;
          WPP_RECORDER_SF_(*((_QWORD *)a1 + 1), v22, 10, 13, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
        }
        v12 = v25;
        v5 = v23;
      }
      a3 = (__int64)v13;
    }
    while ( v13 );
  }
  return v5;
}
