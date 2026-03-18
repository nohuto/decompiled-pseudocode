/*
 * XREFs of OSNotifyCreateProcessor @ 0x1C0029320
 * Callers:
 *     OSNotifyCreate @ 0x1C001C840 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x1C00432D8 (ACPIBuildMissingChildren.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0011260 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0014E98 (WPP_RECORDER_SF_qD.c)
 *     AMLIGetParent @ 0x1C001BBA0 (AMLIGetParent.c)
 *     ACPIBuildProcessorExtension @ 0x1C00293D8 (ACPIBuildProcessorExtension.c)
 */

__int64 __fastcall OSNotifyCreateProcessor(__int64 a1, unsigned __int64 a2)
{
  int v4; // edx
  __int64 v5; // rsi
  ULONG_PTR v6; // rbx
  int v7; // eax
  int v8; // edx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  v5 = AMLIGetParent(a1);
  v6 = *(_QWORD *)(*(_QWORD *)v5 + 104LL);
  if ( !v6 )
    v6 = RootDeviceExtension;
  LOBYTE(v4) = 4;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v4,
    6,
    17,
    (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
    a1);
  v7 = ACPIBuildProcessorExtension(a1, v6, &v12);
  v9 = v7;
  if ( v7 < 0 )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      22,
      18,
      (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
      a1,
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
