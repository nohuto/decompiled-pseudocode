/*
 * XREFs of UsbhUninitialize @ 0x1C003CF00
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDisarmHubForWakeDetect @ 0x1C00056DC (UsbhDisarmHubForWakeDetect.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhReferenceListRemove @ 0x1C00262E4 (UsbhReferenceListRemove.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhUninitialize(__int64 a1)
{
  _DWORD *v2; // rdi
  PVOID *v3; // rax
  PVOID *v4; // rbx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rbx

  v2 = FdoExt(a1);
  Log(a1, 8, 1750421065, 0LL, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      43,
      (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids);
  UsbhDisarmHubForWakeDetect(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      22,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
  v3 = (PVOID *)FdoExt(a1);
  v4 = v3;
  if ( *((_DWORD *)v3 + 1310) && PoUnregisterPowerSettingCallback(v3[656]) >= 0 )
    *((_DWORD *)v4 + 1310) = 0;
  v5 = (void *)*((_QWORD *)v2 + 377);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *((_QWORD *)v2 + 377) = 0LL;
  }
  v6 = (void *)*((_QWORD *)v2 + 378);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *((_QWORD *)v2 + 378) = 0LL;
  }
  v7 = (void *)_InterlockedExchange64((volatile __int64 *)v2 + 152, 0LL);
  Log(a1, 8, 1752519238, 0LL, (__int64)v7);
  if ( v7 )
  {
    UsbhReferenceListRemove(a1, (__int64)v7);
    ObfDereferenceObject(v7);
  }
  Log(a1, 8, 1752525118, 0LL, 0LL);
}
