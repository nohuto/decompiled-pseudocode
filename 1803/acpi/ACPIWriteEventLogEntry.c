/*
 * XREFs of ACPIWriteEventLogEntry @ 0x1C0023138
 * Callers:
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000D820 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000DA30 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000DC90 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000E1F0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00121F0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIGpeInstallRemoveIndexErrorWorker @ 0x1C0027D30 (ACPIGpeInstallRemoveIndexErrorWorker.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00321A0 (PciConfigSpaceHandlerWorker.c)
 *     LogInErrorLog @ 0x1C004CDA4 (LogInErrorLog.c)
 *     LinkNodeCrackPrt @ 0x1C0056F60 (LinkNodeCrackPrt.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ACPIWriteEventLogEntry(int a1, __int16 **a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int16 **v5; // r14
  int v7; // ebp
  PCWSTR *v8; // rdi
  __int64 v9; // r15
  unsigned int v10; // ebp
  _WORD *ErrorLogEntry; // rax
  int v12; // edx
  _WORD *v13; // rdi
  unsigned __int16 v14; // ax
  _WORD *v15; // rcx
  __int64 v16; // r8
  __int16 *v17; // rdx
  __int16 v18; // ax
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
      (__int64)&WPP_1a8b24fe31bd334c7b268e6564f98bf2_Traceguids);
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
      {
        v14 = 48;
        v13[3] = 48;
      }
      else
      {
        v14 = v13[3];
      }
      v15 = (_WORD *)((char *)v13 + v14);
      if ( (_DWORD)v4 )
      {
        v16 = v4;
        do
        {
          v17 = *v5;
          do
          {
            v18 = *v17++;
            *v15++ = v18;
          }
          while ( v18 );
          ++v5;
          --v16;
        }
        while ( v16 );
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
        (__int64)&WPP_1a8b24fe31bd334c7b268e6564f98bf2_Traceguids);
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
