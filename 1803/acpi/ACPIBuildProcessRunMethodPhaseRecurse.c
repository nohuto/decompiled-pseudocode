/*
 * XREFs of ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C000FA10
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildRunMethodRequest @ 0x1C00111B8 (ACPIBuildRunMethodRequest.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIExtListEnumNext @ 0x1C0023590 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C002367C (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C00236D0 (ACPIExtListTestElement.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseRecurse(__int64 a1)
{
  int v1; // eax
  char v2; // bl
  _QWORD *v3; // rdi
  int v5; // ebp
  int i; // eax
  int v7; // r14d
  void *v8; // rax
  void *v9; // r8
  __int64 v10; // rcx
  _QWORD v12[6]; // [rsp+50h] [rbp-48h] BYREF
  int v13; // [rsp+80h] [rbp-18h]

  v1 = *(_DWORD *)(a1 + 84);
  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 0;
  v5 = 0;
  if ( (v1 & 4) != 0 )
  {
    v12[1] = 0LL;
    v12[0] = v3 + 94;
    v12[5] = 768LL;
    v12[2] = &AcpiDeviceTreeLock;
    v13 = 2;
    for ( i = ACPIExtListStartEnum(v12); ; i = ACPIExtListEnumNext(v12) )
    {
      v7 = i;
      if ( !(unsigned __int8)ACPIExtListTestElement(v12, v5 >= 0) )
        break;
      v5 = ACPIBuildRunMethodRequest(v7, 0, 0, *(_DWORD *)(a1 + 80), *(_DWORD *)(a1 + 84), 0);
    }
  }
  v8 = &unk_1C005B1F0;
  v9 = &unk_1C005B1F0;
  if ( v3 )
  {
    v10 = v3[1];
    v2 = (char)v3;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v8 = (void *)v3[70];
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = (void *)v3[71];
    }
  }
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    6,
    65,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v5,
    v2,
    (__int64)v8,
    (__int64)v9);
  ACPIBuildCompleteMustSucceed(0LL, v5, 0LL, a1);
  return (unsigned int)v5;
}
