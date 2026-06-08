/*
 * XREFs of ComputeProcessorEnergyMsr @ 0x1C00013B0
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x1C0006020 (ComputeProcessorEnergyMsrEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 */

char __fastcall ComputeProcessorEnergyMsr(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  int v9; // ecx
  int SystemArgument1_high; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+58h] [rbp-20h]

  SystemArgument1_high = HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1);
  v5 = __readmsr(HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1));
  v6 = v5 - LODWORD(WPP_MAIN_CB.DeviceQueue.Lock);
  v7 = (unsigned int)(v5 - LODWORD(WPP_MAIN_CB.DeviceQueue.Lock));
  v12 = v7;
  LOBYTE(v8) = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_PACKAGE_ENERGY_COUNTER_UPDATE);
  if ( (_BYTE)v8 )
  {
    UserData.Ptr = (unsigned __int64)&SystemArgument1_high;
    *(_QWORD *)&UserData.Size = 4LL;
    v14 = &v12;
    v15 = 8LL;
    LOBYTE(v8) = EtwWrite(
                   (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                   &PPM_ETW_PACKAGE_ENERGY_COUNTER_UPDATE,
                   0LL,
                   2u,
                   &UserData);
  }
  LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = v5;
  if ( v6 > 0x7FFFFFFF )
    goto LABEL_7;
  v9 = (*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type >> 1) & 0x1F;
  LODWORD(v8) = WPP_MAIN_CB.DeviceQueue.Type & 1;
  if ( (WPP_MAIN_CB.DeviceQueue.Type & 1) == 0 )
  {
    *a5 = v7 << v9;
    return v8;
  }
  if ( (_DWORD)v8 == 1 )
  {
    v8 = (unsigned __int64)(1000000 * v7) >> v9;
    *a5 = v8;
  }
  else
  {
LABEL_7:
    *a5 = 0LL;
  }
  return v8;
}
