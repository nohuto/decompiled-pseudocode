/*
 * XREFs of OSNotifyCreateProcessor @ 0x1C002EA1C
 * Callers:
 *     ACPIBuildMissingChildren @ 0x1C000B868 (ACPIBuildMissingChildren.c)
 *     OSNotifyCreate @ 0x1C002E5E0 (OSNotifyCreate.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     ACPIBuildProcessorExtension @ 0x1C0010C6C (ACPIBuildProcessorExtension.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0028B50 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIGetParent @ 0x1C0043D24 (AMLIGetParent.c)
 */

__int64 __fastcall OSNotifyCreateProcessor(volatile signed __int32 *a1, unsigned __int64 a2)
{
  int v4; // edx
  volatile signed __int32 *v5; // rsi
  __int64 v6; // rbx
  int v7; // eax
  int v8; // edx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  v5 = (volatile signed __int32 *)AMLIGetParent(a1);
  v6 = *(_QWORD *)(*(_QWORD *)v5 + 104LL);
  if ( !v6 )
    v6 = RootDeviceExtension;
  LOBYTE(v4) = 4;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v4,
    6,
    17,
    (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
    (char)a1);
  v7 = ACPIBuildProcessorExtension(a1, v6, &v12);
  v9 = v7;
  if ( v7 < 0 )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_qd(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      22,
      18,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      (char)a1,
      v7);
  }
  else
  {
    ACPIInitReferenceDeviceExtension(v12);
    _InterlockedOr64((volatile signed __int64 *)(v10 + 8), a2);
    v9 = 259;
  }
  AMLIDereferenceHandleEx(v5);
  return v9;
}
