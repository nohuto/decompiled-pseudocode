/*
 * XREFs of UsbhHandleOvercurrent @ 0x1C0050820
 * Callers:
 *     UsbhHandleSuspend @ 0x1C000880C (UsbhHandleSuspend.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0010E20 (UsbhHubDispatchPortEvent.c)
 *     UsbhWaitConnect @ 0x1C0014410 (UsbhWaitConnect.c)
 *     UsbhEnumerate1 @ 0x1C0021090 (UsbhEnumerate1.c)
 *     UsbhEnumerate2 @ 0x1C005031C (UsbhEnumerate2.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhCancelEnumeration @ 0x1C0027A44 (UsbhCancelEnumeration.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 *     Usbh_OvercurrentRefHubBusy @ 0x1C00521E8 (Usbh_OvercurrentRefHubBusy.c)
 */

__int64 __fastcall UsbhHandleOvercurrent(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v8; // rax
  __int16 v9; // dx
  bool v10; // zf
  unsigned __int16 v11; // dx
  __int64 v12; // r8
  const void *v13; // r9

  v8 = FdoExt(a1);
  v9 = *(_WORD *)(a4 + 420);
  if ( (v9 & 0x100) == 0 || (v8[640] & 0x10000000) != 0 )
  {
    ++*(_DWORD *)(a4 + 2404);
    if ( a5 && PdoExt(a5)[280] == 101 )
    {
      Usbh_OvercurrentRefHubBusy(a1, a4, 0LL);
      UsbhException(a1, *(_WORD *)(a4 + 4), 0x73u, (const void *)a4, 0xB70u, 0, 0, usbfile_busfunc_c, 2868, 0);
      a2 = 4;
      _InterlockedExchange((volatile __int32 *)(a4 + 428), 4);
    }
    else
    {
      UsbhCancelEnumeration(a1, a2, a4, a5);
      if ( *(_DWORD *)(a4 + 2404) >= 3u )
      {
        Log(a1, 1024, 1884247634, a4, 0LL);
        UsbhException(a1, *(_WORD *)(a4 + 4), 0x6Bu, v13, 0xB70u, 0, 0, usbfile_busfunc_c, 2907, 0);
        a2 = 4;
        _InterlockedExchange((volatile __int32 *)(a4 + 428), 4);
        Usbh_OvercurrentRefHubBusy(a1, a4, 0LL);
        UsbhException(a1, *(_WORD *)(a4 + 4), 6u, (const void *)a4, 0xB70u, 0, 0, usbfile_busfunc_c, 2918, 0);
      }
      else
      {
        LOBYTE(v12) = 1;
        Usbh_OvercurrentRefHubBusy(a1, a4, v12);
        UsbhException(a1, *(_WORD *)(a4 + 4), 0x6Cu, (const void *)a4, 0xB70u, 0, 0, usbfile_busfunc_c, 2893, 0);
        return 4;
      }
    }
  }
  else
  {
    v10 = (v9 & 8) == 0;
    v11 = *(_WORD *)(a4 + 4);
    if ( v10 )
      UsbhException(a1, v11, 0x69u, (const void *)a4, 0xB70u, 0, 0, usbfile_busfunc_c, 2831, 0);
    else
      UsbhException(a1, v11, 0x6Au, (const void *)a4, 0xB70u, 0, 0, usbfile_busfunc_c, 2843, 0);
  }
  return a2;
}
