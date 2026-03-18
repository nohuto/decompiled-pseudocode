/*
 * XREFs of OSNotifyCreateDevice @ 0x1C001A86C
 * Callers:
 *     OSNotifyCreate @ 0x1C001C840 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x1C00432D8 (ACPIBuildMissingChildren.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0014E98 (WPP_RECORDER_SF_qD.c)
 *     ACPIBuildDeviceRequest @ 0x1C001A91C (ACPIBuildDeviceRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C001AB98 (ACPIBuildDeviceExtension.c)
 *     AMLIGetParent @ 0x1C001BBA0 (AMLIGetParent.c)
 */

__int64 __fastcall OSNotifyCreateDevice(ULONG_PTR BugCheckParameter3, unsigned __int64 a2)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v4; // rax
  __int64 v5; // rsi
  ULONG_PTR v6; // rdx
  int v7; // edx
  int v8; // ebx
  int v9; // eax
  int v11; // r9d
  char v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0LL;
  v3 = BugCheckParameter3;
  v4 = AMLIGetParent(BugCheckParameter3);
  v5 = v4;
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 104LL);
  if ( !v6 )
    v6 = RootDeviceExtension;
  if ( *(_DWORD *)(v6 + 16) != 1599293264 )
    KeBugCheckEx(0xA5u, 0x16uLL, v4, v3, 0LL);
  v8 = ACPIBuildDeviceExtension(v3, v6, &v13);
  if ( !v13 )
    v8 = -1073741823;
  if ( v8 < 0 )
  {
    v11 = 12;
    v12 = v8;
LABEL_12:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      22,
      v11,
      (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
      v3,
      v12);
    goto LABEL_8;
  }
  _InterlockedOr64((volatile signed __int64 *)(v13 + 8), a2);
  LOBYTE(v3) = v13;
  v9 = ACPIBuildDeviceRequest(v13);
  v8 = v9;
  if ( v9 < 0 )
  {
    v11 = 13;
    v12 = v9;
    goto LABEL_12;
  }
LABEL_8:
  AMLIDereferenceHandleEx(v5);
  return (unsigned int)v8;
}
