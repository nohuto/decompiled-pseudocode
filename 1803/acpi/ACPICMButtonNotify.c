/*
 * XREFs of ACPICMButtonNotify @ 0x1C0016464
 * Callers:
 *     ACPICMButtonNotifyByDeviceExtension @ 0x1C0016550 (ACPICMButtonNotifyByDeviceExtension.c)
 *     ACPICMButtonNotifyByDeviceObject @ 0x1C0016570 (ACPICMButtonNotifyByDeviceObject.c)
 * Callees:
 *     ACPIButtonEvent @ 0x1C0016394 (ACPIButtonEvent.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x1C0016F58 (ACPICMExperienceButtonHandleEvent.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPISetDeviceWorker @ 0x1C0042E9C (ACPISetDeviceWorker.c)
 */

_QWORD *__fastcall ACPICMButtonNotify(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  _QWORD *result; // rax
  char v4; // r10
  int v5; // edx
  __int64 v6; // r9
  unsigned int v7; // r8d
  int v8; // edx
  void *v9; // rcx
  void *v10; // r8
  unsigned int v11; // edx

  result = (_QWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 200);
  v6 = result[1];
  if ( (v6 & 0x2000) != 0 )
    return (_QWORD *)ACPICMExperienceButtonHandleEvent(result, a3);
  v7 = a3 - 2;
  if ( !v7 )
  {
    if ( !a1 )
      return result;
    v11 = 0x80000000;
    return (_QWORD *)ACPIButtonEvent(a1, v11);
  }
  if ( v7 != 126 )
  {
    v8 = 0;
    v9 = &unk_1C005B1F0;
    v10 = &unk_1C005B1F0;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v9 = (void *)result[70];
      if ( (v6 & 0x400000000000LL) != 0 )
        v10 = (void *)result[71];
    }
    LOBYTE(v8) = 2;
    return (_QWORD *)WPP_RECORDER_SF_Dqss(
                       WPP_GLOBAL_Control->DeviceExtension,
                       v8,
                       5,
                       10,
                       (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
                       v4,
                       (char)result,
                       (__int64)v9,
                       (__int64)v10);
  }
  if ( (v5 & 4) != 0 )
    return (_QWORD *)ACPISetDeviceWorker(result, 0LL);
  if ( a1 )
  {
    v11 = v5 & 0x7FFFFFFF;
    return (_QWORD *)ACPIButtonEvent(a1, v11);
  }
  return result;
}
