/*
 * XREFs of RIMProcessAnyPointerDeviceInput @ 0x1C010F8F4
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00A45FC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMAbConfigureDeviceArbitration @ 0x1C0104BC0 (RIMAbConfigureDeviceArbitration.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0110618 (rimDoProcessAnyPointerDeviceInput.c)
 *     ApiSetIsPTPInputEnabled @ 0x1C013C670 (ApiSetIsPTPInputEnabled.c)
 *     ApiSetProcessHidRawInput @ 0x1C013CA40 (ApiSetProcessHidRawInput.c)
 */

__int64 __fastcall RIMProcessAnyPointerDeviceInput(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  int HasMonitor; // eax
  unsigned __int16 v7; // r9

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
            if ( *(_DWORD *)(v5 + 156) )
            {
              if ( !*(_DWORD *)(a1 + 592) )
                RIMAbConfigureDeviceArbitration();
              rimDoProcessAnyPointerDeviceInput(a1, a2);
              return ApiSetProcessHidRawInput(a2);
            }
            v7 = 13;
          }
          else
          {
            v7 = 12;
          }
        }
        else
        {
          v7 = 11;
        }
      }
      else
      {
        v7 = 10;
      }
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        v7,
        (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
      return ApiSetProcessHidRawInput(a2);
    }
  }
  return result;
}
