/*
 * XREFs of RIMProcessAnyPointerDeviceInput @ 0x1C0110E4C
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C009990C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMAbConfigureDeviceArbitration @ 0x1C0104D88 (RIMAbConfigureDeviceArbitration.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0111B38 (rimDoProcessAnyPointerDeviceInput.c)
 *     ApiSetIsPTPInputEnabled @ 0x1C013D19C (ApiSetIsPTPInputEnabled.c)
 *     ApiSetProcessHidRawInput @ 0x1C013D570 (ApiSetProcessHidRawInput.c)
 */

__int64 __fastcall RIMProcessAnyPointerDeviceInput(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  int v6; // edx
  int HasMonitor; // eax
  int v8; // r9d

  result = (__int64)gpsi;
  if ( (*(_DWORD *)gpsi & 0x2000) == 0 )
  {
    if ( (*(_DWORD *)gpsi & 0x4000) == 0
      || (result = *(unsigned int *)(a2 + 200), (result & 0x80u) != 0LL)
      && (result = *(_QWORD *)(a2 + 456), *(_WORD *)(result + 42) == 13)
      && *(_WORD *)(result + 40) == 5 )
    {
      v5 = *(_QWORD *)(a2 + 472);
      if ( (int)IsEnsurePointerDeviceHasMonitorSupported() < 0 )
        HasMonitor = 0;
      else
        HasMonitor = EnsurePointerDeviceHasMonitor(v5);
      if ( HasMonitor )
      {
        if ( *(_DWORD *)(v5 + 24) != 7 || (unsigned int)ApiSetIsPTPInputEnabled() )
        {
          if ( (unsigned int)(*(_DWORD *)(v5 + 24) - 1) > 3 || RawInputManagerObject::bTouchInputAllowed )
          {
            if ( !*(_DWORD *)(a1 + 592) )
              RIMAbConfigureDeviceArbitration();
            rimDoProcessAnyPointerDeviceInput(a1, a2);
            return ApiSetProcessHidRawInput(a2);
          }
          v8 = 12;
        }
        else
        {
          v8 = 11;
        }
      }
      else
      {
        v8 = 10;
      }
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        20,
        v8,
        (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids);
      return ApiSetProcessHidRawInput(a2);
    }
  }
  return result;
}
