/*
 * XREFs of Usbh_HRS_Disabled @ 0x1C0026D88
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C00141E0 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     UsbhReleaseResetLock @ 0x1C0007724 (UsbhReleaseResetLock.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_HRS_Disabled(__int64 a1, int a2)
{
  __int64 v3; // rsi
  _DWORD *v4; // rbp
  unsigned int v5; // r14d
  struct _KSEMAPHORE *v6; // rax
  unsigned int v7; // ebx
  __int64 Limit; // rcx
  unsigned int v10; // r8d

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920156755, a1, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_358ef723348832925fa562e6167d1570_Traceguids,
      v3);
  if ( (_DWORD)v3 != 1 )
  {
    if ( (_DWORD)v3 != 2 )
    {
      if ( (_DWORD)v3 == 3 || (_DWORD)v3 == 9 )
      {
        v4[640] |= 0x10u;
      }
      else if ( (int)v3 <= 9 || (int)v3 > 11 )
      {
        v10 = v5;
        return (unsigned int)UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v10);
      }
    }
    v10 = 1;
    return (unsigned int)UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v10);
  }
  v6 = (struct _KSEMAPHORE *)FdoExt(*(_QWORD *)(a1 + 8));
  v7 = 2;
  v6[87].Limit = 2;
  *(_DWORD *)(a1 + 68) = 2;
  *(_DWORD *)(a1 + 64) = 1734964085;
  Limit = (unsigned int)v6[28].Limit;
  v6[41].Header.WaitListHead.Flink = 0LL;
  v6[Limit + 29].Header.SignalState = 2;
  KeReleaseSemaphore(v6 + 88, 16, 1, 0);
  return v7;
}
