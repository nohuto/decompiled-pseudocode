/*
 * XREFs of ACPIWriteEventLogEntry @ 0x1C004CE6C
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C000D438 (LinkNodeCrackPrt.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C0014680 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0014840 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0014940 (ACPIBuildProcessDevicePhasePrw.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00178B0 (PciConfigSpaceHandlerWorker.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C001CDC0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C0029B2C (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIGpeInstallRemoveIndexErrorWorker @ 0x1C004EC50 (ACPIGpeInstallRemoveIndexErrorWorker.c)
 *     LogInErrorLog @ 0x1C005FAE4 (LogInErrorLog.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIWriteEventLogEntry(int a1, __int16 **a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  __int16 **v5; // r14
  int v7; // ebp
  PCWSTR *v8; // rbx
  __int64 v9; // r15
  unsigned int v10; // ebp
  _WORD *ErrorLogEntry; // rax
  int v12; // edx
  _WORD *v13; // rbx
  _WORD *v14; // rcx
  __int64 v15; // r8
  __int16 *v16; // rdx
  __int16 v17; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  v4 = a3;
  v5 = a2;
  v7 = 0;
  if ( a3 )
  {
    v8 = (PCWSTR *)a2;
    v9 = a3;
    do
    {
      RtlInitUnicodeString(&DestinationString, *v8++);
      v7 += DestinationString.Length + 2;
      --v9;
    }
    while ( v9 );
  }
  v10 = v7 + 48;
  if ( v10 > 0xF0 )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      22,
      11,
      (__int64)&WPP_76773df4a24a3f350f1e62b2529630ec_Traceguids);
    return (unsigned int)-1073741823;
  }
  else
  {
    ErrorLogEntry = IoAllocateErrorLogEntry(AcpiDriverObject, v10);
    v13 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      memset(ErrorLogEntry, 0, v10);
      v13[1] = 0;
      v13[2] = v4;
      *((_DWORD *)v13 + 3) = a1;
      if ( (_DWORD)v4 )
        v13[3] = 48;
      v14 = (_WORD *)((char *)v13 + (unsigned __int16)v13[3]);
      if ( (_DWORD)v4 )
      {
        v15 = v4;
        do
        {
          v16 = *v5;
          do
          {
            v17 = *v16++;
            *v14++ = v17;
          }
          while ( v17 );
          ++v5;
          --v15;
        }
        while ( v15 );
      }
      IoWriteErrorLogEntry(v13);
    }
    else
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        22,
        10,
        (__int64)&WPP_76773df4a24a3f350f1e62b2529630ec_Traceguids);
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
