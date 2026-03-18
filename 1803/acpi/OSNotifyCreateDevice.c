/*
 * XREFs of OSNotifyCreateDevice @ 0x1C002E708
 * Callers:
 *     ACPIBuildMissingChildren @ 0x1C000B868 (ACPIBuildMissingChildren.c)
 *     OSNotifyCreate @ 0x1C002E5E0 (OSNotifyCreate.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     ACPIBuildDeviceExtension @ 0x1C000A374 (ACPIBuildDeviceExtension.c)
 *     ACPIBuildDeviceRequest @ 0x1C000AA00 (ACPIBuildDeviceRequest.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 *     AMLIGetParent @ 0x1C0043D24 (AMLIGetParent.c)
 */

__int64 __fastcall OSNotifyCreateDevice(volatile signed __int32 *BugCheckParameter3, unsigned __int64 a2)
{
  volatile signed __int32 *v3; // rdi
  ULONG_PTR v4; // rax
  volatile signed __int32 *v5; // rsi
  __int64 v6; // rdx
  int v7; // edx
  int v8; // ebx
  int v9; // r9d
  int v10; // eax
  char v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0LL;
  v3 = BugCheckParameter3;
  v4 = AMLIGetParent(BugCheckParameter3);
  v5 = (volatile signed __int32 *)v4;
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 104LL);
  if ( !v6 )
    v6 = RootDeviceExtension;
  if ( *(_DWORD *)(v6 + 16) != 1599293264 )
    KeBugCheckEx(0xA5u, 0x16uLL, v4, (ULONG_PTR)v3, 0LL);
  v8 = ACPIBuildDeviceExtension(v3, v6, &v13);
  if ( !v13 )
    v8 = -1073741823;
  if ( v8 < 0 )
  {
    v9 = 12;
    v12 = v8;
LABEL_11:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_qd(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      22,
      v9,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      (char)v3,
      v12);
    goto LABEL_12;
  }
  _InterlockedOr64((volatile signed __int64 *)(v13 + 8), a2);
  LOBYTE(v3) = v13;
  v10 = ACPIBuildDeviceRequest(v13);
  v8 = v10;
  if ( v10 < 0 )
  {
    v9 = 13;
    v12 = v10;
    goto LABEL_11;
  }
LABEL_12:
  AMLIDereferenceHandleEx(v5);
  return (unsigned int)v8;
}
