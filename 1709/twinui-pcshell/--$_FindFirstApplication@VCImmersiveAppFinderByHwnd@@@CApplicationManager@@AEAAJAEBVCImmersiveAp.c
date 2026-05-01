/*
 * XREFs of ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018F0C
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008450 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?QueryObjectForWindow@CApplicationManager@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x180009DB0 (-QueryObjectForWindow@CApplicationManager@@UEAAJIPEAPEAUIInspectable@@@Z.c)
 *     ?HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x18000CCD0 (-HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?GetApplicationByWindowInternal@CApplicationManager@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x18000D750 (-GetApplicationByWindowInternal@CApplicationManager@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetApplicationWindowSafe@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@@@Z @ 0x18000E900 (-SetApplicationWindowSafe@CApplicationManager@@UEAAJPEAUHWND__@@W4SET_APPLICATION_WINDOW_OPTION@.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800119C0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x180013CD8 (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180013F2C (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180013FE8 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180015214 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180015584 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x180015758 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180015A64 (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 *     ?_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z @ 0x1800163D0 (-_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z.c)
 *     ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180016E1C (-_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___::operator() @ 0x18001A750 (CDelayIAMOperations--CDelayedOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // r13d
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]
  __int64 v17; // [rsp+90h] [rbp+40h] BYREF
  __int64 *v18; // [rsp+98h] [rbp+48h]
  __int64 v19; // [rsp+A0h] [rbp+50h]

  v18 = a2;
  if ( a3 )
    *a3 = 0LL;
  v19 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( *(_QWORD *)(a1 + 648) )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 640) + 8 * v8);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v10 = -1;
      v17 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v9)(
             v9,
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v17) >= 0 )
      {
        v15 = *v18;
        v16 = 0LL;
        v10 = ((*(unsigned __int8 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v17 + 296LL))(
                 v17,
                 &v15,
                 *((unsigned int *)v18 + 2)) != 0)
            - 1;
        v11 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      v12 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      if ( !v10 )
        break;
      if ( (unsigned __int64)++v8 >= *(_QWORD *)(a1 + 648) )
        goto LABEL_15;
    }
    v7 = v8;
    result = 0LL;
  }
  else
  {
LABEL_15:
    result = 2147647531LL;
  }
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v14 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)(a1 + 640) + 8 * v7);
      result = (**v14)(v14, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a3);
    }
    if ( a4 )
      *a4 = v7;
  }
  return result;
}
