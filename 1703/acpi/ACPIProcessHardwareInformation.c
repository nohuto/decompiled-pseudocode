/*
 * XREFs of ACPIProcessHardwareInformation @ 0x1C0090784
 * Callers:
 *     ACPILoadProcessFADT @ 0x1C00ADCC8 (ACPILoadProcessFADT.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     ACPIAssert @ 0x1C001E788 (ACPIAssert.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 ACPIProcessHardwareInformation()
{
  __int64 v0; // rdi
  int v1; // r8d
  int v2; // r9d
  unsigned int v3; // ebx
  int v4; // r8d
  int v5; // r9d
  bool v6; // zf
  __int64 v7; // rdx
  unsigned int v8; // ebp
  char *PoolWithTag; // rax
  int v10; // edx
  char *v11; // rsi
  _WORD *v12; // r8
  int v13; // r9d
  int v14; // edx
  int v15; // r9d

  v0 = *((_QWORD *)AcpiInformation + 1);
  *((_QWORD *)AcpiInformation + 13) = *(unsigned int *)(v0 + 48);
  *((_WORD *)AcpiInformation + 50) = -1;
  v3 = 0;
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(6LL) >= 0 )
  {
    *((_BYTE *)AcpiInformation + 85) = *(_BYTE *)(v0 + 92);
    ACPIAssert(*(_BYTE *)(v0 + 92) != 0, 4107, v1, v2);
  }
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(7LL) >= 0 )
  {
    *((_BYTE *)AcpiInformation + 96) = *(_BYTE *)(v0 + 93);
    *((_WORD *)AcpiInformation + 50) = *(unsigned __int8 *)(v0 + 94);
    ACPIAssert(*(_BYTE *)(v0 + 93) != 0, 4108, v4, v5);
  }
  *((_WORD *)AcpiInformation + 43) = *((_BYTE *)AcpiInformation + 85) >> 1;
  LODWORD(v7) = *((_BYTE *)AcpiInformation + 96) >> 1;
  *((_WORD *)AcpiInformation + 49) = v7;
  v6 = *((_WORD *)AcpiInformation + 43) + (_WORD)v7 == 0;
  LOWORD(v7) = *((_WORD *)AcpiInformation + 43) + v7;
  *((_WORD *)AcpiInformation + 51) = v7;
  if ( v6 )
  {
    v12 = AcpiInformation;
  }
  else
  {
    v8 = 21 * (unsigned __int16)v7;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x67706341u);
    GpeTable = PoolWithTag;
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        6,
        31,
        (__int64)&WPP_2260554ba3bf3834a501608aef56474b_Traceguids,
        v8);
      return (unsigned int)-1073741670;
    }
    LODWORD(GpeTableSize) = v8;
    memset(PoolWithTag, 0, v8);
    v12 = AcpiInformation;
    GpeHandlerRegistered = v11;
    GpeEnable = &v11[*((unsigned __int16 *)AcpiInformation + 51)];
    GpeCurEnable = (char *)GpeEnable + *((unsigned __int16 *)AcpiInformation + 51);
    GpeIsLevel = (char *)GpeCurEnable + *((unsigned __int16 *)AcpiInformation + 51);
    GpeHandlerType = (char *)GpeIsLevel + *((unsigned __int16 *)AcpiInformation + 51);
    GpeWakeEnable = (char *)GpeHandlerType + *((unsigned __int16 *)AcpiInformation + 51);
    GpeWakeHandler = (char *)GpeWakeEnable + *((unsigned __int16 *)AcpiInformation + 51);
    GpeSpecialHandler = (char *)GpeWakeHandler + *((unsigned __int16 *)AcpiInformation + 51);
    GpePending = (char *)GpeSpecialHandler + *((unsigned __int16 *)AcpiInformation + 51);
    GpeRunMethod = (char *)GpePending + *((unsigned __int16 *)AcpiInformation + 51);
    GpeComplete = (char *)GpeRunMethod + *((unsigned __int16 *)AcpiInformation + 51);
    v7 = *((unsigned __int16 *)AcpiInformation + 51);
    GpeSavedWakeMask = (char *)GpeComplete + v7;
    GpeSavedWakeStatus = (char *)GpeComplete + v7 + v7;
    GpeMap = (__int64)GpeComplete + v7 + v7 + v7;
  }
  v12[56] = 32;
  if ( (*(_BYTE *)(v0 + 112) & 0x10) != 0 )
  {
    v13 = 33;
  }
  else
  {
    *((_WORD *)AcpiInformation + 56) |= 0x100u;
    v13 = 32;
  }
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    6,
    v13,
    (__int64)&WPP_2260554ba3bf3834a501608aef56474b_Traceguids);
  if ( (*(_BYTE *)(v0 + 112) & 0x20) != 0 )
  {
    v15 = 35;
  }
  else
  {
    *((_WORD *)AcpiInformation + 56) |= 0x200u;
    v15 = 34;
  }
  LOBYTE(v14) = 4;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v14,
    6,
    v15,
    (__int64)&WPP_2260554ba3bf3834a501608aef56474b_Traceguids);
  if ( (*(_DWORD *)(v0 + 112) & 0x4000) != 0 )
    *((_WORD *)AcpiInformation + 56) |= 0x4000u;
  return v3;
}
