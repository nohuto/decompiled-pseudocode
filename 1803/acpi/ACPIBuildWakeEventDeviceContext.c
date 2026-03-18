/*
 * XREFs of ACPIBuildWakeEventDeviceContext @ 0x1C0011C80
 * Callers:
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000DC90 (ACPIBuildProcessDevicePhasePrw.c)
 * Callees:
 *     WPP_RECORDER_SF_sLqss @ 0x1C0013150 (WPP_RECORDER_SF_sLqss.c)
 *     WPP_RECORDER_SF_sqss @ 0x1C0013850 (WPP_RECORDER_SF_sqss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 */

__int64 __fastcall ACPIBuildWakeEventDeviceContext(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rsi
  int v4; // edx
  void *v6; // rax
  void *v7; // r8
  __int64 v8; // r9
  ULONG_PTR v10; // r14
  int v11; // eax
  __int64 v12; // r8
  int v13; // edx
  unsigned int v14; // r10d
  __int64 v15; // rax
  unsigned __int16 v16; // cx
  char v17; // [rsp+30h] [rbp-28h]

  v2 = *(_QWORD *)(BugCheckParameter3 + 32);
  v4 = 0;
  if ( *(_DWORD *)v2 >= 2u )
  {
    v10 = BugCheckParameter2 + 920;
    v11 = AMLIGetNameSpaceObject(*(void **)(v2 + 40));
    v13 = 0;
    v14 = v11;
    if ( v11 < 0 )
    {
      if ( BugCheckParameter2 )
      {
        v12 = *(_QWORD *)(BugCheckParameter2 + 8);
        v13 = BugCheckParameter2;
      }
      WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, v13, v12, 18);
      KeBugCheckEx(0xA5u, 6uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v2 + 40));
    }
    if ( *(_WORD *)(**(_QWORD **)v10 + 66LL) != 6 )
    {
      if ( BugCheckParameter2 )
        v13 = BugCheckParameter2;
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_sqss(WPP_GLOBAL_Control->DeviceExtension, v13, 10, 19);
      KeBugCheckEx(0xA5u, 0x19uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v2 + 40));
    }
    v15 = *(_QWORD *)(BugCheckParameter3 + 32);
    v16 = *(_WORD *)(v15 + 50);
    if ( v16 != 1 )
      KeBugCheckEx(0xA5u, 4uLL, BugCheckParameter2, BugCheckParameter3, v16);
    *(_DWORD *)(BugCheckParameter2 + 928) = *(_DWORD *)(v15 + 64);
    _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 952), 0x4000000000uLL);
    return v14;
  }
  else
  {
    v6 = &unk_1C005B1F0;
    v7 = &unk_1C005B1F0;
    if ( BugCheckParameter2 )
    {
      v8 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v6 = *(void **)(BugCheckParameter2 + 560);
        if ( (v8 & 0x400000000000LL) != 0 )
          v7 = *(void **)(BugCheckParameter2 + 568);
      }
    }
    v17 = v4;
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_Dqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      10,
      17,
      (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
      13,
      v17,
      (__int64)v6,
      (__int64)v7);
    return 3221225485LL;
  }
}
