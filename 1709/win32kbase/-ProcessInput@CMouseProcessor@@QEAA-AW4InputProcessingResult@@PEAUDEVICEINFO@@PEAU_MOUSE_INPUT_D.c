/*
 * XREFs of ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00A538C
 * Callers:
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C00A5180 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C001638C (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C001673C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     UpconvertTime @ 0x1C008FBA0 (UpconvertTime.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C0092420 (ResetAccessibilityCountersOnMouseInput.c)
 *     EtwTraceMouseInputApc @ 0x1C00A54B0 (EtwTraceMouseInputApc.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C0130F44 (-HandleMouseForLegacyTouchpad@CMouseProcessor@@AEAAXPEAU_MOUSE_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C0130FD0 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 */

__int64 __fastcall CMouseProcessor::ProcessInput(
        __int64 *a1,
        __int64 a2,
        struct _MOUSE_INPUT_DATA *a3,
        unsigned int a4,
        char a5)
{
  unsigned int v5; // r12d
  __int64 v6; // r15
  const struct _MOUSE_INPUT_DATA *v10; // rbx
  unsigned __int64 v11; // rcx
  const struct tagUIPI_INFO_INT *v12; // r15
  unsigned __int16 v14; // r9
  unsigned __int8 v15; // dl
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r12
  int v19; // ecx
  int v20; // ecx
  int v21; // r9d
  USHORT Flags; // ax
  int v23; // [rsp+30h] [rbp-B1h]
  char *v25; // [rsp+40h] [rbp-A1h]
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
    v14 = 11;
    v15 = 4;
LABEL_16:
    WPP_RECORDER_SF_(a1[1], v15, 0xAu, v14, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
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
    v14 = 12;
    v15 = 3;
    goto LABEL_16;
  }
  v10 = (const struct _MOUSE_INPUT_DATA *)gptCursorAsync;
  if ( a3 )
  {
    v11 = (unsigned __int64)a3 + v6;
    v25 = (char *)a3 + v6;
    do
    {
      v12 = (const struct tagUIPI_INFO_INT *)((unsigned __int64)&a3[1] & -(__int64)((unsigned __int64)&a3[1] < v11));
      if ( (a3->Flags & 4) != 0 )
      {
        v5 = 1;
        v23 = 1;
      }
      else
      {
        if ( a5 )
        {
          v16 = UpconvertTime(a3->ExtraInformation);
          a3->ExtraInformation = 0;
        }
        else
        {
          v17 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
          v16 = (v17 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
        }
        *(_QWORD *)&v26 = v16;
        v18 = v16 * gliQpcFreq.QuadPart / 0x3E8uLL;
        CMouseProcessor::HandleMouseForLegacyTouchpad((CMouseProcessor *)v17, a3, (struct DEVICEINFO *)a2);
        v19 = v12 == 0LL ? 0x100 : 0;
        if ( a5 )
        {
          v20 = v19 | 0x30;
          v21 = v20 | 0x40;
          if ( !*(_DWORD *)(((a2 + 384) & -(__int64)(a5 != 0)) + 8) )
            v21 = v20;
        }
        else
        {
          Flags = a3->Flags;
          v21 = v19 | 0x40;
          if ( (Flags & 1) != 0 )
            a3->Flags = Flags | 2;
        }
        *((_QWORD *)&v28 + 1) = v18;
        LODWORD(v27) = 2;
        *((_QWORD *)&v27 + 1) = *(_QWORD *)a2;
        *(_QWORD *)&v28 = v26;
        v30 = v28;
        v26 = v27;
        CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v31, (__int64)a3, &v30, v21, &v26, 0LL);
        if ( (v31.x & 0x10000) != 0 || (unsigned int)CMouseProcessor::HandleMouseInterceptWorker(a1, &v31) != 1 )
        {
          if ( (v32 & 0x800) == 0 && (v31.y & 0x2AA) != 0 )
            PoLatencySensitivityHint(0LL);
          v10 = **(const struct _MOUSE_INPUT_DATA ***)&CMouseProcessor::ProcessMouseInputData(
                                                         (CMouseProcessor *)a1,
                                                         &v29,
                                                         (struct tagPOINT)&v31,
                                                         v10,
                                                         v12,
                                                         (struct tagUIPI_INFO_INT *)((a2 + 384) & -(__int64)(a5 != 0)));
        }
        else
        {
          WPP_RECORDER_SF_(a1[1], 4u, 0xAu, 0xDu, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
        }
        v11 = (unsigned __int64)v25;
        v5 = v23;
      }
      a3 = (struct _MOUSE_INPUT_DATA *)v12;
    }
    while ( v12 );
  }
  return v5;
}
